//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibraryPathManager;

@interface PLImportFileManager : NSObject
{
    PLPhotoLibraryPathManager *_pathManager;
}

+ (BOOL)isCameraDirectoryFolderName:(id)arg1;
+ (BOOL)isImportDirectoryFolderName:(id)arg1;
// - (void).cxx_destruct;
- (BOOL)removeUnusedDCIMDirectoryAtPath:(id)arg1;
- (id)nextAvailableFilePathInDirectory:(id)arg1 withExtension:(id)arg2;
- (id)urlForNewDCIMFolderWithFolderNumber:(long long )arg1;
- (id)_DCIMFolderNameWithNumber:(long long)arg1;
- (id)_dcimDirectory;
- (id)initWithPathManager:(id)arg1;
- (id)init;

@end

