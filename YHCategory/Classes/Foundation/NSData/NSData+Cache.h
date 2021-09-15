//
//  NSData+Cache.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (Cache)

/**
 根据key保存到磁盘里缓存起来

 @param key Key
 */
- (void)saveDataCacheWithKey:(NSString *)key;


/**
 根据key取出缓存data

 @param key Key
 @return 对象数据
 */
+ (NSData *)getDataCacheWithKey:(NSString *)key;

@end
