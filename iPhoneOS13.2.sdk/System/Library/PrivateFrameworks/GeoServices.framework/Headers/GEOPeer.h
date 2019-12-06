//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODaemon, GEOProxyClient, NSMutableDictionary, NSString;
@protocol NSObject, OS_xpc_object;

@interface GEOPeer : NSObject
{
    GEODaemon *_daemon;
    NSObject<OS_xpc_object> *_connection;
    GEOProxyClient *_clientIdentifier;
    BOOL _preloading;
    BOOL _preloadingExclusively;
    NSString *_peerID;
    NSString *_debugIdentifier;
    NSMutableDictionary *_entitlementCache;
    id <NSObject> _peerTransaction;
    id <NSObject> _preloadingTransaction;
}

@property(retain, nonatomic) NSMutableDictionary *entitlementCache; // @synthesize entitlementCache=_entitlementCache;
@property(readonly, nonatomic) GEOProxyClient *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(copy, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
@property(readonly, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
@property(nonatomic) BOOL preloadingExclusively; // @synthesize preloadingExclusively=_preloadingExclusively;
@property(nonatomic) BOOL preloading; // @synthesize preloading=_preloading;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (BOOL)hasEntitlement:(id)arg1;
@property(readonly, nonatomic) BOOL isLocationd;
@property(readonly, nonatomic) NSString *bundleVersion;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (id)description;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 daemon:(id)arg2;
- (void)_handleEvent:(id)arg1;

@end

