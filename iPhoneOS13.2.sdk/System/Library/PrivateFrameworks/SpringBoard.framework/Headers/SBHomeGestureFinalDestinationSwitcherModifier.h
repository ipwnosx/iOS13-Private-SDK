//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class NSString, SBHomeGestureDockSwitcherModifier;
@protocol SBHomeGestureFinalDestinationSwitcherModifierDelegate;

@interface SBHomeGestureFinalDestinationSwitcherModifier : SBSwitcherModifier
{
    CGPoint _initialTranslationAdjustment;
    CGPoint _translation;
    CGPoint _velocity;
    double _lastTouchTimestamp;
    double _lastAverageVelocityYForAcceleration;
    CGPoint _initialTouchLocation;
    CGPoint _lastTouchLocation;
    CGPoint _directionSwitchLocation;
    BOOL _movingTowardsNextLayoutState;
    double _adaptiveMinimumYVelocityForHome;
    double _adaptivePauseVelocityThresholdForAppSwitcher;
    double _adaptiveVelocitySlopeThresholdForArc;
    double _lastFinalDestination;
    long long _edgeRegionSampleCounter;
    BOOL _updateEdgeRegionSampleCounter;
    BOOL _gestureHasBegun;
    BOOL _gestureHasEnded;
    NSUInteger _numberOfTouchSamples;
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    BOOL _scrunchInitiated;
    BOOL _startingInAppSwitcher;
    BOOL _continuingGesture;
    id <SBHomeGestureFinalDestinationSwitcherModifierDelegate> _finalDestinationDelegate;
    BOOL _hasSeenAccelerationDipForAppSwitcher;
    NSString *_finalDestinationReason;
}

@property(readonly, nonatomic) BOOL hasSeenAccelerationDipForAppSwitcher; // @synthesize hasSeenAccelerationDipForAppSwitcher=_hasSeenAccelerationDipForAppSwitcher;
@property(readonly, nonatomic) NSString *finalDestinationReason; // @synthesize finalDestinationReason=_finalDestinationReason;
@property(retain, nonatomic) SBHomeGestureDockSwitcherModifier *dockModifier; // @synthesize dockModifier=_dockModifier;
// - (void).cxx_destruct;
- (void)_applyPrototypeSettings;
- (double)_unconditionalDistanceThresholdForHome;
- (BOOL)_isTranslationPastDistanceThresholdToUnconditionallyGoHome:(double)arg1;
- (void)_updateAdaptiveThresholdsForCurrentFinalDestination:(long long)arg1 velocityAverage:(CGPoint)arg2;
- (BOOL)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;
- (long long)_adjustedFinalDestinationAccountingForEdgeDataDistortion:(long long)arg1 location:(CGPoint)arg2;
- (id)debugDescription;
- (id)studyLogData;
@property(readonly, nonatomic) long long currentFinalDestination;
- (void)_updateGestureTranslationVelocityAndProgressWithEvent:(id)arg1;
- (void)_updateForGestureDidEndWithEvent:(id)arg1;
- (void)_updateForGestureDidChangeWithEvent:(id)arg1;
- (void)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithDelegate:(id)arg1 initialTranslationAdjustment:(CGPoint)arg2 startingInAppSwitcher:(BOOL)arg3 continuingGesture:(BOOL)arg4;

@end

