//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_Arrival : _GEORouteMatchUpdater
{
    GEOComposedRouteStep *_arrivalStep;
    GEOComposedRouteStep *_previousExitStationStep;
//     struct PolylineCoordinate _arrivalRouteCoordinate;
//     CDStruct_2c43369c _destinationLocationCoordinate;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (id)initWithRoute:(id)arg1 arrivalStep:(id)arg2;

@end

