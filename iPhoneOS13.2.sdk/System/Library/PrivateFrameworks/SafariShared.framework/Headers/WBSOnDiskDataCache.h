//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSDataCache-Protocol.h>

@class NSCache, NSMutableDictionary, NSMutableSet, NSURL, WBSCoalescedAsynchronousWriter;
@protocol OS_dispatch_queue, WBSDataCacheDelegate;

@interface WBSOnDiskDataCache : NSObject <WBSDataCache>
{
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSCache *_entriesForKeyStringsCache;
    NSMutableSet *_pendingKeyStringRequests;
    NSMutableSet *_missingEntryKeyStrings;
    NSMutableDictionary *_cacheSettings;
    WBSCoalescedAsynchronousWriter *_cacheSettingsWriter;
    BOOL _terminating;
    BOOL _isInMemoryCacheEnabled;
    id <WBSDataCacheDelegate> _dataCacheDelegate;
    NSURL *_cacheDirectoryURL;
}

@property(readonly, nonatomic) NSURL *cacheDirectoryURL; // @synthesize cacheDirectoryURL=_cacheDirectoryURL;
@property(nonatomic) BOOL isInMemoryCacheEnabled; // @synthesize isInMemoryCacheEnabled=_isInMemoryCacheEnabled;
@property(nonatomic) __weak id <WBSDataCacheDelegate> dataCacheDelegate; // @synthesize dataCacheDelegate=_dataCacheDelegate;
@property(readonly, nonatomic, getter=isTerminating) BOOL terminating; // @synthesize terminating=_terminating;
// - (void).cxx_destruct;
- (id)_fileLocationForKeyString:(id)arg1;
- (void)_dispatchDiskAccessBlock:(CDUnknownBlockType)arg1;
- (void)_internalQueueDispatchAsync:(CDUnknownBlockType)arg1;
- (void)_internalQueueDispatchSync:(CDUnknownBlockType)arg1;
- (id)_diskAccessQueueName;
- (id)_internalQueueName;
- (void)_notifyDidFinishSettingUp;
- (id)_cacheSettingsFileURL;
- (long long)_internalEntryStateForKeyString:(id)arg1;
- (long long)entryStateForKeyString:(id)arg1;
- (void)removeEntriesForKeyStringsNotIncludedIn:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeEntriesForKeyStrings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_didFailToLoadEntryForKeyString:(id)arg1 error:(id)arg2;
- (void)_didLoadEntry:(id)arg1 forKeyString:(id)arg2;
- (void)setEntry:(id)arg1 forKeyString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getEntryURLForKeyString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)requestEntryForKeyString:(id)arg1;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)settingForKey:(id)arg1;
- (void)reset;
- (void)savePendingChangesBeforeTearDown;
- (void)setUp;
- (id)initWithCacheDirectoryURL:(id)arg1;
- (id)init;

@end

