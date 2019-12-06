//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CLKDevice, UIColor, UIImageView;

@interface NTKAstronomyLocationDot : UIView
{
    UIView *_outerDot;
    UIImageView *_innerDotImageView;
    BOOL _animating;
    CLKDevice *_device;
    UIColor *_outerDotColor;
    double _outerDotDiameter;
    UIColor *_innerDotColor;
    double _innerDotDiameter;
    double _pulseDuration;
    double _pulseAlphaDelay;
}

+ (double)defaultPulseAlphaDelay;
+ (double)defaultPulseDuration;
+ (double)_defaultInnerDotDiameterForSizeClass:(NSUInteger)arg1;
+ (double)_defaultOuterDotDiameterForSizeClass:(NSUInteger)arg1;
+ (id)_defaultColor;
+ (CGSize)_defaultSize;
@property(nonatomic) BOOL animating; // @synthesize animating=_animating;
@property(nonatomic) double pulseAlphaDelay; // @synthesize pulseAlphaDelay=_pulseAlphaDelay;
@property(nonatomic) double pulseDuration; // @synthesize pulseDuration=_pulseDuration;
@property(nonatomic) double innerDotDiameter; // @synthesize innerDotDiameter=_innerDotDiameter;
@property(retain, nonatomic) UIColor *innerDotColor; // @synthesize innerDotColor=_innerDotColor;
@property(nonatomic) double outerDotDiameter; // @synthesize outerDotDiameter=_outerDotDiameter;
@property(retain, nonatomic) UIColor *outerDotColor; // @synthesize outerDotColor=_outerDotColor;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)stopAnimation;
- (void)startAnimation;
- (void)_generateInnerDotImage;
- (id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2;
- (id)initForDevice:(id)arg1;

@end

