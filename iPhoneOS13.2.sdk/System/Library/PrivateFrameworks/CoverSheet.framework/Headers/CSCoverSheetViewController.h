//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <CoverSheet/BSDescriptionProviding-Protocol.h>
#import <CoverSheet/CSCoverSheetViewControllerProtocol-Protocol.h>
#import <CoverSheet/CSCoverSheetViewDelegate-Protocol.h>
#import <CoverSheet/CSCoverSheetViewTransitionSource-Protocol.h>
#import <CoverSheet/CSDateTimeLayoutAggregating-Protocol.h>
#import <CoverSheet/CSInterstitialTransitionDelegate-Protocol.h>
#import <CoverSheet/CSLegibilityProviderDelegate-Protocol.h>
#import <CoverSheet/CSLocketTransitionDelegate-Protocol.h>
#import <CoverSheet/CSLocketViewControllerDelegate-Protocol.h>
#import <CoverSheet/CSNotificationClearingTriggerDelegate-Protocol.h>
#import <CoverSheet/CSNotificationDestination-Protocol.h>
#import <CoverSheet/CSPasscodeViewControllerDelegate-Protocol.h>
#import <CoverSheet/CSPersistentContentLayoutProviding-Protocol.h>
#import <CoverSheet/CSScrollGestureControllerDelegate-Protocol.h>
#import <CoverSheet/CSTimerViewControllerDelegate-Protocol.h>
#import <CoverSheet/FBSDisplayLayoutPublisherObserving-Protocol.h>
#import <CoverSheet/SBFIrisWallpaperViewDelegate-Protocol.h>
#import <CoverSheet/SBFTodayOverlayObserving-Protocol.h>
#import <CoverSheet/SBLockScreenActionProvider-Protocol.h>
#import <CoverSheet/_UISettingsKeyObserver-Protocol.h>

@class BSTimer, CSAppearance, CSBehavior, CSChargingViewController, CSCoverSheetView, CSDismissableModalViewController, CSFixedFooterViewController, CSHomeButtonShowPasscodeRecognizer, CSHomeButtonSuppressAfterUnlockRecognizer, CSInterstitialTransitionSource, CSLayoutStrategy, CSLockScreenSettings, CSLocketForcePressGestureRecognizer, CSLocketTransitionSource, CSMainPageContentViewController, CSModalPresentationViewController, CSNotificationClearingTrigger, CSNotificationDispatcher, CSPowerChangeObserver, CSPresentation, CSPresentationViewController, CSProudLockViewController, CSQuickActionsViewController, CSScrollGestureController, CSTeachableMomentsContainerViewController, CSTimerViewController, CSUserPresenceMonitor, FBDisplayLayoutTransition, NSArray, NSHashTable, NSSet, NSString, SBFLockScreenActionContext, SBFLockScreenDateSubtitleView, SBFLockScreenDateViewController, SBFLockScreenWakeAnimator, SBFSteppedAnimationTimingFunctionCalculator, SBLockScreenDefaults, SBWallpaperAggdLogger, UIColor, UIGestureRecognizer, UIStatusBar, UITapGestureRecognizer, UIVisualEffectView, _UILegibilitySettings;
@protocol BSInvalidatable, CSApplicationLaunching, CSCameraPrewarming, CSCoverSheetContextProviding, CSCoverSheetViewControllerDelegate, CSCoverSheetViewPresenting, CSCoverSheetViewTransitionSource, CSEmergencyCalling, CSIdleTimerControlling, CSLegibilityProviding, CSNotificationDispatcher, CSOrientationUpdateControlling, CSSpotlightPresenting, CSWallpaperColorProvider, SBFIrisWallpaperView, SBFLockOutStatusProvider, SBFScreenWakeAnimationControlling, SBFScreenWakeAnimationTarget, SBFTodayOverlayControlling><CSExternalBehaviorProviding><CSExternalEventHandling, SBNotificationDestination, UICoordinateSpace;

