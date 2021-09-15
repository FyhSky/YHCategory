//
//  UIImage+FileName.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (FileName)

/// 根据main bundle中的文件名读取图片
+ (UIImage *)imageWithFileName:(NSString *)name;

/// 根据指定bundle中的文件名读取图片
+ (UIImage *)imageWithFileName:(NSString *)name inBundle:(NSBundle*)bundle;

@end
