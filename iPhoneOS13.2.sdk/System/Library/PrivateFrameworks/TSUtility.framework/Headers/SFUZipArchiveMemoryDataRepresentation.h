//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/SFUDataRepresentation.h>

#import <TSUtility/SFUZipArchiveDataRepresentation-Protocol.h>

@class NSData;

@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation>
{
    NSData *mData;
}

- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)bufferedInputStreamWithBufferSize:(NSUInteger)arg1;
- (id)bufferedInputStream;
- (id)inputStream;
- (long long)dataLength;
- (BOOL)isReadable;
- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

