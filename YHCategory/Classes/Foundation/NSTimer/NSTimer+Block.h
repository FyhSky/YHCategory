//
//  NSTimer+Block.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (Block)


/**
 scheduledTimerWithBlocl

 @param seconds 时间
 @param block Block
 @param repeats 是否重复
 @return 返回Timer
 */
+ (NSTimer *)scheduledTimerWithTimeInterval:(NSTimeInterval)seconds withBlock:(void (^)(NSTimer *timer))block repeats:(BOOL)repeats;


/**
 timerWithTimeBlock

 @param seconds 时间
 @param block Block
 @param repeats 是否重复
 @return 返回Timer
 */
+ (NSTimer *)timerWithTimeInterval:(NSTimeInterval)seconds withBlock:(void (^)(NSTimer *timer))block repeats:(BOOL)repeats;

@end
