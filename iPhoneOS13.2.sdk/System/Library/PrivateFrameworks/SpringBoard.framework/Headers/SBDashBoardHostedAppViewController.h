//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBDashBoardViewExternalControllerBase.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>
#import <SpringBoard/SBAppViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBApplicationHosting-Protocol.h>
#import <SpringBoard/SBApplicationSceneViewControllingStatusBarDelegate-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateObserver-Protocol.h>
#import <SpringBoard/SBMainDisplaySceneLayoutStatusBarViewDataSource-Protocol.h>
#import <SpringBoard/SBSceneHandleObserver-Protocol.h>

@class NSSet, NSString, SBAppViewController, SBApplicationSceneHandle, SBApplicationSceneView, SBFAuthenticationAssertion, SBMainDisplaySceneLayoutStatusBarView, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneDeactivationAssertion, _SBDashBoardHostedAppStatusBarStateProxy;
@protocol BSInvalidatable, SBApplicationSceneStatusBarDescribing, SBDashBoardHostedAppViewControllerDelegate, SBScenePlaceholderContentContext;

@interface SBDashBoardHostedAppViewController : SBDashBoardViewExternalControllerBase <SBAppViewControllerDelegate, SBSceneHandleObserver, SBMainDisplaySceneLayoutStatusBarViewDataSource, SBDeviceApplicationSceneStatusBarStateObserver, SBApplicationSceneViewControllingStatusBarDelegate, SBApplicationHosting, BSInvalidatable>
{
    id <SBDashBoardHostedAppViewControllerDelegate> _delegate;
    SBAppViewController *_appViewController;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBFAuthenticationAssertion *_authenticationAssertion;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
    NSString *_cachedBasicPublicDescription;
    BOOL _invalidated;
    BOOL _wantsIdleTimerDisabled;
    SBMainDisplaySceneLayoutStatusBarView *_statusBarView;
    _SBDashBoardHostedAppStatusBarStateProxy *_statusBarObserverProxy;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    BOOL _intentToTransitionFromSecureAppToFull;
    BOOL _interfaceOrientationLocked;
}

@property(nonatomic) BOOL interfaceOrientationLocked; // @synthesize interfaceOrientationLocked=_interfaceOrientationLocked;
@property(nonatomic) BOOL intentToTransitionFromSecureAppToFull; // @synthesize intentToTransitionFromSecureAppToFull=_intentToTransitionFromSecureAppToFull;
@property(readonly, nonatomic) id <SBApplicationSceneStatusBarDescribing> statusBarDescriber; // @synthesize statusBarDescriber=_statusBarObserverProxy;
@property(nonatomic) __weak id <SBDashBoardHostedAppViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (long long)statusBarOrientation;
- (BOOL)allowsConfiguringIndividualStatusBarParts;
- (id)statusBarDescriberForStatusBarPart:(id)arg1;
- (id)statusBarDescribers;
- (id)_appViewController;
- (void)_endShowingStatusBarView;
- (void)_beginShowingStatusBarView;
- (void)_updateStatusBarContainerOrientation;
- (void)_addStatusBarViewIfNeeded;
- (long long)contentInterfaceOrientation;
- (long long)containerInterfaceOrientation;
- (id)_deviceApplicationSceneHandle;
- (void)sceneWithIdentifier:(id)arg1 didChangeSceneInterfaceOrientationTo:(long long)arg2;
- (void)applicationSceneViewController:(id)arg1 didUpdateStatusBarSettings:(id)arg2;
- (void)_setResignActiveAssertionEnabled:(BOOL)arg1;
- (void)_setMode:(long long)arg1 fromClient:(BOOL)arg2 forReason:(id)arg3;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (BOOL)appViewControllerShouldBackgroundApplicationOnDeactivate:(id)arg1;
- (void)appViewController:(id)arg1 didTransitionFromMode:(long long)arg2 toMode:(long long)arg3;
- (void)appViewControllerDidDeactivateApplication:(id)arg1;
- (void)appViewControllerWillActivateApplication:(id)arg1;
- (BOOL)handleEvent:(id)arg1;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)hostedAppSceneHandles;
- (id)hostedAppSceneHandle;
- (BOOL)isHostingAnApp;
- (BOOL)canHostAnApp;
- (long long)presentationPriority;
- (long long)presentationType;
- (long long)presentationStyle;
- (id)appearanceIdentifier;
- (void)configureDisplayLayoutElement:(id)arg1;
- (id)displayLayoutElementIdentifier;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)invalidate;
- (void)setSupplementalActivationSettings:(id)arg1;
@property(nonatomic) BOOL placeholderContentEnabled;
@property(retain, nonatomic) NSSet *actionsToDeliver;
@property(retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property(readonly, nonatomic) SBApplicationSceneView *appView;
@property(nonatomic) long long mode;
@property(readonly, nonatomic) SBApplicationSceneHandle *applicationSceneHandle;
- (void)dealloc;
- (id)initWithApplicationSceneEntity:(id)arg1;

@end

