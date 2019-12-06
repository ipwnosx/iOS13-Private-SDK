//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate;

__attribute__((visibility("hidden")))
@interface GEORerouteInfo : NSObject <NSSecureCoding>
{
    double _distancePenalty;
    double _throttledReroutesPenalty;
    double _penalty;
    NSDate *_time;
    double _distanceFromDestination;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double distanceFromDestination; // @synthesize distanceFromDestination=_distanceFromDestination;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) double penalty; // @synthesize penalty=_penalty;
// - (void).cxx_destruct;
// - (void)updateWithCurrentTime:(id)arg1 location:(id)arg2 isMostRecentReroute:(BOOL)arg3 destinationCoordinate:(CDStruct_c3b9c2ee)arg4 numThrottledReroutes:(NSUInteger)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

