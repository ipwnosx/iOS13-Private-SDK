//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/CNAvatarViewDelegate-Protocol.h>
#import <PassKitUI/MFMailComposeViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKAMPEnrollmentManagerObserver-Protocol.h>
#import <PassKitUI/PKAccountAutomaticPaymentsControllerDelegate-Protocol.h>
#import <PassKitUI/PKAccountBillPaymentObserver-Protocol.h>
#import <PassKitUI/PKAccountServiceAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKAccountServiceObserver-Protocol.h>
#import <PassKitUI/PKBalanceDetailsViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKCreditAccountPaymentDetailsViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPassHeaderViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKitUI/PKPaymentPassActionWidgetViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>
#import <PassKitUI/PKPaymentVerificationControllerDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentActionViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentContactResolverDelegate-Protocol.h>
#import <PassKitUI/PKPerformActionViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPhysicalCardActionControllerDelegate-Protocol.h>
#import <PassKitUI/PSStateRestoration-Protocol.h>
#import <PassKitUI/_UIContextMenuInteractionDelegate-Protocol.h>

@class CLInUseAssertion, CNContact, NSArray, NSDateFormatter, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSObject, PKAccount, PKAccountService, PKAccountServiceAccountResolutionController, PKAnimatedNavigationBarTitleView, PKDashboardTransactionFetcher, PKExpressPassController, PKLinkedApplication, PKPassFaceViewRendererState, PKPassHeaderView, PKPassPresentationContext, PKPaymentApplication, PKPaymentBalanceReminder, PKPaymentPass, PKPaymentPassDetailActivationFooterView, PKPaymentTransactionCellController, PKPaymentTransactionDetailsFactory, PKPaymentVerificationController, PKPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentAccountResolutionController, PKPeerPaymentActionViewController, PKPeerPaymentContactResolver, PKPeerPaymentController, PKPeerPaymentPreferences, PKPeerPaymentWebService, PKPhysicalCardActionController, PKPhysicalCardController, PKSettingTableCell, PKSpinnerHeaderView, PKTransitBalanceModel, PKTransitPassProperties, UIColor, UIImageView, UIRefreshControl, UISegmentedControl, UITableViewHeaderFooterView, UIView;
@protocol OS_dispatch_group, OS_dispatch_source, PKPassDeleteHandler, PKPassLibraryDataProvider, PKPaymentDataProvider;

