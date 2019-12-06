//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNTravelAdvisoryAuthority-Protocol.h>

@interface CALNDefaultTravelAdvisoryAuthority : NSObject <CALNTravelAdvisoryAuthority>
{
}

+ (id)sharedInstance;
- (BOOL)travelStateIndicatesTravelingTowardDestination:(long long)arg1;
- (BOOL)doesHypothesisSatisfyMinimumAllowableTravelTime:(id)arg1;
@property(readonly, nonatomic) double maximumAllowableTravelTime;
@property(readonly, nonatomic) double minimumAllowableTravelTime;

@end

