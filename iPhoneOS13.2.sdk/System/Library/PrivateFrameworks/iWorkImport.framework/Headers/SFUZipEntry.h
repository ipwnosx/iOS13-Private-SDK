//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/SFUDataRepresentation.h>

@class SFUCryptoKey;
@protocol SFUZipArchiveDataRepresentation;

__attribute__((visibility("hidden")))
@interface SFUZipEntry : SFUDataRepresentation
{
    SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;
    int mCompressionMethod;
    NSUInteger mCompressedSize;
    NSUInteger mUncompressedSize;
    NSUInteger mOffset;
    unsigned int mCrc;
    NSUInteger mDataOffset;
    BOOL mHasDataOffset;
    NSUInteger mEncodedLength;
    BOOL mHasEncodedLength;
    SFUCryptoKey *mCryptoKey;
}

- (void)setDataLength:(long long)arg1;
- (void)setCryptoKey:(id)arg1;
- (void)setCompressionFlags:(unsigned short)arg1;
- (void)readZip64ExtraField:(const char )arg1 size:(NSUInteger)arg2;
- (unsigned int)crc;
- (NSUInteger)backingFileDataOffset;
- (id)backingFilePath;
- (BOOL)isBackedByFile;
- (BOOL)isEncrypted;
- (BOOL)isCompressed;
- (void)copyToFile:(id)arg1;
- (id)data;
- (id)inputStream;
- (long long)encodedLength;
- (long long)dataLength;
- (BOOL)isReadable;
- (void)dealloc;
- (id)initWithDataRepresentation:(id)arg1 compressionMethod:(int)arg2 compressedSize:(NSUInteger)arg3 uncompressedSize:(NSUInteger)arg4 offset:(NSUInteger)arg5 crc:(unsigned int)arg6;
- (id)initFromCentralFileHeader:(const char )arg1 dataRepresentation:(id)arg2;
- (NSUInteger)calculateEncodedLength;
- (NSUInteger)dataOffset;

@end

