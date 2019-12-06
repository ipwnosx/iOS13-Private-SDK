//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PassKitUI/PKAccountServiceAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKDiscoveryDataSourceDelegate-Protocol.h>
#import <PassKitUI/PKForegroundActiveArbiterObserver-Protocol.h>
#import <PassKitUI/PKGroupsControllerDelegate-Protocol.h>
#import <PassKitUI/PKPGSVFooterViewDelegate-Protocol.h>
#import <PassKitUI/PKPGSVSectionHeaderViewDelegate-Protocol.h>
#import <PassKitUI/PKPGSVSectionSubheaderDelegate-Protocol.h>
#import <PassKitUI/PKPassGroupStackViewDatasource-Protocol.h>
#import <PassKitUI/PKPassGroupStackViewDelegate-Protocol.h>
#import <PassKitUI/PKPassPersonalizationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPerformActionViewControllerDelegate-Protocol.h>
#import <PassKitUI/_PKUIKVisibilityBackdropViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSTimer, PKAccountServiceAccountResolutionController, PKDiscoveryDataSource, PKDiscoveryGalleryView, PKGroupsController, PKPassGroupStackView, PKPaymentService, PKPeerPaymentAccountResolutionController, PKPeerPaymentService, _PKUIKVisibilityBackdropView;
@protocol PKPassLibraryDataProvider;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKForegroundActiveArbiterObserver, PKPaymentServiceDelegate, PKPaymentSetupDelegate, PKPerformActionViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKDiscoveryDataSourceDelegate, _PKUIKVisibilityBackdropViewDelegate, PKPGSVFooterViewDelegate, PKPGSVSectionSubheaderDelegate, PKPGSVSectionHeaderViewDelegate, PKPassPersonalizationViewControllerDelegate>
{
    long long _invalidationStatus;
    PKPassGroupStackView *_groupStackView;
    _PKUIKVisibilityBackdropView *_headerBackground;
    _PKUIKVisibilityBackdropView *_footerBackground;
    double _headerBackgroundVisibility;
    double _footerBackgroundVisibility;
    PKPaymentService *_paymentService;
    NSUInteger _modalCardIndex;
    long long _presentationState;
    NSTimer *_allowDimmingTimer;
    NSTimer *_passViewedNotificationTimer;
    NSMutableArray *_blocksQueuedForUpdateCompletion;
    NSArray *_passUniqueIDsToExcludeFromFiltering;
    BOOL _persistentCardEmulationQueued;
    BOOL _viewAppeared;
    BOOL _viewAppearedBefore;
    BOOL _passesAreOutdated;
    BOOL _reloadingPasses;
    BOOL _backgroundMode;
    BOOL _inFailForward;
    NSUInteger _instanceFooterSuppressionCounter;
    int _expressTransactionNotificationObserver;
    id <PKPassLibraryDataProvider> _passLibraryDataProvider;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    PKAccountServiceAccountResolutionController *_accountServiceAccountResolutionController;
    PKDiscoveryDataSource *_discoveryDataSource;
    BOOL _inField;
    BOOL _handleFieldDetection;
    BOOL _showingFieldDetectEducation;
    BOOL _welcomeStateEnabled;
    BOOL _externalModalPresentationAllowed;
    long long _style;
    PKGroupsController *_groupsController;
    NSUInteger _suppressedContent;
    PKDiscoveryGalleryView *_discoveryGalleryView;
}

