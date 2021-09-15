//
//  NSString+VersionCompare.h
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (VersionCompare)

-(NSComparisonResult)compareToVersion:(NSString *)version;

-(BOOL)isOlderThanVersion:(NSString *)version;
-(BOOL)isNewerThanVersion:(NSString *)version;
-(BOOL)isEqualToVersion:(NSString *)version;
-(BOOL)isEqualOrOlderThanVersion:(NSString *)version;
-(BOOL)isEqualOrNewerThanVersion:(NSString *)version;

- (NSString *)getMainVersionWithIntegerCount:(NSInteger)integerCount;
- (BOOL)needsToUpdateToVersion:(NSString *)newVersion mainVersionIntegerCount:(NSInteger)integerCount;

@end
