//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLManagedAssetRecoveryManager : NSObject
{
    int _assetsDownloadsCount;
    PLPhotoLibrary *_photoLibrary;
    PLPhotoLibrary *_syncablePhotoLibrary;
    NSObject<OS_dispatch_queue> *_resourceDownloadIsolationQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    long long _state;
}

+ (id)_predicateForAdjustedAssetsFailedDeferredRendering;
+ (id)_predicateForAdjustedAssetsWithMissingResources;
+ (id)_irisesWithZeroVideoCpDuration;
+ (id)_jpegImagesPredicate;
+ (id)_imagesWithZeroWidthHeightPredicate;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resourceDownloadIsolationQueue; // @synthesize resourceDownloadIsolationQueue=_resourceDownloadIsolationQueue;
@property(nonatomic) int assetsDownloadsCount; // @synthesize assetsDownloadsCount=_assetsDownloadsCount;
@property(retain, nonatomic) PLPhotoLibrary *syncablePhotoLibrary; // @synthesize syncablePhotoLibrary=_syncablePhotoLibrary;
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
// - (void).cxx_destruct;
- (BOOL)_canUnderstandAdjustmentForAsset:(id)arg1;
- (BOOL)_fixIrisWithZeroVideoComplementDuration:(id)arg1 usingExistingVideoComplementAtPath:(id)arg2 error:(id )arg3;
- (void)_fixIrisWithZeroVideoComplementDuration:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_fixFullSizeAdjustedResource:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)_fixRawUTIForAsset:(id)arg1 error:(id )arg2;
- (void)_fixOriginalAssetDimensionsForAsset:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_fixDimensionsForAsset:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_assetKindsAllowedForDownloading;
- (void)_downloadResources:(id)arg1 forAsset:(id)arg2 usingCloudPhotoLibraryManager:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_performAssetRecoveryTaskForInconsistentState:(id)arg1 state:(NSUInteger)arg2 usingCloudPhotoLibraryManager:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_recoverAsset:(id)arg1 usingCloudPhotoLibraryManager:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_setCloudRecoveryState:(NSUInteger)arg1 forAssetsWithFetchRequestPredicate:(id)arg2 resultsFilterPredicate:(id)arg3;
- (void)startRecoveryOfAssetsInInconsistentCloudStateUsingCloudPhotoLibraryManager:(id)arg1;
- (void)identifyAssetsWithInconsistentCloudState;
- (id)initWithLibraryServicesManager:(id)arg1;

@end

