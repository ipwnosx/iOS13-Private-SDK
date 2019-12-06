//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFFutureDelegate-Protocol.h>
#import <Email/EFLoggable-Protocol.h>
#import <Email/EMVIPManager-Protocol.h>
#import <Email/EMVIPManagerObserver-Protocol.h>

@class EAEmailAddressSet, EFCancelationToken, EFPromise, EMRemoteConnection, NSSet;

@interface EMVIPManager : NSObject <EFFutureDelegate, EFLoggable, EMVIPManagerObserver, EMVIPManager>
{
//    struct os_unfair_lock_s _vipsLock;
    EAEmailAddressSet *_cachedEmailAddresses;
    EFCancelationToken *_observerCancelationToken;
    EMRemoteConnection *_connection;
    EFPromise *_vipsByIdentifierPromise;
}

+ (id)remoteInterface;
+ (id)log;
@property(retain) EFPromise *vipsByIdentifierPromise; // @synthesize vipsByIdentifierPromise=_vipsByIdentifierPromise;
@property(retain, nonatomic) EMRemoteConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (void)didFinishBlockingMainThreadForFuture:(id)arg1;
- (void)didStartBlockingMainThreadForFuture:(id)arg1;
- (void)observer:(id)arg1 updatedVIPs:(id)arg2 removedVIPs:(id)arg3;
- (void)observer:(id)arg1 gotVIPs:(id)arg2;
- (void)removeVIPsWithEmailAddresses:(id)arg1;
- (void)removeVIPsWithIdentifiers:(id)arg1;
- (void)saveVIPs:(id)arg1;
- (BOOL)isVIPAddress:(id)arg1;
@property(readonly, copy, nonatomic) EAEmailAddressSet *allVIPEmailAddresses;
@property(readonly, copy, nonatomic) NSSet *allVIPs;
- (id)vipWithIdentifier:(id)arg1;
@property(readonly, nonatomic) BOOL hasVIPs;
- (id)_vipsByIdentifier;
- (void)_reset;
- (void)_startObservingVIPChangesIfNecessary;
- (void)dealloc;
- (id)initWithRemoteConnection:(id)arg1;
- (id)init;

@end

