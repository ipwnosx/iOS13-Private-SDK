//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@class CPLEngineTransport, CPLFeatureVersionHistory, CPLLibraryInfo, CPLLibraryState, NSObject, NSString;
@protocol CPLEngineTransportDownloadBatchTask, CPLEngineTransportGetCurrentSyncAnchorTask, CPLEngineTransportGroup, CPLEngineTransportQueryTask, OS_dispatch_queue;

@interface CPLPullFromTransportScopeTask : CPLEngineScopedTask
{
    NSObject<OS_dispatch_queue> *_queue;
    CPLEngineTransport *_transport;
    id <CPLEngineTransportDownloadBatchTask> _downloadTask;
    id <CPLEngineTransportQueryTask> _queryTask;
    CPLLibraryInfo *_currentLibraryInfo;
    Class _currentQueryClass;
    BOOL _ignoreNewBatches;
    BOOL _useCourtesyMingling;
    NSUInteger _rewindFeatureVersion;
    NSData _rewindSyncAnchor;
    CPLFeatureVersionHistory *_versionHistory;
    id <CPLEngineTransportGroup> _transportGroup;
    NSUInteger _totalAssetCountForScope;
    BOOL _hasCachedTotalAssetCountForScope;
    long long _taskItem;
    BOOL _hasFetchedInitialSyncAnchor;
    BOOL _shouldStoreInitialSyncAnchor;
    NSData _initialSyncAnchor;
    CPLLibraryInfo *_initialLibraryInfo;
    CPLLibraryState *_initialLibraryState;
    id <CPLEngineTransportGetCurrentSyncAnchorTask> _fetchInitialSyncAnchorTask;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    BOOL _didNotifySchedulerPullQueueIsFullOnce;
    BOOL _needsToNotifySchedulerPullQueueIsFull;
    NSString *_phaseDescription;
}

@property(copy) NSString *phaseDescription; // @synthesize phaseDescription=_phaseDescription;
// - (void).cxx_destruct;
- (id)taskIdentifier;
- (void)cancel;
- (void)taskDidFinishWithError:(id)arg1;
- (void)launch;
- (void)_launch;
- (void)_checkServerFeatureVersionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchInitialSyncAnchor;
- (void)_launchPullTasksAndDisableQueries:(BOOL)arg1;
- (void)_launchNextQueryTask;
- (void)_launchQueryForClass:(Class)arg1 cursor:(id)arg2;
- (void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2;
- (void)_storeInitialSyncAnchorIfNecessaryInTransaction:(id)arg1;
- (void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2 inTransaction:(id)arg3;
- (void)_launchFetchChangesFromSyncAnchor:(NSData )arg1;
- (void)_updateLastFeatureVersionAndRelaunchFetchChangesFromSyncAnchor:(NSData )arg1;
- (void)_handleNewBatchFromChanges:(id)arg1 updatedLibraryInfo:(id)arg2 updatedLibraryState:(id)arg3 newSyncAnchor:(NSData )arg4;
- (BOOL)checkScopeIsValidInTransaction:(id)arg1;
- (void)_handleNewBatchFromChanges:(id)arg1 newSyncAnchor:(NSData )arg2 inTransaction:(id)arg3;
- (NSUInteger)_totalAssetCountForScope;
- (void)_extractAndMingleAssetsIfPossibleFromBatch:(id)arg1 inTransaction:(id)arg2;
- (void)_cancelAllTasks;
- (void)_notifySchedulerPullQueueIsFullNowIfNecessary;
- (void)_notifySchedulerPullQueueIsFull;
- (void)_reallyNotifySchedulerPullQueueIsFull;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5;

@end

