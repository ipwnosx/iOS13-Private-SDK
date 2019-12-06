//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSFileManager (SafariNSFileManagerExtras)
- (id)safari_frameworksDirectoryURLs;
- (id)safari_pathWithUniqueFilenameForPath:(id)arg1;
- (BOOL)safari_removeFileAtURL:(id)arg1 error:(id )arg2;
- (BOOL)safari_moveDownloadedFileAtURL:(id)arg1 toURL:(id)arg2;
- (id)safari_createTemporaryDirectoryWithTemplate:(id)arg1;
- (id)safari_autoFillQuirksDownloadDirectoryURL;
- (id)safari_productionSafariSettingsDirectory;
- (id)safari_nonContaineredSettingsDirectoryURL;
- (id)safari_settingsDirectoryURL;
- (id)safari_settingsDirectoryForHomeDirectory:(id)arg1;
- (id)safari_settingsDirectoryForLibraryDirectory:(id)arg1;
- (id)safari_safariLibraryDirectory;
- (id)_safari_libraryDirectoryForHomeDirectory:(id)arg1;
- (id)_safari_containerDirectory;
- (id)safari_subdirectoryWithName:(id)arg1 inUserDomainOfDirectory:(NSUInteger)arg2;
- (id)safari_ensureDirectoryExists:(id)arg1;
@end

