//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPStreamDataStorage.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface TSPReadOnlyMemoryDataStorage : TSPStreamDataStorage
{
    NSData *_NSData;
}

// - (void).cxx_destruct;
- (BOOL)readOnly;
- (NSUInteger)encodedLength;
- (BOOL)isReadable;
//  (id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(struct DataInfo )arg3 preferredFilename:(id)arg4 error:(id )arg5;
//  (BOOL)archiveInfoMessage:(struct DataInfo )arg1 archiver:(id)arg2 packageWriter:(id)arg3;
- (id)NSDataWithOptions:(NSUInteger)arg1;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithNSData:(id)arg1;

@end

