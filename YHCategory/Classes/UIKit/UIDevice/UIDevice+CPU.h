//
//  UIDevice+CPU.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIDevice (CPU)

@property (nonatomic,readonly) NSUInteger cpuNumber ; /// CPU核心数
@property (nonatomic,readonly) NSUInteger cpuFrequency ;  /// CPU频率
@property (nonatomic,readonly) NSUInteger busFrequency ;   /// BUS频率

@property (nonatomic,readonly) float cpuUsage ;  /// CPU利用率
@property (nonatomic,readonly) NSArray<NSNumber *> *cpuUsagePerProcessor ;  

@end
