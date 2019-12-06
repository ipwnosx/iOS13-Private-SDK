//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/SFXPCInterface-Protocol.h>

@class CUAppleIDClient, CUMessageSession, CUMessageSessionServer, NSDictionary, NSMutableData, NSMutableDictionary, NSString, NSUUID, NSXPCConnection, NSXPCListenerEndpoint, SDStatusMonitor, SFAppleIDContactInfo, SFDevice, SFTRSession, TRSession;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SFSession : NSObject <NSSecureCoding, SFXPCInterface>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
//    struct CryptoAEADPrivate _encryptionReadAEAD;
    unsigned char _encryptionReadNonce[12];
//    struct CryptoAEADPrivate _encryptionWriteAEAD;
    unsigned char _encryptionWriteNonce[12];
    NSString *_fixedPIN;
    NSMutableData *_fragmentData;
    unsigned short _fragmentLastIndex;
    NSUInteger _heartbeatLastTicks;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    NSUUID *_peer;
    NSString *_peerAppleID;
    NSMutableDictionary *_requestHandlers;
    NSMutableDictionary *_requestMap;
    unsigned char _serviceType;
    unsigned int _sessionFlags;
    unsigned int _sessionID;
    unsigned int _sharingSourceVersion;
    NSObject<OS_os_transaction> *_transaction;
//    struct LogCategory _ucatCore;
//    struct LogCategory _ucatCrypto;
    BOOL _activateCalled;
    BOOL _activateInProgress;
    BOOL _activateCompleted;
    id /* CDUnknownBlockType */ _activateCompletion;
    SFAppleIDContactInfo *_appleIDContactInfo;
    BOOL _appleIDContactCompleted;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned int _heartbeatID;
    BOOL _heartbeatV2;
    BOOL _heartbeatWaiting;
    CUMessageSessionServer *_messageSessionServer;
    CUMessageSession *_messageSessionTemplate;
    id /* CDUnknownBlockType */ _pairSetupCompletion;
    BOOL _pairSetupEnded;
    unsigned int _pairSetupFlags;
//    struct PairingSessionPrivate _pairSetupSession;
    unsigned int _pairSetupXID;
    id /* CDUnknownBlockType */ _pairVerifyCompletion;
    BOOL _pairVerifyEnded;
    unsigned int _pairVerifyFlags;
//    struct PairingSessionPrivate _pairVerifySession;
    NSMutableDictionary *_requestQueue;
    BOOL _timeoutFired;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSXPCConnection *_xpcCnx;
    SFTRSession *_sfTRSession;
    TRSession *_trSession;
    BOOL _touchRemoteEnabled;
    long long _bluetoothState;
    id /* CDUnknownBlockType */ _errorHandler;
    NSUUID *_identifier;
    NSString *_label;
    SFDevice *_peerDevice;
    NSString *_serviceIdentifier;
    double _timeout;
    NSString *_myAppleID;
    CUAppleIDClient *_myAppleIDInfoClient;
    NSString *_peerContactIdentifier;
    SDStatusMonitor *_statusMonitor;
    id /* CDUnknownBlockType */ _bluetoothStateChangedHandler;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSDictionary *_pairSetupACL;
    NSDictionary *_pairVerifyACL;
    id /* CDUnknownBlockType */ _promptForPINHandler;
    id /* CDUnknownBlockType */ _receivedObjectHandler;
    id /* CDUnknownBlockType */ _receivedRequestHandler;
    id /* CDUnknownBlockType */ _sessionStartedHandler;
    id /* CDUnknownBlockType */ _timeoutHandler;
    id /* CDUnknownBlockType */ _eventMessageHandler;
    id /* CDUnknownBlockType */ _requestMessageHandler;
    id /* CDUnknownBlockType */ _receivedFrameHandler;
    id /* CDUnknownBlockType */ _responseMessageInternalHandler;
    id /* CDUnknownBlockType */ _sendFrameHandler;
    NSUUID *_serviceUUID;
    NSXPCListenerEndpoint *_testListenerEndpoint;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) TRSession *trSession; // @synthesize trSession=_trSession;
