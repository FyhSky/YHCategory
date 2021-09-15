//
//  UISlider+Tap.h
//  YHCategory
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UISlider (Tap)

/// 单击手势,会自动到对应比例
- (void)addTapGestureWithTarget: (id)target action: (SEL)action;

@end
