//
//  NSDate+Show.m
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "NSDate+Show.h"

@implementation NSDate (Show)

- (NSString *) stringWithDateStyle: (NSDateFormatterStyle) dateStyle timeStyle: (NSDateFormatterStyle) timeStyle{
    NSDateFormatter *formatter = [NSDateFormatter new];
    formatter.dateStyle = dateStyle;
    formatter.timeStyle = timeStyle;
    formatter.locale = [NSLocale currentLocale];
    return [formatter stringFromDate:self];
}

- (NSString *)shortString{
    return [self stringWithDateStyle:NSDateFormatterShortStyle timeStyle:NSDateFormatterShortStyle];
}

- (NSString *)shortTimeString{
    return [self stringWithDateStyle:NSDateFormatterNoStyle timeStyle:NSDateFormatterShortStyle];
}

- (NSString *)shortDateString{
    return [self stringWithDateStyle:NSDateFormatterShortStyle timeStyle:NSDateFormatterNoStyle];
}

- (NSString *)mediumString{
    return [self stringWithDateStyle:NSDateFormatterMediumStyle timeStyle:NSDateFormatterMediumStyle ];
}

- (NSString *)mediumTimeString{
    return [self stringWithDateStyle:NSDateFormatterNoStyle timeStyle:NSDateFormatterMediumStyle ];
}

- (NSString *)mediumDateString{
    return [self stringWithDateStyle:NSDateFormatterMediumStyle  timeStyle:NSDateFormatterNoStyle];
}

- (NSString *)longString{
    return [self stringWithDateStyle:NSDateFormatterLongStyle timeStyle:NSDateFormatterLongStyle ];
}

- (NSString *)longTimeString{
    return [self stringWithDateStyle:NSDateFormatterNoStyle timeStyle:NSDateFormatterLongStyle ];
}

- (NSString *)longDateString{
    return [self stringWithDateStyle:NSDateFormatterLongStyle  timeStyle:NSDateFormatterNoStyle];
}


- (NSString *)weekString {
    return [NSDate weekStringFromDate:self];
}

+ (NSString *)weekStringFromDate:(NSDate *)date {
    NSCalendar *gregorian = [[NSCalendar alloc]
                             initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
    NSDateComponents *comps = [gregorian components:(NSCalendarUnitDay | NSCalendarUnitMonth | NSCalendarUnitYear | NSCalendarUnitWeekday) fromDate:date];
    NSInteger weekday = [comps weekday];
    switch(weekday) {
        case 1:
            return @"?????????";
            break;
        case 2:
            return @"?????????";
            break;
        case 3:
            return @"?????????";
            break;
        case 4:
            return @"?????????";
            break;
        case 5:
            return @"?????????";
            break;
        case 6:
            return @"?????????";
            break;
        case 7:
            return @"?????????";
            break;
        default:
            break;
    }
    return @"";
}

- (NSString *)monthString {
    return [NSDate monthStringFromDate:self] ;
}

+ (NSString *)monthStringFromDate:(NSDate *)date {
    NSCalendar *gregorian = [[NSCalendar alloc]
                             initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
    NSDateComponents *comps = [gregorian components:(NSCalendarUnitDay | NSCalendarUnitMonth | NSCalendarUnitYear | NSCalendarUnitWeekday) fromDate:date];
    NSInteger month = [comps month];
    switch(month) {
        case 1:
            return @"January";
            break;
        case 2:
            return @"February";
            break;
        case 3:
            return @"March";
            break;
        case 4:
            return @"April";
            break;
        case 5:
            return @"May";
            break;
        case 6:
            return @"June";
            break;
        case 7:
            return @"July";
            break;
        case 8:
            return @"August";
            break;
        case 9:
            return @"September";
            break;
        case 10:
            return @"October";
            break;
        case 11:
            return @"November";
            break;
        case 12:
            return @"December";
            break;
        default:
            break;
    }
    return @"";
}


- (NSString *)ymdFormat {
    return [self _stringWithFormat:[NSDate ymdFormat]];
}

+ (NSString *)ymdFormatWithDate:(NSDate *)date {
    return [date _stringWithFormat:[NSDate ymdFormat]];
}


- (NSString *)hmsFormat {
    return [self _stringWithFormat:[NSDate hmsFormat]];
}

+ (NSString *)hmsFormatWithDate:(NSDate *)date {
    return [date _stringWithFormat:[NSDate hmsFormat]];
}

- (NSString *)ymdHmsFormat {
    return [self _stringWithFormat:[NSDate ymdHmsFormat]];
}

+ (NSString *)ymdHmsFormatWithDate:(NSDate *)date {
    return [date _stringWithFormat:[NSDate ymdHmsFormat]];
}

+ (NSString *)ymdFormat {
    return @"yyyy-MM-dd";
}

+ (NSString *)hmsFormat {
    return @"HH:mm:ss";
}

+ (NSString *)ymdHmsFormat {
    return [NSString stringWithFormat:@"%@ %@", [self ymdFormat], [self hmsFormat]];
}

- (NSString *)_stringWithFormat:(NSString *)format {
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:format];
    [formatter setLocale:[NSLocale currentLocale]];
    return [formatter stringFromDate:self];
}

+ (NSString *)chineseCalendarWithDate:(NSDate *)date{
    NSArray *chineseYears = [NSArray arrayWithObjects:
                             @"??????", @"??????", @"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",
                             @"??????",	@"??????",	@"??????",	@"??????", @"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",
                             @"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",
                             @"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",
                             @"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",
                             @"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????",	@"??????", nil];
    
    NSArray *chineseMonths=[NSArray arrayWithObjects:
                            @"??????", @"??????", @"??????", @"??????", @"??????", @"??????", @"??????", @"??????",
                            @"??????", @"??????", @"??????", @"??????", nil];
    
    
    NSArray *chineseDays=[NSArray arrayWithObjects:
                          @"??????", @"??????", @"??????", @"??????", @"??????", @"??????", @"??????", @"??????", @"??????", @"??????",
                          @"??????", @"??????", @"??????", @"??????", @"??????", @"??????", @"??????", @"??????", @"??????", @"??????",
                          @"??????", @"??????", @"??????", @"??????", @"??????", @"??????", @"??????", @"??????", @"??????", @"??????",  nil];
    
    
    NSCalendar *localeCalendar = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierChinese];
    
    unsigned unitFlags = NSCalendarUnitYear | NSCalendarUnitMonth |  NSCalendarUnitDay;
    
    NSDateComponents *localeComp = [localeCalendar components:unitFlags fromDate:date];
    
    if(date){
        NSString *y_str = [chineseYears objectAtIndex:localeComp.year-1];
        NSString *m_str = [chineseMonths objectAtIndex:localeComp.month-1];
        NSString *d_str = [chineseDays objectAtIndex:localeComp.day-1];
        NSString *chineseCal_str =[NSString stringWithFormat: @"%@???%@%@",y_str,m_str,d_str];
        return chineseCal_str;
    }
    return @"???????????????";
}

- (NSString *)chineseCalendar {
    return [NSDate chineseCalendarWithDate:self];
}




@end
