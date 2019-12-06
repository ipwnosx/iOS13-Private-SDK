//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class CNContact, NSArray, NSData, NSDate, NSSet, NSString, NSTimeZone, PKAccount, PKAccountAction, PKAccountPreferences, PKAccountWebServicePhysicalCardActionRequest, PKAccountWebServiceRequestPhysicalCardRequest, PKApplePayTrustSignature, PKPaymentDeviceMetadata, PKPhysicalCardAction, PKPhysicalCardOrder, PKVirtualCard;

@protocol PDAccountServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)exportTransactionDataForAccountIdentifier:(NSString *)arg1 withFileFormat:(NSString *)arg2 beginDate:(NSDate *)arg3 endDate:(NSDate *)arg4 productTimeZone:(NSTimeZone *)arg5 completion:(void (^)(PKAccountWebServiceExportTransactionDataResponse *, NSError *))arg6;
- (void)markUserViewedIntroduction:(BOOL)arg1 forInstallmentIdentifiers:(NSSet *)arg2 accountIdentifier:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)scheduledPaymentsWithAccountIdentifier:(NSString *)arg1 includeFailedRecurringPayments:(BOOL)arg2 allowFetchFromServer:(BOOL)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)updateScheduledPaymentsWithAccount:(PKAccount *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(NSString *)arg1 withStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(NSString *)arg1 withStatementIdentifier:(NSString *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)writeVirtualCardToKeychain:(PKVirtualCard *)arg1 completion:(void (^)(void))arg2;
- (void)virtualCardsInKeychainWithCompletion:(void (^)(NSSet *))arg1;
- (void)fetchKeychainCredentialForVirtualCardIdentifier:(NSString *)arg1 forAccountIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)noteVirtualCardAutoFilledBySafari:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)cardCredentialsForVirtualCard:(PKVirtualCard *)arg1 authorization:(NSData *)arg2 completion:(void (^)(PKVirtualCardCredentials *, NSError *))arg3;
- (void)updateVirtualCardsWithAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *, PKAccount *, NSError *))arg2;
- (void)performVirtualCardAction:(long long)arg1 forVirtualCardIdentifier:(NSString *)arg2 forAccountIdentifier:(NSString *)arg3 completion:(void (^)(PKVirtualCard *, PKAccount *, NSError *))arg4;
- (void)createVirtualCard:(long long)arg1 forAccountIdentifier:(NSString *)arg2 completion:(void (^)(PKVirtualCard *, PKAccount *, NSError *))arg3;
- (void)creditStatementsForAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)lastRedemptionEventToPeerPaymentForAccountIdentifier:(NSString *)arg1 completion:(void (^)(PKAccountEvent *, NSError *))arg2;
- (void)insertEvents:(NSSet *)arg1 withAccountidentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteEventWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)deleteEventsWithAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)eventsForAccountIdentifier:(NSString *)arg1 types:(NSArray *)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 orderedByDate:(long long)arg5 limit:(NSUInteger)arg6 completion:(void (^)(NSArray *, NSError *))arg7;
- (void)eventsForAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)noteAccountDeletedWithCompletion:(void (^)(void))arg1;
- (void)scheduleSetupReminderForAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)activatePhysicalCardWithIdentifier:(NSString *)arg1 activationCode:(NSString *)arg2 completion:(void (^)(long long))arg3;
- (void)inactivatePhysicalCardForFeatureIdentifier:(NSUInteger)arg1 completion:(void (^)(PKPhysicalCard *))arg2;
- (void)activatePhysicalCardWithActivationCode:(NSString *)arg1 completion:(void (^)(BOOL))arg2;
- (void)completePhysicalCardActionRequest:(PKAccountWebServicePhysicalCardActionRequest *)arg1 withSignature:(PKApplePayTrustSignature *)arg2 completion:(void (^)(NSSet *, PKAccount *, NSError *))arg3;
- (void)beginPhysicalCardAction:(PKPhysicalCardAction *)arg1 onPhysicalCardWithIdentifier:(NSString *)arg2 forAccountWithIdentifier:(NSString *)arg3 deviceMetadata:(PKPaymentDeviceMetadata *)arg4 completion:(void (^)(PKApplePayTrustSignatureRequest *, PKAccountWebServicePhysicalCardActionRequest *, NSSet *, PKAccount *, NSError *))arg5;
- (void)completePhysicalCardRequest:(PKAccountWebServiceRequestPhysicalCardRequest *)arg1 withSignature:(PKApplePayTrustSignature *)arg2 completion:(void (^)(PKPhysicalCard *, PKAccount *, NSError *))arg3;
- (void)beginPhysicalCardRequestWithOrder:(PKPhysicalCardOrder *)arg1 forAccountWithIdentifier:(NSString *)arg2 deviceMetadata:(PKPaymentDeviceMetadata *)arg3 completion:(void (^)(PKApplePayTrustSignatureRequest *, PKAccountWebServiceRequestPhysicalCardRequest *, PKPhysicalCard *, PKAccount *, NSError *))arg4;
- (void)updateUserInfoForAccountIdentifier:(NSString *)arg1 contact:(CNContact *)arg2 completion:(void (^)(CNContact *, NSError *))arg3;
- (void)userInfoForAccountIdentifier:(NSString *)arg1 forceFetch:(BOOL)arg2 completion:(void (^)(CNContact *, NSError *))arg3;
- (void)preferencesForAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(PKAccountPreferences *, NSError *))arg2;
- (void)updatePreferences:(PKAccountPreferences *)arg1 forAccountWithIdentifier:(NSString *)arg2 completion:(void (^)(PKAccountPreferences *, NSError *))arg3;
- (void)termsWithIdentifier:(NSString *)arg1 accepted:(BOOL)arg2 withAccountIdentifier:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)performAccountAction:(PKAccountAction *)arg1 withAccountIdentifier:(NSString *)arg2 completion:(void (^)(PKAccount *, NSError *))arg3;
- (void)defaultAccountForFeature:(NSUInteger)arg1 completion:(void (^)(PKAccount *, NSError *))arg2;
- (void)updateMockAccountWithAccount:(PKAccount *)arg1 completion:(void (^)(PKAccount *))arg2;
- (void)deleteLocalAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)deleteAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateAccountWithIdentifier:(NSString *)arg1 extended:(BOOL)arg2 completion:(void (^)(PKAccount *, NSError *))arg3;
- (void)accountForPassWithUniqueID:(NSString *)arg1 completion:(void (^)(PKAccount *))arg2;
- (void)accountWithVirtualCardIdentifier:(NSString *)arg1 completion:(void (^)(PKAccount *, NSError *))arg2;
- (void)accountWithIdentifier:(NSString *)arg1 completion:(void (^)(PKAccount *, NSError *))arg2;
- (void)updateAccountsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)accountsWithPassLocallyProvisionedWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)accountsForProvisioningWithCompletion:(void (^)(NSArray *, NSArray *, NSError *))arg1;
- (void)accountsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

