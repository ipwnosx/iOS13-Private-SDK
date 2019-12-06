//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCNetworkReachabilityObserving-Protocol.h>
#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>

@class FCKeyValueStore, NSArray, NSMutableArray, NSMutableIndexSet;
@protocol FCOperationThrottler, OS_dispatch_queue;

@interface FCNetworkBehaviorMonitor : NSObject <FCNetworkReachabilityObserving, FCOperationThrottlerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_sessions;
    NSMutableIndexSet *_sessionIDsThisLaunch;
    NSMutableArray *_events;
    FCKeyValueStore *_localStore;
    id <FCOperationThrottler> _saveThrottler;
}

// - (void).cxx_destruct;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)wifiReachabilityDidChange:(id)arg1;
- (void)_visitEventGroupsFromDate:(id)arg1 toDate:(id)arg2 block:(CDUnknownBlockType)arg3;
- (int)_cacheStateFromEvent:(id)arg1;
- (id)_respondingPOPFromEvent:(id)arg1;
- (void)_sanitizeNetworkEvent:(id)arg1;
- (BOOL)_shouldFilterNetworkEvent:(id)arg1;
- (void)logNetworkEvent:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *networkEvents;
@property(readonly, copy, nonatomic) NSArray *sessions;
- (void)populateTelemetry:(id)arg1 withNetworkEventsFromDate:(id)arg2 toDate:(id)arg3;
- (id)initWithCacheDirectory:(id)arg1;
- (id)initTransient;
- (id)init;

@end

