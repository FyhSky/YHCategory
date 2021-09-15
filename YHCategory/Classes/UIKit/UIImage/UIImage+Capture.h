//
//  UIImage+Capture.h
//  YHCategory
//
// Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Capture)

/**
 截取View生成图片

 @param view 视图
 @return 生成的图片
 */
+ (UIImage *)captureWithView:(UIView *)view ;

/// 对图片进行缩放
+ (UIImage *)imageWithSize:(CGRect)myImageRect FromImage:(UIImage *)bigImage;

@end
