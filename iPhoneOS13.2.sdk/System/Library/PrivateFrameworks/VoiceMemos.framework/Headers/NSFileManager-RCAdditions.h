//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSFileManager (RCAdditions)
- (BOOL)rc_fileExistsAndIsInValidRecordingURL:(id)arg1;
- (id)rc_uniqueFileSystemURLWithPreferredURL:(id)arg1 uniquenessFormatString:(id)arg2;
- (BOOL)rc_isRestrictedByFileProtectionFromReadingAtPath:(id)arg1;
- (BOOL)rc_isRestrictedByFileProtectionFromWritingAtPath:(id)arg1;
- (BOOL)rc_isRestrictedByFileProtectionFromCreatingItemsInDirectory:(id)arg1;
- (long long)rc_dataProtectionKeyBagState;
@end

