//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentAuthorizationCoordinatorDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h>

@class NSError, PKAccount, PKAccountService, PKAccountWebServicePhysicalCardActionRequest, PKPaymentAuthorizationCoordinator, PKPaymentDevice;
@protocol PKPhysicalCardActionControllerDelegate;

@interface PKPhysicalCardActionController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>
{
    PKAccountService *_accountService;
    id <PKPhysicalCardActionControllerDelegate> _delegate;
    PKPaymentDevice *_paymentDevice;
    PKAccountWebServicePhysicalCardActionRequest *_lastActionRequest;
    BOOL _lastActionSuccess;
    NSError *_lastActionError;
    PKPaymentAuthorizationCoordinator *_authorizationCoordinator;
    PKAccount *_account;
    long long _state;
}

@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) PKAccount *account; // @synthesize account=_account;
// - (void).cxx_destruct;
- (void)_transitionToState:(long long)arg1 withError:(id)arg2;
- (BOOL)_canPerformActionWithState:(long long)arg1;
- (void)_presentApplePayTrustWithPaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_generatePaymentRequestWithSignatureRequest:(id)arg1;
- (void)_performApplePayTrustSignatureRequestWithSignature:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAction:(id)arg1 onPhysicalCard:(id)arg2;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeApplePayTrustSignature:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)replacePhysicalCard:(id)arg1 withReason:(NSUInteger)arg2;
- (void)cancelPhysicalCard:(id)arg1;
- (void)disablePhysicalCard:(id)arg1;
- (void)enablePhysicalCard:(id)arg1;
- (void)activatePhysicalCardWithoutActivationCode:(id)arg1;
- (void)activatePhysicalCard:(id)arg1 withActivationCode:(id)arg2;
- (id)initWithAccountService:(id)arg1 account:(id)arg2 delegate:(id)arg3;

@end

