//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSDateComponents (Additions)
+ (NSUInteger)_hf_allPossibleComponents;
+ (id)hf_zeroDateComponentsWithComponents:(NSUInteger)arg1 calendar:(id)arg2;
+ (id)hf_componentsWithHour:(long long)arg1 minute:(long long)arg2;
+ (id)hf_yearlyIntervalComponents;
+ (id)hf_monthlyIntervalComponents;
+ (id)hf_biweeklyIntervalComponents;
+ (id)hf_weeklyIntervalComponents;
+ (id)hf_dailyIntervalComponents;
+ (id)hf_dailyWeekdayIntervalComponents;
- (NSUInteger)hf_validComponents;
- (long long)hf_compareNextMatchingDate:(id)arg1 withCalendar:(id)arg2;
- (long long)hf_compareNextMatchingDate:(id)arg1;
- (id)hf_negativeValue;
- (id)hf_absoluteValue;
- (double)hf_timeInterval;
- (BOOL)hf_isEqualToHomeKitRecurrence:(id)arg1;
@end

