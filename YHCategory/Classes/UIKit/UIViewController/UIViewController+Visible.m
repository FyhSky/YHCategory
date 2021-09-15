//
//  UIViewController+Visible.m
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "UIViewController+Visible.h"

@implementation UIViewController (Visible)

- (BOOL)isVisible {
    return [self isViewLoaded] && self.view.window;
}

@end
