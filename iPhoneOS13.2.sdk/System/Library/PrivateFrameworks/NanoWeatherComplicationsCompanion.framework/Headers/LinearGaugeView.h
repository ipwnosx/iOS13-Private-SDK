//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAGradientLayer, CAShapeLayer, NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface LinearGaugeView : UIView
{
    BOOL _renderValueAsPercentage;
    NSArray *_colorIndices;
    double _value;
    CAGradientLayer *_gaugeLayer;
    double _lastLayoutSubviewsHeight;
    CAShapeLayer *_valueIndicatorLayer;
    UIColor *_indicatorFillColor;
//     CDStruct_81f20f90 _layoutConstants;
}

@property(copy, nonatomic) UIColor *indicatorFillColor; // @synthesize indicatorFillColor=_indicatorFillColor;
@property(retain, nonatomic) CAShapeLayer *valueIndicatorLayer; // @synthesize valueIndicatorLayer=_valueIndicatorLayer;
@property(nonatomic) double lastLayoutSubviewsHeight; // @synthesize lastLayoutSubviewsHeight=_lastLayoutSubviewsHeight;
@property(retain, nonatomic) CAGradientLayer *gaugeLayer; // @synthesize gaugeLayer=_gaugeLayer;
// @property(nonatomic) CDStruct_81f20f90 layoutConstants; // @synthesize layoutConstants=_layoutConstants;
@property(nonatomic, getter=shouldRenderValueAsPercentage) BOOL renderValueAsPercentage; // @synthesize renderValueAsPercentage=_renderValueAsPercentage;
@property(nonatomic) double value; // @synthesize value=_value;
@property(retain, nonatomic) NSArray *colorIndices; // @synthesize colorIndices=_colorIndices;
// - (void).cxx_destruct;
- (void)_setNeedsUpdateGauge;
- (void)updateMonochromeColor:(id)arg1 fraction:(double)arg2;
- (void)applyIndicatorFillColor:(id)arg1;
- (void)applyFilter:(id)arg1;
- (void)applyCGColorsToGradientLayer:(id)arg1;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
// - (id)initWithLayouConstants:(CDStruct_81f20f90)arg1;

@end

