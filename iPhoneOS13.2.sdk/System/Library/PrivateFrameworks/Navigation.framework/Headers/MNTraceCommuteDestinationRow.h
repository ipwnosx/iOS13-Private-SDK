//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedWaypoint, NSString;

@interface MNTraceCommuteDestinationRow : NSObject
{
    NSUInteger _destinationID;
    NSString *_name;
    GEOComposedWaypoint *_waypoint;
}

@property(retain, nonatomic) GEOComposedWaypoint *waypoint; // @synthesize waypoint=_waypoint;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) NSUInteger destinationID; // @synthesize destinationID=_destinationID;
// - (void).cxx_destruct;

@end

