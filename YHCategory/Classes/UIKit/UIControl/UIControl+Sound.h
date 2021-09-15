//
//  UIControl+Sound.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIControl (Sound)

/// 不同事件增加不同声音
- (void)setSoundNamed:(NSString *)name forControlEvent:(UIControlEvents)controlEvent;

@end
