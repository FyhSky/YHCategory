//
//  UIWebView+WebStorage.m
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "UIWebView+WebStorage.h"

static NSString * const kLocalStorageName = @"localStorage";
static NSString * const kSessionStorageName = @"sessionStorage";
@implementation UIWebView (WebStorage)

#pragma mark - Local Storage

- (void)setLocalStorageString:(NSString *)string forKey:(NSString *)key {
    [self ip_setString:string forKey:key storage:kLocalStorageName];
}

- (NSString *)localStorageStringForKey:(NSString *)key {
    return [self ip_stringForKey:key storage:kLocalStorageName];
}

- (void)removeLocalStorageStringForKey:(NSString *)key {
    [self ip_removeStringForKey:key storage:kLocalStorageName];
}

- (void)clearLocalStorage {
    [self ip_clearWithStorage:kLocalStorageName];
}

#pragma mark - Session Storage

- (void)setSessionStorageString:(NSString *)string forKey:(NSString *)key {
    [self ip_setString:string forKey:key storage:kSessionStorageName];
}

- (NSString *)sessionStorageStringForKey:(NSString *)key {
    return [self ip_stringForKey:key storage:kSessionStorageName];
}

- (void)removeSessionStorageStringForKey:(NSString *)key {
    [self ip_removeStringForKey:key storage:kSessionStorageName];
}

- (void)clearSessionStorage {
    [self ip_clearWithStorage:kSessionStorageName];
}

#pragma mark - Helpers

- (void)ip_setString:(NSString *)string forKey:(NSString *)key storage:(NSString *)storage {
    [self stringByEvaluatingJavaScriptFromString:[NSString stringWithFormat:@"%@.setItem('%@', '%@');", storage, key, string]];
}

- (NSString *)ip_stringForKey:(NSString *)key storage:(NSString *)storage {
    return [self stringByEvaluatingJavaScriptFromString:[NSString stringWithFormat:@"%@.getItem('%@');", storage, key]];
}

- (void)ip_removeStringForKey:(NSString *)key storage:(NSString *)storage {
    [self stringByEvaluatingJavaScriptFromString:[NSString stringWithFormat:@"%@.removeItem('%@');", storage, key]];
}

- (void)ip_clearWithStorage:(NSString *)storage {
    [self stringByEvaluatingJavaScriptFromString:[NSString stringWithFormat:@"%@.clear();", storage]];
}


@end
