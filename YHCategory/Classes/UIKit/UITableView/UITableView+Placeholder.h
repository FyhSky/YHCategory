//
//  UITableView+Placeholder.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^PlaceholderClickBlock)(UIView *view);

@interface UITableView (Placeholder)

@property (nonatomic, assign) BOOL showPlaceholder;

@property (nonatomic, copy) PlaceholderClickBlock placeholderClickBlock;
@property (nonatomic, copy) NSString *placeholderText;
@property (nonatomic, copy) UIImage *placeholderImage;
@property (nonatomic, copy) UIView *placeholderCustomView;

@end
