//
//  UIView+Recursion.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^SubviewBlock) (UIView* view);
typedef void (^SuperviewBlock) (UIView* superview);
@interface UIView (Recursion)

- (UIView*)findViewRecursively:(BOOL(^)(UIView* subview, BOOL* stop))recurse;


-(void)runBlockOnAllSubviews:(SubviewBlock)block;
-(void)runBlockOnAllSuperviews:(SuperviewBlock)block;
-(void)enableAllControlsInViewHierarchy;
-(void)disableAllControlsInViewHierarchy;

@end
