//
//  NSString+AES.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (AES)

///  加密方法
- (NSString *)encryptWithAESwithKey:(NSString *)key ivParameter:(NSString *)ivParameter;

/// 解密方法
- (NSString*)decryptWithAESwithKey:(NSString *)key ivParameter:(NSString *)ivParameter;


@end
