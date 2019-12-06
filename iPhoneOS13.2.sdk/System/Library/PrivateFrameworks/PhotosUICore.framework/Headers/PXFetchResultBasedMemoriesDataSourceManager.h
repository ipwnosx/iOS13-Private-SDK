//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXMemoriesDataSourceManager.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableOrderedSet, NSObject, PHFetchResult, PXMemoriesDataSourceState;
@protocol OS_dispatch_queue;

@interface PXFetchResultBasedMemoriesDataSourceManager : PXMemoriesDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isWorking;
    BOOL _hasCreatedInitialDataSource;
    BOOL _loadFromEnd;
    PXMemoriesDataSourceState *__state;
    NSMutableOrderedSet *__remainingMemoriesToFetch;
}

@property(retain, setter=_setRemainingMemoriesToFetch:) NSMutableOrderedSet *_remainingMemoriesToFetch; // @synthesize _remainingMemoriesToFetch=__remainingMemoriesToFetch;
@property(retain, nonatomic, setter=_setState:) PXMemoriesDataSourceState *_state; // @synthesize _state=__state;
@property(nonatomic) BOOL loadFromEnd; // @synthesize loadFromEnd=_loadFromEnd;
// - (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)_createMemoriesDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;
- (void)_workerQueue_fetchRemainingMemoriesInBatchesFromTheEnd:(BOOL)arg1;
- (void)startLoadingIfNeeded;
- (id)createInitialDataSource;
@property(readonly, nonatomic) PHFetchResult *memories;
- (id)initWithMemoriesFetchResult:(id)arg1;

@end

