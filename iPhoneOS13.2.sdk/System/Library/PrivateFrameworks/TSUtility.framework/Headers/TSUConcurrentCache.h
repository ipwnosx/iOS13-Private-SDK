//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/TSUCache.h>

@class TSUReadWriteQueue;

@interface TSUConcurrentCache : TSUCache
{
    TSUReadWriteQueue *mReadWriteQueue;
}

@property(readonly, nonatomic) TSUReadWriteQueue *readWriteQueue; // @synthesize readWriteQueue=mReadWriteQueue;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (BOOL)hasFlushableContent;
- (NSUInteger)count;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 andWait:(BOOL)arg2;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)unload;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

