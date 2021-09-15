//
//  UIWebView+Style.m
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "UIWebView+Style.h"

@implementation UIWebView (Style)

- (void)shadowViewHidden:(BOOL)hidden{
    for (UIView *aView in [self subviews]){
        if ([aView isKindOfClass:[UIScrollView class]]){
            [(UIScrollView *)aView setShowsHorizontalScrollIndicator:NO];
            for (UIView *shadowView in aView.subviews){
                if ([shadowView isKindOfClass:[UIImageView class]]){
                    shadowView.hidden = hidden;  //上下滚动出边界时的黑色的图片 也就是拖拽后的上下阴影
                }
            }
        }
    }
}

- (void)showsHorizontalScrollIndicator:(BOOL)hidden{
    for (UIView *aView in [self subviews]){
        if ([aView isKindOfClass:[UIScrollView class]]){
            [(UIScrollView *)aView setShowsHorizontalScrollIndicator:hidden];
        }
    }
}

- (void)showsVerticalScrollIndicator:(BOOL)hidden{
    for (UIView *aView in [self subviews]){
        if ([aView isKindOfClass:[UIScrollView class]]){
            [(UIScrollView *)aView setShowsVerticalScrollIndicator:hidden];
        }
    }
}

-(void)makeTransparent{
    self.backgroundColor = [UIColor clearColor];
    self.opaque = NO;
}

-(void)makeTransparentAndRemoveShadow{
    [self makeTransparent];
    [self shadowViewHidden:YES];
}


@end
