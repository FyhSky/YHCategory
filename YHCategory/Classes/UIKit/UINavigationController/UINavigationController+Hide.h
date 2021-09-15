//
//  UINavigationController+Hide.h
//  HIdeDemo
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (Hide)

@property (nonatomic,getter=isNavBarHidden,readonly) BOOL navBarHidden ; /// 导航栏是否隐藏


/**
 设置NavBar隐藏

 @param hidden Hidden
 @param animated 是否有动画
 @param completion 完成回调
 */
- (void)setNavBarHidden:(BOOL)hidden
               animated:(BOOL)animated
             completion:(void (^)(BOOL finished))completion;

@end
