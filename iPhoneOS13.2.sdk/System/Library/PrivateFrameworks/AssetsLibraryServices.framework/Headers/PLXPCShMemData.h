//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface PLXPCShMemData : NSData
{
    void _buffer;
    NSUInteger _dataLength;
    NSUInteger _bufferLength;
}

- (NSUInteger)length;
- (const void *)bytes;
- (id)description;
- (void)dealloc;
- (id)initWithXPCShmem:(id)arg1 length:(long long)arg2;
- (id)initWithXPCShmem:(id)arg1;

@end

