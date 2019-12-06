//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSCoverSheetViewControllerObserver-Protocol.h>
#import <SpringBoard/SBApplicationHosting-Protocol.h>
#import <SpringBoard/SBAutoUnlockRule-Protocol.h>
#import <SpringBoard/SBBiometricUnlockBehavior-Protocol.h>
#import <SpringBoard/SBBiometricUnlockBehaviorDelegate-Protocol.h>
#import <SpringBoard/SBButtonEventsHandler-Protocol.h>
#import <SpringBoard/SBLockScreenBacklightControlling-Protocol.h>
#import <SpringBoard/SBLockScreenBehaviorSuppressing-Protocol.h>
#import <SpringBoard/SBLockScreenBlockedStateObserving-Protocol.h>
#import <SpringBoard/SBLockScreenButtonObserving-Protocol.h>
#import <SpringBoard/SBLockScreenContentStateProviding-Protocol.h>
#import <SpringBoard/SBLockScreenCustomActionStoring-Protocol.h>
#import <SpringBoard/SBLockScreenEnvironment-Protocol.h>
#import <SpringBoard/SBLockScreenLockingAndUnlocking-Protocol.h>
#import <SpringBoard/SBLockScreenMediaControlsPresenting-Protocol.h>
#import <SpringBoard/SBLockScreenPasscodeViewPresenting-Protocol.h>
#import <SpringBoard/SBLockScreenProximityBehaviorProviding-Protocol.h>
#import <SpringBoard/SBLockScreenStatusBarTransitioning-Protocol.h>

@class CSCoverSheetViewController, NSString, SBDashBoardAnalyticsEmitter, SBDashBoardApplicationLauncher, SBDashBoardBiometricUnlockController, SBDashBoardEmergencyDialerController, SBDashBoardIdleTimerController, SBDashBoardOrientationController, SBDashBoardPluginController, SBDashBoardPolicyBasedBehaviorProvider, SBDashBoardSetupController, SBDashBoardSpotlightPresenter, SBFLockScreenActionContext, SBLockScreenActionManager, UIViewController;
@protocol SBApplicationHosting, SBAutoUnlockRule, SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorDelegate, SBButtonEventsHandler, SBFScreenWakeAnimationTarget, SBIdleTimerProviding, SBLockScreenApplicationLaunching, SBLockScreenBacklightControlling, SBLockScreenBehaviorSuppressing, SBLockScreenBlockedStateObserving, SBLockScreenButtonObserving, SBLockScreenCallHandling, SBLockScreenContentStateProviding, SBLockScreenCustomActionStoring, SBLockScreenIdleTimerControlling, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenPasscodeViewPresenting, SBLockScreenPluginPresenting, SBLockScreenProximityBehaviorProviding, SBLockScreenStatusBarTransitioning;

@interface SBDashBoardLockScreenEnvironment : NSObject <SBApplicationHosting, SBAutoUnlockRule, SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorDelegate, SBButtonEventsHandler, CSCoverSheetViewControllerObserver, SBLockScreenBacklightControlling, SBLockScreenBehaviorSuppressing, SBLockScreenBlockedStateObserving, SBLockScreenButtonObserving, SBLockScreenContentStateProviding, SBLockScreenCustomActionStoring, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenPasscodeViewPresenting, SBLockScreenProximityBehaviorProviding, SBLockScreenStatusBarTransitioning, SBLockScreenEnvironment>
{
    CSCoverSheetViewController *_coverSheetViewController;
    SBDashBoardAnalyticsEmitter *_analyticsEmitter;
    SBDashBoardApplicationLauncher *_applicationLauncher;
    SBDashBoardBiometricUnlockController *_biometricUnlockController;
    SBLockScreenActionManager *_lockScreenActionManager;
    SBDashBoardEmergencyDialerController *_emergencyDialerController;
    SBDashBoardIdleTimerController *_idleTimerController;
    SBDashBoardOrientationController *_orientationController;
    SBDashBoardPluginController *_pluginController;
    SBDashBoardPolicyBasedBehaviorProvider *_policyBasedBehaviorProvider;
    SBDashBoardSetupController *_setupController;
    SBDashBoardSpotlightPresenter *_spotlightPresenter;
    BOOL _expectsFaceContact;
    id <SBBiometricUnlockBehaviorDelegate> _biometricUnlockBehaviorDelegate;
}

