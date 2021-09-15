//
//  UIImage+Merge.h
//  YHCategory
//
// Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Merge)

/**
 Merge Image

 @param firstImage 第一张图片
 @param secondImage 第二章图片
 @return Image
 */
+ (UIImage*)mergeImage:(UIImage*)firstImage withImage:(UIImage*)secondImage ;

@end
