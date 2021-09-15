//
//  NSIndexPath+Offset.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSIndexPath (Offset)

/// previous row indexpath
- (NSIndexPath *)previousRow;

/// next row indexpath
- (NSIndexPath *)nextRow;

/// previous item indexpath
- (NSIndexPath *)previousItem;

/// next item indexpath
- (NSIndexPath *)nextItem;

/// next section indexpath
- (NSIndexPath *)nextSection;

/// previous section indexpath
- (NSIndexPath *)previousSection;

@end
