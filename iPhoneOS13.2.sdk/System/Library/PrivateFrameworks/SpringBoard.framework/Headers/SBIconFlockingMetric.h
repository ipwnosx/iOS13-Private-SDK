//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class PETDistributionEventTracker, PETScalarEventTracker;

@interface SBIconFlockingMetric : SBAnalyticsStateMachineEventHandler
{
    PETDistributionEventTracker *_flockingDistributionTracker;
    PETScalarEventTracker *_flockingUsageTracker;
}

// - (void).cxx_destruct;
- (id)init;

@end

