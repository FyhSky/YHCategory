//
//  NSDictionary+URL.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (URL)

/// 将url参数转换成NSDictionary
+ (NSDictionary *)dictionaryWithURLQuery:(NSString *)query;
/// 将NSDictionary转换成url参数字符串
- (NSString *)URLQueryString;

@end
