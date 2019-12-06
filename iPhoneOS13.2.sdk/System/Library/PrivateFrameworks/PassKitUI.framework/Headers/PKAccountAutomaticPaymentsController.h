//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentAuthorizationCoordinatorDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h>

@class NSArray, NSCalendar, NSDate, NSError, NSTimeZone, PKAccount, PKAccountAutomaticPaymentsConfigurationViewController, PKAccountAutomaticPaymentsDateViewController, PKAccountAutomaticPaymentsHeroViewController, PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController, PKAccountAutomaticPaymentsPresetViewController, PKAccountAutomaticPaymentsSetupCompleteViewController, PKAccountService, PKAccountWebServiceSchedulePaymentRequest, PKApplePayTrustSignatureRequest, PKBankAccountInformation, PKCurrencyAmount, PKPaymentAuthorizationCoordinator, PKPaymentWebService, UIViewController;
@protocol PKAccountAutomaticPaymentsControllerDelegate;

@interface PKAccountAutomaticPaymentsController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>
{
    PKAccountService *_accountService;
    PKPaymentWebService *_paymentWebService;
    PKAccount *_account;
    NSCalendar *_productCalendar;
    NSTimeZone *_productTimeZone;
    PKAccountWebServiceSchedulePaymentRequest *_schedulePaymentRequest;
    PKBankAccountInformation *_bankInformation;
    NSArray *_fundingSources;
    PKApplePayTrustSignatureRequest *_applePayTrustSignatureRequest;
    NSError *_performScheduleAutomaticPaymentsError;
    NSDate *_paymentDate;
    UIViewController *_viewPaymentController;
    PKAccountAutomaticPaymentsHeroViewController *_heroViewController;
    PKAccountAutomaticPaymentsPresetViewController *_presetViewController;
    PKAccountAutomaticPaymentsDateViewController *_dateViewController;
    PKAccountAutomaticPaymentsConfigurationViewController *_configurationViewController;
    PKAccountAutomaticPaymentsSetupCompleteViewController *_setupCompleteViewController;
    PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController *_minimumPaymentDisclosureViewController;
    id /* CDUnknownBlockType */ _performScheduleAutomaticPaymentsCompletion;
    PKPaymentAuthorizationCoordinator *_paymentAuthorizationCoordinator;
    BOOL _authorized;
    NSUInteger _featureIdentifier;
    long long _paymentSetupContext;
    long long _paymentFrequency;
    long long _scheduledDay;
    long long _paymentPreset;
    PKCurrencyAmount *_amount;
    NSArray *_automaticPayments;
    id <PKAccountAutomaticPaymentsControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <PKAccountAutomaticPaymentsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *automaticPayments; // @synthesize automaticPayments=_automaticPayments;
@property(retain, nonatomic) NSArray *fundingSources; // @synthesize fundingSources=_fundingSources;
@property(retain, nonatomic) PKCurrencyAmount *amount; // @synthesize amount=_amount;
@property(nonatomic) long long paymentPreset; // @synthesize paymentPreset=_paymentPreset;
@property(nonatomic) long long scheduledDay; // @synthesize scheduledDay=_scheduledDay;
@property(nonatomic) long long paymentFrequency; // @synthesize paymentFrequency=_paymentFrequency;
@property(retain, nonatomic) NSDate *paymentDate; // @synthesize paymentDate=_paymentDate;
@property(readonly, nonatomic) PKAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) long long paymentSetupContext; // @synthesize paymentSetupContext=_paymentSetupContext;
@property(readonly, nonatomic) NSUInteger featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
// - (void).cxx_destruct;
- (void)paymentAuthorizationCoordinator:(id)arg1 didUpdateAccountServicePaymentMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeApplePayTrustSignature:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)_performApplePayTrustSignatureRequestWithSignature:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performPaymentRequest:(id)arg1;
- (void)nextViewControllerFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)presentNextViewControllerFromViewController:(id)arg1;
- (void)performScheduleAutomaticPaymentsFromViewController:(id)arg1;
- (void)performScheduleAutomaticPayments:(CDUnknownBlockType)arg1;
- (BOOL)canPerformScheduleAutomaticPaymentsWithPreset:(long long)arg1 frequency:(long long)arg2 amount:(id)arg3 paymentDate:(id)arg4;
- (long long)minimumPaymentDayForPreset:(long long)arg1;
- (id)alertControllerForScheduledDate:(id)arg1;
- (id)_paymentSummaryItems;
- (id)_bankAccountsForFundingSources:(id)arg1;
- (id)_paymentRequest;
- (id)_schedulePaymentRequest;
- (void)_resetPaymentConfiguration;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAccountService:(id)arg1 paymentWebService:(id)arg2 account:(id)arg3 context:(long long)arg4;

@end

