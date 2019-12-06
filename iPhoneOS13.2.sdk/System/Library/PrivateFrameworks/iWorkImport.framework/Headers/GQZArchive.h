//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol GQZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface GQZArchive : NSObject
{
    NSMutableDictionary *mEntries;
    id <GQZArchiveInputStream> mInput;
    BOOL mIsEncrypted;
    NSString *mFilename;
}

- (id)filename;
- (BOOL)isEncrypted;
- (id)entryNames;
- (id)entryWithName:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2;
- (void)readExtraFieldFromBuffer:(const char )arg1 size:(NSUInteger)arg2 entry:(id)arg3;
- (id)readFilenameFromBuffer:(const char )arg1 size:(NSUInteger)arg2;
//  (struct GQZEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromOffset:(long long)arg1;
//  (struct GQZEndOfCentralDirectory)readZip64EndOfCentralDirectoryWithEocdOffset:(long long)arg1;
- (const char )searchForEndOfCentralDirectoryOffset:(long long )arg1;
//  (struct GQZEndOfCentralDirectory)readEndOfCentralDirectory;
- (void)collapseCommonRootDirectory;
- (void)readEntries;

@end

