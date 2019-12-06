//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/PKPeerPaymentWebServiceTargetDeviceProtocol-Protocol.h>

@class NPSDomainAccessor, NPSManager;

@interface NPKPeerPaymentWebServiceCompanionTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol>
{
    NPSDomainAccessor *_globalDomainAccessor;
    NPSManager *_preferencesSyncManager;
}

+ (void)attemptToDownloadPeerPaymentPassAtURL:(id)arg1 withWebService:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NPSManager *preferencesSyncManager; // @synthesize preferencesSyncManager=_preferencesSyncManager;
@property(retain, nonatomic) NPSDomainAccessor *globalDomainAccessor; // @synthesize globalDomainAccessor=_globalDomainAccessor;
// - (void).cxx_destruct;
- (id)appleAccountInformation;
- (void)_handleAccountChanged:(id)arg1;
- (id)deviceRegion;
- (void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setUserHasDisabledPeerPayment:(BOOL)arg1;
- (BOOL)userHasDisabledPeerPayment;
- (id)secureElementIdentifiers;
- (id)bridgedClientInfo;
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (id)account;
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

