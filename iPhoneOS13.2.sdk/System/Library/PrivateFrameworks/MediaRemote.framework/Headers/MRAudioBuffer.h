//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioCompressedBuffer, NSDictionary;

@interface MRAudioBuffer : NSObject
{
    AVAudioCompressedBuffer *_buffer;
    NSDictionary *_formatSettings;
}

@property(readonly, nonatomic) NSDictionary *formatSettings; // @synthesize formatSettings=_formatSettings;
@property(readonly, nonatomic) AVAudioCompressedBuffer *buffer; // @synthesize buffer=_buffer;
// - (void).cxx_destruct;
- (id)initWithFormatSettings:(id)arg1 packetCapacity:(NSUInteger)arg2 maximumPacketSize:(NSUInteger)arg3;

@end

