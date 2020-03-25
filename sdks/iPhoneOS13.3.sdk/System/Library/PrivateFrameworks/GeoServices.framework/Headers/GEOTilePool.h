//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOTileCache;
@protocol OS_dispatch_source;

@interface GEOTilePool : NSObject
{
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    struct _GEOGenericContainer<_GEOTileKey, GEOTileData *, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _pool;
    struct _GEOGenericContainer<_GEOTileKey, id, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _decodedPool;
    GEOTileCache *_cache;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)_receivedMemoryNotification;
- (void)_enteredBackground:(id)arg1;
@property NSUInteger maxCost;
@property NSUInteger maxCapacity;
- (BOOL)containsKey:(const struct _GEOTileKey )arg1 cost:(NSUInteger )arg2;
- (void)removeTilesMatchingPredicate:(id /* CDUnknownBlockType */)arg1;
- (void)enumerate:(id /* CDUnknownBlockType */)arg1;
- (void)removeAllObjects;
- (void)removeTilesWithKeys:(id)arg1;
- (void)removeTileForKey:(const struct _GEOTileKey )arg1;
- (void)setTile:(id)arg1 forKey:(const struct _GEOTileKey )arg2 cost:(NSUInteger)arg3;
- (id)tileForKey:(const struct _GEOTileKey )arg1;
- (id)init;
- (id)initWithSideCacheEnabled:(BOOL)arg1;
@property(readonly, nonatomic) NSUInteger currentCost;
@property(readonly, nonatomic) NSUInteger currentCount;

@end
