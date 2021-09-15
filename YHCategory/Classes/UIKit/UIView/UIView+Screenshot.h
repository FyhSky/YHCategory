//
//  UIView+Screenshot.h
//  YHCategory
//
// Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Screenshot)

///  截取当前View
- (nullable UIImage *)snapshotImage;

- (nullable UIImage *)snapshotImageAfterScreenUpdates:(BOOL)afterUpdates;
/// 截取当前View为PDF
- (nullable NSData *)snapshotPDF;

@end
