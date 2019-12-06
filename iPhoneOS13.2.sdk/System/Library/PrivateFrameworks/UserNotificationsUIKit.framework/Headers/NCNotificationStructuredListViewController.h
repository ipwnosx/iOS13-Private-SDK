//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <UserNotificationsUIKit/NCLegibilitySettingsAdjusting-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationManagementViewPresenterDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationMasterListDelegate-Protocol.h>

@class NCNotificationListSectionHeaderView, NCNotificationListTouchEaterManager, NCNotificationListView, NCNotificationManagementViewPresenter, NCNotificationMasterList, NCNotificationRequest, NCNotificationViewController, NSHashTable, NSString, UIPanGestureRecognizer, UIScrollView;
@protocol NCNotificationListCoalescingControlsHandler, NCNotificationStructuredListViewControllerDelegate;

@interface NCNotificationStructuredListViewController : UIViewController <NCNotificationMasterListDelegate, NCNotificationManagementViewPresenterDelegate, NCLegibilitySettingsAdjusting>
{
    BOOL _deviceAuthenticated;
    BOOL _backgroundBlurred;
    id <NCNotificationStructuredListViewControllerDelegate> _delegate;
    double _itemSpacing;
    NCNotificationMasterList *_masterList;
    NCNotificationListView *_masterListView;
    NCNotificationListTouchEaterManager *_touchEaterManager;
    NCNotificationManagementViewPresenter *_managementViewPresenter;
    NCNotificationRequest *_notificationRequestRemovedWhilePresentingLongLook;
    NCNotificationViewController *_notificationViewControllerPresentingLongLook;
    NCNotificationListSectionHeaderView *_headerViewInForceTouchState;
    id <NCNotificationListCoalescingControlsHandler> _coalescingControlsHandlerInForceTouchState;
    NSHashTable *_observers;
    UIEdgeInsets _insetMargins;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <NCNotificationListCoalescingControlsHandler> coalescingControlsHandlerInForceTouchState; // @synthesize coalescingControlsHandlerInForceTouchState=_coalescingControlsHandlerInForceTouchState;
@property(nonatomic) __weak NCNotificationListSectionHeaderView *headerViewInForceTouchState; // @synthesize headerViewInForceTouchState=_headerViewInForceTouchState;
@property(nonatomic) __weak NCNotificationViewController *notificationViewControllerPresentingLongLook; // @synthesize notificationViewControllerPresentingLongLook=_notificationViewControllerPresentingLongLook;
@property(retain, nonatomic) NCNotificationRequest *notificationRequestRemovedWhilePresentingLongLook; // @synthesize notificationRequestRemovedWhilePresentingLongLook=_notificationRequestRemovedWhilePresentingLongLook;
@property(nonatomic) BOOL backgroundBlurred; // @synthesize backgroundBlurred=_backgroundBlurred;
@property(retain, nonatomic) NCNotificationManagementViewPresenter *managementViewPresenter; // @synthesize managementViewPresenter=_managementViewPresenter;
@property(retain, nonatomic) NCNotificationListTouchEaterManager *touchEaterManager; // @synthesize touchEaterManager=_touchEaterManager;
@property(retain, nonatomic) NCNotificationListView *masterListView; // @synthesize masterListView=_masterListView;
@property(retain, nonatomic) NCNotificationMasterList *masterList; // @synthesize masterList=_masterList;
@property(readonly, nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(readonly, nonatomic) UIEdgeInsets insetMargins; // @synthesize insetMargins=_insetMargins;
@property(nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated; // @synthesize deviceAuthenticated=_deviceAuthenticated;
@property(nonatomic) __weak id <NCNotificationStructuredListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_resetCellWithRevealedActions;
- (BOOL)_forwarNotificationRequestToLongLookIfNecessary:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_requestAuthenticationAndPerformBlock:(CDUnknownBlockType)arg1;
- (id)_sectionSettingsForSectionIdentifier:(id)arg1;
- (id)_logDescription;
- (void)notificationManagementViewPresenterDidDismissManagementView:(id)arg1;
- (void)notificationManagementViewPresenterWillPresentManagementView:(id)arg1;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setDeliverQuietly:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsNotifications:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (id)notificationManagementViewPresenter:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (BOOL)notificationMasterList:(id)arg1 shouldFilterNotificationRequest:(id)arg2;
- (BOOL)notificationMasterList:(id)arg1 shouldDelayDeliveryOfNotificationRequest:(id)arg2;
- (void)notificationMasterList:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint )arg4;
- (void)notificationMasterList:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)notificationMasterList:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (BOOL)notificationListComponentShouldAllowLongPressGesture:(id)arg1;
- (void)notificationListComponentChangedContent:(id)arg1;
- (void)notificationMasterListDidScrollToRevealNotificationHistory:(id)arg1;
- (id)backgroundGroupNameBaseForNotificationListComponent:(id)arg1;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationListComponent:(id)arg1;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationListComponent:(id)arg1;
- (id)hideHomeAffordanceAnimationSettingsForNotificationListComponent:(id)arg1;
- (id)notificationListComponent:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
- (id)notificationUsageTrackingStateForNotificationListComponent:(id)arg1;
- (void)notificationListComponent:(id)arg1 requestsAuthenticationAndPerformBlock:(CDUnknownBlockType)arg2;
- (BOOL)notificationListComponent:(id)arg1 isClockNotificationRequest:(id)arg2;
- (void)notificationListComponent:(id)arg1 requestsPresentingManagementViewForNotificationRequest:(id)arg2 managementViewType:(NSUInteger)arg3 withPresentingView:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)notificationListComponent:(id)arg1 didPresentSectionHeaderView:(id)arg2 inForceTouchState:(BOOL)arg3;
- (void)notificationListComponent:(id)arg1 didPresentCoalescingControlsHandler:(id)arg2 inForceTouchState:(BOOL)arg3;
- (void)notificationListComponent:(id)arg1 didTransitionSectionHeaderView:(id)arg2 toClearState:(BOOL)arg3;
- (void)notificationListComponent:(id)arg1 didTransitionCoalescingControlsHandler:(id)arg2 toClearState:(BOOL)arg3;
- (void)notificationListComponent:(id)arg1 didTransitionActionsForNotificationCell:(id)arg2 revealed:(BOOL)arg3;
- (void)notificationListComponent:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (void)notificationListComponent:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (void)notificationListComponentRequestsClearingAllNotificationRequests:(id)arg1;
- (void)notificationListComponent:(id)arg1 didRemoveNotificationViewController:(id)arg2;
- (void)notificationListComponent:(id)arg1 didAddNotificationViewController:(id)arg2;
- (void)notificationListComponent:(id)arg1 didEndUserInteractionWithNotificationViewController:(id)arg2;
- (void)notificationListComponent:(id)arg1 didBeginUserInteractionWithNotificationViewController:(id)arg2;
- (void)notificationListComponentDidSignificantUserInteraction:(id)arg1;
- (BOOL)notificationMasterListShouldAllowNotificationHistoryReveal:(id)arg1;
- (void)notificationMasterList:(id)arg1 requestsClearingFromIncomingSectionNotificationRequests:(id)arg2;
- (BOOL)notificationListComponentShouldHintForDefaultAction:(id)arg1;
- (void)notificationListComponent:(id)arg1 isPresentingLongLookForViewController:(id)arg2;
- (void)notificationListComponent:(id)arg1 shouldFinishLongLookTransitionForNotificationRequest:(id)arg2 trigger:(long long)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (BOOL)notificationListComponent:(id)arg1 shouldAllowInteractionsForNotificationRequest:(id)arg2;
- (double)insetHorizontalMarginForNotificationListComponent:(id)arg1;
- (id)containerViewForPreviewInteractionPresentedContentForNotificationListComponent:(id)arg1;
- (id)notificationListComponent:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationListComponent:(id)arg1 willDismissLongLookForCancelActionForViewController:(id)arg2;
- (void)notificationListComponent:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(BOOL)arg4 withParameters:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)notificationListComponent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)legibilitySettingsForNotificationListComponent:(id)arg1;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (void)notifyContentObservers;
- (void)removeContentObserver:(id)arg1;
- (void)addContentObserver:(id)arg1;
- (BOOL)interpretsViewAsContent:(id)arg1;
@property(readonly, nonatomic) NSString *backgroundGroupNameBase;
- (id)newCaptureOnlyMaterialViewController;
- (void)listViewControllerPresentedByUserAction;
@property(nonatomic) __weak UIPanGestureRecognizer *homeAffordancePanGesture;
@property(nonatomic, getter=isHomeAffordanceVisible) BOOL homeAffordanceVisible;
- (void)revealNotificationHistory:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic, getter=isPresentingNotificationInLongLook) BOOL presentingNotificationInLongLook;
- (BOOL)isContentExtensionVisible:(id)arg1;
- (BOOL)dismissModalFullScreenAnimated:(BOOL)arg1;
@property(readonly, nonatomic) CGSize effectiveContentSize;
- (void)toggleMissedSectionActive:(BOOL)arg1 reason:(NSUInteger)arg2;
- (void)toggleFilteringForSectionIdentifier:(id)arg1 shouldFilter:(BOOL)arg2;
- (void)migrateNotifications;
@property(readonly, nonatomic) BOOL hasVisibleContent;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)modifyNotificationRequest:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (void)insertNotificationRequest:(id)arg1;
- (void)_didChangeDeepestUnambiguousResponder;
- (BOOL)_canShowWhileLocked;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)collapseGroupForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)expandGroupForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)notificationRequestWithNotificationIdentifier:(id)arg1 sectionIdentifier:(id)arg2;

@end

