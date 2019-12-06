//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSystemGestureWorkspaceTransaction.h>

@class SBAppStatusBarSettingsAssertion, SBAppSwitcherSettings, SBAssistantController, SBAssistantRootViewController, SBMainWorkspaceTransaction, SBTransientOverlayPresentationManager, SBTransientOverlayViewController, UINotificationFeedbackGenerator;

@interface SBModalUIFluidDismissGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction
{
    SBAppSwitcherSettings *_settings;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    UINotificationFeedbackGenerator *_dismissalFeedbackGenerator;
    SBAssistantRootViewController *_assistantRootViewController;
    SBTransientOverlayPresentationManager *_transientOverlayPresentationManager;
    SBTransientOverlayViewController *_transientOverlayViewController;
    CGPoint _dismissingViewTouchOffset;
    CGRect _originalBounds;
    CGPoint _originalCenter;
    BOOL _hasPreservedInputViews;
    BOOL _isDismissing;
    SBAssistantController *_assistantController;
    long long _dismissalType;
    SBMainWorkspaceTransaction *_currentTransaction;
}

@property(retain, nonatomic) SBMainWorkspaceTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property(readonly, nonatomic) long long dismissalType; // @synthesize dismissalType=_dismissalType;
@property(retain, nonatomic) SBAssistantController *assistantController; // @synthesize assistantController=_assistantController;
// - (void).cxx_destruct;
- (void)_cleanupHierarchyForDismissal:(BOOL)arg1;
- (id)_viewForGesture;
- (void)_setFluidDismissalState:(id)arg1;
- (BOOL)_shouldDismissImmmediatelyAtFullGestureProgress;
- (double)_swipeUpGestureProgress;
- (double)_swipeUpGestureTranslation;
- (double)_yOffsetForGestureProgress;
- (double)_backgroundWeightingForGestureProgress;
- (double)_scaleForGestureProgress;
- (double)_scaleForDismissal;
- (void)_dismissClientAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)_notificationFeedbackType;
- (double)_hapticDelay;
- (double)_clientAnimationsDelay;
- (double)_zoomOutDelay;
- (id)_layoutSettings;
- (id)_dismissalFeedbackGenerator;
- (void)_updateDismissingViewLayoutAndStyleForGesture;
- (void)_finishInteractionAndDismiss:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_finishWithGesture:(id)arg1;
- (void)_updateWithGesture:(id)arg1;
- (void)_beginWithGesture:(id)arg1;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (BOOL)_canBeInterrupted;
- (void)_didComplete;
- (void)_begin;
- (void)_didInterruptWithReason:(id)arg1;
- (BOOL)canInterruptForTransitionRequest:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1 assistantController:(id)arg2 dismissalType:(long long)arg3;

@end