@interface CSCoverSheetViewController : UIViewController <CSPersistentContentLayoutProviding, CSDateTimeLayoutAggregating, CSCoverSheetViewDelegate, UIGestureRecognizerDelegate, CSLegibilityProviderDelegate, SBLockScreenActionProvider, SBFIrisWallpaperViewDelegate, CSCoverSheetViewTransitionSource, CSNotificationDestination, CSTimerViewControllerDelegate, _UISettingsKeyObserver, CSScrollGestureControllerDelegate, CSNotificationClearingTriggerDelegate, CSInterstitialTransitionDelegate, CSLocketTransitionDelegate, CSPasscodeViewControllerDelegate, CSLocketViewControllerDelegate, SBFTodayOverlayObserving, FBSDisplayLayoutPublisherObserving, CSCoverSheetViewControllerProtocol, BSDescriptionProviding>
{
    id <CSCoverSheetContextProviding> _coverSheetContext;
    CSLockScreenSettings *_prototypeSettings;
    BOOL _screenOffMode;
    BOOL _hasContentAboveCoverSheet;
    BOOL _preventAppearanceUpdatesForRotation;
    SBFSteppedAnimationTimingFunctionCalculator *_interactiveAnimationCalculator;
    NSHashTable *_externalAppearanceProviders;
    NSHashTable *_externalBehaviorProviders;
    NSHashTable *_externalEventHandlers;
    NSHashTable *_externalPresentationProviders;
    NSHashTable *_externalLockProviders;
    NSHashTable *_observers;
    NSHashTable *_applicationHosters;
    CSNotificationDispatcher *_notificationDispatcher;
    long long _transitionType;
//     CDStruct_7238a68f _transitionContext;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    long long _participantState;
    BOOL _transitionDisabledIdleTimer;
    CSHomeButtonShowPasscodeRecognizer *_homeButtonShowPasscodeRecognizer;
    CSHomeButtonSuppressAfterUnlockRecognizer *_homeButtonSuppressAfterUnlockRecognizer;
    CSModalPresentationViewController *_modalPresentationController;
    CSChargingViewController *_chargingViewController;
    BSTimer *_chargingViewControllerTimer;
    id /* CDUnknownBlockType */ _chargingViewTimerHandler;
    CSFixedFooterViewController *_fixedFooterViewController;
    CSProudLockViewController *_proudLockViewController;
    CSTeachableMomentsContainerViewController *_teachableMomentsContainerViewController;
    CSQuickActionsViewController *_quickActionsViewController;
    CSScrollGestureController *_scrollGestureController;
    BOOL _listeningForDisplayLayoutChanges;
    BOOL _screenOnForLiftToWake;
    BOOL _statusBarInLockdownForTeardown;
    UITapGestureRecognizer *_quickNoteGestureRecognizer;
    UIGestureRecognizer *_wallpaperGestureRecognizer;
    CSLocketForcePressGestureRecognizer *_locketGestureRecognizer;
    CSNotificationClearingTrigger *_notificationClearingTrigger;
    int _lastAppearState;
    BOOL _wantsAccessibilityContentSizes;
    BOOL _needsAccessibilityContentSizesUpdate;
    double _accessibilityTimeLabelBaselineY;
    double _accessibilityTimeSubtitleBaselineY;
    double _initialInterstitialTransitionProgress;
    BOOL _interstitialTransitionStartedFromPasscodePresented;
    SBLockScreenDefaults *_lockScreenDefaults;
    SBFLockScreenWakeAnimator *_lockScreenWakeAnimator;
    CSDismissableModalViewController *_dismissableModalViewController;
    SBFLockScreenDateSubtitleView *_chargingLabel;
    CSUserPresenceMonitor *_userPresenceMonitor;
    BOOL _contentAboveIsControlCenter;
    BOOL _authenticated;
    BOOL _irisPlayerIsInteracting;
    BOOL _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
    double _backlightLevel;
    SBFLockScreenActionContext *_customLockScreenActionContext;
    id <CSCoverSheetViewControllerDelegate> _delegate;
    CSLayoutStrategy *_layoutStrategy;
    id <CSCameraPrewarming> _cameraPrewarmer;
    CSAppearance *_activeAppearance;
    CSBehavior *_activeBehavior;
    id <CSNotificationDispatcher> _dispatcher;
    id <SBFIrisWallpaperView> _irisWallpaperView;
    id <CSWallpaperColorProvider> _wallpaperColorProvider;
    long long _effectiveInterfaceOrientationOverride;
    id <CSEmergencyCalling> _emergencyCaller;
    id <CSOrientationUpdateControlling> _orientationUpdateController;
    id <CSIdleTimerControlling> _idleTimerController;
    id <CSApplicationLaunching> _applicationLauncher;
    id <CSSpotlightPresenting> _spotlightPresenter;
    NSArray *_pageViewControllers;
    NSArray *_allowedPageViewControllers;
    CSMainPageContentViewController *_mainPageContentViewController;
    NSUInteger _lastSettledPageIndex;
    CSBehavior *_localBehavior;
    CSBehavior *_irisBehavior;
    double _appearanceFraction;
    CSAppearance *_previousAppearance;
    CSAppearance *_localAppearance;
    CSPresentation *_activePresentation;
    SBFLockScreenDateViewController *_dateViewController;
    CSPowerChangeObserver *_powerChangeObserver;
    CSTimerViewController *_timerViewController;
    id <CSLegibilityProviding> _legibilityProvider;
    UIStatusBar *_fakeStatusBar;
    UIVisualEffectView *_statusBarBackgroundView;
    id <SBFLockOutStatusProvider> _lockOutController;
    id <CSCoverSheetViewTransitionSource> _currentTransitionSource;
    CSInterstitialTransitionSource *_interstitialTransitionSource;
    CSLocketTransitionSource *_locketTransitionSource;
    id <SBFTodayOverlayControlling><CSExternalBehaviorProviding><CSExternalEventHandling> _todayOverlayController;
    id <BSInvalidatable> _suspendWallpaperAnimationAssertion;
    id <SBFScreenWakeAnimationControlling> _screenWakeAnimationController;
    SBWallpaperAggdLogger *_wallpaperAggdLogger;
}

