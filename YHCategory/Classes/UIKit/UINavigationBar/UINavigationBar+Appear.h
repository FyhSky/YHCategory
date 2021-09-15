//
//  UINavigationBar+Appear.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationBar (Appear)

/// 隐藏阴影
- (void)hideBottomShadow;
/// 显示阴影
- (void)showBottomShadow;

/// 导航栏透明
- (void)makeTransparent;
/// 默认导航栏
- (void)makeDefault;

@end
