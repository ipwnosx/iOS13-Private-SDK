//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, OISFUCryptoKey, OISFUDataRepresentation;
@protocol SFUZipArchiveDataRepresentation;

__attribute__((visibility("hidden")))
@interface OISFUZipArchive : NSObject
{
    NSMutableDictionary *mEntries;
    OISFUDataRepresentation<SFUZipArchiveDataRepresentation> *mDataRepresentation;
    NSData *mPassphraseVerifier;
    NSString *mPassphraseHint;
    OISFUCryptoKey *mCryptoKey;
    NSData *mEncryptedDocumentUuid;
}

+ (BOOL)isZipArchiveAtPath:(id)arg1;
- (id)commonRootDirectoryIgnoringCase:(BOOL)arg1;
- (BOOL)decompressAtPath:(id)arg1 wasEmpty:(BOOL )arg2;
- (BOOL)decompressAtPath:(id)arg1;
- (void)setCryptoKey:(id)arg1;
- (id)encryptedDocumentUuid;
- (id)passphraseHint;
- (id)passphraseVerifier;
- (BOOL)isEncrypted;
- (id)allEntryNames;
- (id)entryWithName:(id)arg1 dataLength:(long long)arg2;
- (id)entryWithName:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ignoreCase:(BOOL)arg3;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ignoreCase:(BOOL)arg3;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2;
- (void)readExtraFieldFromBuffer:(const char )arg1 size:(NSUInteger)arg2 entry:(id)arg3;
- (id)readFilenameFromBuffer:(const char )arg1 size:(NSUInteger)arg2;
// - (struct SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long)arg2;
// - (struct SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 eocdOffset:(long long)arg2;
- (const char )searchForEndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long )arg2;
// - (struct SFUZipEndOfCentralDirectory)readEndOfCentralDirectoryFromInputStream:(id)arg1;
- (void)collapseCommonRootDirectoryIgnoreCase:(BOOL)arg1;
- (void)readEntries;

@end

