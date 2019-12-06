//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Engram/ENGroupContextCacheMiddleware-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ENGroupContextInMemoryCache : NSObject <ENGroupContextCacheMiddleware>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_groupIDtoGroup;
    NSMutableDictionary *_latestStableGroupIDToGroup;
}

@property(retain, nonatomic) NSMutableDictionary *latestStableGroupIDToGroup; // @synthesize latestStableGroupIDToGroup=_latestStableGroupIDToGroup;
@property(retain, nonatomic) NSMutableDictionary *groupIDtoGroup; // @synthesize groupIDtoGroup=_groupIDtoGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)groupContext:(id)arg1 fetchAllKnownGroups:(CDUnknownBlockType)arg2;
- (void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)middlewareCacheCostForContext:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end

