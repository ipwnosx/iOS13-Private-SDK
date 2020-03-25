//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (RTExtensions)
+ (id)dateBisectingDate1:(id)arg1 date2:(id)arg2;
+ (id)dateWithHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3;
+ (id)dateWithResolution:(NSUInteger)arg1 calendar:(id)arg2;
+ (id)dateWithResolution:(NSUInteger)arg1;
+ (id)dateFormatter;
+ (id)stringFromTimestamp:(double)arg1;
+ (id)endOfDay;
+ (id)startOfDay;
- (id)dateByRoundingWithTimeQuantization:(long long)arg1;
- (id)dateByAddingUnit:(NSUInteger)arg1 value:(long long)arg2;
- (id)dateReducedToResolution:(NSUInteger)arg1 calendar:(id)arg2;
- (id)dateReducedToResolution:(NSUInteger)arg1;
- (id)stringFromDate;
- (id)weekdayStringFromDate;
- (long long)weekday;
- (NSUInteger)minute;
- (NSUInteger)hour;
- (id)endOfDay;
- (id)startOfDay;
- (id)dateOfTimestampForCurrentCalendar;
- (id)dateOfTimestampForCalendar:(id)arg1;
- (BOOL)isOnOrAfter:(id)arg1;
- (BOOL)isAfterDate:(id)arg1;
- (BOOL)isOnOrBefore:(id)arg1;
- (BOOL)isBeforeDate:(id)arg1;
- (BOOL)betweenDate:(id)arg1 andDate:(id)arg2;
@end
