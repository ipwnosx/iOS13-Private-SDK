//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OCBReader.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EBReader : OCBReader
{
    NSString *mTemporaryDirectory;
//    struct XlObjectFactory mXlObjectFactory;
    BOOL mUseStringOptimization;
    BOOL mIsFileStructuredStorage;
    const void *mBuffer;
}

@property(nonatomic) BOOL isFileStructuredStorage; // @synthesize isFileStructuredStorage=mIsFileStructuredStorage;
@property(nonatomic) BOOL useStringOptimization; // @synthesize useStringOptimization=mUseStringOptimization;
@property(retain, nonatomic) NSString *temporaryDirectory; // @synthesize temporaryDirectory=mTemporaryDirectory;
// - (void).cxx_destruct;
// property(readonly, nonatomic) struct XlBinaryReader xlReader;
//  (struct OCCBinaryStreamer )allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey )arg1 baseOutputFilenameInUTF8:(const char )arg2;
//  (struct OCCEncryptionInfoReader )encryptionInfoReader;
- (id)read;
- (BOOL)start;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1;

@end

