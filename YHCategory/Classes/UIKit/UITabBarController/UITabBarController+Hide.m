//
//  UITabBarController+Hide.m
//  HIdeDemo
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "UITabBarController+Hide.h"

@implementation UITabBarController (Hide)

- (BOOL)isTabBarHidden {
    return [[self tabBar] frame].origin.y >= CGRectGetMaxY([[self view] frame]);
}

- (void)setTabBarHidden:(BOOL)hidden
               animated:(BOOL)animated
             completion:(void (^)(BOOL finished))completion {
    
    if ([self isTabBarHidden] == hidden)
        return (completion) ? completion(YES) : nil;
    
    CGRect frame = [[self tabBar] frame];
    frame.origin.y = (hidden) ? [[self view] frame].size.height :[[self view] frame].size.height - frame.size.height;
    [UIView animateWithDuration:((animated) ? 0.3 : 0.0)
                     animations:^{
                         [[self tabBar] setFrame:frame];
                     } completion:completion];
}

@end
