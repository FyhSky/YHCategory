//
//  NSObject+Semaphore.m
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "NSObject+Semaphore.h"
#import <objc/runtime.h>

@implementation NSObject (Semaphore)

- (dispatch_semaphore_t)semaphoreWithKey:(void *)key {
    dispatch_semaphore_t semaphore = objc_getAssociatedObject(self, key);
    if (!semaphore) {
        semaphore = dispatch_semaphore_create(1);
    }
    return semaphore;
}

- (dispatch_semaphore_t)semaphoreWithKey:(void *)key andValue:(long)value {
    dispatch_semaphore_t semaphore = objc_getAssociatedObject(self, key);
    if (!semaphore) {
        semaphore = dispatch_semaphore_create(value);
    }
    return semaphore;
}

@end
