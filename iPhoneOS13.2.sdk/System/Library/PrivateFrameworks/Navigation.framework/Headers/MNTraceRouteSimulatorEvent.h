//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLocation;

__attribute__((visibility("hidden")))
@interface MNTraceRouteSimulatorEvent : NSObject
{
    double _timestamp;
    GEOLocation *_location;
    id /* CDUnknownBlockType */ _completion;
}

@property(readonly, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithLocation:(id)arg1;

@end

