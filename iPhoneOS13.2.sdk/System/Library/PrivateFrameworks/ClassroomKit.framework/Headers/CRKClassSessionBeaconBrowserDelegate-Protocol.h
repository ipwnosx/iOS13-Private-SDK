//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CRKClassSessionBeaconBrowser, CRKRemoteEndpoint, DMFControlSessionIdentifier, NSError;

@protocol CRKClassSessionBeaconBrowserDelegate <NSObject>
- (void)beaconBrowser:(CRKClassSessionBeaconBrowser *)arg1 didFailWithError:(NSError *)arg2;
- (void)beaconBrowser:(CRKClassSessionBeaconBrowser *)arg1 didFindBeaconForInvitationSessionWithEndpoint:(CRKRemoteEndpoint *)arg2;
- (void)beaconBrowser:(CRKClassSessionBeaconBrowser *)arg1 didFindBeaconForClassSession:(DMFControlSessionIdentifier *)arg2 flags:(unsigned short)arg3;
@end

