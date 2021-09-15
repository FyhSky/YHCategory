//
//  NSString+Hash.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Hash)

@property (readonly) NSString *md5String; ///  md5String
@property (readonly) NSString *sha1String; ///  sha1String
@property (readonly) NSString *sha256String; /// sha256String
@property (readonly) NSString *sha512String; /// sha512String

/**
 hmacSHA1StringWithKey

 @param key Key
 @return hmacSHA1String
 */
- (NSString *)hmacSHA1StringWithKey:(NSString *)key;

/**
 hmacSHA256StringWithKey

 @param key Key
 @return hmacSHA256String
 */
- (NSString *)hmacSHA256StringWithKey:(NSString *)key;


/**
 hmacSHA512StringWithKey

 @param key Key
 @return hmacSHA512String
 */
- (NSString *)hmacSHA512StringWithKey:(NSString *)key;

@end
