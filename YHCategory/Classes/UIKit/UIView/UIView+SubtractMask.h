//
//  SubtractMask.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (SubtractMask)

/**
 设置镂空遮罩视图，该方法本质上是设置maskView
 如果寄宿图的内容有更新，需要手动再调用setter方法
 
 @param view 遮罩视图
 */
- (void)setSubtractMaskView:(UIView *)view;

/**
 获取镂空遮罩视图，用于动态修改遮罩的一些属性
 
 @return 遮罩视图
 */
- (UIView *)subtractMaskView;

@end

NS_ASSUME_NONNULL_END
