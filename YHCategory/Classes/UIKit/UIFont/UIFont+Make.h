//
//  UIFont+Make.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>

@interface UIFont (Make)

- (UIFont *)fontWithBold ;
- (UIFont *)fontWithItalic ;
- (UIFont *)fontWithBoldItalic ;
- (UIFont *)fontWithNormal ;

+ (UIFont *)fontWithCTFont:(CTFontRef)CTFont;
+ (UIFont *)fontWithCGFont:(CGFontRef)CGFont size:(CGFloat)size;

- (CTFontRef)CTFontRef ;
- (CGFontRef)CGFontRef ;


@end
