//
//  NSString+HTML.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (HTML)

/// 使用Unicode 编码所有HTML实体
- (NSString *)stringByEscapingForHTML;

/// 使用Ascii编码所有HTML实体
- (NSString *)stringByEscapingForAsciiHTML ;

/// 解码HTML实体
- (NSString *)stringByUnescapingFromHTML ;

/// Replace newlines with <br /> tags.
- (NSString *)stringWithNewLinesAsBRs;

/// Remove newlines and white space from string.
- (NSString *)stringByRemovingNewLinesAndWhitespace;

/// Wrap plain URLs in <a href="..." class="linkified">...</a>
- (NSString *)stringByLinkifyingURLs;

/// 将html转换为纯文本 Convert HTML To Plain Text
- (NSString *)stringByConvertingHTMLToPlainText;

@end
