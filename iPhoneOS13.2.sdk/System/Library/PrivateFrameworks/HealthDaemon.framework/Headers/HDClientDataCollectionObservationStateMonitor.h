//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDProcessStateObserver-Protocol.h>

@class HDHealthStoreClient, HDProfile, NSLock;
@protocol HDClientDataCollectionObservationStateMonitorDelegate;

@interface HDClientDataCollectionObservationStateMonitor : NSObject <HDProcessStateObserver>
{
    NSLock *_lock;
    _Atomic BOOL _invalidated;
    HDHealthStoreClient *_client;
    HDProfile *_profile;
    id <HDClientDataCollectionObservationStateMonitorDelegate> _delegate;
}

@property(nonatomic) __weak id <HDClientDataCollectionObservationStateMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) HDHealthStoreClient *client; // @synthesize client=_client;
// - (void).cxx_destruct;
- (void)processDidEnterForeground:(id)arg1;
- (void)processDidEnterBackground:(id)arg1;
- (void)workoutManagerDidChangeState:(id)arg1;
- (void)_componentStateDidChange;
- (id)currentObserverState;
- (void)invalidate;
- (void)dealloc;
- (id)initWithClient:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

