//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKChallengeInternal.h>

@class GKLeaderboardInternal, GKScoreInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal
{
    GKScoreInternal *_score;
    GKLeaderboardInternal *_leaderboard;
}

+ (id)secureCodedPropertyKeys;
+ (id)internalRepresentation;
@property(retain, nonatomic) GKLeaderboardInternal *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(copy, nonatomic) GKScoreInternal *score; // @synthesize score=_score;
- (id)titleText;
- (NSUInteger)type;
- (id)serverRepresentationForReceivingPlayer:(id)arg1;
- (void)dealloc;

@end

