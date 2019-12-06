//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBAppSwitcherModelDelegate-Protocol.h>
#import <SpringBoard/SBFluidSwitcherGestureManagerDelegate-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionSceneEntityFrameProvider-Protocol.h>
#import <SpringBoard/SBMainDisplayWorkspaceAppInteractionEventSourceObserving-Protocol.h>
#import <SpringBoard/SBSwitcherContentViewControllerDataSource-Protocol.h>
#import <SpringBoard/SBSwitcherContentViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBSwitcherDemoFilteringControllerObserver-Protocol.h>
#import <SpringBoard/SBWorkspaceKeyboardFocusControllerObserver-Protocol.h>

@class BSAnimationSettings, BSSimpleAssertion, BSTimer, FBDisplayLayoutElement, NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, SBAppLayout, SBAppStatusBarSettingsAssertion, SBAppSwitcherModel, SBAppSwitcherServiceSet, SBAppSwitcherSettings, SBApplicationUserQuitMonitorServer, SBFluidSwitcherGestureManager, SBHomeScreenBackdropViewBase, SBMainDisplaySceneLayoutViewController, SBOrientationTransformWrapperView, SBSwitcherDemoCommandsServer, SBSwitcherDemoFilteringController, SBWindow, SBWorkspaceKeyboardFocusController, SiriContinuitySource, UIApplicationSceneDeactivationAssertion, UIPanGestureRecognizer, UIView;
@protocol BSInvalidatable, SBSwitcherContentViewControlling;

