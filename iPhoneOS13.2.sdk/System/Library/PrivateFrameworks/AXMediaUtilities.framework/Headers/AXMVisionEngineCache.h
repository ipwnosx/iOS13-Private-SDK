//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface AXMVisionEngineCache : NSObject
{
    NSObject<OS_dispatch_queue> *_cacheQueue;
    long long _cacheQueue_maxItems;
    NSMutableOrderedSet *_cacheQueue_orderedKeys;
    NSMutableDictionary *_cacheQueue_results;
}

// - (void).cxx_destruct;
- (void)purgeCache;
- (void)_cacheQueue_setResult:(id)arg1 forKey:(id)arg2;
- (void)setResult:(id)arg1 forKey:(id)arg2;
- (id)_cacheQueue_resultForKey:(id)arg1;
- (id)resultForKey:(id)arg1;
- (long long)_cacheQueue_cacheSize;
@property(readonly, nonatomic) long long cacheSize;
- (id)debugDescription;
- (id)description;
- (id)initWithCacheSize:(long long)arg1;

@end

