//
//  NSNotificationCenter+AutoRemove.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNotificationCenter (AutoRemove)

/// 设置是否自动移除监听
+ (void)setNotificationAutoRemoveEnable:(BOOL)enable;
/// 获取自动移除监听是否开启
+ (BOOL)notificationAutoRemoveEnable;

@end
