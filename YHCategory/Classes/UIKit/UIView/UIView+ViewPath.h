//
//  UIView+ViewPath.h
//  ViewPathDemo
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (ViewPath)

@property (nonatomic, readonly) NSString *viewPath;

@property (nonatomic ,readonly) NSString *viewID;

@end

NS_ASSUME_NONNULL_END
