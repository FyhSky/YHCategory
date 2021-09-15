//
//  UIViewController+BackAction.m
//  YHCategory
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "UIViewController+BackAction.h"
#import <objc/runtime.h>
static const void *BackButtonHandlerKey = &BackButtonHandlerKey;

@implementation UIViewController (BackAction)
- (void)backButtonTouched:(SIBackAction)backButtonHandler {
    objc_setAssociatedObject(self, BackButtonHandlerKey, backButtonHandler, OBJC_ASSOCIATION_COPY);
}

- (SIBackAction)backAction{
    return objc_getAssociatedObject(self, BackButtonHandlerKey);
}
@end

@implementation UINavigationController (_)
- (BOOL)navigationBar:(UINavigationBar *)navigationBar shouldPopItem:(UINavigationItem *)item {
    
    if([self.viewControllers count] < [navigationBar.items count]) {
        return YES;
    }
    
   	UIViewController* vc = [self topViewController];
    SIBackAction handler = [vc backAction];
    if (handler) {
        for(UIView *subview in [navigationBar subviews]) {
            if(subview.alpha < 1.) {
                [UIView animateWithDuration:.25 animations:^{
                    subview.alpha = 1.;
                }];
            }
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            handler(self);
        });
    }else{
        dispatch_async(dispatch_get_main_queue(), ^{
            [self popViewControllerAnimated:YES];
        });
    }
    return NO;
}
@end
