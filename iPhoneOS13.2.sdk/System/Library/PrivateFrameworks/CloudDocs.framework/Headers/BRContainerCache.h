//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, br_pacer;
@protocol BRContainerHelper, NSObject, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRContainerCache : NSObject
{
    id <BRContainerHelper> _helper;
    NSMutableDictionary *_containersByID;
    NSMutableSet *_fetchedContainerIDs;
    BOOL _containerCacheUptodate;
    NSObject<OS_dispatch_queue> *_queue;
    br_pacer *_invalidationPacer;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    id <NSObject> _containerStatusObserver;
}

+ (BOOL)hasDaemonicParts;
+ (id)containerCache;
+ (id)containerHelper;
// - (void).cxx_destruct;
- (id)_allContainersByIDNoCopyBlocking:(BOOL)arg1;
- (BOOL)_updateContainersCache;
- (void)invalidateAndClearCache:(BOOL)arg1;
- (void)_containerListDidChange;
- (void)unsubscribeToContainerStatusUpdate;
- (void)subscribeToContainerStatusUpdate;
- (id)containerByID:(id)arg1 forURL:(id)arg2;
- (id)allContainersByID;
- (void)_accountWillChange;
- (id)documentContainers;
- (id)allContainersBlockIfNeeded:(BOOL)arg1;
- (void)dealloc;
- (id)initWithHelper:(id)arg1;

@end

