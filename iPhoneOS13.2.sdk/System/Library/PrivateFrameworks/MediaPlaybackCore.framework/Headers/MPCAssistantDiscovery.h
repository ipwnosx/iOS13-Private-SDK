//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPCAssistantDiscovery : NSObject
{
    void _reconSession;
}

- (void)_discoverAirplayDevices:(CDUnknownBlockType)arg1;
- (void)stopDiscovery;
- (void)discoverRemoteControlEndpointsMatchingUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)discoverAirplayDevicesMatchingUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)discoverAirplayDevicesMatchingGroupID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

