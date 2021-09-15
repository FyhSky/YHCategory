//
//  UIImage+Video.h
//  YHCategory
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Video)

/// 获取视频的截图信息
+ (UIImage *)imageWithVideo:(NSString *)stringURL;

@end