@property(retain, nonatomic) SBWallpaperAggdLogger *wallpaperAggdLogger; // @synthesize wallpaperAggdLogger=_wallpaperAggdLogger;
@property(retain, nonatomic, getter=_screenWakeAnimationController, setter=_setScreenWakeAnimationController:) id <SBFScreenWakeAnimationControlling> screenWakeAnimationController; // @synthesize screenWakeAnimationController=_screenWakeAnimationController;
@property(retain, nonatomic) id <BSInvalidatable> suspendWallpaperAnimationAssertion; // @synthesize suspendWallpaperAnimationAssertion=_suspendWallpaperAnimationAssertion;
@property(retain, nonatomic) id <SBFTodayOverlayControlling><CSExternalBehaviorProviding><CSExternalEventHandling> todayOverlayController; // @synthesize todayOverlayController=_todayOverlayController;
@property(retain, nonatomic) CSLocketTransitionSource *locketTransitionSource; // @synthesize locketTransitionSource=_locketTransitionSource;
@property(retain, nonatomic) CSInterstitialTransitionSource *interstitialTransitionSource; // @synthesize interstitialTransitionSource=_interstitialTransitionSource;
@property(retain, nonatomic) id <CSCoverSheetViewTransitionSource> currentTransitionSource; // @synthesize currentTransitionSource=_currentTransitionSource;
@property(retain, nonatomic, getter=_lockOutController, setter=_setLockOutController:) id <SBFLockOutStatusProvider> lockOutController; // @synthesize lockOutController=_lockOutController;
@property(retain, nonatomic) CSModalPresentationViewController *modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(nonatomic) BOOL shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes; // @synthesize shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes=_shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
@property(nonatomic) BOOL irisPlayerIsInteracting; // @synthesize irisPlayerIsInteracting=_irisPlayerIsInteracting;
@property(retain, nonatomic) UIVisualEffectView *statusBarBackgroundView; // @synthesize statusBarBackgroundView=_statusBarBackgroundView;
@property(retain, nonatomic) UIStatusBar *fakeStatusBar; // @synthesize fakeStatusBar=_fakeStatusBar;
@property(retain, nonatomic) id <CSLegibilityProviding> legibilityProvider; // @synthesize legibilityProvider=_legibilityProvider;
@property(retain, nonatomic) CSTimerViewController *timerViewController; // @synthesize timerViewController=_timerViewController;
@property(retain, nonatomic) CSPowerChangeObserver *powerChangeObserver; // @synthesize powerChangeObserver=_powerChangeObserver;
@property(retain, nonatomic) SBFLockScreenDateViewController *dateViewController; // @synthesize dateViewController=_dateViewController;
@property(retain, nonatomic) CSPresentation *activePresentation; // @synthesize activePresentation=_activePresentation;
@property(copy, nonatomic) CSAppearance *localAppearance; // @synthesize localAppearance=_localAppearance;
@property(copy, nonatomic) CSAppearance *previousAppearance; // @synthesize previousAppearance=_previousAppearance;
@property(nonatomic) double appearanceFraction; // @synthesize appearanceFraction=_appearanceFraction;
@property(retain, nonatomic) CSBehavior *irisBehavior; // @synthesize irisBehavior=_irisBehavior;
@property(retain, nonatomic) CSBehavior *localBehavior; // @synthesize localBehavior=_localBehavior;
@property(nonatomic) NSUInteger lastSettledPageIndex; // @synthesize lastSettledPageIndex=_lastSettledPageIndex;
@property(retain, nonatomic, setter=_setMainPageContentViewController:) CSMainPageContentViewController *mainPageContentViewController; // @synthesize mainPageContentViewController=_mainPageContentViewController;
@property(copy, nonatomic, getter=_allowedPageViewControllers, setter=_setAllowedPageViewControllers:) NSArray *allowedPageViewControllers; // @synthesize allowedPageViewControllers=_allowedPageViewControllers;
@property(copy, nonatomic, setter=_setPageViewControllers:) NSArray *pageViewControllers; // @synthesize pageViewControllers=_pageViewControllers;
@property(nonatomic) __weak id <CSSpotlightPresenting> spotlightPresenter; // @synthesize spotlightPresenter=_spotlightPresenter;
@property(nonatomic) __weak id <CSApplicationLaunching> applicationLauncher; // @synthesize applicationLauncher=_applicationLauncher;
@property(nonatomic) __weak id <CSIdleTimerControlling> idleTimerController; // @synthesize idleTimerController=_idleTimerController;
@property(retain, nonatomic) id <CSOrientationUpdateControlling> orientationUpdateController; // @synthesize orientationUpdateController=_orientationUpdateController;
@property(nonatomic) __weak id <CSEmergencyCalling> emergencyCaller; // @synthesize emergencyCaller=_emergencyCaller;
@property(nonatomic) long long effectiveInterfaceOrientationOverride; // @synthesize effectiveInterfaceOrientationOverride=_effectiveInterfaceOrientationOverride;
@property(nonatomic) __weak id <CSWallpaperColorProvider> wallpaperColorProvider; // @synthesize wallpaperColorProvider=_wallpaperColorProvider;
@property(retain, nonatomic) UIGestureRecognizer *wallpaperGestureRecognizer; // @synthesize wallpaperGestureRecognizer=_wallpaperGestureRecognizer;
@property(retain, nonatomic) id <SBFIrisWallpaperView> irisWallpaperView; // @synthesize irisWallpaperView=_irisWallpaperView;
@property(nonatomic) __weak id <CSNotificationDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
// @property(readonly, nonatomic) CDStruct_7238a68f transitionContext; // @synthesize transitionContext=_transitionContext;
@property(copy, nonatomic) CSBehavior *activeBehavior; // @synthesize activeBehavior=_activeBehavior;
@property(copy, nonatomic) CSAppearance *activeAppearance; // @synthesize activeAppearance=_activeAppearance;
@property(retain, nonatomic) id <CSCameraPrewarming> cameraPrewarmer; // @synthesize cameraPrewarmer=_cameraPrewarmer;
@property(readonly, nonatomic) id <SBFScreenWakeAnimationTarget> lockScreenWakeAnimator; // @synthesize lockScreenWakeAnimator=_lockScreenWakeAnimator;
@property(retain, nonatomic) CSLayoutStrategy *layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
@property(readonly, nonatomic) BOOL hasContentAboveCoverSheet; // @synthesize hasContentAboveCoverSheet=_hasContentAboveCoverSheet;
@property(nonatomic) __weak id <CSCoverSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, getter=_customLockScreenActionContext) SBFLockScreenActionContext *customLockScreenActionContext; // @synthesize customLockScreenActionContext=_customLockScreenActionContext;
@property(nonatomic) double backlightLevel; // @synthesize backlightLevel=_backlightLevel;
@property(nonatomic, getter=isAuthenticated) BOOL authenticated; // @synthesize authenticated=_authenticated;
// - (void).cxx_destruct;
- (id)_passcodeViewController;
- (void)dismissOverlaysAnimated:(BOOL)arg1;
- (void)removeApplicationHoster:(id)arg1;
- (void)addApplicationHoster:(id)arg1;
- (void)_addOrRemoveResetRestoreViewIfNecessaryAnimated:(BOOL)arg1;
- (void)_addOrRemoveBlockedViewIfNecessaryAnimated:(BOOL)arg1;
- (void)_addOrRemoveThermalTrapViewIfNecessaryAnimated:(BOOL)arg1;
- (void)_dismissToMainPageFromPageViewController:(id)arg1;
- (void)_dismissModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dismissModalViewControllersWithIdentifier:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_presentedModalViewControllerWithIdentifier:(id)arg1;
- (BOOL)_isPresentingModalViewControllerWithIdentifier:(id)arg1;
- (void)_setModalPresentationControllerVisibility:(BOOL)arg1 cancelTouches:(BOOL)arg2;
- (void)_setModalPresentationControllerVisibility:(BOOL)arg1;
- (void)_updateModalPresentationControllerVisibility;
- (void)_setHasContentAboveCoverSheet:(BOOL)arg1;
- (void)publisher:(id)arg1 didUpdateLayout:(id)arg2 withTransition:(id)arg3;
- (void)_displayWillTurnOnWhileOnCoverSheet:(id)arg1;
- (BOOL)_isMainPageShowing;
- (void)_transitionChargingDateSubtitleToVisible:(BOOL)arg1 animated:(BOOL)arg2 force:(BOOL)arg3;
- (void)_updateDateSubtitleAppearanceForBattery:(BOOL)arg1 animated:(BOOL)arg2 chargingVisible:(BOOL)arg3;
- (void)_transitionChargingViewToVisible:(BOOL)arg1 showBattery:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_powerStatusChangedToConnectedState:(BOOL)arg1;
- (void)_transitionTimerViewToVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)timerControllerDidStopTimer:(id)arg1;
- (void)timerControllerDidStartTimer:(id)arg1;
- (double)_dateTimeAlphaForFade;
- (BOOL)_isWakeAnimationInProgress;
- (void)_startFadeInAnimationForSource:(long long)arg1;
- (void)startLockScreenFadeInAnimationForSource:(int)arg1;
- (void)dismissLocketViewController:(double)arg1;
- (void)_cleanupLocketPresentationForCompleted:(BOOL)arg1;
- (void)_updateLocketPresentationWithProgress:(double)arg1 completed:(BOOL)arg2;
- (void)_prepareForLocketPresentation;
- (void)_handleLocketForcePressGestureRecognizer:(id)arg1;
- (void)_setupLocketGestureRecognizer;
- (void)_actuallyUpdateUIForIrisPlaying:(BOOL)arg1;
- (void)_actuallyUpdateUIForIrisNotPlaying;
- (void)_actuallyUpdateUIForIrisPlaying;
- (void)_updateUIForPlaying:(BOOL)arg1 immediately:(BOOL)arg2;
- (void)_setupWallpaperGesture;
- (BOOL)_wallpaperGestureShouldRequireUserPresence;
- (id)_averageLockScreenWallpaperColor;
- (void)_handleQuickNoteLaunch:(id)arg1;
- (void)_setupQuickNoteGestureRecognizer;
- (void)_createStatusBarBackgroundViewIfNeeded;
- (id)_fakeStatusBarSettings;
- (id)_createFakeStatusBar;
- (void)_setFakeStatusBarEnabled:(BOOL)arg1;
- (void)_invalidateStatusBarAssertions;
- (void)updateStatusBarForLockScreenComeback;
- (void)updateStatusBarForLockScreenTeardown;
- (void)_updateLegibilitySettings;
- (void)_updateStatusBarGradient;
- (void)_updateTintingView;
- (void)_updateWallpaperEffectView;
- (void)_updateIdleTimerBehavior;
- (void)_updateScrollingBehavior;
- (void)_updateScalableContent;
- (BOOL)_quickActionsSupported;
- (void)_updateQuickActions;
- (void)_updateControlCenterGrabber;
- (void)_updateHomeAffordance;
- (void)_updateFixedFooterView;
- (void)_updatePageContent;
- (void)_updateStatusBarBackground;
- (void)_updateStatusBar;
- (void)_updateProudLockViewUpdateSuspension;
- (void)_updateProudLockView;
- (void)_updateDateTimeView;
- (void)_updateForegroundView;
- (double)_scaleForTransitionFromScale:(double)arg1 toScale:(double)arg2 timingFunction:(id)arg3;
- (double)_alphaForTransitionFromHidden:(BOOL)arg1 toHidden:(BOOL)arg2 unhiddenAlpha:(double)arg3 timingFunction:(id)arg4;
- (double)_alphaForTransitionFromHidden:(BOOL)arg1 toHidden:(BOOL)arg2 timingFunction:(id)arg3;
- (CGPoint)_offsetForTransitionFromOffset:(CGPoint)arg1 toOffset:(CGPoint)arg2 timingFunction:(id)arg3;
- (CGPoint)_finalizeOffset:(CGPoint)arg1 referenceFrame:(CGRect)arg2;
// - (double)_valueForTransitionInterval:(CDStruct_3e878e9e)arg1 timingFunction:(id)arg2;
- (void)_updateBackground;
- (void)_updateRestrictedBehavior;
- (void)_updateActiveBehaviorsForReason:(id)arg1 updatingAppearanceIfNeeded:(BOOL)arg2;
- (void)_updateActiveBehaviorsForReason:(id)arg1;
- (void)_updateActiveAppearanceForReason:(id)arg1;
- (id)__currentDesiredAppearanceWithStartIndex:(NSUInteger )arg1 targetIndex:(NSUInteger )arg2 targetAppearance:(id )arg3 targetPresentation:(id )arg4 modalAppearance:(id )arg5 proudLockAppearance:(id )arg6;
- (BOOL)_shouldUpdateActiveAppearanceForReason:(id)arg1;
- (BOOL)_wouldUpdateActiveAppearance;
- (void)_updateLocalAppearanceForPresentation;
- (void)_updateAppearance:(id)arg1 forComponentType:(long long)arg2 shouldHide:(BOOL)arg3;
- (id)_presentationForParticipant:(id)arg1;
- (id)_appearanceForParticipant:(id)arg1;
- (id)_behaviorForParticipant:(id)arg1;
- (void)_updateLocalAppearanceForRequester:(id)arg1 animationSettings:(id)arg2 actions:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateNotificationClearingTriggerForEvent:(id)arg1;
- (BOOL)_handleEvent:(id)arg1;
- (BOOL)_handleEventType:(long long)arg1;
- (NSUInteger)_indexOfPageViewControllerForRole:(id)arg1;
- (NSUInteger)_indexOfCameraPage;
- (NSUInteger)_indexOfMainPage;
- (NSUInteger)_indexOfTodayPage;
- (void)_updateVisibilityForPageViewControllersWithVisiblePageViewController:(id)arg1;
- (id)_eligiblePageViewControllers;
- (NSUInteger)_pageCapabilities;
- (void)_removeAllowedPageViewController:(id)arg1;
- (void)_addVisiblePageViewController:(id)arg1;
- (void)_loadViewsForRestrictedPagesIfPossible;
- (id)pageViewControllerAtIndex:(NSUInteger)arg1;
- (id)visiblePageViewController;
- (void)activatePage:(NSUInteger)arg1 animated:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)_isKnownTransitionConflictFrom:(id)arg1 to:(id)arg2;
- (double)_dateViewAlphaForCurrentWakeState;
- (void)_endAppearanceTransitionForPageViewControllersToVisible:(BOOL)arg1;
- (void)_beginAppearanceTransitionForPageViewControllersToVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_isPageContentHidden;
- (CGPoint)_slideableContentOffset;
- (BOOL)_isSlideableContentOnscreen;
- (BOOL)_isSlideableContentOffsetOnscreen:(CGPoint)arg1;
@property(readonly, nonatomic) CSCoverSheetView *coverSheetView;
- (BOOL)_isSourceForHorizontalScrolling:(id)arg1;
- (BOOL)_overSlidingControlForLocation:(CGPoint)arg1 inView:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 isLocatedOverHorizontalContentRegionInViewController:(id)arg2;
- (id)_activeViewControllers;
- (id)_windowsFromViewControllers:(id)arg1;
- (id)dateView;
- (id)superviewForDateViewAnimation;
- (void)controllerWillCancelHorizontalScrolling:(id)arg1;
- (BOOL)controller:(id)arg1 shouldAllowPanScrollingWithSystemGestureRecognizer:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)handleBiometricEvent:(NSUInteger)arg1;
- (BOOL)shouldAutoUnlockForSource:(int)arg1;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)hostedAppSceneHandles;
- (id)hostedAppSceneHandle;
- (BOOL)isHostingAnApp;
- (BOOL)canHostAnApp;
- (BOOL)dismissNotificationInLongLookAnimated:(BOOL)arg1;
- (BOOL)isPresentingNotificationInLongLook;
- (BOOL)isNotificationContentExtensionVisible:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)withdrawNotificationRequest:(id)arg1;
- (void)updateNotificationRequest:(id)arg1;
- (void)postNotificationRequest:(id)arg1;
- (void)invalidateLockScreenActionContext;
- (id)lockScreenActionContext;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)relinquishHostingOfWallpaperOverlay;
- (void)startHostingWallpaperOverlay:(id)arg1;
- (void)irisWallpaperView:(id)arg1 didReplaceGestureRecognizer:(id)arg2 withGestureRecognizer:(id)arg3;
- (void)irisWallpaperViewIsInteractingDidChange:(id)arg1;
- (void)irisWallpaperViewPlaybackStateDidChange:(id)arg1;
// - (void)transitionSource:(id)arg1 didEndWithContext:(CDStruct_7238a68f)arg2;
// - (void)transitionSource:(id)arg1 didUpdateTransitionWithContext:(CDStruct_7238a68f)arg2;
- (void)transitionSource:(id)arg1 willBeginWithType:(long long)arg2;
- (BOOL)shouldModifyPageScrolling;
- (void)cancelTransition;
- (BOOL)isTransitioningInteractively;
@property(readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
- (void)coverSheetLegibilityProviderDidUpdate:(id)arg1;
- (BOOL)wouldHandleButtonEvent:(id)arg1;
- (BOOL)handleEvent:(id)arg1;
- (void)_removeBedtimeGreetingBackgroundViewAnimated:(BOOL)arg1;
- (void)_addBedtimeGreetingBackgroundView;
- (void)handleAction:(id)arg1 fromSender:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) NSUInteger restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) long long presentationAltitude;
@property(readonly, nonatomic) long long presentationTransition;
@property(readonly, nonatomic) long long presentationPriority;
@property(readonly, nonatomic) long long presentationType;
@property(readonly, nonatomic) long long presentationStyle;
@property(nonatomic) __weak id <CSCoverSheetViewPresenting> presenter;
- (void)_conformsToCSCoverSheetViewPresenting;
- (void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateAppearanceForController:(id)arg1;
- (void)updateBehaviorForController:(id)arg1;
@property(readonly, copy, nonatomic) CSPresentation *externalPresentation;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)arg1;
- (id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
@property(readonly, nonatomic) BOOL shouldShowLockStatusBarTime;
- (void)updateCallToActionForMesaMatchFailure;
- (BOOL)isLockScreenShowingDefaultContent;
- (void)todayOverlayController:(id)arg1 didChangePresentationProgress:(double)arg2;
- (void)dismissTodayOverlay;
- (void)scrollPanGestureDidUpdate:(id)arg1;
- (void)idleTimerWillRefresh;
- (void)idleTimerDidChange;
- (void)idleTimerDidWarn;
- (void)idleTimerDidExpire;
- (void)idleTimerDidRefresh;
- (void)_activateCameraAnimated:(BOOL)arg1 actions:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic, getter=isShowingMediaControls) BOOL showingMediaControls;
- (BOOL)shouldUnlockUIOnKeyDownEvent;
- (void)noteResetRestoreStateUpdated;
- (void)noteDeviceBlockedStatusUpdated;
- (BOOL)isMainPageVisible;
- (BOOL)shouldDisableALS;
- (void)setInScreenOffMode:(BOOL)arg1 forAutoUnlock:(BOOL)arg2 fromUnlockSource:(int)arg3;
- (void)setInScreenOffMode:(BOOL)arg1;
- (BOOL)isInScreenOffMode;
- (void)cleanupInterstitialPresentationToPresented:(BOOL)arg1 inPlace:(BOOL)arg2;
- (void)updateInterstitialPresentationWithProgress:(double)arg1;
- (void)prepareForInterstitialPresentation;
@property(readonly, nonatomic) BOOL contentOccludesBackground;
- (void)jiggleLockIcon;
- (BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (void)finishUIUnlockFromSource:(int)arg1;
- (void)prepareForUILock;
- (void)prepareForUIUnlock;
- (BOOL)willUIUnlockFromSource:(int)arg1;
- (BOOL)isUnlockDisabled;
- (void)_sendAuthenticationChangedEvent;
- (void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 forceBiometricPresentation:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isPasscodeLockVisible;
@property(readonly, nonatomic) BOOL externalLockProvidersShowPasscode;
@property(readonly, nonatomic) BOOL externalLockProvidersRequireUnlock;
- (long long)statusBarStyle;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
- (BOOL)handleHeadsetButtonPress:(BOOL)arg1;
- (BOOL)handleVolumeDownButtonPress;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)handleLockButtonPress;
- (BOOL)handleHomeButtonLongPress;
- (BOOL)handleHomeButtonDoublePress;
- (BOOL)handleHomeButtonPress;
- (BOOL)suppressesScreenshots;
- (BOOL)suppressesControlCenter;
- (BOOL)suppressesBanners;
- (void)passcodeViewController:(id)arg1 didCompletePasscodeEntry:(BOOL)arg2;
- (void)passcodeViewControllerDidCancelPasscodeEntry:(id)arg1;
- (void)passcodeViewControllerDidBeginPasscodeEntry:(id)arg1;
- (void)coverSheetNotificationClearingTriggerDidFire:(id)arg1;
- (void)_listenForDisplayLayoutChanges:(BOOL)arg1;
- (void)_displayDidDisappearImplementation;
- (void)_displayWillDisappearImplementation;
- (void)_displayWillAppearImplementation;
- (void)_calculateAppearanceForCurrentOrientation;
- (id)_componentForHidingWithType:(long long)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (NSUInteger)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (BOOL)_canShowWhileLocked;
- (void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentModalViewController:(id)arg1 withTransition:(int)arg2;
- (void)presentModalViewController:(id)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 animated:(BOOL)arg4;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_prepareForViewWillAppearIfNecessary;
- (void)updateQuickActionsVisibility;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)loadView;
- (void)removeCoverSheetObserver:(id)arg1;
- (void)addCoverSheetObserver:(id)arg1;
- (void)unregisterExternalPresentationProvider:(id)arg1;
- (void)externalPresentationProviderPresentationChanged:(id)arg1;
- (void)registerExternalPresentationProvider:(id)arg1;
- (void)unregisterExternalLockProvider:(id)arg1;
- (void)externalLockProviderStateChanged:(id)arg1;
- (void)registerExternalLockProvider:(id)arg1;
- (void)unregisterExternalEventHandler:(id)arg1;
- (void)registerExternalEventHandler:(id)arg1;
- (void)unregisterExternalBehaviorProvider:(id)arg1;
- (void)externalBehaviorProviderBehaviorChanged:(id)arg1;
- (void)registerExternalBehaviorProvider:(id)arg1;
- (void)unregisterExternalAppearanceProvider:(id)arg1;
- (void)externalAppearanceProviderBehaviorChanged:(id)arg1;
- (void)registerExternalAppearanceProvider:(id)arg1;
- (void)resetMainPageContentOffset;
@property(readonly, nonatomic) long long effectiveInterfaceOrientation;
- (void)noteWillPresentForUserGesture;
- (BOOL)isShowingModalView;
- (void)setCoverSheetIsVisible:(BOOL)arg1;
- (void)activateCameraViewAnimated:(BOOL)arg1 sendingActions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)activateMainPageWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateTodayViewWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)isShowingTodayView;
@property(readonly, nonatomic) id <SBNotificationDestination> notificationDestination;
@property(readonly, nonatomic) CSPresentationViewController *mainPagePresentationViewController;
- (void)_addStateCaptureHandlers;
- (id)initWithPageViewControllers:(id)arg1 mainPageContentViewController:(id)arg2 context:(id)arg3;
- (NSUInteger)_dateTimeLayoutForPage:(id)arg1;
- (id)_pageForScrollPercent:(double)arg1;
- (double)_minDateListSpacingForPage:(id)arg1;
- (double)_dateTimeInsetXForPage:(id)arg1;
- (BOOL)containsCenteredDateTimeLayout;
- (double)dateTimeSubtitleMaximumWidth;
- (double)dateTimeMostExtremeTrailingX;
- (double)dateTimeMostExtremeLeadingX;
- (double)bottomContentInset;
- (double)listMinY;
- (double)dateBaselineToListY;
- (double)_timeLabelScrollPercentForDateTimeLayout:(NSUInteger)arg1;
- (double)timeLabelOffsetForScrollPercent:(double)arg1;
- (double)timeToSubtitleLabelBaselineDifferenceY;
- (double)timeLabelBaselineY;
- (void)_updateAccessibilityContentSizesIfNeeded;
- (void)_preferredContentSizeDidChange;

@end

