//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRVolumeDidChangeMessage : MRProtocolMessage
{
}

- (NSUInteger)type;
@property(readonly, nonatomic) NSString *outputDeviceUID;
@property(readonly, nonatomic) NSString *endpointUID;
@property(readonly, nonatomic) float volume;
- (id)initWithVolume:(float)arg1 endpointUID:(id)arg2 outputDeviceUID:(id)arg3;

@end

