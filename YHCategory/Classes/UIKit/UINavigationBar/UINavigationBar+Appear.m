//
//  UINavigationBar+Appear.m
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "UINavigationBar+Appear.h"

@implementation UINavigationBar (Appear)

- (void)hideBottomShadow {
    UIImageView *navBarHairlineImageView = [self findHairlineImageViewUnder:self];
    navBarHairlineImageView.hidden = YES;
}

- (void)showBottomShadow {
    UIImageView *navBarHairlineImageView = [self findHairlineImageViewUnder:self];
    navBarHairlineImageView.hidden = NO;
}


- (void)makeTransparent {
    [self setTranslucent:YES];
    [self setBackgroundImage:[[UIImage alloc] init] forBarMetrics:UIBarMetricsDefault];
    self.backgroundColor = [UIColor clearColor];
    self.shadowImage = [UIImage new];
    [self hideBottomShadow];
}

- (void)makeDefault {
    [self setTranslucent:YES];
    [self setBackgroundImage:nil forBarMetrics:UIBarMetricsDefault];
    self.backgroundColor = nil;
    self.shadowImage = nil;
    [self showBottomShadow];
}

- (UIImageView *)findHairlineImageViewUnder:(UIView *)view {
    if ([view isKindOfClass:UIImageView.class] && view.bounds.size.height <= 1.0) {
        return (UIImageView *)view;
    }
    for (UIView *subview in view.subviews) {
        UIImageView *imageView = [self findHairlineImageViewUnder:subview];
        if (imageView) {
            return imageView;
        }
    }
    return nil;
}

@end
