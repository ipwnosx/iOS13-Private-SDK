//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class IDSDaemonRequestTimer;
@protocol OS_dispatch_queue;

@interface IDSPhoneCertificateVendor : NSObject <IDSDaemonListenerProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    IDSPhoneCertificateVendor *_strongSelfReference;
    IDSDaemonRequestTimer *_daemonRequestTimer;
}

@property(readonly, nonatomic) IDSDaemonRequestTimer *daemonRequestTimer; // @synthesize daemonRequestTimer=_daemonRequestTimer;
@property(retain, nonatomic) IDSPhoneCertificateVendor *strongSelfReference; // @synthesize strongSelfReference=_strongSelfReference;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (id)_scheduleTimeoutForCarrierTokenCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (id)_scheduleTimeoutForPhoneAuthenticationCertificateRequestCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (id)_scheduleTimeoutForPhoneAuthenticationSignatureRequestCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (long long)_subscriptionSourceForContext:(id)arg1;
- (long long)_subscriptionSourceFromIntegerValue:(long long)arg1;
- (void)didRequestCarrierTokenString:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
- (void)didGeneratePhoneAuthenticationSignature:(id)arg1 nonce:(id)arg2 certificates:(id)arg3 labelIDs:(id)arg4 inputData:(id)arg5 requestUUID:(id)arg6 error:(id)arg7;
- (void)didAuthenticatePhoneWithAuthenticationCertificateData:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
- (id)_clientErrorForCode:(long long)arg1 underlyingError:(id)arg2;
- (id)_debugDescriptionForErrorCode:(long long)arg1;
- (BOOL)_isPhoneCertificateVendorSupported;
- (void)_updateSelfRetentionBasedOnInFlightRequestCount;
- (void)requestCarrierTokenWithParameters:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)generatePhoneAuthenticationSignatureOverData:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)authenticatePhoneWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)didFetchPhoneUserSubscriptionSource:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
- (void)didSetPhoneUserSubscriptionSource:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
- (id)_scheduleTimeoutForPhoneSubscriptionSourceCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (long long)currentPhoneUserSubscriptionSourceWithError:(id )arg1;
- (void)requestCurrentPhoneUserSubscriptionSourceWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)setCurrentPhoneUserSubscriptionSource:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)requestCarrierTokenWithMessageBody:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;

@end
