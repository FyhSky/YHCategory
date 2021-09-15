//
//  UILabel+ContenSize.h
//  YHCategory
//
// Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (ContenSize)


/**
 Content的Size

 @param width 限制宽度
 @return Size
 */
- (CGSize)contentSizeForWidth:(CGFloat)width;


/**
 Content Size

 @return Size
 */
- (CGSize)contentSize;


/**
 是否被截断

 @return 是否被截断
 */
- (BOOL)isTruncated;

@end
