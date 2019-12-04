//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CLKDevice, NSArray, NSDateFormatter, NSDictionary, NSNumber, UIColor, UILabel;

@interface NTKWellnessRichComplicationChartView : UIView
{
    CLKDevice *_device;
    NSDictionary *_moveChartPoints;
    NSNumber *_maxMoveValue;
    NSDictionary *_exerciseChartPoints;
    NSNumber *_maxExerciseValue;
    NSDictionary *_standChartPoints;
    UIColor *_chartLineColor;
    double _moveChartBottomLineY;
    double _exerciseChartBottomLineY;
    double _standChartBottomLineY;
    NSArray *_chartLineXPositions;
    struct CGGradient *_moveBarGradient;
    UIColor *_moveBarFadedColor;
    struct CGGradient *_exerciseBarGradient;
    UIColor *_exerciseBarFadedColor;
    struct CGGradient *_standBarGradient;
    NSDateFormatter *_hourFormatter;
    UILabel *_midnightHourLabel;
    UILabel *_sixAMHourLabel;
    UILabel *_noonHourLabel;
    UILabel *_sixPMHourLabel;
}

- (double)_exercisePointRelativeHeightForValue:(double)arg1;
- (double)_movePointRelativeHeightForValue:(double)arg1;
- (void)_drawChartsBarsInContext:(struct CGContext *)arg1 lineNumber:(unsigned long long)arg2 xPosition:(double)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_generateStandChartPointsForStandHourInfo:(id)arg1;
- (id)_generateChartPointsForQuantityStatisticsInfo:(id)arg1 withUnit:(id)arg2 accumulateFractionalValues:(_Bool)arg3;
- (id)_keyForDate:(id)arg1;
- (void)setStandGraphData:(id)arg1;
- (void)setExerciseGraphData:(id)arg1;
- (void)setMoveGraphData:(id)arg1;
- (void)_registerForNotifications;
- (void)_currentLocaleChangeOccurred;
- (id)_timeStringByRemovingSpacesFromTimeString:(id)arg1;
- (void)_updateHourLabelsText;
- (void)_createHourFormatter;
- (void)dealloc;
- (id)initForDevice:(id)arg1;

@end
