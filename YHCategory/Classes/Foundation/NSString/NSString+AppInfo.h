//
//  NSString+UUID.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (AppInfo)

/**
 UUID

 @return UUID String
 */
+ (NSString *)UUID ;


/**
 version 1.0

 @return version
 */
+ (NSString *)appVersion;


/**
 build Version 13

 @return build Version
 */
+ (NSString *)build;


/**
 identifier

 @return identifier
 */
+ (NSString *)identifier;

/**
 displayName
 
 @return displayName
 */
+ (NSString *)displayName;

/**
 currentLanguage

 @return currentLanguage
 */
+ (NSString *)currentLanguage;


/**
 设备信息

 @return 设备信息String
 */
+ (NSString *)deviceModel;

@end
