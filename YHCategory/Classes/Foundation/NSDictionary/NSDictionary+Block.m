//
//  NSDictionary+Block.m
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "NSDictionary+Block.h"

@implementation NSDictionary (Block)

- (void)eachWithBlock:(void (^)(id, id))block{
    [self enumerateKeysAndObjectsUsingBlock:^(id key, id obj, BOOL *stop) {
        block(key, obj);
    }];
}

- (void)eachKeyWithBlock:(void (^)(id))block{
    [self enumerateKeysAndObjectsUsingBlock:^(id key, id obj, BOOL *stop) {
        block(key);
    }];
}

- (void)eachValueWithBlock:(void (^)(id))block{
    [self enumerateKeysAndObjectsUsingBlock:^(id key, id obj, BOOL *stop) {
        block(obj);
    }];
}

- (NSArray *)mapWithBlock:(id (^)(id, id))block{
    NSMutableArray *array = [NSMutableArray array];
    [self enumerateKeysAndObjectsUsingBlock:^(id key, id obj, BOOL *stop) {
        id object = block(key, obj);
        if (object) {
            [array addObject:object];
        }
    }];
    return array;
}

- (NSDictionary *)filterWithBlock:(BOOL (^)(id))block{
    NSMutableDictionary *result = [NSMutableDictionary dictionary];
    [self enumerateKeysAndObjectsUsingBlock:^(id key, id obj, BOOL *stop) {
        if (block(key)) {
            result[key] = obj;
        }
    }];
    return result;
}

- (NSDictionary *)rejectWithBlock:(BOOL (^)(id))block{
    NSMutableDictionary *result = [NSMutableDictionary dictionary];
    [self enumerateKeysAndObjectsUsingBlock:^(id key, id obj, BOOL *stop) {
        if (!block(key)) {
            result[key] = obj;
        }
    }];
    return result;
}

@end
