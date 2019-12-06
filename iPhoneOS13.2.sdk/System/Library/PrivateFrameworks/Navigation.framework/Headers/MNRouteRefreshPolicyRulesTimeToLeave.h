//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNRouteRefreshPolicyRules-Protocol.h>

@interface MNRouteRefreshPolicyRulesTimeToLeave : NSObject <MNRouteRefreshPolicyRules>
{
    NSUInteger _policy;
}

@property(readonly, nonatomic) NSUInteger policy; // @synthesize policy=_policy;
- (double)_timeIntervalToDestination:(id)arg1 fromDate:(id)arg2;
- (double)maxTimeIntervalFromNowForDestinationRefresh:(id)arg1 fromDate:(id)arg2;
- (double)timeIntervalForDestinationRefresh:(id)arg1 lastUpdate:(id)arg2;
@property(readonly, nonatomic) BOOL canWakeDeviceForUpdates;
@property(readonly, nonatomic) BOOL canWakeClientForUpdates;
- (BOOL)canMakeNetworkRequestsForDestination:(id)arg1 atDate:(id)arg2;
- (id)init;

@end

