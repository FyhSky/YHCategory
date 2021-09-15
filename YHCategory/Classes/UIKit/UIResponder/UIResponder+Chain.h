//
//  UIResponder+Chain.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIResponder (Chain)

/**
 *  @brief  响应者链
 *
 *  @return  响应者链
 */
- (NSString *)responderChainDescription;

@end
