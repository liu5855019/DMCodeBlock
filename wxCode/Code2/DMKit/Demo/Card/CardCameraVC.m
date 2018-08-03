//
//  CardCameraVC.m
//  DMKit
//
//  Created by 西安旺豆电子信息有限公司 on 2018/8/3.
//  Copyright © 2018年 呆木出品. All rights reserved.
//

#import "CardCameraVC.h"
#import <AVFoundation/AVFoundation.h>
#import <CoreImage/CoreImage.h>
#import "RectView.h"


@interface CardCameraVC ()
<
AVCaptureVideoDataOutputSampleBufferDelegate //视频产物delegate
>

@property (nonatomic , strong) AVCaptureSession *session;

//CIDetector这个类用于识别、检测静止图片或者视频中的显著特征（面部，矩形和条形码），识别的具体特征由CIFeature类去处理。
@property (nonatomic , strong) CIDetector *detector;

@property (nonatomic , strong) RectView *rectView; ///<画矩形的view
@property (nonatomic) CGRect rect;  ///< 屏幕rect

@property (nonatomic , strong) CIImage *currentImg;                     ///< 当前获取到的图片
@property (nonatomic , strong) CIRectangleFeature *currentRectFeature;  ///< 当前获取到的矩形


@end

@implementation CardCameraVC

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self setupCaputureVideo];
    
    [self.view addSubview:self.rectView];
    
    _rect = self.view.frame;
}

- (CIDetector *)detector
{
    if (_detector) {
        return _detector;
    }
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _detector = [CIDetector detectorOfType:CIDetectorTypeRectangle context:nil options:@{CIDetectorAccuracy : CIDetectorAccuracyHigh}];
    });
    return _detector;
}


- (UIView *)rectView
{
    if (_rectView == nil) {
        _rectView = [[RectView alloc] initWithFrame:self.view.bounds];
     
    }
    return _rectView;
}

- (void)setupCaputureVideo
{
    //1.创建 session
    _session = [[AVCaptureSession alloc] init];
    
    //2. 创建 input
    AVCaptureDevice *videoDevice = [self getVideoDeviceWithPosition:AVCaptureDevicePositionBack];
    AVCaptureDeviceInput *videoInput = [AVCaptureDeviceInput deviceInputWithDevice:videoDevice error:nil];
    
    //3. 创建output
    AVCaptureVideoDataOutput *videoOutput = [[AVCaptureVideoDataOutput alloc] init];
    dispatch_queue_t videoQueue = dispatch_queue_create("video capture queue", DISPATCH_QUEUE_SERIAL);
    [videoOutput setSampleBufferDelegate:self queue:videoQueue];

    //4. 添加input/output
    if ([_session canAddInput:videoInput]) {
        [_session addInput:videoInput];
    }
    if ([_session canAddOutput:videoOutput]) {
        [_session addOutput:videoOutput];
    }

    //5. 显示
    AVCaptureVideoPreviewLayer *layer = [AVCaptureVideoPreviewLayer layerWithSession:_session];
    layer.frame = self.view.bounds;
    [self.view.layer addSublayer:layer];
    
    [_session startRunning];
}

/** 获取指定方向的摄像头 */
- (AVCaptureDevice *)getVideoDeviceWithPosition:(AVCaptureDevicePosition)position
{
    NSArray *devices = [AVCaptureDevice devicesWithMediaType:AVMediaTypeVideo];
    for (AVCaptureDevice *device in devices) {
        if (device.position == position) {
            return device;
        }
    }
    return nil;
}


#pragma mark - delegate

