//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//




@class NSArray, NTKExplorerDotColorOptions, NTKExplorerDotLayoutConstraints, UIColor;
@protocol CLKMonochromeFilterProvider;

@interface NTKExplorerStatusView : UIView
{
    NSArray *_dotLayers;
    BOOL _observing;
    long long _targetDotPosition;
    BOOL _showsFullSignalStrength;
    id _filterProvider;
    NTKExplorerDotLayoutConstraints *_dotLayoutConstraints;
    NTKExplorerDotColorOptions *_dotColorOptions;
    long long _position;
    long long _signalStrengthBars;
}

+ (id)noServiceDotColor;
+ (id)connectedDotColor;
+ (double)noServiceDotHeight;
+ (double)dotBorderWidth;
+ (double)dotSpacing;
+ (double)dotDiameter;
@property(nonatomic) BOOL showsFullSignalStrength; // @synthesize showsFullSignalStrength=_showsFullSignalStrength;
@property(nonatomic) long long signalStrengthBars; // @synthesize signalStrengthBars=_signalStrengthBars;
@property(readonly, nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) NTKExplorerDotColorOptions *dotColorOptions; // @synthesize dotColorOptions=_dotColorOptions;
@property(retain, nonatomic) NTKExplorerDotLayoutConstraints *dotLayoutConstraints; // @synthesize dotLayoutConstraints=_dotLayoutConstraints;
@property(nonatomic) __weak id filterProvider; // @synthesize filterProvider=_filterProvider;
// - (void).cxx_destruct;
- (void)_layoutDotLayers;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
@property(readonly, nonatomic) UIColor *noServiceDotColor;
@property(readonly, nonatomic) UIColor *connectedDotBackgroundColor;
@property(readonly, nonatomic) UIColor *connectedDotColor;
@property(readonly) double noServiceDotHeight;
@property(readonly) double dotSpacing;
@property(readonly) double dotBorderWidth;
@property(readonly) double dotDiameter;
- (void)_updateDotFillStates;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setDotPosition:(long long)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(CGRect)arg1 dotLayoutConstraints:(id)arg2 dotColorOptions:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;

@end

