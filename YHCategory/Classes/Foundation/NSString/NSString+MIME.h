//
//  NSString+MIME.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (MIME)


/**
 文件名的MIME

 @return MIME
 */
- (NSString *)MIMEType;

/**
 根绝后辍名获取MIME Type

 @param extension 后辍名
 @return MIME
 */
+ (NSString *)MIMETypeForExtension:(NSString *)extension;

/**
 MIMEDict信息

 @return MIMEDict字典
 */
+ (NSDictionary *)MIMEDict;

@end
