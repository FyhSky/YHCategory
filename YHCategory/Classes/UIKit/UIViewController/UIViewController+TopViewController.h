//
//  UIViewController+TopViewController.h
//  YHCategory
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (TopViewController)

- (UIViewController * _Nullable)topViewController;
- (void)presentViewControllerOnTopAnimated:(BOOL)flag completion:(void (^ _Nullable)(void))completion;

@end
