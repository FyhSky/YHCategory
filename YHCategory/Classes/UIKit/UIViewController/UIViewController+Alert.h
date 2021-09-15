//
//  UIViewController+Alert.h
//  YHCategory
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (Alert)

- (void)showAlertWithTitle:(NSString *)title andMessage:(NSString *)message;
- (void)showAlertWithTitle:(NSString *)title andMessage:(NSString *)message andCancelButtonTitle:(NSString *)cancelButtonTitle;
- (void)showActionSheetWithTitle:(NSString *)title message:(NSString *)message options:(NSArray *)options handlers:(NSArray *)handlers;
- (void)showActionSheetWithTitle:(NSString *)title message:(NSString *)message options:(NSArray *)options handlers:(NSArray *)handlers presentFromView:(UIView *)presentingView;
- (void)showActionSheetWithTitle:(NSString *)title message:(NSString *)message options:(NSArray *)options handlers:(NSArray *)handlers presentFromRect:(CGRect)presentingRect inView:(UIView*)presentingView;

@end
