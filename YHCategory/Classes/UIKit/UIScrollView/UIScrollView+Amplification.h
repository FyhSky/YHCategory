//
//  UIScrollView+Amplification.h
//  YHCategory
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (Amplification)

@property (nonatomic, strong) UIView *bigView;
@property (nonatomic, strong) UIView *headerView;
-(void)setBigView:(UIView *)bigView withHeaderView:(UIView *)headerView;

@end
