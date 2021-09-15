//
//  NSArray+Contains.m
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "NSArray+Contains.h"

@implementation NSArray (Contains)

-(BOOL)containsAll:(NSArray *)array{
    for( id obj in array ) {
        if( ![self containsObject:obj] ) {
            return false;
        }
    }
    return true;
}

-(BOOL)containsAny:(NSArray *)array{
    for( id obj in array ) {
        if( [self containsObject:obj] ) {
            return true;
        }
    }
    return false;
}

@end
