//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <FitnessUI/FIUIChartDataGroupDataSource-Protocol.h>
#import <FitnessUI/FIUIChartSeriesDataSource-Protocol.h>

@class FIUIChartBackgroundView, FIUIChartDataGroup, FIUIChartTimeAxisDescriptor, NSArray, NSDateInterval, NSNumber;
@protocol FIUIChartAxisDescriptor, FIUIChartDataSource;

@interface FIUIChartView : UIView <FIUIChartDataGroupDataSource, FIUIChartSeriesDataSource>
{
    FIUIChartDataGroup *_dataGroup;
    NSArray *_xAxisLabels;
    NSArray *_xAxisSubLabels;
    NSArray *_yAxisLabels;
    NSArray *_chartSeries;
    UIView *_containerView;
    BOOL _labelsInsetChartBackground;
    BOOL _xAxisLabelsShouldBaselineAlign;
    id <FIUIChartDataSource> _dataSource;
    FIUIChartTimeAxisDescriptor *_xAxisDescriptor;
    id <FIUIChartAxisDescriptor> _yAxisDescriptor;
    FIUIChartBackgroundView *_backgroundView;
    double _yAxisEdgeInset;
    double _xAxisToLabelPadding;
    double _animationDuration;
    NSDateInterval *_dateInterval;
    NSNumber *_minYValue;
    NSNumber *_maxYValue;
    NSNumber *_highlightedYValue;
    UIEdgeInsets _seriesEdgeInsets;
    UIEdgeInsets _contentBufferEdgeInsets;
}

@property(retain, nonatomic) NSNumber *highlightedYValue; // @synthesize highlightedYValue=_highlightedYValue;
@property(retain, nonatomic) NSNumber *maxYValue; // @synthesize maxYValue=_maxYValue;
@property(retain, nonatomic) NSNumber *minYValue; // @synthesize minYValue=_minYValue;
@property(retain, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) UIEdgeInsets contentBufferEdgeInsets; // @synthesize contentBufferEdgeInsets=_contentBufferEdgeInsets;
@property(nonatomic) UIEdgeInsets seriesEdgeInsets; // @synthesize seriesEdgeInsets=_seriesEdgeInsets;
@property(nonatomic) BOOL xAxisLabelsShouldBaselineAlign; // @synthesize xAxisLabelsShouldBaselineAlign=_xAxisLabelsShouldBaselineAlign;
@property(nonatomic) BOOL labelsInsetChartBackground; // @synthesize labelsInsetChartBackground=_labelsInsetChartBackground;
@property(nonatomic) double xAxisToLabelPadding; // @synthesize xAxisToLabelPadding=_xAxisToLabelPadding;
@property(nonatomic) double yAxisEdgeInset; // @synthesize yAxisEdgeInset=_yAxisEdgeInset;
@property(retain, nonatomic) FIUIChartBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) id <FIUIChartAxisDescriptor> yAxisDescriptor; // @synthesize yAxisDescriptor=_yAxisDescriptor;
@property(retain, nonatomic) FIUIChartTimeAxisDescriptor *xAxisDescriptor; // @synthesize xAxisDescriptor=_xAxisDescriptor;
@property(nonatomic) __weak id <FIUIChartDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (id)maxYValueForChartSeries:(id)arg1;
- (id)minYValueForChartSeries:(id)arg1;
- (id)maxXValueForChartSeries:(id)arg1;
- (id)minXValueForChartSeries:(id)arg1;
- (id)dataGroup:(id)arg1 labelsForSetAtIndex:(NSUInteger)arg2;
- (id)dataGroup:(id)arg1 dataPointsForSetAtIndex:(NSUInteger)arg2;
- (id)dataGroup:(id)arg1 pointForSetAtIndex:(NSUInteger)arg2 pointIndex:(NSUInteger)arg3;
- (NSUInteger)dataGroup:(id)arg1 numberOfPointsInSetAtIndex:(NSUInteger)arg2;
- (NSUInteger)numberOfDataSetsInGroup:(id)arg1;
- (id)_labelsForSeriesAtIndex:(NSUInteger)arg1;
- (id)_dataPointsForSeriesAtIndex:(NSUInteger)arg1;
- (id)_dataPointAtIndex:(NSUInteger)arg1 forSeriesAtIndex:(NSUInteger)arg2;
- (NSUInteger)_numberOfDataPointsForSeriesAtIndex:(NSUInteger)arg1;
- (id)_seriesAtIndex:(NSUInteger)arg1;
- (NSUInteger)_numberOfSeries;
- (float)_relativePositionForXPlaneValue:(id)arg1;
- (double)_absolutePositionForXPlaneValue:(id)arg1;
- (CGRect)_insetChartRect;
- (CGRect)_chartRect;
- (double)_yAxisLabelPadding;
- (double)_xAxisLabelPaddingForBackground:(BOOL)arg1;
- (void)_orderSubviews;
- (void)_layoutChartSeries;
- (void)_layoutXAxisLabels;
- (void)_layoutYAxisLabels;
- (void)_layoutAxisLabels;
- (void)_layoutContainerView;
- (void)layoutSubviews;
- (void)_updateHighlightedValue;
- (void)_adjustMinMaxValues;
- (void)_updateDataSeries;
- (void)_reloadDataSeries;
- (void)_updateBackgroundView;
- (void)selectAxisPoint:(long long)arg1 selected:(BOOL)arg2;
- (void)reloadData;
- (id)initWithDateInterval:(id)arg1;
- (id)init;

@end

