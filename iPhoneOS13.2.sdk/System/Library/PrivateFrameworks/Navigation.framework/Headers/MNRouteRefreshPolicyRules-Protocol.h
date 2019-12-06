//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MNPlannedDestination, MNRouteUpdate, NSDate;

@protocol MNRouteRefreshPolicyRules <NSObject>
@property(readonly, nonatomic) BOOL canWakeDeviceForUpdates;
@property(readonly, nonatomic) BOOL canWakeClientForUpdates;
@property(readonly, nonatomic) NSUInteger policy;
- (double)maxTimeIntervalFromNowForDestinationRefresh:(MNPlannedDestination *)arg1 fromDate:(NSDate *)arg2;
- (double)timeIntervalForDestinationRefresh:(MNPlannedDestination *)arg1 lastUpdate:(MNRouteUpdate *)arg2;
- (BOOL)canMakeNetworkRequestsForDestination:(MNPlannedDestination *)arg1 atDate:(NSDate *)arg2;
@end

