//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLPhotoSharingHelper : NSObject
{
}

+ (BOOL)debugAutoAcceptInvitation;
+ (BOOL)debugDownloadAllDerivatives;
+ (BOOL)debugDownloadMetadataOnly;
+ (BOOL)debugDownloadThumbnailsOnly;
+ (BOOL)debugAlwaysStreamSharedVideos;
+ (void)deleteDebugBreadcrumbsForAlbumGUID:(id)arg1;
+ (void)writeDownloadDebugBreadcrumbForAsset:(id)arg1 albumGUID:(id)arg2 content:(id)arg3 state:(int)arg4 error:(id)arg5;
+ (void)writeUploadDebugBreadcrumbForAssetCollections:(id)arg1 state:(int)arg2 error:(id)arg3;
+ (id)prefixForBreadcrumbState:(int)arg1;
+ (void)writeAlbumNameBreadCrumb:(id)arg1 forAlbumGUID:(id)arg2 isUpload:(BOOL)arg3;
+ (id)directoryPathForDownloadActivityForAlbumGUID:(id)arg1 create:(BOOL)arg2;
+ (id)directoryPathForUploadActivityForAlbumGUID:(id)arg1 create:(BOOL)arg2;
+ (BOOL)isBreadcrumbDebugEnabled;
+ (NSUInteger)purgeSpace:(NSUInteger)arg1;
+ (NSUInteger)purgeableSpace;
+ (void)countOfAssetsInMstreamdSharingDownloadQueueWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)isMstreamdBusyPerformingSharingActivityWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)pruneNonRecentlyViewedCloudSharingAssetsInLibrary:(id)arg1;
+ (void)applicationIsInForeground:(BOOL)arg1 photoLibraryURL:(id)arg2;
+ (double)intervalBetweenAlbumPolls;
+ (double)intervalBetweenPolls;
+ (void)downloadAsset:(id)arg1 cloudPlaceholderKind:(short)arg2 shouldPrioritize:(BOOL)arg3 shouldExtendTimer:(BOOL)arg4;
+ (id)downloadNotificationForAssetwithUUID:(id)arg1 cloudPlaceholderKind:(short)arg2;
+ (BOOL)_derivativeExistsForAsset:(id)arg1 cloudPlaceholderKind:(short)arg2;
+ (id)_downloadRequestQueue;
+ (BOOL)_recentlyRequestedDownloadAsset:(id)arg1 cloudPlaceholderKind:(short)arg2;
+ (void)prioritizeDownloadsForAlbumGUID:(id)arg1;
+ (void)checkServerModelForAlbum:(id)arg1 photoLibrary:(id)arg2;
+ (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2;
+ (void)markAlbumGUIDAsViewed:(id)arg1 clearUnseenAssetsCount:(BOOL)arg2;
+ (CGSize)derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2 derivativeType:(int)arg3 withSpecificationInfo:(id)arg4;
+ (id)temporaryLargeVideoDerivativePathForCollectionGUID:(id)arg1;
+ (id)temporarySmallVideoDerivativePathForCollectionGUID:(id)arg1;
+ (id)temporaryVideoPosterFramePathForCollectionGUID:(id)arg1;
+ (id)temporaryVideoPathForCollectionGUID:(id)arg1;
+ (id)temporaryThumbnailPathForCollectionGUID:(id)arg1;
+ (id)temporaryDerivativePathForCollectionGUID:(id)arg1 uti:(id)arg2;
+ (id)_temporaryUploadDerivativesPathForCollectionGUID:(id)arg1 pathExtension:(id)arg2;
+ (double)derivedAssetSmallDimensionLimitForType:(int)arg1;
+ (id)derivativesForMasterAsset:(id)arg1 withSpecifications:(id)arg2;
+ (id)_videoDerivativeForVideoAtURL:(id)arg1 outputURL:(id)arg2 withPreset:(id)arg3 outputFileType:(id)arg4;
+ (id)videoDerivativesForAssetCollection:(id)arg1 withSpecifications:(id)arg2;
+ (void)deleteCommentWithGUIDFromServer:(id)arg1;
+ (void)publishCloudSharedCommentToServer:(id)arg1;
+ (void)handlePhoneInvitationFailuresWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (id)_transactionWithName:(const char )arg1;
+ (id)_processPhoneFailuresQueue;
+ (void)savePhoneInvitationFailuresForPhoneNumber:(id)arg1 inAlbum:(id)arg2;
+ (id)_phoneInvitationFailureFile;
+ (BOOL)hasPhoneInvitationForAlbum:(id)arg1;
+ (void)refreshSubscriberListForAlbumGUID:(id)arg1;
+ (void)markPendingInvitationAsSpamForAlbum:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)declinePendingInvitationForAlbum:(id)arg1;
+ (void)acceptPendingInvitationForAlbum:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)unsubscribeFromAlbum:(id)arg1;
+ (void)removeSubscribers:(id)arg1 fromOwnedAlbum:(id)arg2;
+ (void)sendPendingInvitationsForNewlyCreatedAlbum:(id)arg1;
+ (unsigned int)unregisterIdleStateChangeObserverWithToken:(int)arg1;
+ (unsigned int)registerIdleStateChangeObserverWithToken:(int )arg1 handler:(CDUnknownBlockType)arg2;
+ (BOOL)removeCloudSharingDirectories:(id )arg1;
+ (void)requestVideoPlaybackURLForAsset:(id)arg1 videoType:(NSUInteger)arg2 completion:(CDUnknownBlockType)arg3;
+ (BOOL)isCellularConnection;
+ (void)deleteCloudSharedAssetsFromServer:(id)arg1 inSharedAlbum:(id)arg2;
+ (void)_userDidDeleteSharedAssets:(id)arg1;
+ (void)enqueueCloudSharedAssetsForPublishToServer:(id)arg1 inSharedAlbum:(id)arg2;
+ (void)updateCloudSharedAlbumMultipleContributorsStateOnServer:(id)arg1;
+ (void)updateCloudSharedAlbumPublicURLStateOnServer:(id)arg1;
+ (void)updateCloudSharedAlbumMetadataOnServer:(id)arg1;
+ (void)deleteCloudSharedAlbumFromServer:(id)arg1;
+ (void)_userDidDeleteSharedAlbum:(id)arg1;
+ (void)publishCloudSharedAlbumToServer:(id)arg1;
+ (void)deleteLocalAlbumsForMSASAlbumsWithGUID:(id)arg1 inviterAddress:(id)arg2;
+ (void)deleteLocalAlbumsForMSASAlbumsWithGUIDs:(id)arg1;
+ (void)resetAllLocalState;
+ (void)updateLocalAlbumMetadataForMSASAlbum:(id)arg1 info:(id)arg2;
+ (void)trackUploadBatchSize:(NSUInteger)arg1;
+ (id)_localizationKeyForAssets:(id)arg1;
+ (BOOL)canSetUserCloudSharedLiked:(BOOL)arg1 forAssets:(id)arg2 error:(id )arg3;
+ (BOOL)canAcceptPendingInvitationForAlbum:(id)arg1 error:(id )arg2;
+ (BOOL)canCreateStreamInPhotoLibrary:(id)arg1 error:(id )arg2;
+ (BOOL)hasReachedLimitOfSubscribedStreamsInLibrary:(id)arg1;
+ (BOOL)hasReachedLimitOfOwnedStreamsInLibrary:(id)arg1;
+ (long long)maxGIFSizeForPublishing;
+ (long long)maxVideoLengthForPublishing;
+ (long long)maxNumThumbnailsToPrefetchPerDay;
+ (long long)maxNumDerivativesToPrefetchPerDay;
+ (long long)maxNumDerivativesToDownloadPerPush;
+ (long long)maxCharactersPerComment;
+ (long long)maxCommentsPerAsset;
+ (long long)maxSubscribersPerStream;
+ (long long)maxAssetsPerStream;
+ (long long)maxSubscribedStreams;
+ (long long)maxOwnedStreams;
+ (CGSize)videoPosterFrameDimension;
+ (long long)_serverLimitValueForKey:(id)arg1 withDefaultResult:(long long)arg2;
+ (id)serverSideConfigurationDictionary;
+ (void)_resetServerSideConfigurationDictionary;
+ (void)updateSharedAlbumsCachedServerConfigurationLimits;
+ (id)streamdVideoCache;
+ (id)_pathToServerConfigurationCache;
+ (void)initializeMSPlatform;
+ (void)forgetSharingPersonID:(id)arg1;
+ (void)retryOutstandingActivities;
+ (void)pollForAlbumListUpdates;
+ (BOOL)accountMatchesEmail:(id)arg1;
+ (id)sharingUsername;
+ (id)sharingPersonID;
+ (BOOL)sharedStreamsExplictlyDisabledForPhotoLibraryURL:(id)arg1;
+ (BOOL)_sharedStreamsExplicitlyDisabled;
+ (BOOL)sharedStreamsEnabledForPhotoLibraryURL:(id)arg1;
+ (BOOL)_sharedStreamsEnabled;
+ (void)clearCachedAccountState;
+ (void)photosPreferencesChanged;
+ (void)accountSettingsChanged;

@end

