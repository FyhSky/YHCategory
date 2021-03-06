//
//  UIImage+Make.h
//  YHCategory
//
// Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Make)

/**
 由Pdf生成图片

 @param dataOrPath PDF Data或Path'
 @return Image
 */
+ (UIImage *)imageWithPDF:(id)dataOrPath ;
+ (UIImage *)imageWithPDF:(id)dataOrPath size:(CGSize)size;
+ (UIImage *)imageWithPDF:(id)dataOrPath resize:(BOOL)resize size:(CGSize)size ;

+ (UIImage *)imageWithEmoji:(NSString *)emoji size:(CGFloat)size;

+ (UIImage *)imageWithSize:(CGSize)size drawBlock:(void (^)(CGContextRef context))drawBlock;

@end
