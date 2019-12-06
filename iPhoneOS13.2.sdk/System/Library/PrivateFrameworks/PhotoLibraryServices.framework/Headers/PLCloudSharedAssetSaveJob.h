//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class AssetCollectionInfo, MSASAssetCollection, NSArray, NSDictionary, NSMutableArray, NSString;

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob
{
    BOOL _replacingOriginalWithDerivative;
    AssetCollectionInfo *_currentAssetCollectionInfo;
    NSMutableArray *_pendingDownloadNotifications;
    BOOL _isVideo;
    BOOL _isPhotoIris;
    NSString *_currentFilePath;
    NSString *_currentCloudAssetGUID;
    NSUInteger _currentCloudAssetMediaAssetType;
    NSString *_cloudAlbumGUID;
    NSString *_cloudPersonID;
    MSASAssetCollection *_currentCloudAssetCollection;
    NSArray *_assetCollectionInfos;
    NSArray *_cloudAssetGUIDsToDelete;
    long long _jobType;
    NSDictionary *_mstreamdInfoDictionary;
}

+ (id)nextDCIMSaveFileURLForCloudPersonID:(id)arg1 cloudAlbumGUID:(id)arg2 fileExtension:(id)arg3 assetUUID:(id)arg4;
+ (id)_dcimDirectoryForFileURL:(id)arg1;
+ (id)pathForInFlightAssetCollectionWithGUID:(id)arg1 mediaAssetType:(NSUInteger)arg2;
+ (id)_lightweightReimportPhotoCloudSharingAlbumInfoForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2;
+ (BOOL)_lightweightReimportCacheDirectoryExists;
+ (void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3;
+ (void)deleteCloudSharedAssetsWithCloudGUIDs:(id)arg1 info:(id)arg2;
+ (void)saveCloudSharedAssetAtPath:(id)arg1 forAssetCollection:(id)arg2 mediaAssetType:(NSUInteger)arg3 albumGUID:(id)arg4 personID:(id)arg5 info:(id)arg6 shouldPrioritize:(BOOL)arg7;
+ (void)downloadPendingAssetsForPersonID:(id)arg1 info:(id)arg2;
+ (void)assetsdProcessMetadataForAssetCollections:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 info:(id)arg4 libraryServicesManager:(id)arg5;
+ (void)processMetadataForAssetCollections:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 info:(id)arg4;
+ (id)newCloudSharedAssetSaveJobFromAProcessThatIsNotAssetsd;
@property(retain, nonatomic) NSDictionary *mstreamdInfoDictionary; // @synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary;
@property(nonatomic) long long jobType; // @synthesize jobType=_jobType;
@property(retain, nonatomic) NSArray *cloudAssetGUIDsToDelete; // @synthesize cloudAssetGUIDsToDelete=_cloudAssetGUIDsToDelete;
@property(nonatomic) BOOL isPhotoIris; // @synthesize isPhotoIris=_isPhotoIris;
@property(nonatomic) BOOL isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) NSArray *assetCollectionInfos; // @synthesize assetCollectionInfos=_assetCollectionInfos;
@property(retain, nonatomic) MSASAssetCollection *currentCloudAssetCollection; // @synthesize currentCloudAssetCollection=_currentCloudAssetCollection;
@property(retain, nonatomic) NSString *cloudPersonID; // @synthesize cloudPersonID=_cloudPersonID;
@property(retain, nonatomic) NSString *cloudAlbumGUID; // @synthesize cloudAlbumGUID=_cloudAlbumGUID;
@property(nonatomic) NSUInteger currentCloudAssetMediaAssetType; // @synthesize currentCloudAssetMediaAssetType=_currentCloudAssetMediaAssetType;
@property(retain, nonatomic) NSString *currentCloudAssetGUID; // @synthesize currentCloudAssetGUID=_currentCloudAssetGUID;
@property(retain, nonatomic) NSString *currentFilePath; // @synthesize currentFilePath=_currentFilePath;
// - (void).cxx_destruct;
- (NSUInteger)_insertionIndexForAsset:(id)arg1 inAlbum:(id)arg2;
- (void)executeDaemonOperationReplaceRecentlyUploadedOriginalJobType;
- (void)executeDaemonOperationDeleteAssetJobType;
- (void)_incrementDerivativesCount:(long long)arg1 thumbnailsCount:(long long)arg2;
- (void)_prefetchLimitForDerivatives:(long long )arg1 thumbnails:(long long )arg2;
- (BOOL)_processInflightAsset:(id)arg1 mediaAssetType:(NSUInteger)arg2;
- (void)executeDaemonOperationDownloadPendingAssetsJobType;
- (void)executeDaemonOperationSaveAssetMetadataForCollectionsJobType;
- (void)_performSaveTransactionAndWaitOnLibrary:(id)arg1 transaction:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_addDownloadNotification:(id)arg1;
- (short)attemptLightweightReimportAssetData;
- (void)_updatePhotoIrisPropertiesIfNecessaryForAsset:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2;
- (BOOL)_processSaveAssetWithPlaceholderKind:(short)arg1 withAssetDataFilePath:(id)arg2;
- (void)_processInFlightCommentsForAsset:(id)arg1 inAlbum:(id)arg2 inPhotoLibrary:(id)arg3;
- (BOOL)_parseISO6709String:(id)arg1 outLatitude:(double )arg2 outLongitude:(double )arg3;
- (id)_createPlaceHolderInSharedAlbum:(id)arg1;
- (void)executeDaemonOperationSaveAssetJobType;
- (short)placeHolderKindFromAssetMetadataType:(NSUInteger)arg1;
- (BOOL)isProcessingThumbnail;
- (id)_highPriorityOperationQueue;
- (id)_lowPriorityOperationQueue;
- (void)runDaemonSide;
- (void)run;
- (void)setupSaveAssetMetadataForCollectionsJobForAssetCollections:(id)arg1 album:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (long long)daemonOperation;
- (void)dealloc;
- (id)description;
- (id)initWithAssetsdClient:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;

@end

