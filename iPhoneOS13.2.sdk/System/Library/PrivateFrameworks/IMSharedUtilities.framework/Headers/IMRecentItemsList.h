//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMRecentItemsList : NSObject
{
    NSObject<OS_dispatch_queue> *_diskWritingQueue;
}

+ (id)sharedInstance;
- (id)_guidForFileURL:(id)arg1;
- (void)_updateRecentsCache:(id)arg1 forDomain:(id)arg2;
- (id)_recentsCacheForDomain:(id)arg1;
- (id)_buildLRUCacheUsingArray:(id)arg1 forDomain:(id)arg2;
- (void)_removeRecentDataPayloadEntryFromDisk:(id)arg1 forDomain:(id)arg2;
- (void)_saveRecentDataPayloadEntryToDisk:(id)arg1 forDomain:(id)arg2;
- (void)_removeRecentDataPayloadEntry:(id)arg1 forDomain:(id)arg2;
- (void)addRecentItemAtFileURL:(id)arg1 GUID:(id)arg2 infoDictionary:(id)arg3 forDomain:(id)arg4;
- (void)_addRecentDataPayloadEntry:(id)arg1 toDomain:(id)arg2;
- (void)fetchRecentItemsForDomain:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRecentStickersWithCompletion:(CDUnknownBlockType)arg1;
- (void)addRecentItemWithData:(id)arg1 GUID:(id)arg2 infoDictionary:(id)arg3 forDomain:(id)arg4;
- (void)deleteRecentsInFirstLaunch;
- (void)deleteAllRecentItemsForDomain:(id)arg1;
- (void)deleteRecentItemWithData:(id)arg1 GUID:(id)arg2 forDomain:(id)arg3;
- (void)deleteRecentItemWithFileURL:(id)arg1 GUID:(id)arg2 forDomain:(id)arg3;
- (void)dispatchCacheUpdateWithBlock:(CDUnknownBlockType)arg1;
- (long long)cacheSizeForDomain:(id)arg1;
- (void)dealloc;
- (id)init;

@end

