//
//  NSString+AttributedBuilder.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//


#import <UIKit/UIKit.h>

@class YHAttributedStringBuilder;
@interface NSString (AttributedBuilder)

- (YHAttributedStringBuilder *)builder ;

@end

/**-----------------------------辅助类-------------------------------**/
/// 区间
@interface YHAttributedStringRange : NSObject

/// 字体
-(YHAttributedStringRange *)setFont:(UIFont *)font;
/// 文字颜色
-(YHAttributedStringRange *)setTextColor:(UIColor *)color;
/// 背景色
-(YHAttributedStringRange *)setBackgroundColor:(UIColor *)color;
/// 段落样式
-(YHAttributedStringRange *)setParagraphStyle:(NSParagraphStyle *)paragraphStyle;
/// 连体字符
-(YHAttributedStringRange *)setLigature:(BOOL)ligature;
/// 字间距
-(YHAttributedStringRange *)setKern:(CGFloat)kern;
/// 行间距
-(YHAttributedStringRange *)setLineSpacing:(CGFloat)lineSpacing;
/// 删除线
-(YHAttributedStringRange *)setStrikethroughStyle:(int)strikethroughStyle;
/// 删除线颜色
-(YHAttributedStringRange *)setStrikethroughColor:(UIColor *)StrikethroughColor NS_AVAILABLE_IOS(7_0);
/// 下划线
-(YHAttributedStringRange *)setUnderlineStyle:(NSUnderlineStyle)underlineStyle;
/// 下划线颜色
-(YHAttributedStringRange *)setUnderlineColor:(UIColor *)underlineColor NS_AVAILABLE_IOS(7_0);
/// 阴影
-(YHAttributedStringRange *)setShadow:(NSShadow *)shadow;
-(YHAttributedStringRange *)setTextEffect:(NSString *)textEffect NS_AVAILABLE_IOS(7_0);
/// 将区域中的特殊字符: NSAttachmentCharacter,替换为attachement中指定的图片,这个来实现图片混排
-(YHAttributedStringRange *)setAttachment:(NSTextAttachment *)attachment NS_AVAILABLE_IOS(7_0);
/// 设置区域内的文字点击后打开的链接
- (YHAttributedStringRange *)setLink:(NSURL *)url NS_AVAILABLE_IOS(7_0);
/// 设置基线的偏移量，正值为往上，负值为往下，可以用于控制UILabel的居顶或者居低显示
-(YHAttributedStringRange *)setBaselineOffset:(CGFloat)baselineOffset NS_AVAILABLE_IOS(7_0);
/// 设置倾斜度
-(YHAttributedStringRange *)setObliqueness:(CGFloat)obliqueness NS_AVAILABLE_IOS(7_0);
/// 压缩文字，正值为伸，负值为缩
-(YHAttributedStringRange *)setExpansion:(CGFloat)expansion NS_AVAILABLE_IOS(7_0);
/// 中空文字的颜色
-(YHAttributedStringRange *)setStrokeColor:(UIColor *)strokeColor;
/// 中空的线宽度
-(YHAttributedStringRange *)setStrokeWidth:(CGFloat)strokeWidth;

///设置多个属性
-(YHAttributedStringRange *)setAttributes:(NSDictionary *)dict;

@end

/// 构造器
@interface YHAttributedStringBuilder : NSObject

+(YHAttributedStringBuilder *)builderWith:(NSString *)string;
-(id)initWithString:(NSString *)string;

/// 指定区域,如果没有属性串或者字符串为nil则返回nil
-(YHAttributedStringRange *)range:(NSRange)range;
/// 全部字符
-(YHAttributedStringRange *)allRange;
/// 最后一个字符
-(YHAttributedStringRange *)lastRange;
/// 最后N个字符
-(YHAttributedStringRange *)lastNRange:(NSInteger)length;
/// 第一个字符
-(YHAttributedStringRange *)firstRange;
/// 前面N个字符
-(YHAttributedStringRange *)firstNRange:(NSInteger)length;
/// 用于选择特殊的字符
-(YHAttributedStringRange *)characterSet:(NSCharacterSet*)characterSet;
/// 用于选择特殊的字符串
-(YHAttributedStringRange *)includeString:(NSString*)includeString all:(BOOL)all;
/// 正则表达式
-(YHAttributedStringRange *)regularExpression:(NSString*)regularExpression all:(BOOL)all;


//段落处理,以\n结尾为一段，如果没有段落则返回nil
/// 第一段
-(YHAttributedStringRange *)firstParagraph;
/// 最后一段
-(YHAttributedStringRange *)nextParagraph;

/// 插入，如果为0则是头部，如果为-1则是尾部
-(void)insert:(NSInteger)pos attrstring:(NSAttributedString *)attrstring;
/// 插入，如果为0则是头部，如果为-1则是尾部
-(void)insert:(NSInteger)pos attrBuilder:(YHAttributedStringBuilder *)attrBuilder;

/// 构造好的attributedString
-(NSAttributedString *)commit;

@end
