//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKChallenge.h>

@class GKAchievement;

@interface GKAchievementChallenge : GKChallenge
{
    GKAchievement *_achievement;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
@property(retain, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;
- (void)loadDetailsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)detailsLoaded;
- (id)detailGoalTextForPlayer:(id)arg1 withAchievement:(id)arg2;
- (id)titleText;
- (void)setInternal:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)dealloc;
- (id)description;

@end

