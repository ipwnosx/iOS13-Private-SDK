//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFAnalyticsBackendEventHandling-Protocol.h>

@class PETScalarEventTracker;

@interface SBDesiredIconStateMetric : NSObject <SBFAnalyticsBackendEventHandling>
{
    PETScalarEventTracker *_loadEventTracker;
}

// - (void).cxx_destruct;
- (BOOL)handleEvent:(NSUInteger)arg1 withContext:(id)arg2;
- (id)init;

@end

