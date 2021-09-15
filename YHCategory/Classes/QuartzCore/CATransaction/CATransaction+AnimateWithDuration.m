//
//  CATransaction+AnimateWithDuration.m
//  YHCategory
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "CATransaction+AnimateWithDuration.h"

@implementation CATransaction (AnimateWithDuration)

+(void)animateWithDuration:(NSTimeInterval)duration
                animations:(void (^)(void))animations
                completion:(void (^)(void))completion{
    [CATransaction begin];
    [CATransaction setAnimationDuration:duration];
    if (completion){
        [CATransaction setCompletionBlock:completion];
    }
    if (animations){
        animations();
    }
    [CATransaction commit];
}

@end
