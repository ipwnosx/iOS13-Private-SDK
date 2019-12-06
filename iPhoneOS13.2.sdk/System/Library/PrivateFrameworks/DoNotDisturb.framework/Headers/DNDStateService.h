//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/DNDRemoteServiceConnectionEventListener-Protocol.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface DNDStateService : NSObject <DNDRemoteServiceConnectionEventListener>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_clientIdentifier;
    NSHashTable *_stateUpdateListeners;
    BOOL _registeredForUpdates;
}

+ (id)serviceForClientIdentifier:(id)arg1;
+ (void)initialize;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
// - (void).cxx_destruct;
- (void)_handleLostXPCConnection;
- (BOOL)_queue_registerForStateUpdatesIfRequired;
- (void)remoteService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1;
- (void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1;
- (void)removeStateUpdateListener:(id)arg1;
- (void)addStateUpdateListener:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)queryCurrentStateWithError:(id )arg1;
- (id)_initWithClientIdentifier:(id)arg1;
- (BOOL)removeStateUpdateListener:(id)arg1 error:(id )arg2;
- (BOOL)addStateUpdateListener:(id)arg1 error:(id )arg2;

@end

