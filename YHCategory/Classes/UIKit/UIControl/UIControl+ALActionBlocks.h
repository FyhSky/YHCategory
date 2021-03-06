//
//  UIControl+ALActionBlocks.h
//  ALActionBlocks
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2013 Andy LaVoy. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^ALActionBlock)(id weakSender);

static NSString *const ALActionBlocksArray = @"ALActionBlocksArray";

@interface ALActionBlockWrapper : NSObject

@property (nonatomic, copy) ALActionBlock actionBlock;
@property (nonatomic, assign) UIControlEvents controlEvents;

- (void)invokeBlock:(id)sender;

@end

@interface UIControl (ALActionBlocks)

- (void)handleControlEvents:(UIControlEvents)controlEvents withBlock:(ALActionBlock)actionBlock;
- (void)removeActionBlocksForControlEvents:(UIControlEvents)controlEvents;

@end
