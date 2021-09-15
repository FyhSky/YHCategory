//
//  NSTimer+Pause.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (Pause)

/// 暂停NSTimer
- (void)pauseTimer;

/// 开始NSTimer
- (void)resumeTimer;

/// 延迟开始NSTimer
- (void)resumeTimerAfterTimeInterval:(NSTimeInterval)interval;

@end
