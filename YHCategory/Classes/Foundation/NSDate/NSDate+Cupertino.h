//
//  NSDate+Cupertino.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Cupertino)

- (NSDate *)beginningOfDay;
- (NSDate *)endOfDay;

- (NSDate *)beginningOfWeek;
- (NSDate *)endOfWeek;

- (NSDate *)beginningOfMonth;
- (NSDate *)endOfMonth;


- (NSDate *)beginningOfYear;
- (NSDate *)endOfYear;

@end
