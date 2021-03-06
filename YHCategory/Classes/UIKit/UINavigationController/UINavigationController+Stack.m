//
//  UINavigationController+Stack.m
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "UINavigationController+Stack.h"

@implementation UINavigationController (Stack)

- (id)findViewController:(Class)className;{
    for (UIViewController *viewController in self.viewControllers){
        if ([viewController isKindOfClass:className]){
            return viewController;
        }
    }
    return nil;
}

- (BOOL)isOnlyContainRootViewController{
    if (self.viewControllers && self.viewControllers.count == 1){
        return YES;
    }
    return NO;
}

- (UIViewController *)rootViewController{
    if (self.viewControllers && [self.viewControllers count] >0){
        return [self.viewControllers firstObject];
    }
    return nil;
}

- (NSArray *)popToViewControllerWithClassName:(Class)className animated:(BOOL)animated;{
    return [self popToViewController:[self findViewController:className] animated:YES];
}

- (NSArray *)popToViewControllerWithLevel:(NSInteger)level animated:(BOOL)animated{
    NSInteger viewControllersCount = self.viewControllers.count;
    if (viewControllersCount > level) {
        NSInteger idx = viewControllersCount - level - 1;
        UIViewController *viewController = self.viewControllers[idx];
        return [self popToViewController:viewController animated:animated];
    } else {
        return [self popToRootViewControllerAnimated:animated];
    }
}


@end
