//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBCenterIconZoomAnimator.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>

@class CAMediaTimingFunction, UIViewFloatAnimatableProperty;

@interface SBCoverSheetIconFlyInAnimator : SBCenterIconZoomAnimator <PTSettingsKeyObserver>
{
    double _baselineDistance;
    double _effectMultiplier;
    double _distanceExponent;
    UIViewFloatAnimatableProperty *_labelAlphaDrivingProgressAnimatableProperty;
    CAMediaTimingFunction *_timingFunction;
}

@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *labelAlphaDrivingProgressAnimatableProperty; // @synthesize labelAlphaDrivingProgressAnimatableProperty=_labelAlphaDrivingProgressAnimatableProperty;
// - (void).cxx_destruct;
- (double)_functionWithProgress:(double)arg1 distance:(double)arg2;
- (void)_updateWithSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (double)_labelAlphaForFraction:(double)arg1;
- (void)_updateLabelAlphaForPresentationValue:(BOOL)arg1;
- (void)_createAnimatableProperties;
- (void)_cleanupAnimation;
- (double)_zPositionForPoint:(CGPoint)arg1 center:(CGPoint)arg2 andFraction:(double)arg3;
- (double)_zPositionForView:(id)arg1 center:(CGPoint)arg2 andFraction:(double)arg3;
- (void)_updateDockForFraction:(double)arg1;
- (void)_setAnimationFraction:(double)arg1 withCenter:(CGPoint)arg2;
- (id)initWithFolderController:(id)arg1;

@end

