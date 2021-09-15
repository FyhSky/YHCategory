//
//  NSObject+Parse.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Parse)

/// 转换为String
- (NSString *)toString;

/// 转换为Number
- (NSNumber *)toNumber;

/// 转化为Dictionary
- (NSDictionary *)toDictionary;

/// 转换为Array
- (NSArray *)toArray;

/// 转换为Array
- (NSArray *)toArrayOf:(Class)itemClass;

@end
