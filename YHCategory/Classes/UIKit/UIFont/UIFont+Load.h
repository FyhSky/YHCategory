//
//  UIFont+Load.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (Load)

/// Load the font from file path. Support format:TTF,OTF.
/// If return YES, font can be load use it PostScript Name: [UIFont fontWithName:...]
+ (BOOL)loadFontFromPath:(NSString *)path;
+ (void)unloadFontFromPath:(NSString *)path;

+ (UIFont *)loadFontFromData:(NSData *)data;
+ (BOOL)unloadFontFromData:(UIFont *)font;

+ (NSData *)dataFromFont:(UIFont *)font;
+ (NSData *)dataFromCGFont:(CGFontRef)cgFont;

@end
