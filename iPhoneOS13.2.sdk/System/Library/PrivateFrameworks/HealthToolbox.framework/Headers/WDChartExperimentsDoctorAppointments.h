//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKInteractiveChartViewController.h>

@class HKHorizontalSingleLineSeries;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsDoctorAppointments : HKInteractiveChartViewController
{
    HKHorizontalSingleLineSeries *_appointmentSeries;
}

@property(readonly, nonatomic) HKHorizontalSingleLineSeries *appointmentSeries; // @synthesize appointmentSeries=_appointmentSeries;
// - (void).cxx_destruct;
- (id)_parseSpecifications:(id)arg1;
- (void)setColor:(id)arg1;
- (id)initWithSpecifications:(id)arg1 profile:(id)arg2 color:(id)arg3;
- (id)initWithAppointments:(id)arg1 profile:(id)arg2 color:(id)arg3;

@end

