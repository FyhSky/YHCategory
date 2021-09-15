//
//  NSString+Append.m
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "NSString+Append.h"

@implementation NSString (Append)

- (NSString *)appendHomePath {
    NSString *home = NSHomeDirectory();
    return [home stringByAppendingString:self];
}

- (NSString *)appendDocumentPath {
    NSString *documentPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
    return [documentPath stringByAppendingString:self];
}

- (NSString *)appendCachePath {
    NSString *cachePath = [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) lastObject];
    return [cachePath stringByAppendingString:self];
}

- (NSString *)appendMainBundlePath {
    NSString *mainBundlePath = [NSBundle mainBundle].bundlePath;
    return [mainBundlePath stringByAppendingString:self];
}

- (NSString *)appendTempPath {
    NSString *tempPath = NSTemporaryDirectory() ;
    return [tempPath stringByAppendingString:self];
}

- (NSString *)appendPreferencesPath {
    NSString *preferencesPath = [NSSearchPathForDirectoriesInDomains(NSPreferencePanesDirectory, NSUserDomainMask, YES) lastObject];
    return [preferencesPath stringByAppendingString:self];
}

@end
