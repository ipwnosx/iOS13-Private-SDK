//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class PETGoalConversionEventTracker;

@interface SBSystemGestureMetric : SBAnalyticsStateMachineEventHandler
{
    PETGoalConversionEventTracker *_goalTracker;
    NSUInteger _beganLocation;
}

// - (void).cxx_destruct;
- (id)initForType:(NSUInteger)arg1 parentMetric:(id)arg2;

@end

