//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLocation, GEONavigationMatchInfo, GEORoadMatch, GEORouteMatch;

@interface GEONavigationMatchResult : NSObject
{
    NSUInteger _type;
    GEORouteMatch *_routeMatch;
    GEORoadMatch *_roadMatch;
    GEOLocation *_rawLocation;
    GEONavigationMatchInfo *_detailedMatchInfo;
    BOOL _locationUnreliable;
}

+ (id)matchResultWithRawLocation:(id)arg1;
+ (id)matchResultWithRoadMatch:(id)arg1 location:(id)arg2;
+ (id)matchResultWithRouteMatch:(id)arg1 location:(id)arg2;
@property(readonly, nonatomic) BOOL locationUnreliable; // @synthesize locationUnreliable=_locationUnreliable;
@property(readonly, nonatomic) GEONavigationMatchInfo *detailedMatchInfo; // @synthesize detailedMatchInfo=_detailedMatchInfo;
@property(readonly, nonatomic) GEOLocation *rawLocation; // @synthesize rawLocation=_rawLocation;
@property(readonly, nonatomic) GEORoadMatch *roadMatch; // @synthesize roadMatch=_roadMatch;
@property(readonly, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)initWithRawLocation:(id)arg1;
- (id)initWithRoadMatch:(id)arg1 location:(id)arg2;
- (id)initWithRouteMatch:(id)arg1 location:(id)arg2;

@end

