//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNCommuteDestinationScore.h>

#import <Navigation/MNCommuteDestinationLocationScore-Protocol.h>

@class NSMutableArray;

@interface MNCommuteDestinationOffRouteScore : MNCommuteDestinationScore <MNCommuteDestinationLocationScore>
{
    int _score;
    BOOL _destinationInvalid;
    NSMutableArray *_offRouteEntries;
}

+ (double)weight;
@property(retain, nonatomic) NSMutableArray *offRouteEntries; // @synthesize offRouteEntries=_offRouteEntries;
// - (void).cxx_destruct;
- (id)descriptionExtras;
- (BOOL)destinationInvalid;
- (int)score;
- (void)_updateScoreAndDestinationInvalid;
- (void)updateForRerouteWithLocation:(id)arg1;
- (void)updateForLocation:(id)arg1;
- (void)updateScoreIfPossible;
- (id)initWithDestination:(id)arg1;

@end

