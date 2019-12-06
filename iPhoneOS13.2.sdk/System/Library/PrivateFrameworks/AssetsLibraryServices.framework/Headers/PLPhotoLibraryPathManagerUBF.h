//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/PLPhotoLibraryPathManagerCore.h>

@class NSFileManager, NSString;

@interface PLPhotoLibraryPathManagerUBF : PLPhotoLibraryPathManagerCore
{
    NSString *_databaseDirectory;
    NSString *_searchDatabaseDirectory;
    NSString *_originalsDirectory;
    NSString *_privateDirectory;
    NSString *_privateCacheDirectory;
    NSString *_resourcesDirectory;
    NSString *_journalsDirectory;
    NSString *_rendersDirectory;
    NSString *_derivativesDirectory;
    NSString *_derivativesThumbsDirectory;
    NSString *_derivativesMasterThumbsDirectory;
    NSString *_resourcesCPLDataDirectory;
    NSString *_resourcesPhotoStreamsDataDirectory;
    NSString *_resourcesPhotoCloudSharingDirectory;
    NSString *_resourcesPhotoCloudSharingDataDirectory;
    NSString *_resourcesPhotoCloudSharingMetadataDirectory;
    NSString *_resourcesPhotoCloudSharingCacheDirectory;
    NSString *_resourcesProjectsDataDirectory;
    NSString *_resourcesProjectsLegacyDirectory;
    NSString *_resourcesMomentSharedDirectory;
    NSString *_externalDirectory;
    NSFileManager *_fm;
}

+ (id)systemLibraryPathManager;
// - (void).cxx_destruct;
- (void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 mode:(unsigned char)arg2 toURLWithHandler:(CDUnknownBlockType)arg3;
- (void)setExtendedAttributesWithIdentifier:(id)arg1 andURL:(id)arg2;
- (void)setExtendedAttributesWithIdentifier:(id)arg1;
- (id)readOnlyUrlWithIdentifier:(id)arg1;
- (id)urlWithIdentifier:(id)arg1;
- (id)baseDirectoryForBundleScope:(unsigned char)arg1;
- (id)syncInfoPath;
- (id)pathToAssetsToAlbumsMapping;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)privateCacheDirectoryWithSubType:(unsigned char)arg1;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)extendedPathsWithError:(id )arg1;
- (id)corePathsWithError:(id )arg1;
- (BOOL)createPathsForNewLibrariesWithError:(id )arg1;
- (id)pathsForExternalWriters;
- (id)pathsForPermissionCheck;
- (id)pathsForClientAccess:(id)arg1;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)photosDatabasePath;
- (id)addToPath:(id)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)convertPhotoLibraryPathType:(unsigned char)arg1;
- (id)_externalDirectoryWithBundleIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)_privateDirectoryWithBundleIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)_basePrivateDirectoryPath;
- (id)initWithLibraryURL:(id)arg1;

@end

