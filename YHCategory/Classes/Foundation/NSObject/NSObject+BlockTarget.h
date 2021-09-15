//
//  NSObject+Observer.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (BlockTarget)
- (void)addObserverBlockForKeyPath:(NSString*)keyPath block:(void(^)(id obj,id oldVal,id newVal))block;
- (void)removeObserverBlockForKeyPath:(NSString*)keyPath;
- (void)removeAllObserverBlocks;

- (void)addNotificationForName:(NSString*)name  block:(void(^)(NSNotification*notification))block;
- (void)removeNotificationForName:(NSString*)name;
- (void)removeAllNotification;
- (void)postNotificationWithName:(NSString*)name userInfo:(nullable NSDictionary*)userInfo;
@end

NS_ASSUME_NONNULL_END
