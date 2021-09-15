//
//  NSBundle+AppInfo.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UIImage ;
@interface NSBundle (AppInfo)

/**
 Bundle Name

 @return BundleName
 */
+ (NSString *)bundleName ;

/**
 Bundle Identifier

 @return BundleIdentifier
 */
+ (NSString *)bundleIdentifier ;

/**
 版本信息

 @return Version String
 */
+ (NSString *)version ;


/**
 Icon路径

 @return icon路径
 */
- (NSString*)appIconPath ;

/**
 app的icon

 @return icon image对象
 */
- (UIImage*)appIcon ;

/**
 Localized Display Name

 @return LocalizedDisplayName
 */
+ (NSString *)localizedDisplayName;

@end
