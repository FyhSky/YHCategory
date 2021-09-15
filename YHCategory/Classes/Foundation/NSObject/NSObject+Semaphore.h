//
//  NSObject+Semaphore.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (Semaphore)

- (dispatch_semaphore_t)semaphoreWithKey:(void*)key;

- (dispatch_semaphore_t)semaphoreWithKey:(void*)key andValue:(long)value;

@end

NS_ASSUME_NONNULL_END