- (void)captureOutput:(AVCaptureOutput *)output didOutputSampleBuffer:(CMSampleBufferRef)sampleBuffer fromConnection:(AVCaptureConnection *)connection
{
    static long count = 0;
    count ++;
    if (count % 10 != 0 ) {
        return;
    }
    
    //1. 生成CIImage
    CVImageBufferRef imageBuffer = CMSampleBufferGetImageBuffer(sampleBuffer);
    CIImage *ciimg = [CIImage imageWithCVImageBuffer:imageBuffer];
    
    //2. 图像旋转 实际图像是旋转90°的
    CIFilter *transform = [CIFilter filterWithName:@"CIAffineTransform"];
    [transform setValue:ciimg forKey:kCIInputImageKey];
    NSValue *rotation = [NSValue valueWithCGAffineTransform:CGAffineTransformMakeRotation(-90 * (M_PI/180))];
    [transform setValue:rotation forKey:@"inputTransform"];
    ciimg = [transform outputImage];
    
    //3. 生成矩形特征数组
    NSArray *rectFeatures = [self.detector featuresInImage:ciimg];
    
    //4. 找出最大矩形
    CIRectangleFeature *rectFeature = [self biggestRectInRects:rectFeatures];
    
    NSLog(@"%@",NSStringFromCGRect(rectFeature.bounds));
    
    _currentImg = ciimg;
    _currentRectFeature = rectFeature;
    
    //5. 显示在屏幕上
    [self showRectWithImg:ciimg feature:rectFeature];
}

/** 根据特征,屏幕上画出矩形 */
- (void)showRectWithImg:(CIImage *)img feature:(CIRectangleFeature *)rectFeature
{
    //当连续2次没有检测到矩形的时候 清楚屏幕上的矩形
    static int rectIsNullCount = 0;
    if (rectFeature == nil) {
        rectIsNullCount++;
        if (rectIsNullCount >= 2) {
            rectIsNullCount = 0;
            [self.rectView drawWithPointsfirst:CGPointZero
                                        second:CGPointZero
                                         thrid:CGPointZero
                                         forth:CGPointZero];
            dispatch_async(dispatch_get_main_queue(), ^{
                [self.rectView setNeedsDisplay];
            });
            return;
        }
        return;
    }
    rectIsNullCount = 0;   //检测到矩形,计数清零
    
    CGRect previewRect = self.rect;
    CGRect imageRect = img.extent;
    
    CGFloat scaleW = CGRectGetWidth(previewRect) / CGRectGetWidth(imageRect);
    CGFloat scaleH = CGRectGetHeight(previewRect) / CGRectGetHeight(imageRect);
   
    
    //将坐标沿着y轴对称过去
    CGAffineTransform transform = CGAffineTransformMakeTranslation(0.f, CGRectGetHeight(previewRect));
    transform = CGAffineTransformScale(transform, 1, -1);
    
    //按照view的scale调整
    transform = CGAffineTransformScale(transform, scaleW, scaleH);

    [self.rectView
        drawWithPointsfirst:CGPointApplyAffineTransform(rectFeature.topLeft, transform)
        second:CGPointApplyAffineTransform(rectFeature.topRight, transform)
        thrid:CGPointApplyAffineTransform(rectFeature.bottomRight, transform)
        forth:CGPointApplyAffineTransform(rectFeature.bottomLeft, transform)];
    
    dispatch_async(dispatch_get_main_queue(), ^{
        [self.rectView setNeedsDisplay];
    });
}

/** 从矩形数组中获取最大矩形 */
- (CIRectangleFeature *)biggestRectInRects:(NSArray *)rects
{
    if (rects.count == 0) {
        return nil;
    }
    if (rects.count == 1) {
        return rects.firstObject;
    }
    
    float halfPerimiterValue = 0;
    CIRectangleFeature *biggestRect = [rects firstObject];
    for (CIRectangleFeature *rect in rects)
    {
        CGPoint p1 = rect.topLeft;
        CGPoint p2 = rect.topRight;
        CGFloat width = hypotf(p1.x - p2.x, p1.y - p2.y);
        
        CGPoint p3 = rect.topLeft;
        CGPoint p4 = rect.bottomLeft;
        CGFloat height = hypotf(p3.x - p4.x, p3.y - p4.y);
        
        CGFloat currentHalfPerimiterValue = height + width;
        
        if (halfPerimiterValue < currentHalfPerimiterValue)
        {
            halfPerimiterValue = currentHalfPerimiterValue;
            biggestRect = rect;
        }
    }
    
    return biggestRect;
}







#pragma mark - other

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    self.navigationController.navigationBarHidden = YES;
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
    
    self.navigationController.navigationBarHidden = NO;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



@end
