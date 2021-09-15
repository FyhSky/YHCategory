//
//  CAShapeLayer+UIBezierPath.h
//  YHCategory
//
//  Created by FyhSky on 09/15/2021.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

@interface CAShapeLayer (UIBezierPath)

/**Update CAShapeLayer with UIBezierPath.*/
- (void)updateWithBezierPath:(UIBezierPath *)path;

/**Get UIBezierPath object, constructed from CAShapeLayer.*/
- (UIBezierPath *)bezierPath;

@end
