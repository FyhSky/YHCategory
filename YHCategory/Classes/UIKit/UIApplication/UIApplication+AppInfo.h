//
//  UIApplication+AppInfo.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIApplication (AppInfo)

@property (nonatomic,readonly) NSString *appName ;
@property (nonatomic,readonly) NSString *appVersion ;
@property (nonatomic,readonly) NSString *appBuild ;
@property (nonatomic,readonly) NSString *appBundleID ;

/// applicationSize
- (NSString *)applicationSizeAsString;
- (int)applicationSizeSizeInBytes ;

/// documentsFolderSize
- (NSString *)documentsFolderSizeAsString;
- (int)documentsFolderSizeInBytes;

/// cacheFolderSize
- (NSString *)cacheFolderSizeAsString;
- (int)cacheFolderSizeInBytes;

/// libraryFolderSize
- (NSString *)libraryFolderSizeAsString;
- (int)libraryFolderSizeInBytes;

+ (BOOL)isAppExtension;
+ (UIApplication *)sharedExtensionApplication;


@end
