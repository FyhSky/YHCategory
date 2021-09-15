//
//  UIViewController+KeyboardAnimation.h
//  YHCategory
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^SIAnimationsWithKeyboardBlock)(CGRect keyboardRect, NSTimeInterval duration, BOOL isShowing);
typedef void(^SIFrameChangesAnimationsWithKeyboardBlock)(CGRect keyboardRect, NSTimeInterval duration);
typedef void(^SIBeforeAnimationsWithKeyboardBlock)(CGRect keyboardRect, NSTimeInterval duration, BOOL isShowing);
typedef void(^SICompletionKeyboardAnimations)(BOOL finished);

@interface UIViewController (KeyboardAnimation)

- (void)subscribeKeyboardWithAnimations:(SIAnimationsWithKeyboardBlock)animations
                             completion:(SICompletionKeyboardAnimations)completion;

- (void)subscribeKeyboardWithBeforeAnimations:(SIBeforeAnimationsWithKeyboardBlock)beforeAnimations
                                   animations:(SIAnimationsWithKeyboardBlock)animations
                                   completion:(SICompletionKeyboardAnimations)completion;

- (void)subscribeKeyboardFrameChangesWithAnimations:(SIFrameChangesAnimationsWithKeyboardBlock)animations;

- (void)unsubscribeKeyboard;
- (void)unsubscribeKeyboardFrameChanges;

@end
