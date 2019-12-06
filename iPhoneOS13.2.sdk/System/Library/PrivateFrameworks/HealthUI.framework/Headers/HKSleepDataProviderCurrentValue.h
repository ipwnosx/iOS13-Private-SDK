//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDataProviderValue-Protocol.h>

@class NSDate, NSNumber;

@interface HKSleepDataProviderCurrentValue : NSObject <HKDataProviderValue>
{
    NSNumber *_timeIntervalSlept;
    NSDate *_date;
    long long _categoryValue;
}

+ (id)dataProviderValueWithSleepQueryResult:(id)arg1;
@property(readonly, nonatomic) long long categoryValue; // @synthesize categoryValue=_categoryValue;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
// - (void).cxx_destruct;
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)initWithTimeInterval:(double)arg1 categoryValue:(long long)arg2;

@end

