//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface GEONetworkDataReader : NSObject
{
    NSMutableData *_data;
    NSUInteger _dataLength;
    const void *_bytes;
    NSUInteger _bookmarkOffset;
    NSUInteger _offset;
}

// - (void).cxx_destruct;
- (BOOL)hasUnreadData;
- (void)seekToMarkedOffset;
- (void)markOffset;
- (id)readData:(unsigned int)arg1;
- (BOOL)readUnsignedInt:(unsigned int )arg1;
- (BOOL)readUnsignedShort:(unsigned short )arg1;
- (id)readString;
- (void)appendNetworkData:(id)arg1;
- (id)allData;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

