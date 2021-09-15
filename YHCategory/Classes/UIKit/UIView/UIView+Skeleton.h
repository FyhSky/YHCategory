//
//  UIView+Skeleton.h
//  SkeletonViewDemo
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,SkeletonAnimationStyle) {
    SkeletonAnimationStyleSolid,
    SkeletonAnimationStyleGradientHorizontal,
    SkeletonAnimationStyleGradientVertical,
    SkeletonAnimationStyleOblique
};

@class Skeleton;
@protocol SkeletonLayoutProtocol<NSObject>
@required
- (NSArray<Skeleton *> *)skeletonLayout;

@optional
- (UIColor *)containerBackgroundColor;

@end

@interface Skeleton: UIView

@property (strong, nonatomic) UIColor *skeletonColor;
@property (assign, nonatomic) SkeletonAnimationStyle animationStyle;

- (instancetype)initWithFrame:(CGRect)rect
                    somoColor:(UIColor *)color;

- (instancetype)initWithFrame:(CGRect)rect
                    somoColor:(UIColor *)color
               animationStyle:(SkeletonAnimationStyle)style;

@end

@interface UIView (Skeleton)

@property (strong,nonatomic,readonly) UIView *skeletonContainer;

- (void)beginSkeleton;

- (void)endSkeleton;

@end
