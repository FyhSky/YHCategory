//
//  NSFileHandle+ReadLine.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSFileHandle (ReadLine)

/**
 *  @brief   A Cocoa / Objective-C NSFileHandle YHCategory that adds the ability to read a file line by line.
 
 *
 *  @param theDelimier 分隔符
 *
 *  @return An NSData* object is returned with the line if found, or nil if no more lines were found
 */
- (NSData *)readLineWithDelimiter:(NSString *)theDelimier;

@end
