//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKSampleType, NSArray;

@interface HKHorizontalTimePeriodDataSource : HKHealthQueryChartCacheDataSource
{
    HKSampleType *_sampleType;
    id /* CDUnknownBlockType */ _userInfoCreationBlock;
    NSArray *_valueOrder;
}

@property(retain, nonatomic) NSArray *valueOrder; // @synthesize valueOrder=_valueOrder;
@property(copy, nonatomic) id /* CDUnknownBlockType */ userInfoCreationBlock; // @synthesize userInfoCreationBlock=_userInfoCreationBlock;
@property(retain, nonatomic) HKSampleType *sampleType; // @synthesize sampleType=_sampleType;
// - (void).cxx_destruct;
- (id)_organizeSamplesByValueAndDateInterval:(id)arg1;
- (void)_handleSamples:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

