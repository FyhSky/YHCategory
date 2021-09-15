//
//  NSNumber+Round.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
// Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNumber (Round)

/**
 *  @brief  四舍五入
 *  @param digit  限制最大位数
 *  @return 结果
 */
- (NSNumber*)roundWithDigit:(NSUInteger)digit;

/**
 *  @brief  取上整
 *  @param digit  限制最大位数
 *  @return 结果
 */
- (NSNumber*)ceilWithDigit:(NSUInteger)digit;

/**
 *  @brief  取下整
 *  @param digit  限制最大位数
 *  @return 结果
 */
- (NSNumber*)floorWithDigit:(NSUInteger)digit;

@end