@interface PKPaymentPassDetailViewController : PKSectionTableViewController <MFMailComposeViewControllerDelegate, PKPeerPaymentContactResolverDelegate, PKPeerPaymentActionViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPhysicalCardActionControllerDelegate, PKCreditAccountPaymentDetailsViewControllerDelegate, PKAccountAutomaticPaymentsControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKAccountBillPaymentObserver, PKAccountServiceObserver, CNAvatarViewDelegate, PKPaymentDataProviderDelegate, PKPaymentVerificationControllerDelegate, PKPassHeaderViewDelegate, PKBalanceDetailsViewControllerDelegate, _UIContextMenuInteractionDelegate, PKPaymentPassActionWidgetViewDelegate, PKPerformActionViewControllerDelegate, PKAMPEnrollmentManagerObserver, UITableViewDataSource, UITableViewDelegate, PSStateRestoration, PKPaymentSetupDelegate>
{
    id <PKPassLibraryDataProvider> _passLibraryDataProvider;
    id <PKPaymentDataProvider> _paymentServiceDataProvider;
    long long _detailViewStyle;
    NSObject<OS_dispatch_source> *_transactionTimer;
    BOOL _deepLinkingEnabled;
    PKPaymentPass *_pass;
    PKLinkedApplication *_linkedApplication;
    PKPaymentApplication *_defaultPaymentApplication;
    PKPaymentWebService *_webService;
    PKPaymentVerificationController *_verificationController;
    PKPaymentPassDetailActivationFooterView *_activationFooter;
    UIRefreshControl *_refreshControl;
    NSObject<OS_dispatch_source> *_refreshTimeout;
    PKSettingTableCell *_messagesSwitch;
    PKSettingTableCell *_transactionsSwitch;
    PKSettingTableCell *_dailyCashSwitch;
    PKSettingTableCell *_notificationsSwitch;
    PKSettingTableCell *_automaticPresentationSwitch;
    PKSettingTableCell *_expressAccessSwitch;
    PKPaymentTransactionCellController *_transactionCellController;
    NSArray *_transactions;
    NSArray *_transactionCountAndYear;
    NSDateFormatter *_transactionYearFormatter;
    NSNumberFormatter *_transactionCountFormatter;
    PKDashboardTransactionFetcher *_transactionFetcher;
    NSArray *_devicePaymentApplications;
    NSArray *_contactlessPaymentApplications;
    BOOL _expressModeEnabled;
    BOOL _expressModeSupported;
    PKExpressPassController *_expressPassController;
    BOOL _performingCardTransfer;
    PKTransitPassProperties *_transitProperties;
    PKPaymentBalanceReminder *_transitPropertiesBalanceReminder;
    NSArray *_commuterFields;
    NSArray *_commutePlanFields;
    NSArray *_balanceFields;
    NSArray *_arbitraryInfoFields;
    NSDictionary *_balances;
    NSDictionary *_actionForBalance;
    NSMutableDictionary *_reminderForBalance;
    NSArray *_displayableBalanceFields;
    NSArray *_tabBarSegments;
    double _headerHeight;
    double _tabBarHeight;
    UIEdgeInsets _headerContentInset;
    BOOL _changingDefaultPaymentApplication;
    double _previousLayoutTableViewWidth;
    CGSize _previousLayoutContentSize;
    NSMutableDictionary *_contextualActionHandlers;
    UITableViewHeaderFooterView *_headerView;
    UITableViewHeaderFooterView *_footerView;
    UIImageView *_logoView;
    PKPassHeaderView *_passHeaderView;
    UISegmentedControl *_tabBar;
    UIView *_passSnapshotView;
    PKAnimatedNavigationBarTitleView *_titleIconView;
    BOOL _hasTabBar;
    PKPassFaceViewRendererState *_rendererState;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentController *_peerPaymentController;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPeerPaymentContactResolver *_contactResolver;
    PKPeerPaymentPreferences *_peerPaymentPreferences;
    BOOL _loadingPeerPaymentPreferences;
    PKSpinnerHeaderView *_peerPaymentPreferencesHeaderView;
    PKPeerPaymentActionViewController *_peerPaymentActionViewController;
    PKPaymentTransactionDetailsFactory *_transactionDetailsFactory;
    BOOL _loadingAMPEligibility;
    BOOL _isAmpEligible;
    PKAccountServiceAccountResolutionController *_resolutionController;
    PKAccountService *_accountService;
    PKAccount *_account;
    NSUInteger _accountFeatureIdentifier;
    BOOL _loadingPayments;
    PKSpinnerHeaderView *_scheduledPaymentsHeaderView;
    PKPhysicalCardController *_physicalCardController;
    PKPhysicalCardActionController *_physicalCardActionController;
    BOOL _loadingBankAccounts;
    BOOL _loadingAutomaticPayments;
    BOOL _loadingOrderPhysicalCard;
    BOOL _loadingEnableDisablePhysicalCard;
    BOOL _loadingReplacePhysicalCard;
    BOOL _loadingVirtualCard;
    BOOL _loadingAccountTermsAndConditions;
    BOOL _allowStatementCreditRedemption;
    NSUInteger _cashbackResolution;
    NSUInteger _redemptionStatus;
    NSArray *_recurringPayments;
    NSArray *_scheduledPayments;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionControllerForAccountService;
    NSIndexPath *_loadingPeerPaymentAccountActionIndexPath;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    NSUInteger _peerPaymentAccountResolution;
    BOOL _requestingStatement;
    BOOL _redeemingRewards;
    NSDateFormatter *_dueDateFormatter;
    NSDateFormatter *_dueTimeFormatter;
    BOOL _isAppleAccess;
    NSObject<OS_dispatch_group> *_initialLoadGroup;
    BOOL _initialLoadTimedout;
    PKTransitBalanceModel *_transitBalanceModel;
    PKSpinnerHeaderView *_billingAddressHeaderView;
    CNContact *_billingContact;
    BOOL _loadingBillingContact;
    int _expressPassesInformationToken;
    CLInUseAssertion *_inUseAssertion;
    BOOL _allContentIsLoaded;
    NSMutableArray *_executionBlocksContentIsLoaded;
    PKPassPresentationContext *_context;
    id <PKPassDeleteHandler> _deleteOverrider;
    UIColor *_primaryTextColor;
    UIColor *_detailTextColor;
    UIColor *_linkTextColor;
    UIColor *_warningTextColor;
    UIColor *_highlightColor;
}

