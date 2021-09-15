//
//  UINavigationItem+Lock.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationItem (Lock)

/**
 *  @brief  锁定RightItem
 *
 *  @param lock 是否锁定
 */
- (void)lockRightItem:(BOOL)lock;
/**
 *  @brief  锁定LeftItem
 *
 *  @param lock 是否锁定
 */
- (void)lockLeftItem:(BOOL)lock;

@end
