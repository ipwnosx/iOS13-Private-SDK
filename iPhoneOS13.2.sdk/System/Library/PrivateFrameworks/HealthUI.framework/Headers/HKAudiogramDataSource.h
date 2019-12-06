//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeriesDataSource.h>

@class HKGraphSeriesDataBlock;

@interface HKAudiogramDataSource : HKGraphSeriesDataSource
{
    HKGraphSeriesDataBlock *_dataBlock;
}

@property(readonly, nonatomic) HKGraphSeriesDataBlock *dataBlock; // @synthesize dataBlock=_dataBlock;
// - (void).cxx_destruct;
// - (id)cachedBlockForPath:(CDStruct_6ca94699)arg1 context:(id)arg2;
// - (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
// - (CDStruct_6ca94699)blockPathForX:(id)arg1 zoom:(long long)arg2;
- (id)_flatPointsFromSensitivityData:(id)arg1 leftEarSeries:(BOOL)arg2;
- (id)_chartPointsFromSensitivityData:(id)arg1 leftEarSeries:(BOOL)arg2;
- (id)initWithFlatSensitivityData:(id)arg1 forLeftEar:(BOOL)arg2;
- (id)initWithSensitivityData:(id)arg1 forLeftEar:(BOOL)arg2;

@end

