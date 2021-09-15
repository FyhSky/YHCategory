//
//  UIViewController+Segues.h
//  YHCategory
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^UIViewControllerSeguesPrepareCallback)(UIViewController* target);

@interface UIViewController (Segues)

- (void)performSegueWithIdentifier:(NSString *)identifier prepareCallback:(UIViewControllerSeguesPrepareCallback)callback;

@end
