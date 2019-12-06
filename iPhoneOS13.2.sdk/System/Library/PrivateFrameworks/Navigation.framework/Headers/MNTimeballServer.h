//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MNRouteRefreshPolicyScheduler, MNTimeballCache, MNTimeballLocationManager, MNTimeballRoutingProvider, NSLock, NSMutableSet, NSXPCListener;
@protocol OS_dispatch_queue;

@interface MNTimeballServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    MNTimeballCache *_cache;
    MNRouteRefreshPolicyScheduler *_scheduler;
    MNTimeballRoutingProvider *_routingProvider;
    MNTimeballLocationManager *_locationManager;
    NSLock *_proxyLock;
    NSMutableSet *_proxies;
}

+ (id)defaultServer;
// - (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_scheduler;
- (id)_cache;
- (id)_routingProvider;
- (void)_peerDidDisconnectWithProxy:(id)arg1;
- (void)_peerDidConnectWithProxy:(id)arg1;
- (id)_localProxyForPeer:(id)arg1;
- (void)_navd_removeProxy:(id)arg1;
- (void)_navd_addProxy:(id)arg1;
- (id)_navd_localProxyForClient:(id)arg1;
- (void)dealloc;
- (id)init;

@end

