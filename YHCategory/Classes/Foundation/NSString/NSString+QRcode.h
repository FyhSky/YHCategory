//
//  NSString+QRcode.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UIImage;
@interface NSString (QRcode)

/**
 String的二维码信息

 @return String的二维码图片
 */
- (UIImage *)QRcode ;

@end
