//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKSampleType, NSPredicate;

@interface HKTimePeriodSeriesDataSource : HKHealthQueryChartCacheDataSource
{
    HKSampleType *_sampleType;
    NSPredicate *_queryPredicate;
    id /* CDUnknownBlockType */ _userInfoCreationBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ userInfoCreationBlock; // @synthesize userInfoCreationBlock=_userInfoCreationBlock;
@property(retain, nonatomic) NSPredicate *queryPredicate; // @synthesize queryPredicate=_queryPredicate;
@property(retain, nonatomic) HKSampleType *sampleType; // @synthesize sampleType=_sampleType;
// - (void).cxx_destruct;
- (id)_calculateTotalDurationFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 interval:(id)arg4 intervalOut:(id )arg5 intervelCountsOut:(id )arg6;
- (void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)_startOfDayTransform;

@end