@property(nonatomic) BOOL touchRemoteEnabled; // @synthesize touchRemoteEnabled=_touchRemoteEnabled;
@property(retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint; // @synthesize testListenerEndpoint=_testListenerEndpoint;
@property(nonatomic) unsigned int sharingSourceVersion; // @synthesize sharingSourceVersion=_sharingSourceVersion;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSUUID *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(nonatomic) unsigned char serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) id /* CDUnknownBlockType */ sendFrameHandler; // @synthesize sendFrameHandler=_sendFrameHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ responseMessageInternalHandler; // @synthesize responseMessageInternalHandler=_responseMessageInternalHandler;
@property(readonly, copy, nonatomic) NSMutableDictionary *requestHandlers; // @synthesize requestHandlers=_requestHandlers;
@property(copy, nonatomic) id /* CDUnknownBlockType */ receivedFrameHandler; // @synthesize receivedFrameHandler=_receivedFrameHandler;
@property(copy, nonatomic) NSUUID *peer; // @synthesize peer=_peer;
@property(nonatomic) NSUInteger heartbeatLastTicks; // @synthesize heartbeatLastTicks=_heartbeatLastTicks;
@property(copy, nonatomic) id /* CDUnknownBlockType */ requestMessageHandler; // @synthesize requestMessageHandler=_requestMessageHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ eventMessageHandler; // @synthesize eventMessageHandler=_eventMessageHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ timeoutHandler; // @synthesize timeoutHandler=_timeoutHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ sessionStartedHandler; // @synthesize sessionStartedHandler=_sessionStartedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ receivedRequestHandler; // @synthesize receivedRequestHandler=_receivedRequestHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ receivedObjectHandler; // @synthesize receivedObjectHandler=_receivedObjectHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property(copy, nonatomic) NSDictionary *pairVerifyACL; // @synthesize pairVerifyACL=_pairVerifyACL;
@property(copy, nonatomic) NSDictionary *pairSetupACL; // @synthesize pairSetupACL=_pairSetupACL;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
@property(retain, nonatomic) SDStatusMonitor *statusMonitor; // @synthesize statusMonitor=_statusMonitor;
@property(copy, nonatomic) NSString *peerContactIdentifier; // @synthesize peerContactIdentifier=_peerContactIdentifier;
@property(copy, nonatomic) NSString *peerAppleID; // @synthesize peerAppleID=_peerAppleID;
@property(retain, nonatomic) CUAppleIDClient *myAppleIDInfoClient; // @synthesize myAppleIDInfoClient=_myAppleIDInfoClient;
@property(copy, nonatomic) NSString *myAppleID; // @synthesize myAppleID=_myAppleID;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) unsigned int sessionFlags; // @synthesize sessionFlags=_sessionFlags;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(readonly, nonatomic) CUMessageSession *messageSessionTemplate; // @synthesize messageSessionTemplate=_messageSessionTemplate;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *fixedPIN; // @synthesize fixedPIN=_fixedPIN;
@property(copy, nonatomic) id /* CDUnknownBlockType */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) long long bluetoothState; // @synthesize bluetoothState=_bluetoothState;
// - (void).cxx_destruct;
- (void)sessionReceivedResponse:(id)arg1;
- (void)sessionReceivedRequest:(id)arg1;
- (void)_sessionReceivedStartAck:(id)arg1;
- (void)_sessionReceivedResponseID:(id)arg1 object:(id)arg2 flags:(unsigned int)arg3;
- (BOOL)_sessionReceivedRequest:(id)arg1 flags:(unsigned int)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_sessionReceivedRequestID:(id)arg1 object:(id)arg2 flags:(unsigned int)arg3;
- (BOOL)_sessionReceivedRegisteredRequestID:(id)arg1 flags:(unsigned int)arg2 xidKey:(id)arg3 xidValue:(id)arg4;
- (BOOL)_sessionReceivedEvent:(id)arg1 flags:(unsigned int)arg2;
- (void)_sessionReceivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_sessionReceivedUnencryptedData:(id)arg1 type:(unsigned char)arg2;
- (void)_sessionReceivedEncryptedData:(id)arg1 type:(unsigned char)arg2;
- (void)sessionReceivedFragmentData:(id)arg1 last:(BOOL)arg2;
- (void)sessionReceivedFrameType:(unsigned char)arg1 data:(id)arg2;
- (void)sessionReceivedEvent:(id)arg1;
- (void)sessionError:(id)arg1;
- (void)sessionBluetoothStateChanged:(long long)arg1;
- (void)_sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)_deregisterRequestID:(id)arg1;
- (void)deregisterRequestID:(id)arg1;
- (void)_registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_sendEncryptedObject:(id)arg1;
- (void)sendWithFlags:(unsigned int)arg1 object:(id)arg2;
- (void)_sendRequestWithFlags:(unsigned int)arg1 object:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)sendRequestWithFlags:(unsigned int)arg1 object:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_sendFrameType:(unsigned char)arg1 object:(id)arg2;
- (void)sendFrameType:(unsigned char)arg1 object:(id)arg2;
- (void)sendFrameType:(unsigned char)arg1 data:(id)arg2;
- (void)sendResponse:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)sendEvent:(id)arg1;
- (id)_appleIDVerifyProof:(id)arg1 error:(id )arg2;
- (void)appleIDVerifyProof:(id)arg1 dispatchQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_appleIDAddProof:(id)arg1 error:(id )arg2;
- (void)appleIDAddProof:(id)arg1 dispatchQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_pairVerifyCompleted:(int)arg1;
- (void)_pairVerify:(id)arg1 start:(BOOL)arg2;
- (void)_pairVerifyWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pairVerifyWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_pairSetupCompleted:(int)arg1;
- (void)_pairSetupTryPIN:(id)arg1;
- (void)pairSetupTryPIN:(id)arg1;
- (void)_pairSetup:(id)arg1 start:(BOOL)arg2;
- (void)_pairSetupWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pairSetupWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (id)pairingDeriveKeyForIdentifier:(id)arg1 keyLength:(NSUInteger)arg2;
- (BOOL)pairingContainsACL:(id)arg1;
- (void)_timeoutTimerFired;
- (void)_startTimeoutIfNeeded;
- (void)_tearDownTouchRemote;
- (void)_setupTouchRemote;
- (void)_tearDownMessageSession;
- (void)_setupMessageSession;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_hearbeatTimer;
- (void)_fetchInfo;
- (void)_ensureXPCStarted;
- (void)_activated;
- (void)_activatedIfReady:(id)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (int)setEncryptionReadKey:(const char )arg1 readKeyLen:(NSUInteger)arg2 writeKey:(const char )arg3 writeKeyLen:(NSUInteger)arg4;
- (id)description;
- (void)_cleanup;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

