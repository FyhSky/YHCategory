//
//  UIButton+ClickEdgeInsets.h
//  YHCategory
//
// Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

/// 改变按钮的响应区域
@interface UIButton (ClickEdgeInsets)

/// 上左下右分别增加或减小多少  正数为增加 负数为减小
@property (nonatomic, assign) UIEdgeInsets clickEdgeInsets;

@end
