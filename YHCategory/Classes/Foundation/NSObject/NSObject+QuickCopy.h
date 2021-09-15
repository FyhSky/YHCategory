//
//  NSObject+QuickCopy.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (QuickCopy)

/** 快速浅复制目标的所有属性 */
- (BOOL)quickCopy:(NSObject *)instance ;

/** 快速深复制目标的所有属性 */
- (BOOL)quickDeepCopy:(NSObject *)instance ;

@end
