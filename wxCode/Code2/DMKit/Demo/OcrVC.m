//
//  OcrVC.m
//  DMKit
//
//  Created by 西安旺豆电子信息有限公司 on 2018/7/24.
//  Copyright © 2018年 呆木出品. All rights reserved.
//

#import "OcrVC.h"
#import "TesseractOCR.h"

@interface OcrVC () 

@property (nonatomic , strong) UIImageView *imgV;
@property (nonatomic , strong) UIButton *btn;
@property (nonatomic , strong) UILabel *lab;
@property (nonatomic , strong) ImagePickerTool *tool;

@end

@implementation OcrVC

- (void)viewDidLoad {
    [super viewDidLoad];
   
    self.view.backgroundColor = [UIColor lightGrayColor];
    
    self.mainTitleLabel.text = @"Test for ocr";
    
    [self setupViews];
    [self setupLayouts];
    
    NSLog(@"%@",[G8Tesseract version]);
    
}

#pragma mark - ocr

- (void)tesseractRecognizeImage:(UIImage *)image compleate:(void (^)(NSString *text))compleate {

    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_BACKGROUND, 0), ^{
        G8Tesseract *tesseract = [[G8Tesseract alloc] initWithLanguage:@"chi_sim"];
        tesseract.engineMode = G8OCREngineModeTesseractOnly;
        //tesseract.image = [image g8_blackAndWhite];
        tesseract.image = image;
        // Start the recognition
        [tesseract recognize];
        //执行回调
        compleate(tesseract.recognizedText);
    });
}

//- (void)tesseractRecognizeImage:(UIImage *)image compleate:(void (^)(NSString *text))compleate {
//
//    G8RecognitionOperation *operation = [[G8RecognitionOperation alloc] initWithLanguage:@"chi_sim"];
//    operation.tesseract.engineMode = G8OCREngineModeTesseractOnly;
//    operation.tesseract.pageSegmentationMode = G8PageSegmentationModeAutoOnly;
//    operation.tesseract.image = image;
//    //operation.delegate = self;
//    operation.recognitionCompleteBlock = ^(G8Tesseract *tesseract) {
//        NSString *recognizedText = tesseract.recognizedText;
//        compleate(recognizedText);
//    };
//    operation.progressCallbackBlock = ^(G8Tesseract *tesseract) {
//        NSLog(@"progress: %lu", (unsigned long)tesseract.progress);
//    };
//    [operation.tesseract recognize];
//}

- (void)progressImageRecognitionForTesseract:(G8Tesseract *)tesseract
{
   // NSLog(@"progress: %lu", (unsigned long)tesseract.progress);
}



#pragma mark - setter/getter

- (ImagePickerTool *)tool
{
    if (_tool == nil) {
        _tool = [[ImagePickerTool alloc] initWithViewController:self isCamera:NO];
        WeakObj(self);
        _tool.didGetImage = ^(UIImage *image) {
            selfWeak.imgV.image = image;
            
            [selfWeak tesseractRecognizeImage:image compleate:^(NSString *text) {
                MAIN(^{
                    selfWeak.lab.text = text;
                    NSLog(@"%@",text);
                });
            }];
        };
    }
    return _tool;
}


- (void)setupViews
{
    _imgV = [[UIImageView alloc] init];
    _btn = [[UIButton alloc] init];
    _lab = [[UILabel alloc] init];
    
    [self.view addSubview:_imgV];
    [self.view addSubview:_btn];
    [self.view addSubview:_lab];
    
    [_btn setTitle:@"选取照片" forState:UIControlStateNormal];
    [_btn addTarget:self action:@selector(clickBtn) forControlEvents:UIControlEventTouchUpInside];
    
    _lab.textColor = [UIColor whiteColor];
    _lab.font = kFont(kScaleW(15));
    _lab.numberOfLines = 0;
}

- (void)setupLayouts
{
    [_imgV mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_equalTo(kNAV_HEIGHT + kScaleW(20));
        make.width.mas_equalTo(kScaleW(300));
        make.height.mas_equalTo(kScaleW(300));
        make.centerX.mas_equalTo(0);
    }];
    [_btn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_equalTo(_imgV.mas_bottom).offset(kScaleW(40));
        make.centerX.mas_equalTo(0);
    }];
    
    [_lab mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_equalTo(_btn.mas_bottom).offset(kScaleW(40));
        make.centerX.mas_equalTo(0);
        make.width.mas_equalTo(kScaleW(300));
    }];
}


- (void)clickBtn
{
    [self.tool open];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



@end
