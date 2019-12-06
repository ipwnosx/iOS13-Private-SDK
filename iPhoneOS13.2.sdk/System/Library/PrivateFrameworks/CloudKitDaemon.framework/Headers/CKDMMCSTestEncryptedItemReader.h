//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDMMCSItemReaderWriterProtocol-Protocol.h>

@class CKDMMCSItem, CKDMMCSItemGroupContext;
@protocol CKDMMCSItemReaderWriterProtocol;

__attribute__((visibility("hidden")))
@interface CKDMMCSTestEncryptedItemReader : NSObject <CKDMMCSItemReaderWriterProtocol>
{
    CKDMMCSItemGroupContext *_MMCSRequest;
    CKDMMCSItem *_MMCSItem;
    id <CKDMMCSItemReaderWriterProtocol> _underlyingItemReader;
}

@property(retain, nonatomic) id <CKDMMCSItemReaderWriterProtocol> underlyingItemReader; // @synthesize underlyingItemReader=_underlyingItemReader;
@property(retain, nonatomic) CKDMMCSItem *MMCSItem; // @synthesize MMCSItem=_MMCSItem;
@property(retain, nonatomic) CKDMMCSItemGroupContext *MMCSRequest; // @synthesize MMCSRequest=_MMCSRequest;
// - (void).cxx_destruct;
- (BOOL)writeBytesAtOffset:(NSUInteger)arg1 bytes:(char )arg2 length:(NSUInteger)arg3 bytesWritten:(NSUInteger )arg4 error:(id )arg5;
- (BOOL)readBytesAtOffset:(NSUInteger)arg1 bytes:(char )arg2 length:(NSUInteger)arg3 bytesRead:(NSUInteger )arg4 error:(id )arg5;
- (id)getFileMetadataWithError:(id )arg1;
- (BOOL)closeWithError:(id )arg1;
- (BOOL)openWithError:(id )arg1;
- (id)initWithMMCSItem:(id)arg1 MMCSRequest:(id)arg2;

@end