+ (void)endSuppressingFooter;
+ (void)beginSuppressingFooter;
+ (void)endTrackingAction;
+ (void)beginTrackingAction;
+ (BOOL)isPerformingAction;
@property(readonly, nonatomic) __weak PKDiscoveryGalleryView *discoveryGalleryView; // @synthesize discoveryGalleryView=_discoveryGalleryView;
@property(nonatomic, getter=isExternalModalPresentationAllowed) BOOL externalModalPresentationAllowed; // @synthesize externalModalPresentationAllowed=_externalModalPresentationAllowed;
@property(nonatomic, getter=isWelcomeStateEnabled) BOOL welcomeStateEnabled; // @synthesize welcomeStateEnabled=_welcomeStateEnabled;
@property(getter=isShowingFieldDetectEducation) BOOL showingFieldDetectEducation; // @synthesize showingFieldDetectEducation=_showingFieldDetectEducation;
@property BOOL handleFieldDetection; // @synthesize handleFieldDetection=_handleFieldDetection;
@property BOOL passesAreOutdated; // @synthesize passesAreOutdated=_passesAreOutdated;
@property(nonatomic) NSUInteger suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property(readonly, nonatomic) PKGroupsController *groupsController; // @synthesize groupsController=_groupsController;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;
- (void)presentPassDetailsForHeaderView:(id)arg1;
- (id)passForSectionHeaderView:(id)arg1;
- (void)transitionToViewController:(id)arg1;
- (void)shouldUpdateSectionSubheaderView:(id)arg1;
- (void)discoveryDataSource:(id)arg1 didUpdateArticleLayouts:(id)arg2;
- (void)paymentSetupDidFinish:(id)arg1;
- (BOOL)_canPerformExternalModalPresentation;
- (void)updateRegionSupportIfNecessary;
- (void)_handleFooterSupressionChange:(id)arg1;
- (void)_regionConfigurationDidChangeNotification;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)_handleChildViewControllerRequestingServiceMode:(id)arg1;
- (void)_handleExpressNotification;
- (void)_registerForExpressTransactionNotifications:(BOOL)arg1;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1;
- (void)_updatePeerPaymentAccount;
- (void)_warnFailForward;
- (id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg1;
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1;
- (id)_passFromGroupsControllerWithUniqueIdentifier:(id)arg1;
- (void)_updateFooterSuppressionWithContext:(id)arg1;
- (void)_updateFooterSuppressionAnimated:(BOOL)arg1;
- (void)_endSuppressingInstanceFooterWithContext:(id)arg1;
- (void)_beginSuppressingInstanceFooter;
- (id)_appleCardUpsellAlertWithAccount:(id)arg1;
- (void)_resetToRootAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissPresentedVCsWithRequirements:(NSUInteger)arg1 animated:(BOOL)arg2 performAction:(CDUnknownBlockType)arg3;
- (void)_applyPresentationState;
- (void)_presentWithUpdatedPasses:(CDUnknownBlockType)arg1;
- (void)_handleProvisioningError:(id)arg1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (void)presentPaymentSetupController;
- (void)_presentAddPassesControllerWithPasses:(id)arg1;
- (id)_passPendingActivationToPresent;
- (id)_peerPaymentAccountResolutionController;
- (void)presentAutomaticPresentationControllerForPassWithUniqueID:(id)arg1;
- (void)addSimulatorPassWithURL:(id)arg1;
- (void)addVASPassWithIdentifier:(id)arg1;
- (void)startPaymentPreflight:(id)arg1 withPaymentSetupMode:(long long)arg2 referrerIdentifier:(id)arg3 paymentNetwork:(id)arg4 transitNetworkIdentifier:(id)arg5 allowedFeatureIdentifiers:(id)arg6;
- (void)_invalidateForType:(long long)arg1;
- (void)partiallyInvalidate;
- (void)invalidate;
@property(readonly, retain, nonatomic) PKPassGroupStackView *groupStackView;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3;
- (void)presentPeerPaymentPassAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentDiscoveryArticleForItemWithIdentifier:(id)arg1 referrerIdentifier:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentDailyCashForPassUniqueIdentifier:(id)arg1 dateComponents:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showStatementForIdentifier:(id)arg1 passUniqueIdentifier:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentBalanceDetailsForPassUniqueIdentifier:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentSpendingSummaryForPassUniqueIdentifier:(id)arg1 type:(NSUInteger)arg2 unit:(NSUInteger)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentAccountServicePaymentWithReferenceIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)presentPassDetailsAssociatedWithVirtualCardID:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentCreditPassAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentActionViewControllerWithUniqueID:(id)arg1 actionType:(NSUInteger)arg2;
- (void)presentAccountServiceSchedulePayment:(id)arg1;
- (void)presentPeerPaymentSetupWithCurrencyAmount:(id)arg1 flowState:(NSUInteger)arg2 senderAddress:(id)arg3;
- (void)presentPeerPaymentTopUp;
- (void)presentPeerPaymentVerifyIdentity;
- (void)presentPeerPaymentTermsAcceptance;
- (void)_presentTransactionDetailsForTransaction:(id)arg1 paymentPass:(id)arg2;
- (void)presentTransactionDetailsForTransactionWithServiceIdentifier:(id)arg1;
- (void)presentTransactionDetailsForTransactionWithIdentifier:(id)arg1;
- (void)presentInstallmentPlanWithIdentifier:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentInstallmentPlansForFeature:(NSUInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentPassWithUniqueID:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setupItemForExpressUpgradeMarket:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentExpressUpgradeDetailForPassUniqueID:(id)arg1 marketIdentifier:(id)arg2 animated:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPassDetailsWithUniqueID:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithUniqueID:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setTableModalPresentationEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)presentGroupTableAnimated:(BOOL)arg1;
- (void)presentGroupTable;
- (void)presentPileOffscreen;
- (void)presentOffscreenAnimated:(BOOL)arg1 split:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)presentOffscreenAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentOnscreen:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentPaymentSetupInMode:(long long)arg1 referrerIdentifier:(id)arg2 paymentNetwork:(id)arg3 transitNetworkIdentifier:(id)arg4 allowedFeatureIdentifiers:(id)arg5;
- (void)presentInitialState;
- (void)queuePersistentCardEmulation;
- (void)updatePassesIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentPassWithFieldProperties:(id)arg1 fieldPassUniqueIdentifiers:(id)arg2 animated:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPassWithFieldProperties:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithUpdateUserNotificationIdentifier:(id)arg1;
- (void)presentDefaultPaymentPassAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)forcePayment;
- (void)_presentGroupWithIndex:(NSUInteger)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) BOOL presentingPass;
- (void)paymentDeviceDidExitField;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (id)groupsControllerShouldExcludePassesWithUniqueIDsFromFiltering:(id)arg1;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(NSUInteger)arg3 toIndex:(NSUInteger)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2;
- (void)groupStackViewDidChangeCoachingState:(id)arg1;
- (void)groupStackViewWantsForcedPayment:(id)arg1;
- (void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(BOOL)arg3;
- (void)groupStackView:(id)arg1 wantsBottomContentSeparatorWithVisibility:(double)arg2 animated:(BOOL)arg3;
- (void)groupStackView:(id)arg1 wantsTopContentSeparatorWithVisibility:(double)arg2 animated:(BOOL)arg3;
// - (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;
- (void)_passViewedNotificationTimerFired;
- (void)_clearPassViewedNotificationTimer;
- (void)_startPassViewedNotificationTimer;
- (void)_handleStatusBarChange:(id)arg1;
- (void)updateLockscreenIdleTimer;
- (void)allowIdleTimer;
- (void)groupStackView:(id)arg1 groupDidMoveFromIndex:(NSUInteger)arg2 toIndex:(NSUInteger)arg3;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (BOOL)groupStackViewShouldAllowReordering:(id)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (void)reloadGroupsForGroupStackView:(id)arg1;
- (void)viewTapped:(id)arg1;
- (BOOL)isInField;
- (BOOL)supportsExternalPresentation;
- (id)footerForGroupStackView:(id)arg1;
- (id)_makeDiscoveryGalleryView;
- (id)groupStackView:(id)arg1 subheaderForPassType:(NSUInteger)arg2;
- (id)groupStackView:(id)arg1 headerForPassType:(NSUInteger)arg2;
- (BOOL)groupStackView:(id)arg1 willHaveHeaderViewForPassType:(NSUInteger)arg2;
- (BOOL)groupStackView:(id)arg1 requiresHeaderForPassType:(NSUInteger)arg2;
- (BOOL)groupStackViewShouldShowHeaderViews:(id)arg1;
- (id)featuredGroup;
- (BOOL)hasDiscoveryContent;
- (NSUInteger)indexOfSeparationGroup;
- (NSUInteger)indexOfGroup:(id)arg1;
- (NSUInteger)numberOfGroups;
- (id)groupAtIndex:(NSUInteger)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (id)initWithGroupsController:(id)arg1 style:(long long)arg2;
- (id)initWithGroupsController:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

