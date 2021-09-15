//
//  NSString+Append.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Append)

- (NSString *)appendHomePath;
- (NSString *)appendDocumentPath;
- (NSString *)appendCachePath;
- (NSString *)appendMainBundlePath;
- (NSString *)appendTempPath;
- (NSString *)appendPreferencesPath;

@end
