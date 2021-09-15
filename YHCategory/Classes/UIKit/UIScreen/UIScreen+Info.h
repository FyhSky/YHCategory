//
//  UIScreen+Info.h
//  YHCategory
//
// Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScreen (Info)

+ (BOOL)isRetina;   /// 是否是Retina屏幕
+ (CGFloat)screenScale;   /// 屏幕缩放比例

+ (CGRect)screenBounds;  /// 屏幕的bounds

/**
 屏幕的Bounds

 @param interfaceOrientation interfaceOrientation
 @return Bounds
 */
+ (CGRect)screenBoundsForInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation;

@property (nonatomic, readonly) CGSize sizeInPixel;
@property (nonatomic, readonly) CGFloat pixelsPerInch;

@end
