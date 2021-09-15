//
//  UITextView+InputLimit.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextView (InputLimit)

@property (assign, nonatomic)  NSInteger maxLength;//if <=0, no limit

@end
