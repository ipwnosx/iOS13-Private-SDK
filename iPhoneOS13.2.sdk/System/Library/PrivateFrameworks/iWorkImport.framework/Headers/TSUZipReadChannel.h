//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSUReadChannel-Protocol.h>

@class TSUZipArchive, TSUZipEntry;
@protocol TSUReadChannel;

__attribute__((visibility("hidden")))
@interface TSUZipReadChannel : NSObject <TSUReadChannel>
{
    TSUZipEntry *_entry;
    TSUZipArchive *_archive;
    BOOL _validateCRC;
    id <TSUReadChannel> _archiveReadChannel;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isValid;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)setLowWater:(NSUInteger)arg1;
- (void)close;
- (void)handleFailureWithHandler:(CDUnknownBlockType)arg1 error:(id)arg2;
- (BOOL)processData:(id)arg1 CRC:(unsigned int )arg2 isDone:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
- (void)readWithFileHeaderLength:(NSUInteger)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)readFileHeaderFromData:(id)arg1 headerLength:(NSUInteger )arg2;
- (void)readFromOffset:(long long)arg1 length:(NSUInteger)arg2 handler:(CDUnknownBlockType)arg3;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithEntry:(id)arg1 archive:(id)arg2 validateCRC:(BOOL)arg3;

@end

