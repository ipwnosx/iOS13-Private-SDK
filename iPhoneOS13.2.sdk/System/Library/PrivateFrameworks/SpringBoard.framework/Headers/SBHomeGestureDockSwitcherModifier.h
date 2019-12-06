//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@protocol SBHomeGestureDockSwitcherModifierDelegate;

@interface SBHomeGestureDockSwitcherModifier : SBSwitcherModifier
{
    CGPoint _lastTouchLocation;
    CGPoint _unadjustedGestureTranslation;
    CGPoint _velocity;
    CGPoint _translationAdjustmentForFloatingDock;
    BOOL _currentlyTrackingDock;
    BOOL _wasTrackingDockWhenGestureBegan;
    BOOL _hadOpenDockFolderWhenGestureBegan;
    BOOL _hadOpenHomeScreenFolderWhenGestureBegan;
    BOOL _verticallyRubberbandedOutOfDock;
    BOOL _wantsDockAssertion;
    BOOL _highEnoughToShowDock;
    BOOL _gestureHasBegun;
    BOOL _gestureHasEnded;
    id <SBHomeGestureDockSwitcherModifierDelegate> _delegate;
    long long _startingEnvironmentMode;
    BOOL _requireVerticalSwipeToTrackDock;
}

@property(readonly, nonatomic, getter=isCurrentlyTrackingDock) BOOL currentlyTrackingDock; // @synthesize currentlyTrackingDock=_currentlyTrackingDock;
// - (void).cxx_destruct;
- (void)_applyPrototypeSettings;
- (BOOL)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;
- (BOOL)_rubberbandedOutOfDockHorizontally;
- (BOOL)_shouldPresentDockForFinalDestination:(long long)arg1;
- (id)debugDescription;
- (double)dockWindowLevel;
- (NSUInteger)dockWindowLevelPriority;
- (BOOL)wantsDockWindowLevelAssertion;
- (double)dockProgress;
- (long long)dockUpdateMode;
- (BOOL)wantsDockBehaviorAssertion;
- (id)studyLogData;
- (long long)adjustedFinalDestinationForDestination:(long long)arg1 withTranslation:(CGPoint)arg2 velocity:(CGPoint)arg3;
- (CGPoint)translationForAdjustedTranslation:(CGPoint)arg1;
- (CGPoint)adjustedTranslationForTranslation:(CGPoint)arg1;
- (void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithDelegate:(id)arg1 startingEnvironmentMode:(long long)arg2 requireVerticalSwipeToTrackDock:(BOOL)arg3;

@end

