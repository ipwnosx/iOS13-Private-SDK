//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularDailyGraphView.h>

@class NSArray, NSDate, NSDateInterval, NSNumber;

@interface NTKHeartRateRichComplicationRectangularView : NTKRichComplicationRectangularDailyGraphView
{
    double _cornerRadius;
    NSArray *_chartPoints;
    NSNumber *_highBPM;
    NSNumber *_lowBPM;
    NSDate *_measurementDate;
    NSDateInterval *_measurementDateDayInterval;
}

@property(retain, nonatomic) NSDateInterval *measurementDateDayInterval; // @synthesize measurementDateDayInterval=_measurementDateDayInterval;
@property(retain, nonatomic) NSDate *measurementDate; // @synthesize measurementDate=_measurementDate;
@property(nonatomic) NSNumber *lowBPM; // @synthesize lowBPM=_lowBPM;
@property(nonatomic) NSNumber *highBPM; // @synthesize highBPM=_highBPM;
@property(retain, nonatomic) NSArray *chartPoints; // @synthesize chartPoints=_chartPoints;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
// - (void).cxx_destruct;
- (void)_updateDailyLabel:(id)arg1 withBPM:(id)arg2;
- (double)_yValueForPointFromChartPointValue:(id)arg1 betweenHigh:(id)arg2 andLow:(id)arg3 inRect:(CGRect)arg4;
- (double)_xValueForPointFromChartPoint:(id)arg1 inRect:(CGRect)arg2;
- (void)_loadWithMetadata:(id)arg1;
- (void)_loadNoDataState;
- (void)_loadLockedState;
- (void)loadWithMetadata:(id)arg1;
- (void)drawGraph:(CGContextRef )arg1 rect:(CGRect)arg2;
- (id)init;

@end

