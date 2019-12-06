//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//





@class CLKDevice, CLKGaugeProvider, NSArray, NTKRichComplicationShapeView;
@protocol CLKMonochromeFilterProvider;

@interface NTKRichComplicationProgressView : UIView
{
    CLKDevice *_device;
    NSNumber *_updateToken;
    float _currentBackgroundViewAlphaPercentage;
    BOOL _enabled;
    id _filterProvider;
    NSArray *_gradientColors;
    double _progress;
    long long _style;
    CLKGaugeProvider *_gaugeProvider;
    NTKRichComplicationShapeView *_backgroundView;
    NTKRichComplicationShapeView *_foregroundView;
    UIView *_ringView;
}

@property(readonly, nonatomic) UIView *ringView; // @synthesize ringView=_ringView;
@property(readonly, nonatomic) NTKRichComplicationShapeView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(readonly, nonatomic) NTKRichComplicationShapeView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(nonatomic) __weak id filterProvider; // @synthesize filterProvider=_filterProvider;
// - (void).cxx_destruct;
- (id)colorForView:(id)arg1 accented:(BOOL)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (void)_createRingView;
- (void)_applyStyle;
- (void)_adjustBackgroundViewAlphaWithPercentage:(float)arg1;
- (void)_updateUIFromGaugeProvider;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)animateToProgress:(float)arg1 duration:(double)arg2;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 locations:(id)arg2;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1;
- (void)setGradientColors:(id)arg1 locations:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initForDevice:(id)arg1 backgroundShapeView:(id)arg2 foregroundShapeView:(id)arg3;

@end

