//
//  UIView+BlockGesture.h
//  YHCategory
//
// Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^GestureActionBlock)(UIGestureRecognizer *gestureRecoginzer);

@interface UIView (BlockGesture)

/// 添加点击手势
- (void)addTapActionWithBlock:(GestureActionBlock)block;
/// 添加长按手势
- (void)addLongPressActionWithBlock:(GestureActionBlock)block;

@end
