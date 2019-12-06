//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol NSObject, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDPCSMemoryCache : NSObject
{
    BOOL _memoryStatusChanged;
    NSUInteger _maxEntries;
    double _minAge;
    NSMutableDictionary *_cacheEntries;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_source> *_memoryNotificationSource;
    NSUInteger _memoryStatus;
    id <NSObject> _memoryCacheEvictNotificationObserver;
    double _oldestCacheEntry;
    NSUInteger _memoryCacheRequestCount;
    NSUInteger _memoryCacheHitCount;
    NSUInteger _memoryCacheHighwaterCount;
    NSUInteger _memoryCacheDeleteCount;
    NSUInteger _memoryCacheUpdateCount;
    NSUInteger _memoryCacheEvictCount;
}

+ (void)registerEvictionTimer;
+ (id)globalEvictQueue;
@property NSUInteger memoryCacheEvictCount; // @synthesize memoryCacheEvictCount=_memoryCacheEvictCount;
@property NSUInteger memoryCacheUpdateCount; // @synthesize memoryCacheUpdateCount=_memoryCacheUpdateCount;
@property NSUInteger memoryCacheDeleteCount; // @synthesize memoryCacheDeleteCount=_memoryCacheDeleteCount;
@property NSUInteger memoryCacheHighwaterCount; // @synthesize memoryCacheHighwaterCount=_memoryCacheHighwaterCount;
@property NSUInteger memoryCacheHitCount; // @synthesize memoryCacheHitCount=_memoryCacheHitCount;
@property NSUInteger memoryCacheRequestCount; // @synthesize memoryCacheRequestCount=_memoryCacheRequestCount;
@property double oldestCacheEntry; // @synthesize oldestCacheEntry=_oldestCacheEntry;
@property(retain, nonatomic) id <NSObject> memoryCacheEvictNotificationObserver; // @synthesize memoryCacheEvictNotificationObserver=_memoryCacheEvictNotificationObserver;
@property BOOL memoryStatusChanged; // @synthesize memoryStatusChanged=_memoryStatusChanged;
@property NSUInteger memoryStatus; // @synthesize memoryStatus=_memoryStatus;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *memoryNotificationSource; // @synthesize memoryNotificationSource=_memoryNotificationSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) NSMutableDictionary *cacheEntries; // @synthesize cacheEntries=_cacheEntries;
@property(nonatomic) double minAge; // @synthesize minAge=_minAge;
@property(nonatomic) NSUInteger maxEntries; // @synthesize maxEntries=_maxEntries;
// - (void).cxx_destruct;
- (id)CKStatusReportArray;
- (BOOL)hasStatusToReport;
- (NSUInteger)_cacheCount;
- (void)clearCache;
- (void)runCacheEviction;
- (void)setPCSData:(id)arg1 forItemID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)getPCSDataFromCacheForID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_lockedEvictEntriesFromCache;
- (void)dealloc;
- (id)init;

@end

