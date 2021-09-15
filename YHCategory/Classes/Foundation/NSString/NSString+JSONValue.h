//
//  NSString+JSONValue.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (JSONValue)

/// JSON String 转换为字典
- (NSDictionary *)JSONDictionaryValue ;

/// JSON String 转换为数组
- (NSArray *)JSONArrayValue ;

@end
