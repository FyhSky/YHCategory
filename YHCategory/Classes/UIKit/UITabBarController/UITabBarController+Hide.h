//
//  UITabBarController+Hide.h
//  HIdeDemo
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITabBarController (Hide)

@property (nonatomic,getter=isTabBarHidden,readonly) BOOL tabBarHidden ;


/**
 设置Tabbar隐藏

 @param hidden 是否隐藏
 @param animated 是否有动画
 @param completion 返回回调
 */
- (void)setTabBarHidden:(BOOL)hidden
               animated:(BOOL)animated
             completion:(void (^)(BOOL finished))completion;

@end
