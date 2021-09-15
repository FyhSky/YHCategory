//
//  NSArray+JSONEncode.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (JSONEncode)

/**
 转换为JSON

 @return JSON Sting
 */
- (NSString *)jsonStringEncoded;

/**
 返回格式化后JSON

 @return 格式化后的JSON String
 */
- (NSString *)jsonPrettyStringEncoded;

@end
