//
//  NSKeyedUnarchiver+Key.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSKeyedUnarchiver (Key)

/**
 解档对象

 @param key Key
 @param path 自定义路径信息,全路径信息
 @return 解档的对象 
 */
+ (id)unarchiveObjectForKey:(NSString*)key WithPath:(NSString *)path;

/**
 解档对象,默认读取Document/DefaultArchive目录中

 @param key Key
 @return 解档的对象
 */
+ (id)unarchiveObjectForKey:(NSString*)key ;


/**
 解档对象

 @param key Key
 @param path 自定义路径信息,全路径信息
 @param failure 失败的回调
 @return 解档的对象
 */
+ (id)unarchiveObjectForKey:(NSString*)key WithPath:(NSString *)path failure:(void(^)(void))failure;

/**
 解档对象,默认读取Document/DefaultArchive目录中

 @param key Key
 @param failure 失败的回调
 @return 解档的对象
 */
+ (id)unarchiveObjectForKey:(NSString*)key failure:(void(^)(void))failure ;


@end
