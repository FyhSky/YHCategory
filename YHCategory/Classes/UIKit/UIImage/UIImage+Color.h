//
//  UIImage+Color.h
//  YHCategory
//
// Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIImage (Color)

/**
 生成纯色图片

 @param color Color
 @param size Size
 @return 纯色图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color withSize:(CGSize)size ;

/**
 生成一个像素点的纯色图片

 @param color Color
 @return 纯色图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color ;

/**
 在某个点的颜色

 @param point 点
 @return 颜色
 */
- (UIColor *)colorAtPoint:(CGPoint )point ;

/**
 某个像素的颜色

 @param point 像素点
 @return 颜色
 */
- (UIColor *)colorAtPixel:(CGPoint)point ;


/**
 是否含有透明通道

 @return 是否含有透明信息
 */
- (BOOL)hasAlphaChannel ;

+ (UIImage *)grayImageFromImage:(UIImage*)sourceImage ;
- (UIImage *)grayImage ;

@end
