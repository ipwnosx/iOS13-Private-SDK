//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class BKSDisplayRenderOverlay, SBSceneLayoutAnimationWrapperView;

@interface SBUIStartupToUserSetupAppZoomInAnimationController : SBUIMainScreenAnimationController
{
    SBSceneLayoutAnimationWrapperView *_layoutAnimationWrapperView;
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

// - (void).cxx_destruct;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)animationSettings;
- (BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
- (BOOL)_shouldDismissBanner;
- (void)_setHidden:(BOOL)arg1;
- (id)_getTransitionWindow;
- (id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

