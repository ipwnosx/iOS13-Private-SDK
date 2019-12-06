//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKDetailViewController.h>

@class GKDashboardPlayerPhotoView, GKLeaderboard, GKScore, UIButton, UILabel;

@interface GKDashboardLeaderboardDetailViewController : GKDetailViewController
{
    GKDashboardPlayerPhotoView *_playerView;
    UILabel *_nameLabel;
    UILabel *_descriptionLabel;
    UILabel *_earnedOnLabel;
    UILabel *_infoLabel;
    UIButton *_firstButton;
    UIButton *_secondButton;
    UIButton *_reportProblemButton;
    GKLeaderboard *_leaderboard;
    GKScore *_score;
}

@property(retain, nonatomic) GKScore *score; // @synthesize score=_score;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(nonatomic) UIButton *reportProblemButton; // @synthesize reportProblemButton=_reportProblemButton;
@property(nonatomic) UIButton *secondButton; // @synthesize secondButton=_secondButton;
@property(nonatomic) UIButton *firstButton; // @synthesize firstButton=_firstButton;
@property(nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) UILabel *earnedOnLabel; // @synthesize earnedOnLabel=_earnedOnLabel;
@property(nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) GKDashboardPlayerPhotoView *playerView; // @synthesize playerView=_playerView;
- (void)report:(id)arg1;
- (void)share:(id)arg1;
- (void)challenge:(id)arg1;
- (void)configureForScore;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithScore:(id)arg1 leaderboard:(id)arg2;

@end

