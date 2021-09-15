//
//  NSDictionary+Plist.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSDictionary (Plist)

/// 根据Plist数据初始化字典
+ (instancetype)dictionaryWithPlistData:(NSData *)plist;
/// 根绝Plist String初始化字典
+ (instancetype)dictionaryWithPlistString:(NSString *)plist;

/// Plist 数据信息
- (NSData *)plistData;
/// Plist String
- (NSString *)plistString;

@end
