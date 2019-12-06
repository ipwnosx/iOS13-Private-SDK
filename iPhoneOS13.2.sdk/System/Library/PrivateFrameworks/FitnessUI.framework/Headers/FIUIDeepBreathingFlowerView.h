//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <FitnessUI/FIUIDeepBreathingPetalRingGLViewDelegate-Protocol.h>

@class FIUIDeepBreathingPetalRingGLView, NSMutableArray, NSMutableDictionary, NSString, UILabel;

@interface FIUIDeepBreathingFlowerView : UIView <FIUIDeepBreathingPetalRingGLViewDelegate>
{
    NSMutableDictionary *_petalRingsByNumberOfPetals;
    FIUIDeepBreathingPetalRingGLView *_currentPetalRing;
    long long _numberOfVisiblePetals;
    BOOL _showBlurTrails;
    UILabel *_congratulationsLabel;
    NSString *_congratulationsText;
    long long _state;
    double _stateStartTime;
    double _stateEndTime;
    double _sessionDuration;
    double _breathsPerMinute;
    double _petalCountOverride;
    NSMutableArray *_trailAlphaKeyFrames;
    NSMutableArray *_trailAlphaKeyValues;
    double _centerVerticalOffsetBeforeTransitionToConfiguration;
}

// - (void).cxx_destruct;
- (void)_ppt_setPetalCountOverride:(long long)arg1;
- (float)_interpolateWithKeyFrames:(id)arg1 keyValues:(id)arg2 value:(float)arg3;
- (void)_updatePetalsInRange:(NSRange *)arg1 radius:(double)arg2 radialDistance:(double)arg3 angleOffset:(double)arg4 clockwise:(BOOL)arg5 alpha:(float)arg6;
- (void)_updateForBreathWithPetalCount:(long long)arg1 petalRadius:(double)arg2 inhaleDuration:(double)arg3 exhaleDuration:(double)arg4 timeInCurrentBreath:(double)arg5 showBlurTrails:(BOOL)arg6 shouldSpin:(BOOL)arg7;
- (double)_petalCountForMinutesRemaining:(double)arg1;
- (void)_setWindFraction:(double)arg1 smallRadius:(double)arg2 largeRadius:(double)arg3 windType:(long long)arg4 showBlurTrails:(BOOL)arg5;
- (double)_curveEaseInValue:(double)arg1;
- (void)_updateForWindToConfigurationWithFractionComplete:(double)arg1;
- (void)_updateForUnwindToCompletedWithFractionComplete:(double)arg1;
- (CGPoint)_originalRingCenterForWindType:(long long)arg1;
- (void)transitionToCompletedWithDuration:(double)arg1;
- (void)_createCongratulationsLabelIfNeeded;
- (void)_updateForCongratulationsWithTimeInState:(double)arg1 fractionComplete:(double)arg2;
- (void)transitionToCongratulations;
- (void)_updateForGuidingWithTimeInState:(double)arg1;
- (void)startGuidingAtDate:(id)arg1 breathsPerMinute:(double)arg2;
- (void)_updateForOnRampWithTimeInState:(double)arg1;
- (void)_updateForShrinkToOnRampWithFractionComplete:(double)arg1;
- (void)startOnRampAtDate:(id)arg1 sessionDuration:(double)arg2;
- (void)setNumberOfConfigurationPetals:(double)arg1;
- (void)transitionToConfigurationAnimated:(BOOL)arg1;
- (void)setWelcomeWindFraction:(double)arg1;
- (void)petalRingGLViewDisplayLinkDidFire:(id)arg1;
- (void)_updateShaderForNumberOfPetals:(long long)arg1 showBlurTrails:(BOOL)arg2;
- (void)_setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(BOOL)arg2;
- (id)_petalRingWithNumberOfShaderPetals:(long long)arg1 showBlurTrails:(BOOL)arg2;
- (void)_preloadPetalRings;
- (id)_currentPetalRing;
- (void)_setState:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1 congratulationsText:(id)arg2;

@end

