//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKDisplayType, HKDisplayTypeContextItem, HKInteractiveChartViewController, HKSampleType, NSDateInterval;

@protocol HKOverlayContext <NSObject>
- (HKDisplayTypeContextItem *)contextItemForLastUpdate;
- (void)updateContextItemForDateInterval:(NSDateInterval *)arg1 timeScope:(long long)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (HKDisplayType *)overlayDisplayTypeForTimeScope:(long long)arg1;
- (HKSampleType *)sampleTypeForDateRangeUpdates;

@optional
- (void)invalidateContextItem;
- (void)overlayStateDidChange:(BOOL)arg1 contextItem:(HKDisplayTypeContextItem *)arg2 chartController:(HKInteractiveChartViewController *)arg3;
@end

