//
//  NSNumber+Display.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNumber (Display)

/// 显示指定精读
- (NSString *)displayNumberWithDigit:(NSInteger)digit;

/// 显示百分比
- (NSString *)displayPercentageWithDigit:(NSInteger)digit;

@end
