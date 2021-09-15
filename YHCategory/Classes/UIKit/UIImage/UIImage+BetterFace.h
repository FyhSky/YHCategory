//
//  UIImage+BetterFace.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, Accuracy) {
    AccuracyLow = 0,
    AccuracyHigh,
};
@interface UIImage (BetterFace)

- (UIImage *)betterFaceImageForSize:(CGSize)size
                              accuracy:(Accuracy)accurary;

@end
