//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXMIDIParser : NSObject
{
}

- (unsigned short)_channelForStatusByte:(unsigned char)arg1;
- (NSUInteger)_expectedPacketLengthForEventType:(long long)arg1;
- (long long)_eventTypeForStatusByte:(unsigned char)arg1;
//  (id)parse:(const struct MIDIPacketList )arg1 error:(id )arg2;

@end