@interface SBMainSwitcherViewController : UIViewController <SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate, SBSwitcherDemoFilteringControllerObserver, PTSettingsKeyObserver, SBLayoutStateTransitionObserver, SBLayoutStateTransitionSceneEntityFrameProvider, SBFluidSwitcherGestureManagerDelegate, SBWorkspaceKeyboardFocusControllerObserver, SBAppSwitcherModelDelegate, SBMainDisplayWorkspaceAppInteractionEventSourceObserving>
{
    NSArray *_mainAppLayouts;
    NSArray *_floatingAppLayouts;
    SBAppSwitcherServiceSet *_switcherServices;
    NSMutableDictionary *_appLayoutToAcquiredTransientOverlayViewController;
    NSMutableDictionary *_appLayoutToEligibleTransientOverlayViewController;
    SBWindow *_window;
    UIViewController<SBSwitcherContentViewControlling> *_mainContentViewController;
    UIViewController<SBSwitcherContentViewControlling> *_floatingContentViewController;
    SBOrientationTransformWrapperView *_contentWrapperView;
    SBOrientationTransformWrapperView *_mainContentWrapperView;
    SBOrientationTransformWrapperView *_floatingContentWrapperView;
    SBHomeScreenBackdropViewBase *_floatingSwitcherBackdropView;
    UIView *_floatingSwitcherDimmingView;
    SBFluidSwitcherGestureManager *_gestureManager;
    NSMutableSet *_windowDragSceneIdentifiers;
    SBAppLayout *_activeAppLayoutWhenActivatingMainSwitcher;
    SBAppSwitcherSettings *_settings;
    Class _mainContentViewControllerClass;
    NSMutableArray *_servicesRemovedWhileAwayFromSwitcher;
    NSMutableDictionary *_liveAppsBeingTerminated;
    BOOL _ignoreModelUpdates;
    id <BSInvalidatable> _deferRotationForAppSwitcherAssertion;
    id <BSInvalidatable> _lockKeyboardFocusAssertion;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    FBDisplayLayoutElement *_displayLayoutElement;
    SBAppLayout *_testItemForInsertion;
    NSUInteger _testItemInsertionIndex;
    SBAppSwitcherModel *_mainSwitcherModel;
    SBSwitcherDemoCommandsServer *_demoCommandsServer;
    SBSwitcherDemoFilteringController *_demoFilteringController;
    NSArray *_demoFilteringHiddenAppLayouts;
    SBApplicationUserQuitMonitorServer *_userQuitMonitorServer;
    SiriContinuitySource *_siriSource;
    SBWorkspaceKeyboardFocusController *_keyboardFocusController;
    UIApplicationSceneDeactivationAssertion *_deactivatingScenesResignActiveAssertion;
    UIPanGestureRecognizer *_mainContentBorrowedScrollViewPanGestureRecognizer;
    SBAppStatusBarSettingsAssertion *_mainStatusBarAssertion;
    SBAppStatusBarSettingsAssertion *_floatingStatusBarAssertion;
    BSSimpleAssertion *_preventAdditionalMedusaSnapshotsAssertion;
    BSTimer *_preventAdditionalMedusaSnapshotsInvalidationTimer;
    NSMutableSet *_asynchronousRenderingAssertions;
    NSHashTable *_asynchronousRenderingCachedSurfacesReasons;
    BSTimer *_disableCachingAsynchronousRenderingSurfacesTimer;
    NSMutableDictionary *_recentSwipeUpToKillTimestampsForAppLayouts;
    NSHashTable *__hideStatusBarAssertions;
    id <BSInvalidatable> _suspendWallpaperAnimationAssertion;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
@property(retain, nonatomic) id <BSInvalidatable> suspendWallpaperAnimationAssertion; // @synthesize suspendWallpaperAnimationAssertion=_suspendWallpaperAnimationAssertion;
@property(retain, nonatomic, setter=_setHideStatusBarAssertions:) NSHashTable *_hideStatusBarAssertions; // @synthesize _hideStatusBarAssertions=__hideStatusBarAssertions;
@property(readonly, nonatomic) UIViewController<SBSwitcherContentViewControlling> *contentViewController; // @synthesize contentViewController=_mainContentViewController;
// - (void).cxx_destruct;
- (void)_setAsynchronousRenderingEnabled:(BOOL)arg1 withMinificationFilter:(BOOL)arg2 forLayerTarget:(id)arg3 presentationManager:(id)arg4;
- (void)_evaluateAsynchronousRenderingEnablement;
- (void)_reqlinquishAssertion:(id)arg1;
- (void)_updateAssertion:(id)arg1;
- (void)_acquireAssertion:(id)arg1;
- (void)_removeCardForDisplayIdentifier:(id)arg1;
- (void)_insertCardForDisplayIdentifier:(id)arg1 atIndex:(NSUInteger)arg2;
- (long long)_overrideWindowActiveInterfaceOrientation;
- (long long)_overrideInterfaceOrientationMechanics;
- (void)appSwitcherModel:(id)arg1 didRemoveAppLayoutForFallingOffList:(id)arg2;
- (void)keyboardFocusController:(id)arg1 didUpdateFocusToPID:(int)arg2 sceneID:(id)arg3;
- (void)_purgeHiddenAppLayoutsForUILock;
- (void)_noteUIWillLock;
- (id)_persistenceIdentifiersForBundleIdentifier:(id)arg1;
- (BOOL)_hasAppLayoutBeenUserKilledWithinThresholdToCreateNewScene:(id)arg1;
- (id)_recentAppLayoutsController;
- (void)_deleteAppLayout:(id)arg1 forReason:(long long)arg2;
- (void)_cancelPiPForDisplayItem:(id)arg1;
- (void)_deleteAppLayoutForDisplayItem:(id)arg1;
- (BOOL)_transitionRequestValidatorForRemovingDisplayItemWithRequest:(id)arg1 displayItem:(id)arg2 environmentMode:(long long)arg3;
- (void)_removeDisplayItem:(id)arg1 withNowPrimaryWorkspaceEntity:(id)arg2 currentFloatingAppLayout:(id)arg3 intent:(id)arg4;
- (void)_removeDisplayItemsAndGoToHomeScreen:(id)arg1 removalIntent:(id)arg2;
- (void)_deleteDisplayItem:(id)arg1;
- (void)removedDisplayItems:(id)arg1 withDestructionIntent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_removeAppLayout:(id)arg1 forReason:(long long)arg2 modelMutationBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_insertMainAppLayouts:(id)arg1 atIndexes:(id)arg2 floatingAppLayouts:(id)arg3 atIndexes:(id)arg4 modelMutationBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_insertAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 modelMutationBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_rebuildFloatingAppListCache;
- (void)_destroyFloatingAppListCache;
- (void)_cacheFloatingAppList;
- (void)_rebuildAppListCache;
- (void)_destroyAppListCache;
- (void)_cacheAppList;
- (void)_applicationProcessDidExit:(id)arg1;
- (void)_updateBestAppSuggestion;
- (void)_continuityAppSuggestionChanged:(id)arg1;
- (BOOL)_isBestAppSuggestionEligibleForSwitcher:(id)arg1;
- (void)_switcherServiceRemoved:(id)arg1;
- (void)_switcherServiceAdded:(id)arg1;
- (id)_transientOverlayPesentationManager;
- (void)_addAppLayoutToFront:(id)arg1 removeAppLayout:(id)arg2;
- (void)_addAppLayoutToFront:(id)arg1;
- (BOOL)_shouldAddAppLayoutToFront:(id)arg1;
- (id)_currentVisibleFloatingItem;
- (id)_currentFloatingAppLayout;
- (id)_currentAppLayout;
- (long long)_currentUnlockedEnvironmentMode;
- (void)_applicationDidExit:(id)arg1;
- (void)_warmAppInfoForAppsInList;
- (void)_switcherModelChanged:(id)arg1;
- (void)_updateDisplayLayoutElementForLayoutState:(id)arg1;
- (void)_releaseSwitcherOrientationLock;
- (void)_lockOrientationForSwitcherWithLayoutState:(id)arg1;
- (void)_releaseKeyboardFocus;
- (void)_lockKeyboardFocus;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)_reduceMotionStatusDidChange:(id)arg1;
- (void)_createFloatingSwitcherBackdropView;
- (void)_loadContentViewControllerIfNecessary;
- (void)switcherDemoFilteringControllerDidChangeHiddenApplicationBundleIDs:(id)arg1;
- (void)fluidSwitcherGestureManager:(id)arg1 willEndDraggingWindowWithSceneIdentifier:(id)arg2;
- (void)fluidSwitcherGestureManager:(id)arg1 didBeginDraggingWindowWithSceneIdentifier:(id)arg2;
- (void)fluidSwitcherGestureManager:(id)arg1 didEndGesture:(id)arg2;
- (void)fluidSwitcherGestureManager:(id)arg1 didUpdateGesture:(id)arg2;
- (void)fluidSwitcherGestureManager:(id)arg1 didBeginGesture:(id)arg2;
- (void)switcherContentController:(id)arg1 setWallpaperStyle:(long long)arg2;
- (void)switcherContentController:(id)arg1 setWallpaperScale:(double)arg2 withAnimationMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)switcherContentController:(id)arg1 setBackdropBlurType:(long long)arg2;
- (void)switcherContentController:(id)arg1 setBackdropBlurProgress:(double)arg2 withAnimationMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)switcherContentController:(id)arg1 setDimmingAlpha:(double)arg2 withAnimationMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)switcherContentController:(id)arg1 setHomeScreenAlpha:(double)arg2 withAnimationMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)switcherContentController:(id)arg1 setHomeScreenScale:(double)arg2 withAnimationMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)windowsToExcludeForCrossfadeSnapshotForSwitcherContentController:(id)arg1;
- (void)switcherContentController:(id)arg1 reopenHiddenAppLayoutsWithBundleIdentifier:(id)arg2;
- (void)cancelActiveGestureForSwitcherContentController:(id)arg1;
- (void)switcherContentController:(id)arg1 setCacheAsynchronousRenderingSurfaces:(BOOL)arg2;
- (BOOL)switcherContentController:(id)arg1 shouldResignActiveForStartOfTransition:(id)arg2;
- (void)switcherContentController:(id)arg1 setContainerStatusBarHidden:(BOOL)arg2 animationDuration:(double)arg3;
- (void)switcherContentControllerEndTethering:(id)arg1;
- (void)switcherContentControllerBeginTethering:(id)arg1;
- (void)switcherContentController:(id)arg1 setContentOrientation:(long long)arg2;
- (void)updateWindowVisibilityForSwitcherContentController:(id)arg1;
- (void)updateUserInteractionEnabledForSwitcherContentController:(id)arg1;
- (void)switcherContentController:(id)arg1 handlePlusButtonActionForBundleIdentifier:(id)arg2;
- (void)switcherContentController:(id)arg1 bringAppLayoutToFront:(id)arg2;
- (void)switcherContentController:(id)arg1 activatedBestAppSuggestion:(id)arg2;
- (void)switcherContentController:(id)arg1 deletedAppLayout:(id)arg2 forReason:(long long)arg3;
- (void)switcherContentController:(id)arg1 performTransitionWithRequest:(id)arg2 gestureInitiated:(BOOL)arg3;
- (BOOL)switcherContentController:(id)arg1 isAppLayoutHigherPriorityInTetheredSwitcher:(id)arg2;
- (id)switcherContentController:(id)arg1 hiddenAppLayoutsForBundleIdentifier:(id)arg2;
- (BOOL)isInAppStatusBarRequestedHiddenForSwitcherContentController:(id)arg1;
- (long long)sbActiveInterfaceOrientation;
- (long long)homeScreenInterfaceOrientation;
- (long long)switcherInterfaceOrientationForContentController:(id)arg1;
- (BOOL)switcherContentController:(id)arg1 shouldMorphToPiPForTransitionContext:(id)arg2;
- (id)switcherContentController:(id)arg1 transitionEventForContext:(id)arg2 identifier:(id)arg3 phase:(NSUInteger)arg4 animated:(BOOL)arg5;
- (id)switcherContentController:(id)arg1 transitionEventForLayoutState:(id)arg2 identifier:(id)arg3 phase:(NSUInteger)arg4 animated:(BOOL)arg5;
- (id)mainSwitcherWindow;
- (CGRect)frameForInlineAppExposeItemAspectFill:(BOOL)arg1;
- (CGRect)frameForFloatingAppLayoutInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
- (CGRect)frameForItemWithRole:(long long)arg1 inMainAppLayout:(id)arg2 interfaceOrientation:(long long)arg3;
- (long long)shadowStyleForSwitcherContentController:(id)arg1;
- (id)iconViewForIconIdentifier:(id)arg1;
- (id)createWorkspaceTransientOverlayForAppLayout:(id)arg1;
- (id)viewControllerForTransientOverlayAppLayout:(id)arg1;
- (id)appLayoutForWorkspaceTransientOverlay:(id)arg1;
- (id)activeTransientOverlayPresentedAppLayoutForSwitcherContentController:(id)arg1;
- (id)appLayoutsForSwitcherContentController:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)_entityForDisplayItem:(id)arg1;
- (id)_appLayoutContainingDisplayItem:(id)arg1;
- (id)_appForDisplayItem:(id)arg1;
- (id)_appLayoutFromPrimaryLayoutItem:(id)arg1 sideLayoutElement:(id)arg2 configuration:(long long)arg3;
- (void)_configureRequest:(id)arg1 forSwitcherTransitionRequest:(id)arg2 withEventLabel:(id)arg3;
- (CDUnknownBlockType)_dismissSwitcherValidatorToAppLayout:(id)arg1 dismissFloatingSwitcher:(BOOL)arg2 withEventLabel:(id)arg3 animated:(BOOL)arg4;
- (BOOL)_dismissSwitcherNoninteractivelyToAppLayout:(id)arg1 dismissFloatingSwitcher:(BOOL)arg2 animated:(BOOL)arg3;
- (CDUnknownBlockType)_activateSwitcherValidatorWithEventLabel:(id)arg1 animated:(BOOL)arg2;
- (CDUnknownBlockType)_toggleSwitcherTransitionValidatorAnimated:(BOOL)arg1;
- (void)_doUglySiriActivationThingsIfNecessary:(id)arg1;
- (void)_removeAcquiredTransientOverlayViewController:(id)arg1;
- (void)_enumerateTransientOverlayViewControllersUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)_isAcquiredTransientOverlayViewController:(id)arg1;
- (void)_addAcquiredTransientOverlayViewController:(id)arg1 forAppLayout:(id)arg2;
- (id)recentAppLayouts;
- (void)removeAppLayoutTransientOverlayViewController:(id)arg1;
@property(readonly, nonatomic) BOOL hasTransientOverlayAppLayouts;
- (BOOL)hasAppLayoutForTransientOverlayViewController:(id)arg1;
- (void)addAppLayoutForTransientOverlayViewController:(id)arg1;
@property(readonly, nonatomic) SBAppLayout *activeTransientOverlayPresentedAppLayout;
- (BOOL)isInAppStatusBarHidden;
- (id)requestInAppStatusBarHiddenAssertionForReason:(id)arg1 animated:(BOOL)arg2;
- (void)programmaticSwitchAppGestureMoveToRight;
- (void)programmaticSwitchAppGestureMoveToLeft;
- (void)failMultitaskingGesturesForReason:(id)arg1;
- (double)minimumHomeScreenScale;
@property(readonly, copy, nonatomic) BSAnimationSettings *defaultTransitionAnimationSettings;
@property(readonly, nonatomic) BOOL canInterruptActiveTransition;
- (BOOL)shouldAcceleratedHomeButtonPressBegin;
- (BOOL)isAnySwitcherVisible;
- (BOOL)isMainSwitcherVisible;
- (BOOL)handleHomeButtonSinglePressUp;
- (BOOL)toggleMainSwitcherNoninteractivelyWithSource:(long long)arg1 animated:(BOOL)arg2;
- (BOOL)dismissAllSwitchersNoninteractivelyAnimated:(BOOL)arg1;
- (BOOL)dismissMainSwitcherNoninteractivelyAnimated:(BOOL)arg1;
- (BOOL)activateMainSwitcherNoninteractivelyWithSource:(long long)arg1 animated:(BOOL)arg2;
- (id)applicationSceneTransitionContextForDismissingFloatingInlineAppExpose;
- (double)scaleForDownscaledSnapshotGenerationForSceneHandle:(id)arg1;
- (CGRect)applicationSceneSettingsFrameForInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
- (CGRect)sceneEntityFrameForWorkspaceEntity:(id)arg1 inLayoutState:(id)arg2;
- (BOOL)shouldPerformPreTransitionInsertionOfAppLayout:(id)arg1 forTransitionWithContext:(id)arg2;
- (id)_contentWrapperViewForContentViewController:(id)arg1;
- (void)_setContentOrientation:(long long)arg1 forContentViewController:(id)arg2;
- (void)_updateContentViewInterfaceOrientation:(long long)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)_init;

@end

