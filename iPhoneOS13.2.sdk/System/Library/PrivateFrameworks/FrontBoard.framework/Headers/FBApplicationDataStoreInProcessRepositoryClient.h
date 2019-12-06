//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBSApplicationDataStoreRepositoryClient-Protocol.h>

@class NSCountedSet, NSHashTable;
@protocol FBApplicationDataStoreRepository, OS_dispatch_queue;

@interface FBApplicationDataStoreInProcessRepositoryClient : NSObject <FBSApplicationDataStoreRepositoryClient>
{
    id <FBApplicationDataStoreRepository> _dataStore;
    NSCountedSet *_prefetchedKeys;
    NSMutableDictionary *_prefetchedKeyValues;
    NSObject<OS_dispatch_queue> *_prefetchQueue;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
//    struct os_unfair_lock_s _observersLock;
    NSHashTable *_observersLock_observers;
}

// - (void).cxx_destruct;
- (id)_observers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id )arg3;
- (void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (id)objectForKey:(id)arg1 forApplication:(id)arg2;
- (void)removeAllObjectsForApplication:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)availableDataStores;
- (void)synchronizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)_repositoryInvalidated:(id)arg1;
- (void)_valueChanged:(id)arg1;
- (void)_invalidateCacheIfObjectIsNotEqual:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;
- (void)_updateCacheIfNecessaryWithObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;
- (id)_prefetchQueue_prefetchedKeysForApplication:(id)arg1;
- (void)_prefetchQueue_updateNotificationListeners;
- (void)_updateNotificationListeners;
- (void)removePrefetchedKeys:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addPrefetchedKeys:(id)arg1;
- (id)initWithDataStore:(id)arg1;
- (id)init;

@end

