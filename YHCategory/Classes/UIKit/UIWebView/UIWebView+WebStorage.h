//
//  UIWebView+WebStorage.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIWebView (WebStorage)

#pragma mark - Local Storage

- (void)setLocalStorageString:(NSString *)string forKey:(NSString *)key;

- (NSString *)localStorageStringForKey:(NSString *)key;

- (void)removeLocalStorageStringForKey:(NSString *)key;

- (void)clearLocalStorage;

#pragma mark - Session Storage

- (void)setSessionStorageString:(NSString *)string forKey:(NSString *)key;

- (NSString *)sessionStorageStringForKey:(NSString *)key;

- (void)removeSessionStorageStringForKey:(NSString *)key;

- (void)clearSessionStorage;

@end
