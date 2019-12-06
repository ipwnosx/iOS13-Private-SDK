//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableSet, PLCloudPhotoLibraryManager, PLCloudResourcePruneManager, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLCloudResourcePrefetchManager : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    PLCloudPhotoLibraryManager *_cplManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSMutableSet *_legacyInflightResources;
    NSMutableSet *_rmInflightResoures;
    long long _defaultPrefetchMode;
    NSDate *_lastCheckCPLBGDownloadDate;
    BOOL _enqueuedCheckCPLBGDownload;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)_identifierForResourceDownload:(id)arg1;
+ (id)_legacyIdentifierForItemIdentifier:(id)arg1 cplType:(NSUInteger)arg2;
// - (void).cxx_destruct;
- (void)_resourcesToPrefetchWithPredicates:(id)arg1 budget:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_resourcesWithPredicate:(id)arg1 limit:(NSUInteger)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_lastCompletePrefetchDate;
- (long long)diskSpaceBudgetForNonThumbnails;
- (long long)diskSpaceBudgetForThumbnails;
- (void)_handlePrefetchError:(id)arg1 forPLCloudResourceWithObjectID:(id)arg2;
- (void)_incrementPrefetchCountForPLCloudResources:(id)arg1;
- (void)_prefetchResources:(id)arg1 shouldAutoPefetchNextBatch:(BOOL)arg2 prefetchSignpostId:(NSUInteger)arg3;
- (void)_startPrefetchNextBatch;
- (void)_clearPrefetchState;
- (void)_writeDownloadFinishedMarkerIfNeeded;
- (BOOL)_canPrefetch;
- (void)_inflightResourcesRemoveIdentifier:(id)arg1 cplResource:(id)arg2;
- (void)_inflightResourcesAddIdentifier:(id)arg1 cplResource:(id)arg2;
- (id)_inflightResources;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_reloadDefaultDownload;
- (void)_reloadDownloadOriginalsSetting;
- (void)prefetchResourcesWithPredicates:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)prefetchStatusForDebug:(BOOL)arg1;
- (void)stop;
- (void)_cleanupInflightResources;
- (void)_enqueueCheckCPLBGDownloadFromNow:(id)arg1 withReason:(id)arg2;
- (void)_checkCPLBackgroundDownloadOperations;
- (void)handleOptimizeModeChange;
- (void)startAutomaticPrefetch;
- (void)dealloc;
- (id)initWithCPLManager:(id)arg1 pruneManager:(id)arg2 library:(id)arg3;
- (id)init;

@end

