//
//  UIView+ViewController.m
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "UIView+ViewController.h"

@implementation UIView (ViewController)

- (UIViewController *)viewController{
    //获取下一响应者
    UIResponder *next = self.nextResponder;
    //响应者存在的情况下进行判断
    while (next) {
        //当响应者类型为控制器时 返回控制器
        if ([next isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)next;
        }
        //如果不是控制器时
        next = next.nextResponder;
    }
    return nil;
}

@end
