//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@class NSMutableDictionary;

@interface PLAssetsdLibraryClient : PLAssetsdBaseClient
{
    NSMutableDictionary *_securityScopedURLs;
    _Atomic BOOL _isOpen;
}

// - (void).cxx_destruct;
- (void)_stopUsingSecurityScopedURLs;
- (BOOL)_consumeSandboxExtensions:(id)arg1;
- (void)pendingEventsForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)automaticallyDeleteEmptyAlbumWithObjectID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)synchronouslyUpdateThumbnailsForPhotos:(id)arg1 assignNewIndex:(BOOL)arg2 forceRefresh:(BOOL)arg3 error:(id )arg4;
- (void)updateThumbnailsForPhotos:(id)arg1 assignNewIndex:(BOOL)arg2 forceRefresh:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_assetURIStringsForPhotos:(id)arg1;
- (BOOL)repairSingletonObjectsWithError:(id )arg1;
- (void)recoverFromCrashIfNeeded;
- (void)importFileSystemAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)synchronouslyImportFileSystemAssetsWithError:(id )arg1;
- (id)getPhotoLibraryStoreXPCListenerEndpoint;
- (BOOL)shutdownPhotoLibraryDatabaseWithError:(id )arg1;
- (id)upgradePhotoLibraryDatabaseWithOptions:(NSUInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)openPhotoLibraryDatabaseWithoutProgressIfNeeded:(id )arg1;
- (BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:(id )arg1 error:(id )arg2;
- (BOOL)createPhotoLibraryDatabaseWithError:(id )arg1;
- (long long)getCurrentModelVersion;
- (void)launchAssetsd;
- (void)dealloc;

@end

