//
//  NSObject+Property.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  需要进行键转换
 */
@protocol KeyValue <NSObject>
@optional
/**
 *  数组中需要转换的模型类
 *
 *  @return 字典中的key是数组属性名，value是数组中存放模型的Class（Class类型或者NSString类型）
 */
+ (NSDictionary *)objectClassInArray;

/**
 *  将属性名换为其他key去字典中取值
 *
 *  @return 字典中的key是属性名，value是从字典中取值用的key
 */
+ (NSDictionary *)replacedKeyFromPropertyName;

@end


@interface NSObject (Property)<KeyValue>

/**
 *  自动将字典转换为对象
 *
 *  @param dic 需要转换的字典
 *
 *  @return 返回的对象
 */
+ (instancetype)objectWithDictionary:(NSDictionary *)dic ;

@end
