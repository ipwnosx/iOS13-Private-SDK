//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AAGrandSlamSigner, ACAccount, ACAccountStore, AIDAServiceOwnersManager, AKAppleIDAuthenticationContext, AKAppleIDServerResourceLoadDelegate, AKAppleIDSigningController, NSData;

@interface FARequestConfigurator : NSObject
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    ACAccount *_grandSlamAccount;
    AAGrandSlamSigner *_grandSlamSigner;
    AAGrandSlamSigner *_familyGrandSlamSigner;
    AIDAServiceOwnersManager *_serviceOwnersManager;
    AKAppleIDSigningController *_akSigningController;
    AKAppleIDServerResourceLoadDelegate *_resourceLoadDelegate;
    NSData *_pushToken;
    BOOL _attachSetupHeader;
    AKAppleIDAuthenticationContext *_authContext;
}

@property(retain, nonatomic) AKAppleIDAuthenticationContext *authContext; // @synthesize authContext=_authContext;
@property(nonatomic) BOOL attachSetupHeader; // @synthesize attachSetupHeader=_attachSetupHeader;
// - (void).cxx_destruct;
- (id)_serviceOwnersManager;
- (id)_familyTokenForGrandSlamAccount:(id)arg1 andTokenID:(id)arg2;
- (void)_addAccountForServiceType:(id)arg1 toPayload:(id)arg2 forKey:(id)arg3;
- (id)_fresnoPayloadWithAdditionalPayload:(id)arg1;
- (id)_authContext;
- (void)_resourceLoadDelegate:(CDUnknownBlockType)arg1;
- (id)_akSigningController;
- (id)_familyGrandSlamSigner;
- (id)_grandSlamSigner;
- (id)_grandSlamAccount;
- (id)_accountStore;
- (id)_account;
- (void)renewCredentialsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_urlEndpointForEventType:(id)arg1;
- (void)_urlForEventType:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addPayload:(id)arg1 toRequest:(id)arg2;
- (void)addFresnoPayloadToRequest:(id)arg1 additionalPayload:(id)arg2;
- (void)pushTokenWithCompletion:(CDUnknownBlockType)arg1;
- (void)addFresnoHeadersToRequest:(id)arg1;
- (void)addFresnoHeadersToRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithAccount:(id)arg1;

@end

