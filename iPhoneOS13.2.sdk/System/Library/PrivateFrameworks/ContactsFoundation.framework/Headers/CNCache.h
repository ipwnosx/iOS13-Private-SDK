//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol CNScheduler;

@interface CNCache : NSObject
{
    NSArray *_boundingStrategies;
    id <CNScheduler> _resourceScheduler;
    NSMutableDictionary *_storage;
    NSMutableArray *_didEvictHandlers;
    NSArray *_evictedKeysAndValues;
}

+ (id)boundingStrategyWithTTL:(double)arg1 timeProvider:(id)arg2;
+ (id)boundingStrategyWithTTL:(double)arg1;
+ (id)boundingStrategyWithCapacity:(NSUInteger)arg1;
+ (id)nonatomicCacheScheduler;
+ (id)atomicCacheScheduler;
+ (id)atomicCache;
+ (id)cache;
@property(copy, nonatomic) NSArray *evictedKeysAndValues; // @synthesize evictedKeysAndValues=_evictedKeysAndValues;
@property(readonly, nonatomic) NSMutableArray *didEvictHandlers; // @synthesize didEvictHandlers=_didEvictHandlers;
@property(readonly, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) id <CNScheduler> resourceScheduler; // @synthesize resourceScheduler=_resourceScheduler;
@property(readonly, copy, nonatomic) NSArray *boundingStrategies; // @synthesize boundingStrategies=_boundingStrategies;
// - (void).cxx_destruct;
- (void)callDidEvictHandlersIfNecessary;
- (void)resourceLock_evictObjectsForKeys:(id)arg1;
- (void)resourceLock_evictObjectForKey:(id)arg1;
- (void)resourceLock_validateAllKeys;
- (void)resourceLock_validateKey:(id)arg1;
- (void)resourceLock_willAccessKey:(id)arg1;
- (void)resourceLock_willSetObject:(id)arg1 forKey:(id)arg2;
- (void)addDidEvictHandler:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
@property(readonly, copy) NSArray *allObjects;
@property(readonly, copy) NSArray *allKeys;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)resourceLock_setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1 onCacheMiss:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1;
- (id)resultWithResourceLock:(CDUnknownBlockType)arg1;
- (void)performWithResourceLock:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithBoundingStrategies:(id)arg1 resourceScheduler:(id)arg2;
- (id)initWithResourceScheduler:(id)arg1;
- (id)init;

@end

