//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/PKContactlessInterfaceSessionDelegate-Protocol.h>

@class NSData, NSDictionary, NSMutableArray, PKContactlessInterfaceSession, PKFieldDetector, PKPass, PKPaymentSessionHandle;
@protocol NPKQuickPaymentSessionDelegate, OS_dispatch_queue;

@interface NPKQuickPaymentSession : NSObject <PKContactlessInterfaceSessionDelegate>
{
    NSData *_credential;
    BOOL _deferAuthorization;
    BOOL _inServiceMode;
    BOOL _confirmed;
    BOOL _deactivating;
    BOOL _deactivated;
    PKPass *_currentPass;
    NSDictionary *_vasPasses;
    id <NPKQuickPaymentSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_paymentSessionQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    PKPaymentSessionHandle *_contactlessSessionHandle;
    PKContactlessInterfaceSession *_contactlessSession;
    NSUInteger _contactlessValidity;
    NSUInteger _authorizationValidity;
    NSMutableArray *_deactivationCompletionBlocks;
    PKFieldDetector *_fieldDetector;
}

+ (void)_handleNewContactlessSession:(id)arg1;
+ (BOOL)hasOutstandingSessions;
+ (id)_outstandingSessionHashTable;
@property(retain, nonatomic) PKFieldDetector *fieldDetector; // @synthesize fieldDetector=_fieldDetector;
@property(retain, nonatomic) NSMutableArray *deactivationCompletionBlocks; // @synthesize deactivationCompletionBlocks=_deactivationCompletionBlocks;
@property(nonatomic, getter=isDeactivated) BOOL deactivated; // @synthesize deactivated=_deactivated;
@property(nonatomic, getter=isDeactivating) BOOL deactivating; // @synthesize deactivating=_deactivating;
@property(nonatomic, getter=isConfirmed) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property(nonatomic) NSUInteger authorizationValidity; // @synthesize authorizationValidity=_authorizationValidity;
@property(nonatomic) NSUInteger contactlessValidity; // @synthesize contactlessValidity=_contactlessValidity;
@property(retain, nonatomic) PKContactlessInterfaceSession *contactlessSession; // @synthesize contactlessSession=_contactlessSession;
@property(retain, nonatomic) PKPaymentSessionHandle *contactlessSessionHandle; // @synthesize contactlessSessionHandle=_contactlessSessionHandle;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *paymentSessionQueue; // @synthesize paymentSessionQueue=_paymentSessionQueue;
@property(nonatomic) BOOL inServiceMode; // @synthesize inServiceMode=_inServiceMode;
@property(nonatomic) __weak id <NPKQuickPaymentSessionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_internalQueue_invokeDeactivationCompletionBlocks;
- (void)_loyaltyEngineConfigurationChanged:(id)arg1;
- (void)_handleConventionalTransactionWithContext:(id)arg1;
- (void)_handleTransitTransactionWithContext:(id)arg1;
- (void)contactlessInterfaceSessionHasPendingServerRequest:(id)arg1;
- (void)contactlessInterfaceSessionDidFailDeferredAuthorization:(id)arg1;
- (void)contactlessInterfaceSessionDidSelectValueAddedService:(id)arg1;
- (void)contactlessInterfaceSessionDidSelectPayment:(id)arg1;
- (void)contactlessInterfaceSession:(id)arg1 didEndPersistentCardEmulationWithContext:(id)arg2;
- (void)contactlessInterfaceSession:(id)arg1 didFinishTransactionWithContext:(id)arg2;
- (void)contactlessInterfaceSessionDidReceiveActivityTimeout:(id)arg1;
- (void)contactlessInterfaceSessionDidStartTransaction:(id)arg1;
- (void)contactlessInterfaceSessionDidFail:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
- (void)contactlessInterfaceSessionDidTimeout:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
- (void)contactlessInterfaceSessionDidFailTransaction:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3;
- (void)contactlessInterfaceSessionDidExitField:(id)arg1;
- (void)contactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2;
- (void)_checkContactlessValidity:(NSUInteger)arg1 authorizationValidity:(NSUInteger)arg2 performWork:(CDUnknownBlockType)arg3;
- (void)_checkContactlessValidity:(NSUInteger)arg1 performWork:(CDUnknownBlockType)arg2;
- (void)_internalQueue_getContactlessAndAuthorizationValidityAndPerformWork:(CDUnknownBlockType)arg1;
- (void)_updateAuthorizationValidity;
- (void)_internalQueue_updateContactlessValidityAndPerformWork:(CDUnknownBlockType)arg1;
- (void)_internalQueue_updateSessionWithCurrentPassAndLoyaltyState;
- (BOOL)_sessionQueue_authorizeWithDeferredAuthorization:(BOOL)arg1 useCredential:(BOOL)arg2;
- (BOOL)_sessionQueue_enablePersistentCardEmulation;
- (BOOL)_sessionQueue_startContactlessSessionWithSuccessfulCompletionOnInternalQueue:(CDUnknownBlockType)arg1;
- (void)_sessionQueue_invokeAppropriateCallbackForActivationWithSuccess:(BOOL)arg1 invokeOnSuccess:(BOOL)arg2 contactlessValidity:(NSUInteger)arg3 forPass:(id)arg4;
- (BOOL)_sessionQueue_updateContactlessSessionForPass:(id)arg1 paymentApplication:(id)arg2 vasPasses:(id)arg3 sessionConfirmed:(BOOL)arg4 deferAuthorization:(BOOL)arg5;
- (void)_internalQueue_updateContactlessSessionForPass:(id)arg1 vasPasses:(id)arg2;
- (void)_internalQueue_deactivateSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)deactivateSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)confirmOrRenewSession;
@property(nonatomic) BOOL deferAuthorization; // @synthesize deferAuthorization=_deferAuthorization;
@property(retain, nonatomic) NSDictionary *vasPasses; // @synthesize vasPasses=_vasPasses;
- (void)setCredential:(id)arg1;
@property(retain, nonatomic) PKPass *currentPass; // @synthesize currentPass=_currentPass;
- (BOOL)startSession;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

