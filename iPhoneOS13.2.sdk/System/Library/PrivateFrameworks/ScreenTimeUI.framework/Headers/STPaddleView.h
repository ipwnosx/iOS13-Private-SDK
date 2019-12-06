//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDateFormatter, NSDateIntervalFormatter, STUsageReportGraphDataPoint, UILabel;

__attribute__((visibility("hidden")))
@interface STPaddleView : UIView
{
    STUsageReportGraphDataPoint *_dataPoint;
    UIView *_backgroundView;
    UILabel *_dayLabel;
    UILabel *_dateTimeLabel;
    UILabel *_usageLabel;
    NSDateIntervalFormatter *_hourIntervalDateFormatter;
    NSDateFormatter *_weekdayDateFormatter;
    NSDateFormatter *_monthDateFormatter;
}

@property(readonly) NSDateFormatter *monthDateFormatter; // @synthesize monthDateFormatter=_monthDateFormatter;
@property(readonly) NSDateFormatter *weekdayDateFormatter; // @synthesize weekdayDateFormatter=_weekdayDateFormatter;
@property(readonly) NSDateIntervalFormatter *hourIntervalDateFormatter; // @synthesize hourIntervalDateFormatter=_hourIntervalDateFormatter;
@property(readonly) UILabel *usageLabel; // @synthesize usageLabel=_usageLabel;
@property(readonly) UILabel *dateTimeLabel; // @synthesize dateTimeLabel=_dateTimeLabel;
@property(readonly) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(readonly) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) STUsageReportGraphDataPoint *dataPoint; // @synthesize dataPoint=_dataPoint;
// - (void).cxx_destruct;
- (id)init;

@end

