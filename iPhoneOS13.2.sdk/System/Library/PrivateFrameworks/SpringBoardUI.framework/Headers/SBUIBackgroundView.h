//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoardUI/SBUIBackgroundStyleTransitioning-Protocol.h>
#import <SpringBoardUI/SBUIWallpaperOverlay-Protocol.h>

@class BSUIBackdropView, MTMaterialView, NSString, UIColor;

@interface SBUIBackgroundView : UIView <SBUIBackgroundStyleTransitioning, SBUIWallpaperOverlay>
{
    long long _style;
    long long _transitionStyle;
    BOOL _transitioning;
    double _progress;
    BSUIBackdropView *_backdropView;
    BOOL _isReducedTransparencyEnabled;
    UIView *_reduceTransparencyView;
    UIView *_reduceTransparencyTintingView;
    UIView *_sourceOverView;
    UIView *_darkenSourceOverView;
    UIView *_tintView;
    UIView *_lightenSourceOverView;
    UIColor *_reduceTransparencyBackingColor;
    MTMaterialView *_luminanceView;
}

@property(readonly, nonatomic, getter=isTransitioningBackgroundStyle) BOOL transitioningBackgroundStyle; // @synthesize transitioningBackgroundStyle=_transitioning;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_style;
// - (void).cxx_destruct;
- (double)_valueFromStart:(double)arg1 toEnd:(double)arg2 withFraction:(double)arg3;
- (id)_backgroundColorForDarkenAlpha:(double)arg1 andProgress:(double)arg2;
- (void)_luminanceWithProgress:(double)arg1;
- (void)_lightenSourceOverWithProgress:(double)arg1;
- (void)_reduceTransparencyWithProgress:(double)arg1;
- (void)_tintWithProgress:(double)arg1 backgroundColorAlpha:(double)arg2;
- (void)_darkenWithProgress:(double)arg1;
- (double)_reducedTransparencyValueForBackgroundStyle:(long long)arg1;
- (BOOL)_shouldApplyReducedTransparencyTintForBackgroundStyle:(long long)arg1;
- (double)_lightenSourceOverValueForBackgroundStyle:(long long)arg1;
- (double)_luminanceValueForBackgroundStyle:(long long)arg1;
- (double)_tintValueForBackgroundStyle:(long long)arg1;
- (double)_tintColorAlphaForBackgroundStyle:(long long)arg1;
- (double)_darkenValueForBackgroundStyle:(long long)arg1;
- (void)_updateAppearanceForTransitionFromStyle:(long long)arg1 toStyle:(long long)arg2 withProgress:(double)arg3;
- (void)_updateAppearanceForBackgroundStyle:(long long)arg1 transitionToSettings:(BOOL)arg2;
- (void)_reduceTransparencyEnabledStateDidChange:(id)arg1;
- (void)_updateReduceTransparencyTinting;
- (void)_updateReduceTransparencyTintingWithProgressWeighting:(double)arg1;
- (void)setReduceTransparencyBackingColor:(id)arg1;
- (id)backdropView;
@property(retain, nonatomic) NSString *groupName;
- (void)completeTransitionToBackgroundStyle:(long long)arg1;
- (void)updateBackgroundStyleTransitionProgress:(double)arg1;
- (void)beginTransitionToBackgroundStyle:(long long)arg1;
- (void)modifyAllViewsWithChanges:(CDUnknownBlockType)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

