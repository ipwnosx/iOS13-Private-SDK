//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface CLKUIResourceManager : NSObject
{
    NSMutableDictionary *_recentProvidersForUuid;
    NSMutableDictionary *_atlasesByUuid;
    NSMutableDictionary *_providersByKey;
    NSUInteger _memoryUsed;
    NSMutableArray *_textureLoaderQueues;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_purgeAtlases:(id)arg1;
- (id)_newAtlasForUuid:(id)arg1;
- (void)_purgeAllUnconditionally;
- (id)delegateForUuid:(id)arg1;
- (void)notifyAtlas:(id)arg1 willChangeToMemoryCost:(NSUInteger)arg2;
- (void)purgeAllUnused;
- (BOOL)ensureMemoryAvailable:(NSUInteger)arg1;
- (BOOL)memoryIsAvailable:(NSUInteger)arg1;
- (void)returnTextureLoadingQueue:(id)arg1;
- (id)borrowTextureLoadingQueue;
- (id)_fetchOldestAtlas;
- (void)purge:(id)arg1;
- (void)dealloc;
- (id)init;

@end

