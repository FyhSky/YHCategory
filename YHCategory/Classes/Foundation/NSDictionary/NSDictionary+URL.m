//
//  NSDictionary+URL.m
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "NSDictionary+URL.h"

@implementation NSDictionary (URL)

+ (NSDictionary *)dictionaryWithURLQuery:(NSString *)query{
    NSMutableDictionary *dict = [NSMutableDictionary dictionary];
    NSArray *parameters = [query componentsSeparatedByString:@"&"];
    for(NSString *parameter in parameters){
        NSArray *contents = [parameter componentsSeparatedByString:@"="];
        if([contents count] == 2){
            NSString *key = [contents objectAtIndex:0];
            NSString *value = [contents objectAtIndex:1];
            value = [value stringByReplacingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
            if (key && value){
                [dict setObject:value forKey:key];
            }
        }
    }
    return [NSDictionary dictionaryWithDictionary:dict];
}

- (NSString *)URLQueryString{
    NSMutableString *string = [NSMutableString string];
    for (NSString *key in [self allKeys]){
        if ([string length]){
            [string appendString:@"&"];
        }
        CFStringRef escaped = CFURLCreateStringByAddingPercentEscapes(NULL,(CFStringRef)[[self objectForKey:key] description],
                                                                      NULL,(CFStringRef)@"!*'();:@&=+$,/?%#[]",
                                                                      kCFStringEncodingUTF8);
        [string appendFormat:@"%@=%@", key, escaped];
        CFRelease(escaped);
    }
    return string;
}

@end
