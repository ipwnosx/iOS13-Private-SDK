//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ChatKit/CKCloudKitSyncProgressViewControllerDelegate-Protocol.h>
#import <ChatKit/CKContainerSearchControllerDelegate-Protocol.h>
#import <ChatKit/CKConversationListCellDelegate-Protocol.h>
#import <ChatKit/CKConversationResultsControllerDelegate-Protocol.h>
#import <ChatKit/CKOnboardingControllerDelegate-Protocol.h>
#import <ChatKit/CNContactViewControllerDelegate-Protocol.h>
#import <ChatKit/CNMeCardSharingSettingsViewControllerDelegate-Protocol.h>
#import <ChatKit/IMCloudKitEventHandler-Protocol.h>
#import <ChatKit/INKContentControllerObserver-Protocol.h>
#import <ChatKit/_UIContextMenuInteractionDelegate-Protocol.h>

@class CKCloudKitSyncProgressViewController, CKConversation, CKConversationList, CKConversationListFilterCell, CKConversationSearchResultsController, CKLargeTitleAccessoryView, CKMessagesController, CKNavigationBarTitleView, CKOnboardingController, CKScheduledUpdater, CKSearchViewController, CNContact, CNContactStore, INKContentController, INKContentView, NSArray, NSIndexPath, NSMapTable, UIBarButtonItem, UIButton, UISearchController, UIView, _UIContextMenuInteraction;

@interface CKConversationListController : UITableViewController <UISearchControllerDelegate, UISearchBarDelegate, CKCloudKitSyncProgressViewControllerDelegate, IMCloudKitEventHandler, CNContactViewControllerDelegate, CKConversationResultsControllerDelegate, CKContainerSearchControllerDelegate, CKConversationListCellDelegate, UITableViewDropDelegate, UITableViewDragDelegate, _UIContextMenuInteractionDelegate, INKContentControllerObserver, CNMeCardSharingSettingsViewControllerDelegate, CKOnboardingControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITableViewDelegatePrivate, UIActionSheetDelegate>
{
    NSIndexPath *_previouslySelectedIndexPath;
    unsigned int _isVisible:1;
    unsigned int _willRotate:1;
    BOOL _isInitialLoad;
    BOOL _isInitialAppearance;
    BOOL _isShowingSwipeDeleteConfirmation;
    BOOL _draggingConversation;
    BOOL _compositionWasSent;
    BOOL _shouldUseFastPreviewText;
    BOOL _hasJunkiMessageChats;
    CKConversationList *_conversationList;
    CKMessagesController *_messagesController;
    CKCloudKitSyncProgressViewController *_syncProgressViewController;
    NSMapTable *_conversationListCellToChatInfo;
    NSMapTable *_chatToConversationListCellInfo;
    CKNavigationBarTitleView *_navigationBarTitleView;
    CKLargeTitleAccessoryView *_largeTitleAccessoryView;
    CKScheduledUpdater *_updater;
    UIView *_noMessagesDialogView;
    NSArray *_frozenConversations;
    NSUInteger _filteredConversationCount;
    long long _filterMode;
    NSArray *_filteredWhitelistedConversations;
    NSArray *_filteredJunkConversations;
    NSArray *_nonPlaceholderConversations;
    CKConversation *_conversationChangingPinState;
    double _conversationCellHeight;
    UISearchController *_searchController;
    CNContact *_meContact;
    CKConversationSearchResultsController *_searchResultsController;
    CKSearchViewController *_modernSearchResultsController;
    _UIContextMenuInteraction *_contextMenuInteraction;
    UIBarButtonItem *_composeButton;
    UIButton *_composeButtonView;
    UIBarButtonItem *_optionsButtonItem;
    UIButton *_optionsButtonView;
    UIBarButtonItem *_spacingItem;
    UIBarButtonItem *_doneButton;
    id /* CDUnknownBlockType */ _searchCompletion;
    CNContactStore *_contactStore;
    CKConversationListFilterCell *_cachedFilterControlCell;
    INKContentController *_infoKitContentController;
    INKContentView *_infoKitContentView;
    CKOnboardingController *_onboardingController;
}

