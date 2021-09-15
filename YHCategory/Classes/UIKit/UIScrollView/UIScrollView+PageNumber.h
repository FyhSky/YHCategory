//
//  UIScrollView+PageNumber.h
//  YHCategory
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (PageNumber)

-(NSInteger)totalPages;

-(void)setPageNumber:(NSInteger)pageNumber animated:(BOOL)animated;
-(void)setPageNumber:(NSInteger)pageNumber;
-(NSInteger)pageNumber;

-(BOOL)isLastPage;
-(BOOL)isFirstPage;

@end
