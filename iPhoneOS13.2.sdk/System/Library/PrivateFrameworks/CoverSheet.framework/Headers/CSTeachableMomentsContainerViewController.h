//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>


@class CSHomeAffordanceViewController, CSTeachableMomentsContainerView, NSMutableDictionary, NSTimer;
@protocol SBDashBoardHomeAffordanceAnimationViewProviding, SBUIBiometricResource;

@interface CSTeachableMomentsContainerViewController : CSCoverSheetViewControllerBase <CAAnimationDelegate>
{
    BOOL _authenticated;
    BOOL _updateTextLabelOnNextAnimation;
    BOOL _controlCenterCoachingIsHidden;
    CSHomeAffordanceViewController *_homeAffordanceViewController;
    NSUInteger _animationState;
    id <SBDashBoardHomeAffordanceAnimationViewProviding> _viewProvider;
    id <SBUIBiometricResource> _biometricResource;
    NSTimer *_fireOffAnimationTimer;
    NSMutableDictionary *_cachedLegibilityLabels;
}

+ (id)_animationKeyForKeyPath:(id)arg1 iteration:(NSUInteger)arg2 reset:(BOOL)arg3;
+ (void)_addRepeatedAnimationWithProvider:(CDUnknownBlockType)arg1 toLayer:(id)arg2;
@property(nonatomic) BOOL controlCenterCoachingIsHidden; // @synthesize controlCenterCoachingIsHidden=_controlCenterCoachingIsHidden;
@property(retain, nonatomic) NSMutableDictionary *cachedLegibilityLabels; // @synthesize cachedLegibilityLabels=_cachedLegibilityLabels;
@property(nonatomic) BOOL updateTextLabelOnNextAnimation; // @synthesize updateTextLabelOnNextAnimation=_updateTextLabelOnNextAnimation;
@property(nonatomic) BOOL authenticated; // @synthesize authenticated=_authenticated;
@property(retain, nonatomic) NSTimer *fireOffAnimationTimer; // @synthesize fireOffAnimationTimer=_fireOffAnimationTimer;
@property(retain, nonatomic) id <SBUIBiometricResource> biometricResource; // @synthesize biometricResource=_biometricResource;
@property(nonatomic) __weak id <SBDashBoardHomeAffordanceAnimationViewProviding> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) NSUInteger animationState; // @synthesize animationState=_animationState;
@property(readonly, nonatomic) CSHomeAffordanceViewController *homeAffordanceViewController; // @synthesize homeAffordanceViewController=_homeAffordanceViewController;
// - (void).cxx_destruct;
- (void)_contentSizeCategoryChanged;
- (void)_updateText:(id)arg1;
- (void)_updateTextLabel;
- (void)_updateTextLabelIfNeeded;
- (NSUInteger)currentState;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_addControlCenterGlyphResetAnimation;
- (id)_controlCenterGlyphAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (void)_addControlCenterGlyphAnimation;
- (void)_addControlCenterGrabberResetAnimation;
- (id)_controlCenterGrabberAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (id)_controlCenterGrabberPositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (void)_addControlCenterGrabberAnimation;
- (void)_addTextResetAnimation;
- (id)_textAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (id)_textPositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (void)_addTextAnimation;
- (void)_addHomeAffordanceResetAnimation;
- (id)_homeAffordancePositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (void)_addHomeAffordanceAnimation;
- (void)_removeNormalAnimationsForKeyPath:(id)arg1 onLayer:(id)arg2;
- (void)_removeResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;
- (void)_addResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;
- (BOOL)_shouldTeachAboutControlCenter;
- (void)_moveUpTimerForFiringAfterDelay:(double)arg1;
- (void)_cancelTimerAndResetAnimation;
- (void)_setupTimerWithDelay:(double)arg1;
- (void)_setupTimer;
- (void)_setControlCenterTutorsHidden:(BOOL)arg1;
@property(readonly, nonatomic) CSTeachableMomentsContainerView *teachableMomentsContainerView;
- (void)_updateLegibilitySettings;
- (BOOL)handleEvent:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

