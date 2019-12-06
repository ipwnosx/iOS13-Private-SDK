//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CPSLabeledValueView, NSCalendar, NSDateComponentsFormatter, NSDateFormatter, NSMeasurement, NSTimeZone;

@interface CPSRouteEstimatesView : UIView
{
    double _estimatedTimeRemaining;
    NSUInteger _timeRemainingColor;
    CPSLabeledValueView *_timeRemainingView;
    NSUInteger _tripEstimateStyle;
    CPSLabeledValueView *_arrivalTimeView;
    CPSLabeledValueView *_distanceRemainingView;
    NSDateFormatter *_arrivalDateFormatter;
    NSDateComponentsFormatter *_remainingTimeFormatter;
    NSCalendar *_calendar;
}

@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, nonatomic) NSDateComponentsFormatter *remainingTimeFormatter; // @synthesize remainingTimeFormatter=_remainingTimeFormatter;
@property(readonly, nonatomic) NSDateFormatter *arrivalDateFormatter; // @synthesize arrivalDateFormatter=_arrivalDateFormatter;
@property(readonly, nonatomic) CPSLabeledValueView *distanceRemainingView; // @synthesize distanceRemainingView=_distanceRemainingView;
@property(readonly, nonatomic) CPSLabeledValueView *arrivalTimeView; // @synthesize arrivalTimeView=_arrivalTimeView;
@property(nonatomic) NSUInteger tripEstimateStyle; // @synthesize tripEstimateStyle=_tripEstimateStyle;
@property(readonly, nonatomic) CPSLabeledValueView *timeRemainingView; // @synthesize timeRemainingView=_timeRemainingView;
@property(nonatomic) NSUInteger timeRemainingColor; // @synthesize timeRemainingColor=_timeRemainingColor;
@property(nonatomic) double estimatedTimeRemaining; // @synthesize estimatedTimeRemaining=_estimatedTimeRemaining;
// - (void).cxx_destruct;
- (void)_setDistanceRemaining:(id)arg1 units:(id)arg2;
- (void)_setTimeRemaining:(id)arg1 units:(id)arg2;
- (void)_setArrivalTime:(id)arg1;
- (id)_timeRemainingColorForColor:(NSUInteger)arg1 style:(NSUInteger)arg2;
- (id)_defaultColorForStyle:(NSUInteger)arg1;
- (id)_orangeColorForStyle:(NSUInteger)arg1;
- (id)_redColorForStyle:(NSUInteger)arg1;
- (id)_greenColorForStyle:(NSUInteger)arg1;
@property(copy, nonatomic) NSMeasurement *distanceRemaining; // @dynamic distanceRemaining;
@property(copy, nonatomic) NSTimeZone *arrivalTimeZone; // @dynamic arrivalTimeZone;
- (void)_updateTextColors;
- (id)initWithStyle:(NSUInteger)arg1;

@end

