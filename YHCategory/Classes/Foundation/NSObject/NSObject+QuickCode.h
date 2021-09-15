//
//  NSObject+QuickCode.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (QuickCode)

/** 快速归档 */
- (id)quickCoderWith:(NSCoder *)aDecoder ;

/** 快速解档 */
- (void)quickEncodeWithCoder:(NSCoder *)aCoder ;

@end
