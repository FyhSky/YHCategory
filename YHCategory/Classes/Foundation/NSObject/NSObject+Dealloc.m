//
//  NSObject+Dealloc.m
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "NSObject+Dealloc.h"
#import <objc/runtime.h>

@interface _DeallocExecutor : NSObject

- (instancetype)initWithBlock:(DeallocBlock)block ;

@end

@implementation _DeallocExecutor{
    DeallocBlock _deallocBlock ;
}

- (id)initWithBlock:(DeallocBlock)block {
    self = [super init];
    if (self) {
        _deallocBlock = [block copy];
    }
    return self;
}

- (void)dealloc {
    _deallocBlock ? _deallocBlock() : nil;
}

@end

const void *DeallocExecutorsKey = &DeallocExecutorsKey ;

@implementation NSObject (Dealloc)

- (NSHashTable *)deallocExecutors {
    NSHashTable *table = objc_getAssociatedObject(self, DeallocExecutorsKey) ;
    if (!table) {
        table = [NSHashTable hashTableWithOptions:NSPointerFunctionsStrongMemory];
        objc_setAssociatedObject(self, DeallocExecutorsKey, table, OBJC_ASSOCIATION_RETAIN);
    }
    return table ;
}

- (void)executeAtDealloc:(DeallocBlock)block {
    if (block) {
        _DeallocExecutor *executor = [[_DeallocExecutor alloc]initWithBlock:block] ;
        @synchronized (self) {
            [[self deallocExecutors] addObject:executor] ;
        }
    }
}


@end
