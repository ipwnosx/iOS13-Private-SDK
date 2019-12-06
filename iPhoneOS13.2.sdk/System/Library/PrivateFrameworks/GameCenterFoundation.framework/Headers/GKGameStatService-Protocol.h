//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GKGameDescriptor, GKLeaderboardScoreRequest, GKPlayerInternal, NSArray, NSString;

@protocol GKGameStatService <NSObject>
- (oneway void)getDefaultLeaderboardIDWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)setDefaultLeaderboardID:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getLeaderboardSetsForGameDescriptor:(GKGameDescriptor *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getLeaderboardsForGameDescriptor:(GKGameDescriptor *)arg1 player:(GKPlayerInternal *)arg2 setIdentifier:(NSString *)arg3 handler:(void (^)(NSArray *, NSError *))arg4;
- (void)submitScores:(NSArray *)arg1 whileScreeningChallenges:(BOOL)arg2 withEligibleChallenges:(NSArray *)arg3 handler:(void (^)(NSError *))arg4;
- (oneway void)getLeaderboadForRequest:(GKLeaderboardScoreRequest *)arg1 handler:(void (^)(GKLeaderboardInternal *, NSError *))arg2;
- (oneway void)resetAchievementsWithHandler:(void (^)(NSError *))arg1;
- (void)submitAchievements:(NSArray *)arg1 whileScreeningChallenges:(BOOL)arg2 withEligibleChallenges:(NSArray *)arg3 handler:(void (^)(NSError *))arg4;
- (oneway void)getAchievementsForGameDescriptor:(GKGameDescriptor *)arg1 players:(NSArray *)arg2 handler:(void (^)(NSDictionary *, NSError *))arg3;
- (oneway void)getAchievementDescriptionsForGameDescriptor:(GKGameDescriptor *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getRecentPlayersWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getRecentMatchesForGameDescriptor:(GKGameDescriptor *)arg1 otherPlayer:(GKPlayerInternal *)arg2 handler:(void (^)(NSArray *, NSString *, NSError *))arg3;
- (oneway void)getPlayersForGameDescriptor:(GKGameDescriptor *)arg1 includeCompatibleMultiplayerGames:(BOOL)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getPlayersForGameDescriptor:(GKGameDescriptor *)arg1 achievementIdentifier:(NSString *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getPlayersForGameDescriptor:(GKGameDescriptor *)arg1 leaderboardIdentifier:(NSString *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
@end

