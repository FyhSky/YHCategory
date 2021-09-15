//
//  UIViewController+BackAction.h
//  YHCategory
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^SIBackAction)(UINavigationController *vc);

@interface UIViewController (BackAction)

-(void)backButtonTouched:(SIBackAction)backButtonHandler;

@end
