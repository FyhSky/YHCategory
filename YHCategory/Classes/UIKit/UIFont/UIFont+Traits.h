//
//  UIFont+Traits.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (Traits)

@property (nonatomic, readonly) BOOL isBold;    
@property (nonatomic, readonly) BOOL isItalic;
@property (nonatomic, readonly) BOOL isMonoSpace;
@property (nonatomic, readonly) BOOL isColorGlyphs;
@property (nonatomic, readonly) CGFloat fontWeight;

@end
