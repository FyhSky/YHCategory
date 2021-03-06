//
//  NSString+Segmentation.m
//  YHCategory
//  https://github.com/cyanzhong/segmentation
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "NSString+Segmentation.h"

@implementation NSString (Segmentation)

- (NSArray<NSString *> *)segment:(SegmentationOptions)options {
    BOOL deduplication = options & SegmentationOptionsDeduplication;
    BOOL keepSymbols = options & SegmentationOptionsKeepSymbols;
    CFOptionFlags flags = keepSymbols ? kCFStringTokenizerUnitWordBoundary : kCFStringTokenizerUnitWord ;
    
    NSMutableArray<NSString *> *results = [NSMutableArray array];
    CFRange textRange = CFRangeMake(0, self.length);
    CFLocaleRef currentRef = CFLocaleCopyCurrent();
    CFStringTokenizerRef tokenizerRef = CFStringTokenizerCreate(NULL, (CFStringRef)self, textRange, flags, currentRef);
    CFStringTokenizerAdvanceToNextToken(tokenizerRef);
    NSMutableSet *resultSet = [NSMutableSet set];
    
    while (YES) {
        CFRange tokenRange = CFStringTokenizerGetCurrentTokenRange(tokenizerRef);
        if (tokenRange.location == kCFNotFound && tokenRange.length == 0) {
            break ;
        }
        
        NSString *token = [self substringWithRange:NSMakeRange(tokenRange.location, tokenRange.length)];
        NSString *item = [token stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        
        if (item.length > 0) {
            if (deduplication) {
                if (![resultSet containsObject:item]) {
                    [results addObject:item];
                }
                [resultSet addObject:item];
            }else {
                [results addObject:item];
            }
        }
        
        CFStringTokenizerAdvanceToNextToken(tokenizerRef);
    }
    
    CFRelease(tokenizerRef);
    CFRelease(currentRef);
    
    return results ;
}

@end