@property(nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) UIColor *warningTextColor; // @synthesize warningTextColor=_warningTextColor;
@property(nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property(nonatomic) UIColor *detailTextColor; // @synthesize detailTextColor=_detailTextColor;
@property(nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(nonatomic) __weak id <PKPassDeleteHandler> deleteOverrider; // @synthesize deleteOverrider=_deleteOverrider;
// - (void).cxx_destruct;
- (void)_reportPassDetailsAnalyticsForToggleTag:(id)arg1 toggleResult:(BOOL)arg2;
- (void)_reportPassDetailsAnalyticsForTappedButtonTag:(id)arg1;
- (void)_reportPassDetailsAnalyticsForTappedRowTag:(id)arg1;
- (void)balanceDetailsViewController:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalance:(id)arg3;
- (BOOL)shouldAllowRefresh;
- (void)_refreshFinished:(BOOL)arg1;
- (void)refreshControlValueChanged:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)physicalCardActionController:(id)arg1 didChangeToState:(long long)arg2 withError:(id)arg3;
- (void)_presentMerchantDetailsViewWithTransaction:(id)arg1 forCell:(id)arg2;
- (void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2;
- (void)didChangeVerificationPresentation;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)performPaymentPassAction:(id)arg1;
- (void)transferToBank;
- (void)addMoney;
- (void)presentContactIssuerSheet;
- (void)presentCardNumbers;
- (void)openBusinessChat;
- (void)emailIssuer;
- (void)openIssuerWebsite;
- (void)callIssuer;
- (void)passHeaderViewDidChangePass:(id)arg1;
- (void)paymentSetupDidFinish:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)contactsDidChangeForContactResolver:(id)arg1;
- (void)_passSettingsChanged:(id)arg1;
- (void)_done:(id)arg1;
- (void)_activationFooterPressed:(id)arg1;
- (void)_dailyCashSwitchChanged:(id)arg1;
- (void)_notificationSwitchChanged:(id)arg1;
- (void)_transactionsSwitchChanged:(id)arg1;
- (void)_messagesSwitchChanged:(id)arg1;
- (void)_setExpressAccessEnabled:(BOOL)arg1 paymentSetupContext:(long long)arg2 authenticationCredential:(id)arg3;
- (void)_expressAccessSwitchChanged:(id)arg1;
- (void)_automaticPresentationSwitchChanged:(id)arg1;
- (void)_tabBarSegmentChanged:(id)arg1;
- (void)_updateCashbackPeerPaymentResolutionSection;
- (void)_updateTransitPassPropertiesSections;
- (void)_setTransitProperties:(id)arg1;
- (BOOL)_isDeletingPass;
- (double)_heightForPassStateSectionWithTableView:(id)arg1;
- (id)_footerTextForPassStateSection;
- (id)_footerViewForApplePayProductPrivacySection;
- (id)_footerViewForPassStateSection;
- (double)_footerViewHeightForPassStateSectionWithTableView:(id)arg1;
- (void)_didSelectPassStateSection;
- (id)_headerTitleForPassStateSection;
- (NSUInteger)_passStateSectionGenerateCellWithOutput:(id )arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (long long)_rowIndexForExpressTransitSettingsCell;
- (BOOL)_canSelectBalanceOrCommutePlanCellAtRowIndex:(long long)arg1;
- (BOOL)_canDeletePass;
- (void)_didSelectDeleteCard;
- (BOOL)_isJapaneseRegion;
- (void)_handleProvisioningError:(id)arg1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (void)_didSelectTransferCardAtIndexPath:(id)arg1;
- (void)_preflightWatchForTransferWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentContactBankViewController:(NSUInteger)arg1;
- (void)postServiceModeNotification;
- (void)_didSelectContactBankSectionAtIndexPath:(long long)arg1;
- (void)_didSelectTransactionAtRow:(long long)arg1;
- (void)_openPaymentSetupWithNetworkWhitelist:(id)arg1 paymentSetupMode:(long long)arg2;
- (BOOL)_hasActionOfType:(NSUInteger)arg1;
- (id)_availableCommutePlanActions;
- (id)_availableActions;
- (BOOL)_transactionDeepLinkingEnabled;
- (void)updateActivationFooterViewContents;
- (id)_activationFooterView;
- (BOOL)_shouldShowServiceMode;
- (BOOL)_shouldShowEmployeeInformation;
- (BOOL)_shouldShowContactCell;
- (BOOL)_shouldShowPrivacyPolicyCell;
- (BOOL)_shouldShowTermsCell;
- (BOOL)_shouldShowBillingAddressCell;
- (BOOL)_shouldShowAutomaticPresentation;
- (BOOL)_accountInGoodStateForAMPEligbilityCheck;
- (BOOL)_shouldShowServicingSection;
- (BOOL)_shouldShowWidgets;
- (NSUInteger)_rowIndexForPeerPaymentBalanceActionRow:(NSUInteger)arg1;
- (NSUInteger)_peerPaymentBalanceAndMoneyActionForRowIndex:(NSUInteger)arg1;
- (BOOL)_peerPaymentBalanceAndMoneyActionEnabled:(NSUInteger)arg1;
- (NSUInteger)_numberOfPeerPaymentBalanceAndMoneyActionsEnabled;
- (BOOL)_shouldShowAccountActions;
- (BOOL)_canDoManualIdentityVerification;
- (BOOL)_shouldShowDeleteCell;
- (BOOL)_shouldShowTransferCell;
- (void)_updatePeerPaymentPreferencesSectionVisibilityAndReloadIfNecessary;
- (BOOL)_showsTransactionHistorySwitch;
- (BOOL)_shouldShowTransactions;
- (id)_createTabBarWithSelectedIndex:(long long)arg1;
- (double)_offscreenHeaderHeight;
- (BOOL)_updateHeaderHeightDeterminingLayout:(BOOL)arg1;
- (void)_updateTabBarWithSegments:(id)arg1;
- (void)_updateTabBar;
- (void)_updateHeaderActionView;
- (void)_cancelPendingTransactionTimer;
- (void)_startPendingTransactionTimer;
- (void)accountAutomaticPaymentsController:(id)arg1 didSchedulePayment:(id)arg2;
- (void)paymentDetailsViewController:(id)arg1 didCancelPayment:(id)arg2;
- (void)_handleAccountServiceAccountDidChangeNotification:(id)arg1;
- (void)accountBillPaymentViewController:(id)arg1 didSchedulePayments:(id)arg2;
- (void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1;
- (void)_ampEligbilityUpdated:(BOOL)arg1;
- (void)ampEnrollmentManager:(id)arg1 didEnrollPaymentPass:(id)arg2 success:(BOOL)arg3;
- (void)_updateAmpEligibility;
- (void)_updatePeerPaymentPreferences;
- (void)_updatePeerPaymentAccount;
- (void)peerPaymentActionViewControllerDidPerformAction:(id)arg1;
- (void)peerPaymentActionViewControllerDidCancel:(id)arg1;
- (void)_showPeerPaymentActionViewControllerForAction:(NSUInteger)arg1;
- (BOOL)isTotalBalanceCellSelectable;
- (void)_didSelectCreditDetailsCell:(id)arg1;
- (void)_didSelectNetworkBenefitsCell;
- (BOOL)_shouldShowNetworkBenefitsCell;
- (void)_didSelectRedeemAtIndexPath:(id)arg1;
- (void)_didSelectFixPeerPaymentAtIndexPath:(id)arg1;
- (void)_showSpinner:(BOOL)arg1 inCell:(id)arg2;
- (void)_showSpinner:(BOOL)arg1 inCell:(id)arg2 detailText:(id)arg3;
- (void)presentBillPayment;
- (void)showStatementDetailsWithIdentifier:(id)arg1;
- (void)presentBankAccounts;
- (void)presentBalanceDetails;
- (void)presentSchedulePayments;
- (id)_accountResolutionController;
- (void)_didSelectMakePayment;
- (void)_didSelectTransferToBank;
- (void)presentTermsAcceptance;
- (void)presentIdentityVerification;
- (void)presentTopUp;
- (void)_doneLoadingPeerPaymentAccountAction;
- (void)authAndDecryptWithVirtualCard:(id)arg1;
- (void)_didSelectServicingWalletLink;
- (void)_didSelectAccountServiceScheduledPaymentsAtIndexPath:(id)arg1;
- (void)_didSelectAccountServiceCardNumbersAtIndexPath:(id)arg1;
- (void)_presentPhysicalCardPasswordAuthorization:(CDUnknownBlockType)arg1;
- (void)_didSelectAccountServicePhysicalCardAtIndexPath:(id)arg1;
- (void)_didSelectAccountServiceRewardsDetailsAtIndexPath:(id)arg1;
- (void)_didSelectAccountServiceMakeDefaultAtIndexPath:(id)arg1;
- (void)_didSelectAccountServiceBankAccountsAtIndexPath:(id)arg1;
- (id)_installmentsPlanCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_didSelectInstallmentPlansAtIndexPath:(id)arg1;
- (id)_settingsExpressTransitURL;
- (void)_didSelectCardInfoCellAtIndexPath:(id)arg1;
- (void)_didSelectCommutePlanAtRowIndex:(long long)arg1;
- (void)_didSelectBalanceAtRowIndex:(long long)arg1;
- (void)_didSelectBalanceOrCommutePlanCellAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentStatementAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentAccountActionAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentManualIdentityVerificationAtIndexPath:(id)arg1;
- (void)_didSelectAutomaticallyAcceptPaymentsPreferenceAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentBankAccountsAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentBalanceAndMoneyActionAtRow:(long long)arg1;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_updatePeerPaymentPreferencesWithNewPreferences:(id)arg1;
- (void)_peerPaymentPaymentRequestPreferenceChanged:(id)arg1;
- (void)_didSelectTransactionCountByPeriodAtIndexPath:(id)arg1;
- (id)_transactionCountByPeriodCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_transactionCountFormatter;
- (id)_transactionYearFormatter;
- (id)_dueTimeFormatter;
- (id)_dueDateFormatter;
- (id)_indexPathForAccountServiceScheduledPaymentsSetUpRecurringPaymentsRow;
- (id)_titleForScheduledPaymentsSection;
- (NSUInteger)_accountServiceScheduledPaymentsRowTypeForRowIndex:(long long)arg1;
- (id)_accountServiceScheduledPaymentsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_accountServiceCardNumbersCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_accountServicePhysicalCardCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (NSUInteger)_accountServicePhysicalCardRowForRowIndex:(long long)arg1;
- (long long)_numberOfAccountServicePhysicalCardRowsEnabled;
- (BOOL)_accountServicePhysicalCardRowIsEnabled:(NSUInteger)arg1;
- (NSUInteger)_accountServiceRewardsRowForRowIndex:(long long)arg1;
- (long long)_numberOfAccountServiceRewardsRowsEnabled;
- (BOOL)_accountServiceRewardsRowIsEnabled:(NSUInteger)arg1;
- (id)_accountServiceRewardsDetailsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_accountServiceMakeDefaultCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_accountServiceBankAccountsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (NSUInteger)_accountServiceCreditDetailsRowForRowIndex:(long long)arg1;
- (BOOL)_accountServiceCreditDetailsRowIsEnabled:(NSUInteger)arg1;
- (long long)_numberOfAccountServiceCreditDetailsRowsEnabled;
- (id)_accountServiceCreditDetailsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentStatementCellForTableView:(id)arg1;
- (id)_peerPaymentBankAccountsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentAutomaticallyAcceptPaymentsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentAccountActionCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentManualIdentityVerificationCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentCardInfoCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentBalanceAndMoneyActionCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_deleteCardCellForTableView:(id)arg1;
- (id)_transferCardCellForTableView:(id)arg1;
- (id)_deviceAccountNumberCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (void)_refreshPaymentApplicationsSelection;
- (void)_didSelectPaymentApplicationSectionRowAtIndexPath:(id)arg1;
- (id)_paymentApplicationsCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_commuterRouteCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (void)_didSelectTransitTicketAtRow:(long long)arg1;
- (long long)_transitCellGenerateCellWithOutput:(id )arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (BOOL)_transactionCellEditActionsGenerateWithOutput:(id )arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_contactKeysToFetch;
- (id)_transactionCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_transactionsSwitchCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_accountServiceNotificationsSwitchCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_peerPaymentNotificationsSwitchCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_messagesSwitchCellForTableView:(id)arg1;
- (id)_expressAccessCellForTableView:(id)arg1;
- (id)_automaticPresentationCellForTableView:(id)arg1;
- (NSUInteger)_contactBankCellWithOutput:(id )arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (NSUInteger)_passOperationsCellWithOutput:(id )arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_balanceReminderCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_balanceCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_balanceOrCommutePlanCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)topUpActionForRow:(long long)arg1 balance:(id )arg2;
- (id)_arbitraryInfoCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_cellForField:(id)arg1 tableView:(id)arg2;
- (NSUInteger)_employeeInfoSectionGenerateCellWithOutput:(id )arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (NSUInteger)_cardInfoSectionGenerateCellWithOutput:(id )arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (BOOL)_showExpressDetails;
- (void)_didSelectPassOperationsSectionAtIndexPath:(id)arg1;
- (void)_presentTermsAndConditionsWithRow:(NSUInteger)arg1;
- (void)presentTermsAndConditions;
- (void)_didSelectPrivacySectionAtRow:(long long)arg1;
- (NSUInteger)_rowIndexForPrivacyTermsInfoRowType:(NSUInteger)arg1;
- (NSUInteger)_privacyTermsInfoRowTypeForRowIndex:(long long)arg1;
- (NSUInteger)_numberOfPrivacyTermsInfoRows;
- (id)_privacyTermsSectionCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (void)_didSelectBillingAddress;
- (id)_billingAddressCellWithLabel:(BOOL)arg1 forTableView:(id)arg2;
- (id)_moreTransactionsCellForTableView:(id)arg1;
- (id)_linkedApplicationCellForTableView:(id)arg1;
- (id)_linkedAppCellForTableView:(id)arg1;
- (id)_widgetCellForTableView:(id)arg1;
- (id)_scheduledPaymentCellForPayment:(id)arg1 tableView:(id)arg2;
- (id)_stackedInfoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4;
- (id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 reuseIdentifier:(id)arg4 forTableView:(id)arg5;
- (id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4;
- (id)_infoCellWithDescription:(id)arg1 forTableView:(id)arg2;
- (id)_disclosureCellWithTitle:(id)arg1 forTableView:(id)arg2;
- (id)_checkmarkCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_linkCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_disabledCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_switchCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_imageViewCellForImage:(id)arg1 contentMode:(long long)arg2 forTableView:(id)arg3;
- (id)_spinnerCellForTableView:(id)arg1;
- (id)_subtitleCellForTableView:(id)arg1;
- (id)_defaultCellWithTextColor:(id)arg1 forTableView:(id)arg2;
- (void)_applyDefaultDynamicStylingToCell:(id)arg1;
- (void)_applyDefaultStaticStylingToCell:(id)arg1;
- (void)_fetchScheduledPaymentsWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scheduledPaymentsChangedForAccountIdentifier:(id)arg1;
- (BOOL)_transactionSectionsDataIsChangedForNewTransactions:(id)arg1 oldTransactions:(id)arg2 newtransactionCountByPeriod:(id)arg3 oldtransactionCountByPeriod:(id)arg4;
- (void)_reloadTransactionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2;
- (id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3;
- (BOOL)contextMenuInteractionShouldBegin:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (CGPoint)_normalizedContentOffsetForTargetOffset:(CGPoint)arg1;
- (void)_normalizeContentOffset;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)rowAnimationForDeletingSection:(NSUInteger)arg1;
- (long long)rowAnimationForInsertingSection:(NSUInteger)arg1;
- (long long)rowAnimationForReloadingSection:(NSUInteger)arg1;
- (void)reloadSections:(id)arg1;
- (void)reloadSection:(NSUInteger)arg1;
- (BOOL)shouldMapSection:(NSUInteger)arg1;
- (void)_fetchBalanceRemindersWithActionForBalance:(id)arg1 transitProperties:(id)arg2 pass:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_updateDisplayableBalancesAndTransitPropertiesWithBalances:(id)arg1 transitProperties:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_updateDisplayableBalancesWithBalances:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_updateDisplayableBalances;
- (void)_updateTransitPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateExpressPassInformation;
- (void)_expressPassDidChange;
- (void)_updatePassProperties:(BOOL)arg1;
- (void)_reloadTransactionSectionsAnimated:(BOOL)arg1 forceReload:(BOOL)arg2;
- (void)_reloadView;
- (void)_reloadTitle;
- (void)_reloadPassAndView;
- (id)_transactionDetailViewControllerForTransaction:(id)arg1;
- (void)presentTransactionDetailsForTransaction:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setShowDoneButton:(BOOL)arg1;
- (void)contentIsLoaded;
- (void)executeAfterContentIsLoaded:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPass:(id)arg1 webService:(id)arg2 peerPaymentWebService:(id)arg3 accountService:(id)arg4 style:(long long)arg5 passLibraryDataProvider:(id)arg6 paymentServiceDataProvider:(id)arg7 rendererState:(id)arg8 context:(id)arg9;
- (id)initWithPass:(id)arg1 webService:(id)arg2 peerPaymentWebService:(id)arg3 style:(long long)arg4 passLibraryDataProvider:(id)arg5 paymentServiceDataProvider:(id)arg6 rendererState:(id)arg7 context:(id)arg8;
- (id)initWithPass:(id)arg1 webService:(id)arg2 peerPaymentWebService:(id)arg3 accountService:(id)arg4 style:(long long)arg5 passLibraryDataProvider:(id)arg6 paymentServiceDataProvider:(id)arg7;
- (id)initWithPass:(id)arg1 webService:(id)arg2 peerPaymentWebService:(id)arg3 style:(long long)arg4 passLibraryDataProvider:(id)arg5 paymentServiceDataProvider:(id)arg6;
- (id)initWithPass:(id)arg1 webService:(id)arg2 style:(long long)arg3 dataProvider:(id)arg4;

@end

