//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSSet, SFActivityAdvertisement, SFPeerDevice;

@protocol SFContinuityScannerClient <NSObject>
- (void)pairedDevicesChanged:(NSSet *)arg1;
- (void)lostDeviceWithDevice:(SFPeerDevice *)arg1;
- (void)foundDeviceWithDevice:(SFPeerDevice *)arg1;
- (void)receivedAdvertisement:(SFActivityAdvertisement *)arg1;
@end

