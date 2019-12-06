//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDTableViewSection.h>

@class HKHealthChartFactory, HKHeartbeatSequenceChartViewController, HKInteractiveChartOverlayViewController, NSMutableArray, WDActivityQueryTestController;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsChartSection : WDTableViewSection
{
    NSMutableArray *_viewControllers;
    HKHeartbeatSequenceChartViewController *_heartbeatSequenceForUpdate;
    HKInteractiveChartOverlayViewController *_heartRateController;
    WDActivityQueryTestController *_activityQueryTestController;
    HKHealthChartFactory *_healthChartFactory;
}

@property(retain, nonatomic) HKHealthChartFactory *healthChartFactory; // @synthesize healthChartFactory=_healthChartFactory;
@property(retain, nonatomic) WDActivityQueryTestController *activityQueryTestController; // @synthesize activityQueryTestController=_activityQueryTestController;
@property(retain, nonatomic) HKInteractiveChartOverlayViewController *heartRateController; // @synthesize heartRateController=_heartRateController;
@property(retain, nonatomic) HKHeartbeatSequenceChartViewController *heartbeatSequenceForUpdate; // @synthesize heartbeatSequenceForUpdate=_heartbeatSequenceForUpdate;
@property(retain, nonatomic) NSMutableArray *viewControllers; // @synthesize viewControllers=_viewControllers;
// - (void).cxx_destruct;
- (void)activityQueryTest:(id)arg1;
- (id)cellForRow:(NSUInteger)arg1 table:(id)arg2;
- (NSUInteger)numberOfRows;
- (id)_audiogramSampleForDate:(id)arg1 sensitivityData:(id)arg2;
- (void)updateTachogram:(id)arg1;
- (id)_buildHeartSequenceDataFromString:(id)arg1;
- (id)_localDateFromString:(id)arg1;
- (id)_dateFormatter;
- (void)setUpWithTableViewController:(id)arg1;
- (id)titleForHeader;

@end

