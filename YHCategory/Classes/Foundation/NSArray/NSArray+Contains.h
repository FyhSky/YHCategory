//
//  NSArray+Contains.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Contains)


/**
 是否包含所有数组中元素

 @param array 要寻找的Array
 @return 是否包含
 */
-(BOOL)containsAll:(NSArray *)array;


/**
 是否包含其中任意一个元素

 @param array 要寻找的Array
 @return 是否包含
 */
-(BOOL)containsAny:(NSArray *)array;

@end
