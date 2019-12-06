//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableSet, NSObject, NSSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICCache : NSCache
{
    NSObject<OS_dispatch_source> *_memoryWarningEventSource;
    NSMutableSet *_mutableKeys;
    NSObject<OS_dispatch_queue> *_mutableKeysAccessQueue;
}

+ (void)purgeAllCaches;
+ (id)cacheCollection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mutableKeysAccessQueue; // @synthesize mutableKeysAccessQueue=_mutableKeysAccessQueue;
@property(retain, nonatomic) NSMutableSet *mutableKeys; // @synthesize mutableKeys=_mutableKeys;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *memoryWarningEventSource; // @synthesize memoryWarningEventSource=_memoryWarningEventSource;
// - (void).cxx_destruct;
- (void)removeObjectsWithKeyContainingString:(id)arg1;
@property(readonly, nonatomic) NSSet *allKeys;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(NSUInteger)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)receivedMemoryWarning;
- (void)unregisterForMemoryWarnings;
- (void)registerForMemoryWarnings;
- (void)dealloc;
- (id)init;

@end

