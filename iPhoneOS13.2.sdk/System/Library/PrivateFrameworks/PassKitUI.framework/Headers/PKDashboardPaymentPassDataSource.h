//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKAccountServiceAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKAccountServiceObserver-Protocol.h>
#import <PassKitUI/PKDashboardPassDataSource-Protocol.h>
#import <PassKitUI/PKDashboardTransactionFetcherDelegate-Protocol.h>
#import <PassKitUI/PKDiscoveryObserver-Protocol.h>
#import <PassKitUI/PKForegroundActiveArbiterObserver-Protocol.h>
#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentVerificationControllerDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKSecureElementObserver-Protocol.h>
#import <PassKitUI/PKSpendingSummaryFetcherObserver-Protocol.h>

@class NSArray, NSDate, NSDateFormatter, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOrderedSet, NSString, PKAMPEnrollmentManager, PKAccount, PKAccountServiceAccountResolutionController, PKCreditAccountStatement, PKDashboardTransactionFetcher, PKGroup, PKPassGroupView, PKPassPresentationContext, PKPaymentDefaultDataProvider, PKPaymentPass, PKPaymentVerificationController, PKPeerPaymentAccount, PKPeerPaymentAccountResolutionController, PKPeerPaymentContactResolver, PKPeerPaymentWebService, PKPhysicalCardController, PKSecureElement, PKSpendingSummary, PKSpendingSummaryFetcher, PKTransitBalanceModel;
@protocol OS_dispatch_source, PKDashboardDataSourceDelegate;

@interface PKDashboardPaymentPassDataSource : NSObject <PKSecureElementObserver, PKPaymentDataProviderDelegate, PKPaymentVerificationControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKForegroundActiveArbiterObserver, PKSpendingSummaryFetcherObserver, PKAccountServiceAccountResolutionControllerDelegate, PKDiscoveryObserver, PKPaymentSetupViewControllerDelegate, PKAccountServiceObserver, PKDashboardPassDataSource, PKDashboardTransactionFetcherDelegate>
{
    PKPassGroupView *_groupView;
    PKGroup *_group;
    id <PKDashboardDataSourceDelegate> _delegate;
    PKPaymentPass *_pass;
    BOOL _isTransitPass;
    BOOL _isAccessPass;
    NSArray *_transactions;
    PKDashboardTransactionFetcher *_transactionFetcher;
//     struct os_unfair_lock_s _lockTransactions;
    NSArray *_previousTransactions;
    BOOL _transactionsPerPeriodLoaded;
    NSArray *_transactionGroups;
    BOOL _forceTransactionsReload;
    BOOL _forceTransactionsUpdate;
    NSObject<OS_dispatch_source> *_timerTransactions;
    NSDate *_lastTransactionReload;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPeerPaymentContactResolver *_contactResolver;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    BOOL _performingPeerPaymentResolution;
    BOOL _performingAMPEnrollment;
    PKTransitBalanceModel *_transitBalanceModel;
    BOOL _canDisplayProducts;
    BOOL _productsLoaded;
    BOOL _canDisplayBalance;
    BOOL _balanceLoaded;
    BOOL _balanceSectionNeedsUpdate;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    PKPaymentVerificationController *_paymentVerificationController;
    BOOL _performingVerification;
    PKSecureElement *_secureElement;
    BOOL _isInRestrictedMode;
    int _sessionActiveToken;
    BOOL _sessionActive;
    NSOrderedSet *_messages;
    BOOL _messagesLoaded;
    NSDateFormatter *_formatterYear;
    BOOL _allContentIsLoaded;
//     CDStruct_973bafd3 _activeState;
    NSMutableArray *_executionBlocksContentIsLoaded;
    PKPassPresentationContext *_context;
    BOOL _isCreditPass;
    PKAccount *_account;
    PKPhysicalCardController *_physicalCardController;
    PKCreditAccountStatement *_currentStatement;
    NSArray *_upcomingScheduledPayments;
    BOOL _scheduledPaymentsLoaded;
    PKSpendingSummaryFetcher *_summaryFetcher;
    NSDate *_startCurrentPeriod;
    PKSpendingSummary *_currentSummary;
    BOOL _pendingSummaryUpdate;
    BOOL _hasMoreSummaryUpdates;
    NSError *_accountUpdateError;
    BOOL _performingAccountUpdate;
    PKAccountServiceAccountResolutionController *_accountResolutionController;
//     struct os_unfair_lock_s _lockDownloads;
    NSMutableSet *_iconDownloads;
    NSString *_scaleKey;
    BOOL _showAMPEnrollmentMessage;
    PKAMPEnrollmentManager *_AMPEnrollmentManager;
    NSMutableDictionary *_messageImagesCache;
    NSArray *_weeks;
    NSArray *_months;
}

