//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOStep, GEOTransitStep;

__attribute__((visibility("hidden")))
@interface _GEOTransitRouteStepInfo : NSObject
{
    long long _routeLegType;
    NSRange * _pointRange;
    GEOTransitStep *_transitStep;
    unsigned int _duration;
    GEOStep *_walkingStep;
    NSRange * _maneuverPointRange;
}

@property(nonatomic) NSRange * maneuverPointRange; // @synthesize maneuverPointRange=_maneuverPointRange;
@property(retain, nonatomic) GEOStep *walkingStep; // @synthesize walkingStep=_walkingStep;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) GEOTransitStep *transitStep; // @synthesize transitStep=_transitStep;
@property(nonatomic) NSRange * pointRange; // @synthesize pointRange=_pointRange;
@property(nonatomic) long long routeLegType; // @synthesize routeLegType=_routeLegType;
// - (void).cxx_destruct;

@end

