//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol ML3MusicLibraryResourcesProviding <NSObject>
- (NSString *)pathForBaseLocationPath:(long long)arg1;
- (NSString *)pathForResourceFileOrFolder:(int)arg1 basePath:(NSString *)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4;
- (NSString *)pathForResourceFileOrFolder:(int)arg1;
- (NSString *)libraryContainerRelativePath:(NSString *)arg1;
- (NSString *)libraryContainerPathByAppendingPathComponent:(NSString *)arg1;
- (NSString *)libraryContainerPath;
@end