@property(retain, nonatomic) NSArray *months; // @synthesize months=_months;
@property(retain, nonatomic) NSArray *weeks; // @synthesize weeks=_weeks;
@property(readonly, nonatomic) PKSpendingSummaryFetcher *summaryFetcher; // @synthesize summaryFetcher=_summaryFetcher;
@property(readonly, nonatomic) PKDashboardTransactionFetcher *transactionFetcher; // @synthesize transactionFetcher=_transactionFetcher;
@property(readonly, nonatomic) PKAccount *account; // @synthesize account=_account;
// - (void).cxx_destruct;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
// - (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;
- (void)scheduledPaymentsChangedForAccountIdentifier:(id)arg1;
- (void)discoveryServiceDidReceiveUpdatedDiscoveryEngagementMessages:(id)arg1;
- (void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3;
- (void)invalidatedSummariesAvailable;
- (void)invalidatedSpendingSummariesOfType:(NSUInteger)arg1;
- (void)invalidatedSpendingSummaryOfType:(NSUInteger)arg1 startingWithDate:(id)arg2;
- (void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2;
- (void)didChangeVerificationPresentation;
- (void)_verificationButtonTapped;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3;
- (id)_contactResolver;
- (void)_peerPaymentResolutionTappedWithResolution:(NSUInteger)arg1;
- (void)_peerPaymentAccountChanged:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
- (void)_addToAMPButtonTappedForPass:(id)arg1;
- (void)_fetchAMPEnrollmentEligibility;
- (BOOL)_passAvailableForAMPEnrollment;
- (void)_updateTransitBalance;
- (void)reloadTransitBalance;
- (BOOL)_canDisplayBalance;
- (void)_presentPassWithPassUniqueIdentifier:(id)arg1;
- (void)_presentPassDetailsWithAction:(NSUInteger)arg1;
- (void)_deleteButtonTapped;
- (void)_lostModeButtonTapped;
- (void)secureElementDidLeaveRestrictedMode:(id)arg1;
- (void)secureElementDidEnterRestrictedMode:(id)arg1;
- (void)reloadAllContent;
- (void)updateContentIsLoaded;
- (void)groupViewDidUpdatePassView:(id)arg1;
- (id)_messageImageWithName:(id)arg1 extension:(id)arg2;
- (id)_messageForAMPEnrollment;
- (id)_messagesForInstallmentPlans;
- (id)_messageFromEngagementMessage:(id)arg1;
- (id)_downloadMessageIconURLAndReloadIfNecessary:(id)arg1;
- (void)_presentPhysicalCardActivation;
- (id)_messageForPhysicalCard;
- (void)_messageForEnableNotificationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_messageForPaymentFailedWithCompletion:(CDUnknownBlockType)arg1;
- (void)_messageForRewardsRedemptionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_messageForPeerPaymentIdentityVerificationForRewardsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentAccountResolution:(NSUInteger)arg1 forBusinessChatContext:(id)arg2;
- (void)_educationMessagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_messagesForAccountStatusWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_shouldPaymentMessageAppear:(id)arg1;
- (void)_messageFromPaymentServiceSuppressingPassStateChanges:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_messageForSessionActive;
- (id)_messageForPaymentApplicationStatus;
- (void)reloadMessages;
- (void)_updateTransactionsTimer;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)updateWithTransactions:(id)arg1;
- (void)transactionsChanged:(id)arg1;
- (void)_updateWithTransactionGroups:(id)arg1;
- (void)reloadTransactionGroups;
- (void)reloadTransactions;
- (BOOL)_canShowTransactions;
// - (CDStruct_0e648023)_peerPaymentDashboardCondition;
- (void)loadSummariesWithForceReload:(BOOL)arg1;
- (void)summaryTypeDidChange;
- (void)_updateBalance;
- (void)reloadScheduledPayments;
- (void)reloadAccount;
- (id)footerTextForSection:(NSUInteger)arg1;
- (id)titleForSection:(NSUInteger)arg1;
- (NSUInteger)numberOfSections;
- (NSUInteger)numberOfItemsInSection:(NSUInteger)arg1;
- (id)itemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *upcomingScheduledPayments;
@property(readonly, nonatomic) NSArray *currentMonthTransactions;
- (void)executeAfterContentIsLoaded:(CDUnknownBlockType)arg1;
- (void)setDataSourceDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithGroupView:(id)arg1 context:(id)arg2;

@end

