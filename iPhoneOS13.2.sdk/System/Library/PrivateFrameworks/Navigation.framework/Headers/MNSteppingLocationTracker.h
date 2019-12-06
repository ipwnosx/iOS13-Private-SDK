//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNLocationTracker.h>

#import <Navigation/MNArrivalUpdaterDelegate-Protocol.h>

@class GEORouteMatcher, MNArrivalUpdater;

__attribute__((visibility("hidden")))
@interface MNSteppingLocationTracker : MNLocationTracker <MNArrivalUpdaterDelegate>
{
    GEORouteMatcher *_routeMatcher;
    MNArrivalUpdater *_arrivalUpdater;
}

// - (void).cxx_destruct;
- (void)arrivalUpdaterDidArrive:(id)arg1;
- (void)updateLocation:(id)arg1;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)stopTracking;
- (void)startTracking;
- (id)matchedLocationForLocation:(id)arg1;
- (void)resetForTracePlayerAtLocation:(id)arg1;
- (int)transportType;
- (id)initWithNavigationSession:(id)arg1;

@end

