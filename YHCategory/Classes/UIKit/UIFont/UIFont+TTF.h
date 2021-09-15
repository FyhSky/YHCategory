//
//  UIFont+TTF.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (TTF)

+ (UIFont *)fontWithTTFAtPath:(NSString *)path size:(CGFloat)size;
+ (UIFont *)fontWithTTFAtURL:(NSURL *)URL size:(CGFloat)size;

@end
