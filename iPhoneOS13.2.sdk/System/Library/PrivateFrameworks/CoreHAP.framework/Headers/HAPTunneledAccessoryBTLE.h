//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPAccessory.h>

#import <CoreHAP/HAPAccessoryServerInternalDelegate-Protocol.h>
#import <CoreHAP/HAPBTLEControlOutputStreamDelegate-Protocol.h>
#import <CoreHAP/HAPSecuritySessionDelegate-Protocol.h>
#import <CoreHAP/HMFTimerDelegate-Protocol.h>

@class HAPCharacteristic, HAPSecuritySession, HAPService, HMFExponentialBackoffTimer, HMFTimer, NSMutableArray, NSNumber, NSOperationQueue;
@protocol HAPKeyStore, HMFLocking;

@interface HAPTunneledAccessoryBTLE : HAPAccessory <HAPBTLEControlOutputStreamDelegate, HAPSecuritySessionDelegate, HMFTimerDelegate, HAPAccessoryServerInternalDelegate>
{
    id <HMFLocking> _lock;
    BOOL _verified;
    BOOL _securitySessionOpen;
    BOOL _securitySessionOpening;
    BOOL _verifying;
    NSNumber *_stateNumber;
    id <HAPKeyStore> _keyStore;
    HAPService *_tunneledBTLEAccessoryService;
    HAPService *_pairingService;
    HAPCharacteristic *_pairVerifyCharacteristic;
    HAPCharacteristic *_pairingsCharacteristic;
    HAPCharacteristic *_advertisingCharacteristic;
    HAPSecuritySession *_securitySession;
    NSOperationQueue *_pairVerifyOperationQueue;
    NSNumber *_sessionLifetimeTimeout;
    HMFTimer *_connectionIdleTimer;
    NSOperationQueue *_clientOperationQueue;
    NSMutableArray *_pendingRequests;
    NSOperationQueue *_requestOperationQueue;
    NSMutableArray *_pendingResponses;
    HMFExponentialBackoffTimer *_verificationBackoffTimer;
}

+ (BOOL)shouldVerifyCharacteristic:(id)arg1;
@property(retain, nonatomic) HMFExponentialBackoffTimer *verificationBackoffTimer; // @synthesize verificationBackoffTimer=_verificationBackoffTimer;
@property(nonatomic, getter=isVerifying) BOOL verifying; // @synthesize verifying=_verifying;
@property(readonly, nonatomic) NSMutableArray *pendingResponses; // @synthesize pendingResponses=_pendingResponses;
@property(readonly, nonatomic) NSOperationQueue *requestOperationQueue; // @synthesize requestOperationQueue=_requestOperationQueue;
@property(readonly, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(readonly, nonatomic) NSOperationQueue *clientOperationQueue; // @synthesize clientOperationQueue=_clientOperationQueue;
@property(retain, nonatomic) HMFTimer *connectionIdleTimer; // @synthesize connectionIdleTimer=_connectionIdleTimer;
@property(retain, nonatomic) NSNumber *sessionLifetimeTimeout; // @synthesize sessionLifetimeTimeout=_sessionLifetimeTimeout;
@property(readonly, nonatomic) NSOperationQueue *pairVerifyOperationQueue; // @synthesize pairVerifyOperationQueue=_pairVerifyOperationQueue;
@property(nonatomic, getter=isSecuritySessionOpening) BOOL securitySessionOpening; // @synthesize securitySessionOpening=_securitySessionOpening;
@property(nonatomic, getter=isSecuritySessionOpen) BOOL securitySessionOpen; // @synthesize securitySessionOpen=_securitySessionOpen;
@property(retain, nonatomic) HAPSecuritySession *securitySession; // @synthesize securitySession=_securitySession;
@property(nonatomic) __weak HAPCharacteristic *advertisingCharacteristic; // @synthesize advertisingCharacteristic=_advertisingCharacteristic;
@property(nonatomic) __weak HAPCharacteristic *pairingsCharacteristic; // @synthesize pairingsCharacteristic=_pairingsCharacteristic;
@property(nonatomic) __weak HAPCharacteristic *pairVerifyCharacteristic; // @synthesize pairVerifyCharacteristic=_pairVerifyCharacteristic;
@property(nonatomic) __weak HAPService *pairingService; // @synthesize pairingService=_pairingService;
@property(nonatomic) __weak HAPService *tunneledBTLEAccessoryService; // @synthesize tunneledBTLEAccessoryService=_tunneledBTLEAccessoryService;
@property(nonatomic) __weak id <HAPKeyStore> keyStore; // @synthesize keyStore=_keyStore;
@property(copy, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
// - (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (BOOL)mergeObject:(id)arg1;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
- (void)securitySessionDidOpen:(id)arg1;
- (void)securitySessionIsOpening:(id)arg1;
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id )arg3;
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id )arg2;
- (void)controlOutputStreamDidComplete:(id)arg1;
- (void)controlOutputStream:(id)arg1 didCloseWithError:(id)arg2;
- (void)controlOutputStreamDidOpen:(id)arg1;
- (void)controlOutputStream:(id)arg1 didReceiveRequestToSendControlPacket:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_readUpdatedCharacteristics:(id)arg1 queue:(id)arg2;
- (void)_updateOnStateNumberChange;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (void)_registerForTunnelCharacteristicNotifications;
- (void)_sanitizeAllTunneledCharacteristics;
- (BOOL)_parsePairingService:(id)arg1;
- (BOOL)_parseTunneledBTLEAccessoryService:(id)arg1;
- (BOOL)_parseServices;
- (void)_handleConnectionIdleTimeout;
- (void)_suspendConnectionIdleTimer;
- (void)_resumeConnectionIdleTimer;
- (void)_kickConnectionIdleTimer;
- (void)_cancelAllQueuedOperationsWithError:(id)arg1;
- (void)_resumeAllOperations;
- (void)_suspendAllOperations;
- (void)_enqueueRequest:(id)arg1;
- (id)_pendingResponseForRequest:(id)arg1;
- (id)_pendingRequestForCharacteristic:(id)arg1;
- (NSUInteger)_outstandingRequests;
- (void)_requestResponseForRequest:(id)arg1;
- (void)_sendControlPacket:(id)arg1 forRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_reallySendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getLocalPairingIdentityAndAllowCreation:(BOOL)arg1 error:(id )arg2;
- (void)_tearDownSessionWithError:(id)arg1;
- (id)_decryptData:(id)arg1 error:(id )arg2;
- (id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id )arg2;
- (void)_handleSecuritySession:(id)arg1 setupExchangeData:(id)arg2;
- (BOOL)_establishSecureSessionWithError:(id )arg1;
- (void)_sendPairingRequestData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removePairingForCurrentControllerWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_markNotifyingCharacteristicUpdatedForCharacteristic:(id)arg1;
- (void)_performTimedWriteExecuteForCharacteristic:(id)arg1 value:(id)arg2 options:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_performTimedWritePrepareWithValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_performTimedWriteValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_performWriteValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_writeValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeCharacteristicValue:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_readValueForCharacteristic:(id)arg1 options:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)readValueForCharacteristic:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_verifyServiceSignature:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_verifyCharacteristicSignature:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)verify;
@property(nonatomic, getter=isVerified) BOOL verified; // @synthesize verified=_verified;
- (void)invalidate;
- (id)uniqueIdentifier;
- (BOOL)__isAdvertising;
- (void)setReachable:(BOOL)arg1;
- (BOOL)isPaired;
- (id)shortDescription;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 keyStore:(id)arg4;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;

@end

