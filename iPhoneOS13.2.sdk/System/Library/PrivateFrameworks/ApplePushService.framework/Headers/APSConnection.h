//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTWeakReference, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol APSConnectionDelegate, OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface APSConnection : NSObject
{
    CUTWeakReference *_delegateReference;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSString *_environmentName;
    NSData *_publicToken;
    NSUInteger _messageSize;
    NSUInteger _largeMessageSize;
    NSString *_connectionPortName;
    unsigned int _connectionPort;
    BOOL _portNameIsBundleId;
    NSArray *_enabledTopics;
    NSArray *_ignoredTopics;
    NSArray *_opportunisticTopics;
    BOOL _enableCriticalReliability;
    BOOL _enableStatusNotifications;
    BOOL _isConnected;
    BOOL _usesAppLaunchStats;
    NSMutableDictionary *_idsToOutgoingMessages;
    NSUInteger _nextOutgoingMessageID;
    NSObject<OS_dispatch_queue> *_machQueue;
    NSObject<OS_dispatch_source> *_mach_source;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _everHadDelegate;
    NSMutableArray *_queuedDelegateBlocks;
    NSString *_processName;
    double _reconnectDelay;
    BOOL _isReconnectScheduled;
    BOOL _isDisconnected;
    BOOL _isShutdown;
    BOOL _isDeallocing;
}

+ (void)notifySafeToSendFilter;
+ (void)_setTokenState;
+ (id)connectionsDebuggingState;
+ (double)keepAliveIntervalForEnvironmentName:(id)arg1;
+ (void)invalidateDeviceIdentity;
+ (void)requestCourierConnection;
+ (id)geoRegion;
+ (double)serverTime;
+ (void)_blockingXPCCallWithArgumentBlock:(CDUnknownBlockType)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)_flushIdentityCache;
// + (struct __SecIdentity )copyIdentity;
+ (void)_safelyCancelAndReleaseConnection:(id)arg1;
+ (BOOL)isValidEnvironment:(id)arg1;
@property(readonly, nonatomic) BOOL isShutdown; // @synthesize isShutdown=_isShutdown;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue; // @synthesize ivarQueue=_ivarQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
// - (void).cxx_destruct;
- (void)confirmReceiptForMessage:(id)arg1;
- (void)requestKeepAlive;
- (void)invalidateTokenForTopic:(id)arg1 identifier:(id)arg2;
- (void)requestTokenForTopic:(id)arg1 identifier:(id)arg2;
- (void)sendFakeMessage:(id)arg1;
- (void)cancelOutgoingMessage:(id)arg1;
- (void)sendOutgoingMessage:(id)arg1;
- (void)_sendOutgoingMessage:(id)arg1 fake:(BOOL)arg2;
- (BOOL)hasIdentity;
- (void)_deliverToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;
- (void)_deliverOutgoingMessageResultWithID:(NSUInteger)arg1 error:(id)arg2 sendRTT:(NSUInteger)arg3;
- (void)_deliverOutgoingMessageResultWithID:(NSUInteger)arg1 checkpointTraceData:(id)arg2 error:(id)arg3 sendRTT:(NSUInteger)arg4 ackTimestamp:(NSUInteger)arg5;
- (void)_deliverConnectionStatusFromDealloc:(BOOL)arg1;
- (void)_deliverConnectionStatusChange:(BOOL)arg1;
- (void)_deliverPublicToken:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_deliverPublicTokenOnIvarQueue:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_deliverDidReconnectOnIvarQueue;
- (void)_deliverMessage:(id)arg1;
- (void)_dispatch_async_to_ivarQueue:(CDUnknownBlockType)arg1;
- (void)_addEnableStatusNotificationsToXPCMessage:(id)arg1;
- (void)_addUsesAppLaunchStatsToXPCMessage:(id)arg1;
- (void)_addEnableCriticalReliabilityToXPCMessage:(id)arg1;
- (void)setEnableStatusNotifications:(BOOL)arg1;
- (void)_setEnableStatusNotifications:(BOOL)arg1 sendToDaemon:(BOOL)arg2;
- (void)setEnableCriticalReliability:(BOOL)arg1;
- (void)_setEnableCriticalReliability:(BOOL)arg1 sendToDaemon:(BOOL)arg2;
- (BOOL)isConnected;
@property(nonatomic) BOOL usesAppLaunchStats;
- (void)_setUsesAppLaunchStats:(BOOL)arg1 sendToDaemon:(BOOL)arg2;
@property(nonatomic) NSUInteger largeMessageSize;
@property(nonatomic) NSUInteger messageSize;
@property(readonly, retain, nonatomic) NSData *publicToken;
- (void)moveTopic:(id)arg1 fromList:(NSUInteger)arg2 toList:(NSUInteger)arg3;
- (id)_listForIdentifierOnIvarQueue:(NSUInteger)arg1;
- (id)opportunisticTopics;
- (id)ignoredTopics;
- (id)enabledTopics;
- (void)setIgnoredTopics:(id)arg1;
- (void)setOpportunisticTopics:(id)arg1;
- (void)setEnabledTopics:(id)arg1;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3;
- (void)_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(BOOL)arg4;
- (void)_onIvarQueue_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(BOOL)arg4;
- (void)removeFromRunLoop;
- (void)scheduleInRunLoop:(id)arg1;
- (void)_disconnectFromDealloc;
- (void)_disconnect;
- (void)_disconnectOnIvarQueue;
- (void)_cancelConnection;
- (void)_cancelConnectionOnIvarQueue;
- (void)_connectIfNecessary;
- (void)_connectIfNecessaryOnIvarQueue;
- (void)_reconnectIfNecessaryOnIvarQueueAfterDelay;
- (void)_handleEvent:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_noteDisconnectedFromDaemonOnIvarQueue;
- (void)_callDelegateOnIvarQueueWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) id <APSConnectionDelegate> delegate;
- (void)dealloc;
- (void)_shutdownFromDealloc;
- (void)shutdown;
- (void)_shutdownOnIvarQueue;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3;
- (id)initWithEnvironmentName:(id)arg1 queue:(id)arg2;
- (id)initWithEnvironmentName:(id)arg1 launchBundleIdOnDemand:(id)arg2 queue:(id)arg3;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;
- (id)initWithEnvironmentName:(id)arg1;

@end