@property(readonly, nonatomic) BOOL expectsFaceContact; // @synthesize expectsFaceContact=_expectsFaceContact;
@property(nonatomic) __weak id <SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate; // @synthesize biometricUnlockBehaviorDelegate=_biometricUnlockBehaviorDelegate;
@property(readonly, nonatomic) CSCoverSheetViewController *coverSheetViewController; // @synthesize coverSheetViewController=_coverSheetViewController;
// - (void).cxx_destruct;
- (void)updateStatusBarForLockScreenComeback;
- (void)updateStatusBarForLockScreenTeardown;
@property(readonly, nonatomic) BOOL shouldShowLockStatusBarTime;
- (void)_setExpectsFaceContact:(BOOL)arg1;
- (void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isPasscodeLockVisible;
@property(nonatomic, getter=isShowingMediaControls) BOOL showingMediaControls;
- (void)jiggleLockIcon;
- (BOOL)shouldUnlockUIOnKeyDownEvent;
@property(nonatomic, getter=isAuthenticated) BOOL authenticated;
- (void)finishUIUnlockFromSource:(int)arg1;
- (BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (BOOL)willUIUnlockFromSource:(int)arg1;
- (void)prepareForUILock;
- (void)prepareForUIUnlock;
- (BOOL)isUnlockDisabled;
@property(retain, nonatomic, getter=_customLockScreenActionContext) SBFLockScreenActionContext *customLockScreenActionContext;
- (BOOL)isMainPageVisible;
- (id)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)arg1;
- (id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
- (void)noteMenuButtonUp;
- (void)noteMenuButtonDown;
- (void)noteResetRestoreStateUpdated;
- (void)noteDeviceBlockedStatusUpdated;
- (BOOL)suppressesScreenshots;
- (BOOL)suppressesControlCenter;
- (BOOL)suppressesBanners;
- (BOOL)shouldDisableALS;
@property(nonatomic) double backlightLevel;
- (void)startLockScreenFadeInAnimationForSource:(int)arg1;
- (void)setInScreenOffMode:(BOOL)arg1 forAutoUnlock:(BOOL)arg2 fromUnlockSource:(int)arg3;
- (void)setInScreenOffMode:(BOOL)arg1;
- (BOOL)isInScreenOffMode;
- (void)coverSheetViewController:(id)arg1 didChangeActiveBehavior:(id)arg2;
- (BOOL)handleHeadsetButtonPress:(BOOL)arg1;
- (BOOL)handleVolumeDownButtonPress;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)handleLockButtonPress;
- (BOOL)handleHomeButtonLongPress;
- (BOOL)handleHomeButtonDoublePress;
- (BOOL)handleHomeButtonPress;
- (BOOL)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3;
- (BOOL)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2;
- (void)handleBiometricEvent:(NSUInteger)arg1;
- (BOOL)shouldAutoUnlockForSource:(int)arg1;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)hostedAppSceneHandles;
- (id)hostedAppSceneHandle;
- (BOOL)isHostingAnApp;
- (BOOL)canHostAnApp;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <SBLockScreenStatusBarTransitioning> statusBarTransitionController;
@property(readonly, nonatomic) id <SBLockScreenProximityBehaviorProviding> proximityBehaviorProvider;
@property(readonly, nonatomic) id <SBLockScreenPluginPresenting> pluginPresenter;
@property(readonly, nonatomic) id <SBLockScreenPasscodeViewPresenting> passcodeViewPresenter;
@property(readonly, nonatomic) id <SBLockScreenMediaControlsPresenting> mediaControlsPresenter;
@property(readonly, nonatomic) id <SBLockScreenLockingAndUnlocking> lockController;
@property(readonly, nonatomic) id <SBLockScreenIdleTimerControlling> idleTimerController;
@property(readonly, nonatomic) id <SBLockScreenCustomActionStoring> customActionStore;
@property(readonly, nonatomic) id <SBLockScreenContentStateProviding> contentStateProvider;
@property(readonly, nonatomic) id <SBLockScreenCallHandling> callController;
@property(readonly, nonatomic) id <SBLockScreenButtonObserving> buttonObserver;
@property(readonly, nonatomic) id <SBLockScreenBlockedStateObserving> blockedStateObserver;
@property(readonly, nonatomic) id <SBLockScreenBehaviorSuppressing> behaviorSuppressor;
@property(readonly, nonatomic) id <SBLockScreenBacklightControlling> backlightController;
@property(readonly, nonatomic) id <SBLockScreenApplicationLaunching> applicationLauncher;
@property(readonly, nonatomic) id <SBFScreenWakeAnimationTarget> screenWakeAnimationTarget;
@property(readonly, nonatomic) id <SBIdleTimerProviding> idleTimerProvider;
@property(readonly, nonatomic) id <SBApplicationHosting> applicationHoster;
@property(readonly, nonatomic) id <SBButtonEventsHandler> buttonEventsHandler;
@property(readonly, nonatomic) id <SBBiometricUnlockBehavior> biometricUnlockBehavior;
@property(readonly, nonatomic) id <SBAutoUnlockRule> autoUnlockRule;
@property(readonly, nonatomic) UIViewController *rootViewController;
- (id)initWithCoverSheetViewController:(id)arg1;
- (id)init;

@end

