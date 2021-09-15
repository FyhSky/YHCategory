//
//  NSDictionary+Block.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Block)

/// 遍历字典信息
- (void)eachWithBlock:(void (^)(id key, id value))block;
/// 遍历字典的Key
- (void)eachKeyWithBlock:(void (^)(id key))block;
/// 遍历字典的Value
- (void)eachValueWithBlock:(void (^)(id value))block;

/// 映射对象
- (NSArray *)mapWithBlock:(id (^)(id key, id value))block;

/// 筛选Key
- (NSDictionary *)filterWithBlock:(BOOL (^)(id key))block ;
/// 移除Key
- (NSDictionary *)rejectWithBlock:(BOOL (^)(id key))block ;

@end
