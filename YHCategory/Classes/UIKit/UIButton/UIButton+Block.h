//
//  UIButton+Block.h
//  YHCategory
//
// Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^TouchedBlock)(id sender);
@interface UIButton (Block)

/// 给点击状态添加事件
-(void)addActionHandler:(TouchedBlock)touchHandler;

@end
