//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/_HKAudioStandardQuantityContextDelegate.h>

@class HKLineSeries;

@interface _HKAudioVisibleRangeQuantityContextDelegate : _HKAudioStandardQuantityContextDelegate
{
    HKLineSeries *_audioOverlayLineSeries;
}

@property(readonly, nonatomic) HKLineSeries *audioOverlayLineSeries; // @synthesize audioOverlayLineSeries=_audioOverlayLineSeries;
// - (void).cxx_destruct;
- (id)formatterForTimescope:(long long)arg1;
- (void)_enumerateAudioExposureChartPoints:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)alternateLineSeries;
- (id)initWithCustomDataSource:(id)arg1 primaryDisplayType:(id)arg2;

@end

