//
//  UIView+Animation.m
//  YHCategory
//  https://github.com/r3econ/UIView-Animation-Extensions
// Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "UIView+Animation.h"

@implementation UIView (Animation)

- (void)shakeHorizontally{
    CAKeyframeAnimation *animation = [CAKeyframeAnimation animationWithKeyPath:@"transform.translation.x"];
    
    animation.timingFunction = [CAMediaTimingFunction functionWithName:kCAMediaTimingFunctionLinear];
    animation.duration = 0.5f;
    animation.values = @[@(-12), @(12), @(-8), @(8), @(-4), @(4), @(0)];
    
    [self.layer addAnimation:animation forKey:@"shake"];
}


- (void)shakeVertically{
    CAKeyframeAnimation *animation = [CAKeyframeAnimation animationWithKeyPath:@"transform.translation.y"];
    
    animation.timingFunction = [CAMediaTimingFunction functionWithName:kCAMediaTimingFunctionLinear];
    animation.duration = 0.5f;
    animation.values = @[@(-12), @(12), @(-8), @(8), @(-4), @(4), @(0)];
    
    [self.layer addAnimation:animation forKey:@"shake"];
}


- (void)applyMotionEffects{
    // Motion effects are available starting from iOS 7.
    if (([[[UIDevice currentDevice] systemVersion] compare:@"7.0"
                                                   options:NSNumericSearch] != NSOrderedAscending)){
        
        UIInterpolatingMotionEffect *horizontalEffect = [[UIInterpolatingMotionEffect alloc] initWithKeyPath:@"center.x"
                                                                                                        type:UIInterpolatingMotionEffectTypeTiltAlongHorizontalAxis];
        horizontalEffect.minimumRelativeValue = @(-10.0f);
        horizontalEffect.maximumRelativeValue = @( 10.0f);
        UIInterpolatingMotionEffect *verticalEffect = [[UIInterpolatingMotionEffect alloc] initWithKeyPath:@"center.y"
                                                                                                      type:UIInterpolatingMotionEffectTypeTiltAlongVerticalAxis];
        verticalEffect.minimumRelativeValue = @(-10.0f);
        verticalEffect.maximumRelativeValue = @( 10.0f);
        UIMotionEffectGroup *motionEffectGroup = [[UIMotionEffectGroup alloc] init];
        motionEffectGroup.motionEffects = @[horizontalEffect, verticalEffect];
        
        [self addMotionEffect:motionEffectGroup];
    }
}


- (void)pulseToSize:(CGFloat)scale
           duration:(NSTimeInterval)duration
             repeat:(BOOL)repeat{
    CABasicAnimation *pulseAnimation = [CABasicAnimation animationWithKeyPath:@"transform.scale"];
    
    pulseAnimation.duration = duration;
    pulseAnimation.toValue = [NSNumber numberWithFloat:scale];
    pulseAnimation.timingFunction = [CAMediaTimingFunction functionWithName:kCAMediaTimingFunctionEaseInEaseOut];
    pulseAnimation.autoreverses = YES;
    pulseAnimation.repeatCount = repeat ? HUGE_VALF : 0;
    
    [self.layer addAnimation:pulseAnimation
                      forKey:@"pulse"];
}


- (void)flipWithDuration:(NSTimeInterval)duration
               direction:(UIViewAnimationFlipDirection)direction
             repeatCount:(NSUInteger)repeatCount
             autoreverse:(BOOL)shouldAutoreverse{
    NSString *subtype = nil;
    
    switch (direction){
        case UIViewAnimationFlipDirectionFromTop:
            subtype = @"fromTop";
            break;
        case UIViewAnimationFlipDirectionFromLeft:
            subtype = @"fromLeft";
            break;
        case UIViewAnimationFlipDirectionFromBottom:
            subtype = @"fromBottom";
            break;
        case UIViewAnimationFlipDirectionFromRight:
        default:
            subtype = @"fromRight";
            break;
    }
    
    CATransition *transition = [CATransition animation];
    
    transition.startProgress = 0.0f;
    transition.endProgress = 1.0f;
    transition.type = @"flip";
    transition.subtype = subtype;
    transition.duration = duration;
    transition.repeatCount = repeatCount;
    transition.autoreverses = shouldAutoreverse;
    
    [self.layer addAnimation:transition
                      forKey:@"spin"];
}


- (void)rotateToAngle:(CGFloat)angle
             duration:(NSTimeInterval)duration
            direction:(UIViewAnimationRotationDirection)direction
          repeatCount:(NSUInteger)repeatCount
          autoreverse:(BOOL)shouldAutoreverse;{
    CABasicAnimation *rotationAnimation = [CABasicAnimation animationWithKeyPath:@"transform.rotation.z"];
    
    rotationAnimation.toValue = @(direction == UIViewAnimationRotationDirectionRight ? angle : -angle);
    rotationAnimation.duration = duration;
    rotationAnimation.autoreverses = shouldAutoreverse;
    rotationAnimation.repeatCount = repeatCount;
    rotationAnimation.timingFunction = [CAMediaTimingFunction functionWithName:kCAMediaTimingFunctionEaseInEaseOut];
    
    [self.layer addAnimation:rotationAnimation
                      forKey:@"transform.rotation.z"];
}


- (void)stopAnimation{
    [CATransaction begin];
    [self.layer removeAllAnimations];
    [CATransaction commit];
    
    [CATransaction flush];
}


- (BOOL)isBeingAnimated{
    return [self.layer.animationKeys count];
}

@end
