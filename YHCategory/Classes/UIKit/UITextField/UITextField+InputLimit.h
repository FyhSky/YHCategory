//
//  UITextField+InputLimit.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (InputLimit)

@property (assign, nonatomic)  NSInteger maxLength ; // <= 0无限制

@end
