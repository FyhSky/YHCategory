//
//  UITableViewCell+NIB.m
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "UITableViewCell+NIB.h"

@implementation UITableViewCell (NIB)

+ (UINib *)nib {
    return  [UINib nibWithNibName:NSStringFromClass([self class]) bundle:nil];
}

@end
