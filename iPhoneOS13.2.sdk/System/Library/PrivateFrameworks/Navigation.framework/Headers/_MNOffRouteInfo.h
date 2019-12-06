//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedWaypoint, NSDate;

__attribute__((visibility("hidden")))
@interface _MNOffRouteInfo : NSObject
{
    NSDate *_date;
    NSDate *_lastUpddate;
    GEOComposedWaypoint *_destination;
    double _originalDistanceFromDestination;
    double _distancePenalty;
    double _throttledReroutesPenalty;
    double _penalty;
}

@property(readonly, nonatomic) double penalty; // @synthesize penalty=_penalty;
// - (void).cxx_destruct;
- (id)description;
// - (CDStruct_c3b9c2ee)_coordinateFromWaypoint:(id)arg1;
- (void)updateWithCurrentDate:(id)arg1 location:(id)arg2 isMostRecentReroute:(BOOL)arg3 throttledReroutesCount:(NSUInteger)arg4;
- (id)initWithCurrentDate:(id)arg1 location:(id)arg2 destination:(id)arg3;

@end

