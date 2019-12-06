//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKAutoPeerIDTable, GKConnection, GKList, GKSession, GKTable, GKVoiceChatSessionListener, NSString;
@protocol GKSessionDOOBReceiveHandler, GKSessionDelegate, GKSessionPrivateDelegate;

@interface GKSessionInternal : NSObject
{
    GKSession *_session;
    NSString *domain;
    NSString *serviceType;
    NSUInteger _port;
    NSString *_displayName;
    unsigned int _pid;
    NSUInteger maxPeers;
//     struct OpaqueGCKSession sessionRef;
//     struct OpaqueAGPSession agpSessionRef;
    GKConnection *_connection;
    id _delegate;
    id _privateDelegate;
    id _dataReceiveHandler;
    void _dataReceiveHandlerContext;
    id <GKSessionDOOBReceiveHandler> _doobReceiveHandler[2];
    void _doobReceiveHandlerContext[2];
    GKTable *_peerInfoTable;
    GKTable *_peerNameTable;
    GKAutoPeerIDTable *_peerIDTable;
    GKList *_peersAvailable;
    GKList *_peersConnected;
    GKList *_peersForCleanup;
    GKList *_peersPendingIncomingInvitation;
    GKList *_peersPendingOutgoingInvitation;
//     struct _opaque_pthread_mutex_t _lock;
//     struct _opaque_pthread_mutex_t _delegateLock;
    BOOL _isSearching;
    BOOL _isPublishing;
    BOOL _sessionStarted;
    unsigned int _mode;
    BOOL _isBusy;
    NSString *sessionID;
    double disconnectTimeout;
//     struct _DNSServiceRef_t _dnsServiceConnection;
//     struct _DNSServiceRef_t _dnsServiceResolveConnection;
    int _sReset;
//     struct _DNSServiceRef_t _serviceBrowser;
//     struct _DNSServiceRef_t _service;
//     struct _DNSServiceRef_t _oldService;
    BOOL _handleEventsRunning;
    BOOL _stopHandlingEvents;
    BOOL _wifiEnabled;
    BOOL _shutdown;
    GKVoiceChatSessionListener *_voiceChatListener;
}

