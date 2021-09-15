//
//  NSDictionary+JSONEncode.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (JSONEncode)

/**
 JSON String Encoded

 @return JSON String
 */
- (nullable NSString *)jsonStringEncoded;


/**
 JSON PrettyString Encoded

 @return JSON Pretty String
 */
- (nullable NSString *)jsonPrettyStringEncoded;

@end
