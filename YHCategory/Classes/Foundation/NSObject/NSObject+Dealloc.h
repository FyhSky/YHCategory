//
//  NSObject+Dealloc.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^DeallocBlock)(void);

@interface NSObject (Dealloc)

- (void)executeAtDealloc:(DeallocBlock)block;

@end
