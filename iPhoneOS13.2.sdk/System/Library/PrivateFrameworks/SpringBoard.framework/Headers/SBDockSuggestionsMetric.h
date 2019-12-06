//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFAnalyticsBackendEventHandling-Protocol.h>

@class NSArray, NSMutableDictionary, PETDistributionEventTracker, PETScalarEventTracker;

@interface SBDockSuggestionsMetric : NSObject <SBFAnalyticsBackendEventHandling>
{
    NSArray *_trackers;
    PETScalarEventTracker *_enabledTracker;
    NSMutableDictionary *_indexToSuggestionType;
    PETDistributionEventTracker *_distTracker;
}

// - (void).cxx_destruct;
- (BOOL)handleEvent:(NSUInteger)arg1 withContext:(id)arg2;
- (BOOL)_trackEvent:(BOOL)arg1 withPayload:(id)arg2;
- (id)init;

@end

