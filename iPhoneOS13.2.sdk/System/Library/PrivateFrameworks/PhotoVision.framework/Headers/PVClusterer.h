//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoVision/PVFaceClusteringProtocol-Protocol.h>

@class NSDate, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSURL, PVCanceler, PVContext, PVDataAccessor, PVEventManager, PVQueue, PVSuggestionRequest, VNCanceller, VNClustererBuilder;
@protocol PVVisionIntegrating;

@interface PVClusterer : NSObject <PVFaceClusteringProtocol>
{
    id <PVVisionIntegrating> _visionIntegration;
    PVQueue *_processingQueue;
    PVContext *_context;
    PVDataAccessor *_dataAccessor;
    NSURL *_cacheDirUrl;
    NSURL *_cacheFileUrl;
    NSString *_clusteringType;
    NSNumber *_threshold;
    NSSet *_faceCSNsInClusterCache;
    NSUInteger _nextSeqNum;
    NSMutableSet *_faceIdStrsToAdd;
    NSMutableSet *_faceCSNsToRemove;
    NSUInteger _accumulatedChangesCount;
    NSUInteger _nextClusterTriggeringAccumulatedChangesCount;
    PVCanceler *_clusteringCanceler;
    VNCanceller *_visionCanceler;
    VNClustererBuilder *_clusterBuilder;
    BOOL _rebuildClusterer;
    NSMutableArray *_outstandingSuggestionRequests;
    PVSuggestionRequest *_currentSuggestionRequest;
    NSLock *_suggestionLock;
    NSLock *_currentStatusSnapshotLock;
//     CDStruct_6069b02b _currentStatusSnapshot;
    BOOL _currentStatusSnapshotIsValid;
    NSLock *_propertyDictionaryLock;
    NSMutableDictionary *_propertyDictionary;
    long long _clustererBringUpState;
    NSDate *_timestampOfLastClusterComparison;
    PVEventManager *_eventManager;
}

+ (BOOL)removeClusteringStateCacheWithContext:(id)arg1 cacheDirectoryUrl:(id)arg2 error:(id )arg3;
+ (void)initialize;
@property __weak PVEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property(nonatomic) long long clustererBringUpState; // @synthesize clustererBringUpState=_clustererBringUpState;
// - (void).cxx_destruct;
- (id)distancesFromClustersIdentifiedByFaceCSNs:(id)arg1 toClustersIdentifiedByFaceCSNs:(id)arg2 error:(id )arg3;
- (id)distanceBetweenLevel0ClusterIdentifiedByFaceCSN:(NSUInteger)arg1 andLevel0ClusterIdentifiedByFaceCSN:(NSUInteger)arg2 error:(id )arg3;
- (id)level0ClusterAsFaceCSNsByLevel0KeyFaceCSNForClusterIdentifiedByFaceCSN:(NSUInteger)arg1 error:(id )arg2;
@property(readonly, nonatomic) BOOL needsUpdate;
@property(readonly, nonatomic) BOOL needsFullSync;
@property(readonly, nonatomic, getter=isReady) BOOL ready;
@property(readonly, nonatomic) long long clustererState;
- (id)_stringForPVClustererBringUpState:(long long)arg1;
- (void)_setPropertyDictionaryValue:(id)arg1 forKey:(id)arg2;
- (void)_readPropertyDictionary;
- (id)_propertyDictionaryFileURL;
- (BOOL)getClusters:(id )arg1 threshold:(double )arg2 utilizingGPU:(BOOL )arg3 error:(id )arg4;
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id )arg1;
- (BOOL)_processingQueueGetVisionClusters:(id)arg1 minimumClusterSize:(NSUInteger)arg2 returnClusterAsCountedSet:(BOOL)arg3 error:(id )arg4;
- (BOOL)isReadyToReturnSuggestions;
- (void)cancelAllSuggestionRequests;
- (void)cancelSuggestionRequest:(id)arg1;
- (id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 withClusteringFlags:(id)arg2 updateHandler:(CDUnknownBlockType)arg3 error:(id )arg4;
- (id)suggestedFaceClusterSequenceNumbersForFaceClusterSequenceNumbersRepresentingClusters:(id)arg1 error:(id )arg2;
- (long long)restoreClusterCacheAndSyncWithLibrary:(BOOL)arg1 error:(id )arg2;
- (BOOL)_processingQueueRestoreClusterCacheAndSyncWithLibrary:(BOOL)arg1 error:(id )arg2;
- (BOOL)_processingQueueRestoreFromClusterSnapshotFileAtURL:(id)arg1 error:(id )arg2;
- (void)_removeVisionClusterCacheFilesNotReferencedByVisionClusterState:(id)arg1;
- (id)_visionClusterStateDataBlobFromClusterSnapshotFileAtURL:(id)arg1 error:(id )arg2;
- (BOOL)_processingQueueResetClusterCache:(id )arg1;
- (BOOL)_processingQueueRestoreClusteringCacheWithCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 threshold:(id)arg3 error:(id )arg4;
- (id)_visionClusterMemmapFileInCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 error:(id )arg3;
- (BOOL)_processingQueueSaveClusterCache:(id )arg1;
- (BOOL)_processingQueueGetFaceClusterSequenceNumbersInClusterCache:(id )arg1 lastClusterSequenceNumber:(NSUInteger )arg2 error:(id )arg3;
- (void)_processingQueueSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 withCanceler:(id)arg2;
- (void)_processingQueueQuickSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 visionClusters:(id )arg2 withCanceler:(id)arg3;
- (void)_removeEmptyGroups;
- (id)_faceObservationsFromFaces:(id)arg1 assignClusterSeqNumberIfNeeded:(BOOL)arg2 updatedFaces:(id)arg3;
- (id)_faceObservationsFromFaceIdStrs:(id)arg1 assignClusterSeqNumberIfNeeded:(BOOL)arg2 updatedFaces:(id)arg3 excludeClustered:(BOOL)arg4 groupingIdentifiers:(id)arg5;
- (id)_faceObservationsFromFaceCSNs:(id)arg1;
- (BOOL)_performAndPersistClustersByAddingFaceObs:(id)arg1 groupingIdentifiers:(id)arg2 removingFaceObs:(id)arg3 updateFaces:(id)arg4 canceler:(id)arg5 error:(id )arg6;
- (id)status;
// - (void)_recordCurrentStatus:(CDStruct_6069b02b)arg1;
- (void)_recordIncrementCountOfPendingFacesToAdd:(NSUInteger)arg1;
- (void)_recordCountOfPendingFacesToAdd:(NSUInteger)arg1;
- (void)_recordClusterRebuildRequired:(BOOL)arg1;
- (void)_recordClusteringState:(BOOL)arg1;
- (void)cancelClustering;
- (void)_cancelClusteringAndRestoreClusterCache:(BOOL)arg1;
- (void)performClusteringWithCompletion:(CDUnknownBlockType)arg1;
- (void)clusterAndWait;
- (void)clusterIfNecessaryAndWait;
- (NSUInteger)numberOfAccumulatedClusterChanges;
- (BOOL)_processingQueuePerformForcedFaceClustering:(BOOL)arg1 withCanceler:(id)arg2;
- (void)scheduleClusteringAfterRemovingFaceCSNs:(id)arg1 addingFaceIdStrs:(id)arg2;
- (void)_processingQueueDetermineNextClusterTriggeringAccumulatedChangesCountIfNecessary;
- (void)terminate;
- (id)_persistenceDelegate;
- (id)initWithContext:(id)arg1 dataAccessor:(id)arg2 cacheDirectoryURL:(id)arg3 visionIntegration:(id)arg4;

@end