@property(readonly, retain) GKConnection *connection; // @synthesize connection=_connection;
@property(readonly) unsigned int sessionMode; // @synthesize sessionMode=_mode;
@property(readonly) NSString *sessionID; // @synthesize sessionID;
@property(nonatomic) NSUInteger port; // @synthesize port=_port;
// @property(nonatomic) struct OpaqueAGPSession agpSessionRef; // @synthesize agpSessionRef;
// @property(nonatomic) struct OpaqueGCKSession sessionRef; // @synthesize sessionRef;
@property(nonatomic) NSUInteger maxPeers; // @synthesize maxPeers;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType;
@property(copy, nonatomic) NSString *domain; // @synthesize domain;
- (id)voiceChatSessionListener;
- (id)stringForGCKID:(unsigned int)arg1;
// - (void)didResolveService:(struct _DNSServiceRef_t )arg1 forPeer:(id)arg2 hostName:(const char )arg3 port:(unsigned short)arg4 interface:(unsigned int)arg5 txtLen:(unsigned short)arg6 txtRecord:(const void *)arg7 withError:(int)arg8 moreComing:(BOOL)arg9;
// - (void)didLookupHostname:(struct _DNSServiceRef_t )arg1 forPeer:(id)arg2 hostName:(const char )arg3 address:(const struct sockaddr_in )arg4 interface:(unsigned int)arg5 withError:(int)arg6 moreComing:(BOOL)arg7;
- (BOOL)tryConnectToPeer:(id)arg1;
- (void)browse;
- (void)didRemoveService:(const char )arg1 fromIF:(const char )arg2 withError:(int)arg3 moreComing:(BOOL)arg4;
- (void)didFindService:(const char )arg1 fromIF:(const char )arg2 withError:(int)arg3 moreComing:(BOOL)arg4;
- (void)didUpdateTXTRecordForPeer:(id)arg1 fromIF:(const char )arg2 txtLen:(unsigned short)arg3 txtRecord:(const void *)arg4 withError:(int)arg5 moreComing:(BOOL)arg6;
- (void)processTXTRecordForPeer:(id)arg1 txtLen:(unsigned short)arg2 txtRecord:(const void *)arg3;
- (void)cleanupExAvailablePeers;
- (BOOL)filterService:(const char )arg1 withPID:(unsigned int)arg2;
- (void)publish;
- (BOOL)checkDNSConnection;
- (void)handleEvents;
@property double disconnectTimeout;
- (BOOL)isPeerBusy:(id)arg1;
@property BOOL wifiEnabled;
@property(getter=isBusy) BOOL busy;
- (void)stopOldService;
@property(readonly) NSString *peerID;
- (id)peersWithConnectionState:(unsigned int)arg1;
@property(getter=isAvailable) BOOL available;
- (void)disconnectFromAllPeers;
- (void)disconnectPeerFromAllPeers:(id)arg1;
- (void)denyConnectionFromPeer:(id)arg1;
- (BOOL)acceptConnectionFromPeer:(id)arg1 error:(id )arg2;
- (void)cancelConnectToPeer:(id)arg1;
- (void)connectToPeer:(id)arg1 withTimeout:(double)arg2;
- (void)timeoutConnectToPeer:(id)arg1;
- (void)setDataReceiveHandler:(id)arg1 withContext:(void )arg2;
@property(readonly, nonatomic) id dataReceiveHandler;
- (void)setDOOBReceiveHandler:(id)arg1 withContext:(void )arg2 inBand:(unsigned int)arg3;
- (void)receiveDOOB:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void )arg4;
- (BOOL)sendDataToAllPeers:(id)arg1 withDataMode:(unsigned int)arg2 error:(id )arg3;
- (BOOL)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(unsigned int)arg3 enableOOB:(BOOL)arg4 error:(id )arg5;
- (BOOL)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(unsigned int)arg3 error:(id )arg4;
- (BOOL)passesSendDataSanityCheck:(id)arg1 toPeers:(id)arg2 withDataMode:(unsigned int)arg3 error:(id )arg4;
- (BOOL)sendAudioData:(id)arg1 toPeers:(id)arg2 withDataMode:(unsigned int)arg3 error:(id )arg4;
- (id)displayNameForPeer:(id)arg1;
@property(readonly) NSString *displayName;
- (void)dealloc;
- (void)reset;
- (id)initWithSessionID:(id)arg1 displayName:(id)arg2 session:(id)arg3 sessionMode:(unsigned int)arg4;
- (id)initWithConnection:(id)arg1 session:(id)arg2 delegate:(id)arg3;
- (id)description;
@property id <GKSessionPrivateDelegate> privateDelegate;
@property id <GKSessionDelegate> delegate;
- (void)unlock;
- (void)lock;
- (void)didPublishWithError:(int)arg1;
- (void)stopResolvingAllPeers;
- (id)serviceName;
- (BOOL)parseServiceName:(const char )arg1 intoDisplayName:(id )arg2 pid:(unsigned int )arg3 state:(id )arg4;
- (void)tellDelegate_networkStatisticsChanged:(id)arg1;
- (void)tellDelegate_updateRelay:(id)arg1;
- (void)tellDelegate_initiateRelay:(id)arg1;
- (void)tellDelegate_peerDidBecomeBusy:(id)arg1;
- (void)tellDelegate_connectionRequestToPeerFailed:(id)arg1;
- (void)tellDelegate_gotInvited:(id)arg1;
- (void)tellDelegate_didReceiveData:(id)arg1;
- (void)tellDelegate_didReceiveBand_RetryICE:(id)arg1;
- (void)tellDelegate_peerDidBecomeUnavailable:(id)arg1;
- (void)tellDelegate_peerDidBecomeAvailable:(id)arg1;
- (void)tellDelegate_isConnectingPeer:(id)arg1;
- (void)tellDelegate_didDisconnectPeer:(id)arg1;
- (void)tellDelegate_didConnectPeer:(id)arg1;
- (void)tellDelegate_sessionDidFailWithError:(id)arg1;
- (void)setDisplayName:(id)arg1 forPeer:(unsigned int)arg2;
- (void)printDictionaries;
- (id)newNSErrorFromGKSessionError:(int)arg1 description:(id)arg2 reason:(id)arg3;
- (id)newNSErrorFromHRESULT:(int)arg1 description:(id)arg2 reason:(id)arg3;
- (BOOL)isShuttingDown;
// - (void)sendCallbacksToDelegate:(CDStruct_68f9d01f )arg1 remotePeer:(unsigned int)arg2;

@end

