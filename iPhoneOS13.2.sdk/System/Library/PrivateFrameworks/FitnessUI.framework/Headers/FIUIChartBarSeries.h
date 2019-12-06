//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FitnessUI/FIUIChartNumericSeries.h>

@class NSArray, UIColor;

@interface FIUIChartBarSeries : FIUIChartNumericSeries
{
    BOOL _fadeZeroBars;
    double _barWidth;
    double _barSpacing;
    double _roundedCornerRadius;
    UIColor *_strokeColor;
    double _strokeWidth;
    UIColor *_backgroundStrokeColor;
    double _backgroundStrokeWidth;
    NSArray *_barColors;
    CGGradientRef _barGradient;
    UIColor *_barColor;
    UIColor *_fadedBarColor;
    NSArray *_labelAttributes;
    NSArray *_plotPoints;
    NSArray *_barLabels;
}

@property(retain, nonatomic) NSArray *barLabels; // @synthesize barLabels=_barLabels;
@property(retain, nonatomic) NSArray *plotPoints; // @synthesize plotPoints=_plotPoints;
@property(retain, nonatomic) NSArray *labelAttributes; // @synthesize labelAttributes=_labelAttributes;
@property(retain, nonatomic) UIColor *fadedBarColor; // @synthesize fadedBarColor=_fadedBarColor;
@property(nonatomic) BOOL fadeZeroBars; // @synthesize fadeZeroBars=_fadeZeroBars;
@property(retain, nonatomic) UIColor *barColor; // @synthesize barColor=_barColor;
@property(nonatomic) CGGradientRef barGradient; // @synthesize barGradient=_barGradient;
@property(retain, nonatomic) NSArray *barColors; // @synthesize barColors=_barColors;
@property(nonatomic) double backgroundStrokeWidth; // @synthesize backgroundStrokeWidth=_backgroundStrokeWidth;
@property(retain, nonatomic) UIColor *backgroundStrokeColor; // @synthesize backgroundStrokeColor=_backgroundStrokeColor;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) double roundedCornerRadius; // @synthesize roundedCornerRadius=_roundedCornerRadius;
@property(nonatomic) double barSpacing; // @synthesize barSpacing=_barSpacing;
@property(nonatomic) double barWidth; // @synthesize barWidth=_barWidth;
// - (void).cxx_destruct;
- (void)_translateColorThresholds;
- (void)_strokeRect:(CGRect)arg1 context:(CGContextRef )arg2 color:(CGColorRef)arg3 width:(double)arg4;
- (id)_chartColorForChartYValue:(double)arg1;
- (void)drawLayer:(id)arg1 inContext:(CGContextRef )arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end

