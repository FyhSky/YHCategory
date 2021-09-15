//
//  UIScrollView+PageNumber.m
//  YHCategory
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "UIScrollView+PageNumber.h"

@implementation UIScrollView (PageNumber)

-(NSInteger)totalPages {
    return (NSInteger)ceil((self.contentSize.width/self.frame.size.width));
}

-(BOOL)isLastPage {
    return (self.pageNumber == (self.totalPages - 1));
}

-(BOOL)isFirstPage{
    return (self.pageNumber == 0);
}

-(void)setPageNumber:(NSInteger)pageNumber animated:(BOOL)animated {
    NSAssert(pageNumber >= 0, @"Page number cannot be negative");
    CGFloat offset = (self.frame.size.width * pageNumber);
    [self setContentOffset:CGPointMake(offset, 0.f) animated:animated];
}

-(void)setPageNumber:(NSInteger)pageNumber {
    [self setPageNumber:pageNumber animated:NO];
}

-(NSInteger)pageNumber {
    CGFloat pageWidth = self.frame.size.width;
    return (NSInteger)floor((self.contentOffset.x - pageWidth / 2) / pageWidth) + 1;
}


@end
