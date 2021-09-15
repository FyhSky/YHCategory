//
//  UIButton+BackgroundColor.h
//  YHCategory
//
// Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (BackgroundColor)


/**
 给按钮设置背景颜色

 @param backgroundColor Color
 @param state 按钮的状态
 */
- (void)setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state;

@end
