//
//  NSURLRequest+Params.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURLRequest (Params)

- (id)initWithURL:(NSURL *)URL parameters:(NSDictionary *)params;

+(NSURLRequest *)requestGETWithURL:(NSURL *)url parameters:(NSDictionary *)params;

+(NSString *)URLfromParameters:(NSDictionary *)params;

+(NSArray *)queryStringComponentsFromKey:(NSString *)key value:(id)value;
+(NSArray *)queryStringComponentsFromKey:(NSString *)key dictionaryValue:(NSDictionary *)dict;
+(NSArray *)queryStringComponentsFromKey:(NSString *)key arrayValue:(NSArray *)array;

@end
