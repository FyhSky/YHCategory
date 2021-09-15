//
//  UITableViewCell+NIB.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableViewCell (NIB)

/// 加载同类名的nib
+ (UINib*)nib;

@end
