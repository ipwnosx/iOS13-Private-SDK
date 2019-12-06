//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSLock, NSNumber;

@interface ISBiometricStore : NSObject
{
    NSCache *_contextCache;
    NSLock *_lock;
}

+ (BOOL)shouldUseX509;
+ (BOOL)shouldUseUpsellEnrollment;
+ (BOOL)shouldUseExtendedEnrollment;
+ (BOOL)shouldUseAutoEnrollment;
+ (BOOL)shouldUseApplePayClassic;
+ (id)keychainLabelForCertWithAccountID:(id)arg1 purpose:(long long)arg2;
+ (id)keychainLabelForKeyWithAccountID:(id)arg1 purpose:(long long)arg2;
+ (id)keychainLabelForAccountID:(id)arg1 purpose:(long long)arg2;
+ (long long)tokenUpdateState;
+ (BOOL)tokenUpdateShouldStartWithLogKey:(id)arg1;
+ (void)tokenUpdateDidFinishWithLogKey:(id)arg1;
+ (id)diskBasedPaymentSheet;
+ (id)countryCode;
+ (id)applePayClassicNetworks;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)x509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 regenerateCerts:(BOOL)arg3 error:(id )arg4;
- (id)signData:(id)arg1 context:(id)arg2 error:(id )arg3;
- (id)publicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id )arg3;
- (BOOL)deleteKeychainTokensForAccountIdentifier:(id)arg1 error:(id )arg2;
- (id)createX509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id )arg3;
- (id)createAttestationDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id )arg3;
@property long long biometricState;
- (void)saveIdentityMapForAccountIdentifier:(id)arg1;
- (void)registerAccountIdentifier:(id)arg1;
@property(readonly) NSNumber *lastRegisteredAccountIdentifier;
- (NSUInteger)keyCountForAccountIdentifier:(id)arg1;
- (BOOL)isIdentityMapValidForAccountIdentifier:(id)arg1;
@property(readonly, getter=isBiometricStateEnabled) BOOL biometricStateEnabled;
- (NSUInteger)identityMapCount;
- (id)fetchContextFromCacheWithToken:(id)arg1 evict:(BOOL)arg2;
- (void)clearLastRegisteredAccountIdentifier;
- (BOOL)canPerformExtendedBiometricActionsForAccountIdentifier:(id)arg1;
- (BOOL)canPerformBiometricOptIn;
- (long long)biometricAvailabilityForAccountIdentifier:(id)arg1;
- (void)addContextToCache:(id)arg1 withToken:(id)arg2;
- (id)init;

@end

