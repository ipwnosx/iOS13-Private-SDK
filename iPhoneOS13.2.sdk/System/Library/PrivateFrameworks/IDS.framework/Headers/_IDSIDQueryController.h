//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _IDSIDQueryController : NSObject <IDSDaemonListenerProtocol>
{
    NSMutableDictionary *_listeners;
    NSMutableDictionary *_idStatusCache;
    NSMutableDictionary *_transactionIDToBlockMap;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_serviceToken;
    NSMapTable *_delegateToInfo;
    NSMutableDictionary *_listenerIDToServicesMap;
    id _delegateContext;
}

+ (void)initialize;
// - (void).cxx_destruct;
- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;
- (BOOL)_flushQueryCacheForService:(id)arg1;
- (BOOL)_warmupQueryCacheForService:(id)arg1;
- (long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (BOOL)_hasCacheForService:(id)arg1;
- (BOOL)currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)_currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 forceRefresh:(BOOL)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (BOOL)_sync_currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (BOOL)_sync_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (BOOL)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRefresh:(BOOL)arg4 waitForReply:(BOOL)arg5 forceRefresh:(BOOL)arg6 queue:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (void)_idStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRenew:(BOOL)arg4 waitForReply:(BOOL)arg5 forceRefresh:(BOOL)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_setCurrentIDStatus:(long long)arg1 forDestination:(id)arg2 service:(id)arg3;
- (id)_delegateMapForListenerID:(id)arg1 service:(id)arg2;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 delegateMap:(id)arg2;
- (void)_purgeIDStatusCache;
- (void)_purgeIDStatusCacheAfter:(double)arg1;
- (void)_updateCacheWithDictionary:(id)arg1 service:(id)arg2;
- (id)_cachedStatusForDestination:(id)arg1 service:(id)arg2;
- (id)_cacheForService:(id)arg1;
- (BOOL)_isListenerWithID:(id)arg1 listeningToService:(id)arg2;
- (void)dealloc;
- (id)initWithDelegateContext:(id)arg1 queueController:(id)arg2;
- (id)init;
- (BOOL)removeListenerID:(id)arg1 forService:(id)arg2;
- (void)addListenerID:(id)arg1 forService:(id)arg2;
- (void)daemonDisconnected;
- (void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(BOOL)arg4 error:(id)arg5;
- (void)_connect;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)___oldDealloc;
- (id)__sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4 waitForReply:(BOOL)arg5;
- (void)_requestRemoteDevicesForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_requestStatusForDestinations:(id)arg1 service:(id)arg2 waitForReply:(BOOL)arg3 forceRefresh:(BOOL)arg4 listenerID:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_requestCachedStatusForDestinations:(id)arg1 service:(id)arg2 waitForReply:(BOOL)arg3 listenerID:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_requestCacheForService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_disconnectFromQueryService;

@end

