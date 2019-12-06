//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString;
@protocol FBSApplicationDataStoreRepositoryClientObserver;

@protocol FBSApplicationDataStoreRepositoryClient <NSObject>
- (void)removeObserver:(id <FBSApplicationDataStoreRepositoryClientObserver>)arg1;
- (void)addObserver:(id <FBSApplicationDataStoreRepositoryClientObserver>)arg1;
- (BOOL)prefetchedObjectIfAvailableForKey:(NSString *)arg1 application:(NSString *)arg2 outObject:(id )arg3;
- (void)removeAllObjectsForApplication:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)removeObjectForKey:(NSString *)arg1 forApplication:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2 forApplication:(NSString *)arg3 withCompletion:(void (^)(NSError *))arg4;
- (id)objectForKey:(NSString *)arg1 forApplication:(NSString *)arg2;
- (NSArray *)availableDataStores;
- (void)synchronizeWithCompletion:(void (^)(NSError *))arg1;
- (void)invalidate;
- (void)removePrefetchedKeys:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)addPrefetchedKeys:(NSArray *)arg1;
@end

