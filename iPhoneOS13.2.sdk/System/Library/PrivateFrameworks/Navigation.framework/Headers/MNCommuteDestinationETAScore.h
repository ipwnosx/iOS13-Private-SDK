//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNCommuteDestinationScore.h>

#import <Navigation/MNCommuteDestinationComparisonScore-Protocol.h>
#import <Navigation/MNCommuteDestinationObserver-Protocol.h>

@class MNCommuteDestination, NSDate;
@protocol GEODirectionServiceTicket;

@interface MNCommuteDestinationETAScore : MNCommuteDestinationScore <MNCommuteDestinationObserver, MNCommuteDestinationComparisonScore>
{
    int _score;
    BOOL _destinationInvalid;
    MNCommuteDestination *_otherDestination;
    double _otherDestinationTravelTime;
    NSDate *_lastRouteUpdate;
    id <GEODirectionServiceTicket> _directionsRequestTicket;
}

+ (double)weight;
@property(retain, nonatomic) id <GEODirectionServiceTicket> directionsRequestTicket; // @synthesize directionsRequestTicket=_directionsRequestTicket;
@property(retain, nonatomic) NSDate *lastRouteUpdate; // @synthesize lastRouteUpdate=_lastRouteUpdate;
@property(nonatomic) double otherDestinationTravelTime; // @synthesize otherDestinationTravelTime=_otherDestinationTravelTime;
@property(nonatomic) __weak MNCommuteDestination *otherDestination; // @synthesize otherDestination=_otherDestination;
// - (void).cxx_destruct;
- (id)_directionsRequestFeedback;
- (id)_routeAttributes;
- (void)_handleDirectionsResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3;
- (void)_requestRoute;
- (BOOL)_readyForRoute;
- (void)commuteDestination:(id)arg1 didChangeRemainingTime:(double)arg2;
- (BOOL)supportsComparisonType:(NSUInteger)arg1;
- (void)updateComparisonDestination:(id)arg1 ofType:(NSUInteger)arg2;
- (void)_updateScoreAndDestinationInvalid;
- (id)descriptionExtras;
- (BOOL)destinationInvalid;
- (int)score;
- (void)updateScoreIfPossible;
- (id)initWithDestination:(id)arg1;

@end

