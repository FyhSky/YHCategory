//
//  UIViewController+RecursiveDescription.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (RecursiveDescription)

/**
 *  @brief  视图层级
 *
 *  @return 视图层级字符串
 */
-(NSString*)recursiveDescription;

@end
