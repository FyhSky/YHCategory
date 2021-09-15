//
//  NSArray+Plist.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Plist)


/**
 通过Plist文件数据初始化Array

 @param plist Plist数据
 @return NSArray对象
 */
+ (instancetype)arrayWithPlistData:(NSData *)plist;

/**
 通过Plist String初始化Array

 @param plist Plsit String
 @return NSArray对象
 */
+ (instancetype)arrayWithPlistString:(NSString *)plist;

/**
 NSArray的Plist数据

 @return Plist的数据对象
 */
- (NSData *)plistData;

/**
 NSArray的Plist String对象

 @return Plist的String对象
 */
- (NSString *)plistString;

@end

@interface NSMutableArray (Plist)

+ (instancetype)arrayWithPlistData:(NSData *)plist;
+ (instancetype)arrayWithPlistString:(NSString *)plist;

@end
