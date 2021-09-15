//
//  CATransaction+AnimateWithDuration.h
//  YHCategory
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@interface CATransaction (AnimateWithDuration)

/**
 *  @author Denys Telezhkin
 *
 *  @brief  CATransaction 动画执 block回调
 *
 *  @param duration   动画时间
 *  @param animations 动画块
 *  @param completion 动画结束回调
 */
+(void)animateWithDuration:(NSTimeInterval)duration
                animations:(nullable void (^)(void))animations
                completion:(nullable void (^)(void))completion;

@end
