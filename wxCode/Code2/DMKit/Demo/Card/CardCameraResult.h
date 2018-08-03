//
//  CardCameraResult.h
//  DMKit
//
//  Created by 西安旺豆电子信息有限公司 on 2018/8/3.
//  Copyright © 2018年 呆木出品. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreImage/CoreImage.h>

@interface CardCameraResult : NSObject

- (instancetype)initWithCIImage:(CIImage *)img rectFeature:(CIRectangleFeature *)feature;

@end
