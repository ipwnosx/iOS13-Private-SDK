//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPPackage.h>

@class TSUTemporaryDirectory, TSUZipArchive;

__attribute__((visibility("hidden")))
@interface TSPFilePackage : TSPPackage
{
    TSUZipArchive *_componentZipArchive;
    TSUTemporaryDirectory *_componentZipArchiveTemporaryDirectory;
}

+ (NSUInteger)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)arg1;
+ (BOOL)isValidOrEmptyPackageOrTangierEditingFormatAtURL:(id)arg1 hasNativeUTI:(BOOL)arg2;
+ (BOOL)isValidTangierEditingFormatAtURL:(id)arg1;
+ (BOOL)isValidPackageAtURL:(id)arg1;
+ (BOOL)isValidTangierEditingFormatAtZipArchive:(id)arg1;
+ (BOOL)isValidPackageAtZipArchive:(id)arg1;
// - (void).cxx_destruct;
- (void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 originalURL:(id)arg3;
- (id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(CDUnknownBlockType)arg2 error:(id )arg3;
- (BOOL)hasDataAtRelativePath:(id)arg1;
- (id)newRawDataReadChannelAtRelativePath:(id)arg1;
- (id)packageEntryInfoAtRelativePath:(id)arg1 error:(id )arg2;
- (id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2 packageURL:(id)arg3 lastModificationDate:(out id )arg4;
- (id)componentZipArchive;
- (BOOL)didReloadZipArchive:(id)arg1 packageURL:(id)arg2 error:(id )arg3;
- (long long)packageType;

@end

