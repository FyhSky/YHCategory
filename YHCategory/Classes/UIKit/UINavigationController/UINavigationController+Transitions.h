//
//  UINavigationController+Transitions.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (Transitions)

/**
 Push With Transitions

 @param controller Controller
 @param transition Transitions
 */
- (void)pushViewController:(UIViewController *)controller withTransition:(UIViewAnimationTransition)transition;


/**
 Pop With Transitions

 @param transition Transitions
 @return Transitions
 */
- (UIViewController *)popViewControllerWithTransition:(UIViewAnimationTransition)transition;

@end