@property(retain, nonatomic) CKOnboardingController *onboardingController; // @synthesize onboardingController=_onboardingController;
@property(retain, nonatomic) INKContentView *infoKitContentView; // @synthesize infoKitContentView=_infoKitContentView;
@property(retain, nonatomic) INKContentController *infoKitContentController; // @synthesize infoKitContentController=_infoKitContentController;
@property(retain, nonatomic) CKConversationListFilterCell *cachedFilterControlCell; // @synthesize cachedFilterControlCell=_cachedFilterControlCell;
@property(nonatomic) BOOL hasJunkiMessageChats; // @synthesize hasJunkiMessageChats=_hasJunkiMessageChats;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) BOOL shouldUseFastPreviewText; // @synthesize shouldUseFastPreviewText=_shouldUseFastPreviewText;
@property(copy, nonatomic) id /* CDUnknownBlockType */ searchCompletion; // @synthesize searchCompletion=_searchCompletion;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIBarButtonItem *spacingItem; // @synthesize spacingItem=_spacingItem;
@property(retain, nonatomic) UIButton *optionsButtonView; // @synthesize optionsButtonView=_optionsButtonView;
@property(retain, nonatomic) UIBarButtonItem *optionsButtonItem; // @synthesize optionsButtonItem=_optionsButtonItem;
@property(retain, nonatomic) UIButton *composeButtonView; // @synthesize composeButtonView=_composeButtonView;
@property(retain, nonatomic) UIBarButtonItem *composeButton; // @synthesize composeButton=_composeButton;
@property(nonatomic) BOOL compositionWasSent; // @synthesize compositionWasSent=_compositionWasSent;
@property(retain, nonatomic) _UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
@property(retain, nonatomic) CKSearchViewController *modernSearchResultsController; // @synthesize modernSearchResultsController=_modernSearchResultsController;
@property(retain, nonatomic) CKConversationSearchResultsController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(retain, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) double conversationCellHeight; // @synthesize conversationCellHeight=_conversationCellHeight;
@property(retain, nonatomic) CKConversation *conversationChangingPinState; // @synthesize conversationChangingPinState=_conversationChangingPinState;
@property(retain, nonatomic) NSArray *nonPlaceholderConversations; // @synthesize nonPlaceholderConversations=_nonPlaceholderConversations;
@property(retain, nonatomic) NSArray *filteredJunkConversations; // @synthesize filteredJunkConversations=_filteredJunkConversations;
@property(retain, nonatomic) NSArray *filteredWhitelistedConversations; // @synthesize filteredWhitelistedConversations=_filteredWhitelistedConversations;
@property(nonatomic) long long filterMode; // @synthesize filterMode=_filterMode;
@property(nonatomic, getter=isDraggingConversation) BOOL draggingConversation; // @synthesize draggingConversation=_draggingConversation;
@property(nonatomic) NSUInteger filteredConversationCount; // @synthesize filteredConversationCount=_filteredConversationCount;
@property(copy, nonatomic) NSArray *frozenConversations; // @synthesize frozenConversations=_frozenConversations;
@property(retain, nonatomic) UIView *noMessagesDialogView; // @synthesize noMessagesDialogView=_noMessagesDialogView;
@property(retain, nonatomic) CKScheduledUpdater *updater; // @synthesize updater=_updater;
@property(nonatomic) BOOL isShowingSwipeDeleteConfirmation; // @synthesize isShowingSwipeDeleteConfirmation=_isShowingSwipeDeleteConfirmation;
@property(retain, nonatomic) CKLargeTitleAccessoryView *largeTitleAccessoryView; // @synthesize largeTitleAccessoryView=_largeTitleAccessoryView;
@property(retain, nonatomic) CKNavigationBarTitleView *navigationBarTitleView; // @synthesize navigationBarTitleView=_navigationBarTitleView;
@property(retain, nonatomic) NSMapTable *chatToConversationListCellInfo; // @synthesize chatToConversationListCellInfo=_chatToConversationListCellInfo;
@property(retain, nonatomic) NSMapTable *conversationListCellToChatInfo; // @synthesize conversationListCellToChatInfo=_conversationListCellToChatInfo;
@property(retain, nonatomic) CKCloudKitSyncProgressViewController *syncProgressViewController; // @synthesize syncProgressViewController=_syncProgressViewController;
@property(retain, nonatomic) NSIndexPath *previouslySelectedIndexPath; // @synthesize previouslySelectedIndexPath=_previouslySelectedIndexPath;
@property(nonatomic) __weak CKMessagesController *messagesController; // @synthesize messagesController=_messagesController;
@property(nonatomic) __weak CKConversationList *conversationList; // @synthesize conversationList=_conversationList;
// - (void).cxx_destruct;
- (void)contentController:(id)arg1 didFinishWithContent:(id)arg2 animated:(BOOL)arg3;
- (void)contentController:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(BOOL)arg3;
- (void)_chatAllowedByScreenTimeChanged:(id)arg1;
- (void)_downtimeStateChanged:(id)arg1;
- (void)cloudKitSyncProgressViewController:(id)arg1 actionButtonWasPressed:(long long)arg2 errors:(id)arg3;
- (void)_beginAccountRepairIfNeeded;
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
- (void)unregisterForCloudKitEvents;
- (void)registerForCloudKitEventsImmediately;
- (void)registerForCloudKitEventsWithDelayedRegistration:(BOOL)arg1;
- (void)_updateSyncProgressIfNeeded;
- (void)_updateSyncProgressIfNeededWithProgressController:(id)arg1;
@property(readonly, nonatomic) BOOL shouldShowPendingCell;
- (void)selectConversationClosestToDeletedIndex:(NSUInteger)arg1;
- (void)selectNextSequentialConversation:(BOOL)arg1;
- (void)selectDefaultConversationAnimated:(BOOL)arg1;
- (void)deleteSelectedConversation;
- (void)_selectConversationAtIndex:(NSUInteger)arg1 animated:(BOOL)arg2;
- (NSUInteger)_indexOfDefaultConversation;
- (NSUInteger)_indexOfConverationClosestToDeletedIndex:(NSUInteger)arg1;
- (long long)firstVisibleRowInTable;
- (long long)lastVisibleRowInTable;
- (BOOL)shouldScrollTableAtCellSelection:(id)arg1;
- (void)_updateInsets;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canHandleDropSession:(id)arg2;
- (void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)userActivityForNewSceneWithConversation:(id)arg1;
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)searcherDidComplete:(id)arg1;
- (void)searcher:(id)arg1 userDidDeleteChatGUID:(id)arg2;
- (void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3;
- (id)searcher:(id)arg1 conversationForChatGUID:(id)arg2;
- (void)searchViewController:(id)arg1 requestsPushOfSearchController:(id)arg2;
- (void)searchControllerDidBeginDragging:(id)arg1;
- (void)searchController:(id)arg1 didSelectItem:(id)arg2 inChat:(id)arg3;
- (id)searchController:(id)arg1 conversationForChatGUID:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)_filterCellSelectionChanged:(id)arg1;
- (void)_dismissPresentedNavController:(id)arg1;
- (void)avatarHeaderWasTappedForConversation:(id)arg1 inCell:(id)arg2;
- (double)tableViewSpacingForExtraSeparators:(id)arg1;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)pinConversationButtonTappedForIndexPath:(id)arg1 setPinned:(BOOL)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)muteConversationButtonTappedForIndexPath:(id)arg1 setMuted:(BOOL)arg2;
- (void)markAsReadButtonTappedForIndexPath:(id)arg1;
- (void)markAsReadButtonTapped:(id)arg1;
- (void)_cancelDeletion:(CDUnknownBlockType)arg1;
- (id)alertTitleForDelete;
- (void)deleteButtonTappedForIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 cellToUpdate:(id)arg3;
- (void)batchDeleteButtonTapped:(id)arg1;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (long long)preferredStatusBarStyle;
- (void)optionsButtonTapped:(id)arg1;
- (void)showMultiplePhoneNumbersAlertForNicknames;
- (void)showAccountMismatachAlertForNicknames;
- (void)composeButtonClicked:(id)arg1;
- (void)_endHoldingUpdatesForBatchEditing:(BOOL)arg1;
- (void)_updateToolbarItems;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)inputAccessoryView;
// - (void)_getRotationContentSettings:(CDStruct_e950349b )arg1;
- (NSUInteger)supportedInterfaceOrientations;
- (void)performResumeDeferredSetup;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (id)actionsForTranscriptPreviewController:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2;
- (BOOL)contextMenuInteractionShouldBegin:(id)arg1;
@property(readonly, nonatomic) BOOL isVisible;
- (void)applicationWillSuspend;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewLayoutMarginsDidChange;
- (void)_updateNavbarLayoutIfNeeded;
- (void)_endHoldingUpdatesOnViewWillAppear;
- (void)viewDidLayoutSubviews;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)_messageIsFromFilteredSenderServiceIsSMS:(BOOL)arg1 lastMessageIsSMS:(BOOL)arg2 isContact:(BOOL)arg3 isFiltered:(BOOL)arg4 isSpam:(BOOL)arg5 unknownFilteringEnabled:(BOOL)arg6 smsSpamFilteringEnabled:(BOOL)arg7;
- (BOOL)_messageSpamFilteringEnabled;
- (BOOL)_messageUnknownFilteringEnabled;
- (BOOL)_getHasJunkiMessageUserDefault;
- (BOOL)_messageFilteringEnabled;
- (id)_mergeUnsentComposition:(id)arg1 withDroppedComposition:(id)arg2;
- (void)_showConversationWithComposition:(id)arg1 atIndexPath:(id)arg2;
- (void)performSearch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateNonPlaceholderConverationLists;
- (void)_updateFilteredConversationLists;
- (void)_updateConversationFilteredFlagsAndReportSpam;
- (BOOL)shouldCleanupFilter;
- (void)updateNoMessagesDialog;
- (void)updateMarginWidth;
- (void)_updateConversationListNeedsResort:(BOOL)arg1;
- (void)updateConversationList;
- (id)_indexPaths:(id)arg1 containingHandleWithUID:(id)arg2;
- (void)_reloadVisibleConversationList:(id)arg1;
- (void)updateConversationNamesForNicknames:(id)arg1;
- (void)updateSMSSpamConversationsDisplayName;
- (void)endHoldingConversationListUpdatesForKey:(id)arg1;
- (void)endHoldingAllConversationListUpdatesForKey:(id)arg1;
- (void)beginHoldingConversationListUpdatesForKey:(id)arg1;
- (void)compositionSent;
- (void)significantTimeChange;
- (void)noteUnreadCountsChanged;
- (void)conversationWillBeMarkedRead:(id)arg1;
- (void)updateConversationSelection;
- (void)onboardingControllerDidFinish:(id)arg1;
- (id)presentingViewControllerForOnboardingController:(id)arg1;
- (void)sharingSettingsViewController:(id)arg1 didUpdateWithSharingResult:(id)arg2;
- (void)sharingSettingsViewController:(id)arg1 didSelectSharingAudience:(NSUInteger)arg2;
- (void)sharingSettingsViewController:(id)arg1 didUpdateSharingState:(BOOL)arg2;
- (void)sharingSettingsViewControllerDidUpdateContact:(id)arg1;
- (BOOL)_imageForkedFromMeCard;
- (NSUInteger)_meCardSharingAudience;
- (BOOL)_meCardSharingEnabled;
- (id)_meCardSharingState;
- (id)_meCardSharingNameProviderWithContact:(id)arg1;
- (id)_meContact;
- (id)_contactStore;
- (id)nicknameController;
- (void)showMeCardViewControllerWithNickname:(id)arg1;
- (void)showMeCardViewController;
- (void)doneButtonTapped:(id)arg1;
- (void)updateTitleViews:(BOOL)arg1;
- (void)updateNavigationItems;
- (BOOL)_shouldKeepSelection;
- (void)_groupsChanged:(id)arg1;
- (void)_conversationMessageWasSent:(id)arg1;
- (void)_conversationListDidChange:(id)arg1;
- (void)_contactStoreDidFinishLoadingNotification:(id)arg1;
- (void)_conversationListDidFinishLoadingConversations:(id)arg1;
- (void)_chatWatermarkDidChange:(id)arg1;
- (void)_multiWayCallStateChanged:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_conversationPinStateChangedNotification:(id)arg1;
- (void)_conversationContactPhotosEnabledChangedNotification:(id)arg1;
- (void)_conversationSpamFilteringStateChangedNotification:(id)arg1;
- (void)_conversationFilteringStateChangedNotification:(id)arg1;
- (void)_conversationMuteDidChangeNotification:(id)arg1;
- (void)_conversationDisplayNameChangedNotification:(id)arg1;
- (void)_conversationIsFilteredChangedNotification:(id)arg1;
- (void)_chatRegistryLastMessageLoadedNotification:(id)arg1;
- (void)_chatParticipantsChangedNotification:(id)arg1;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)_increaseContrastDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (BOOL)_shouldResizeNavigationBar;
- (void)invalidateCellLayout;
- (void)dealloc;
- (id)init;
- (id)activeConversations;
- (void)updateFilterControl:(id)arg1;
- (Class)conversationListCellClass;

@end

