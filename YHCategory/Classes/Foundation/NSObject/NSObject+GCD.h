//
//  NSObject+GCD.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (GCD)


/**
 在Main线程进行执行

 @param block Block
 @param wait 等待的时间
 */
- (void)performOnMainThread:(void(^)(void))block wait:(BOOL)wait;


/**
 异步执行

 @param block Block
 */
- (void)performAsynchronous:(void(^)(void))block;

/**
 延迟执行

 @param seconds 延迟的时间
 @param block Block
 */
- (void)performAfter:(NSTimeInterval)seconds block:(void(^)(void))block;

@end
