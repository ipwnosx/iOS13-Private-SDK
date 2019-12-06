//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GKTimeScopeButton, NSString, UILabel;

@interface GKDashboardLeaderboardScoreHeaderView : UICollectionReusableView
{
    id _timeScopeTarget;
    SEL _timeScopeAction;
    UILabel *_titleLabel;
    GKTimeScopeButton *_timeScopeButton;
}

+ (double)defaultHeight;
@property(nonatomic) GKTimeScopeButton *timeScopeButton; // @synthesize timeScopeButton=_timeScopeButton;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) SEL timeScopeAction; // @synthesize timeScopeAction=_timeScopeAction;
@property(nonatomic) id timeScopeTarget; // @synthesize timeScopeTarget=_timeScopeTarget;
- (void)timeScopePressed:(id)arg1;
@property(nonatomic) long long timeScope; // @dynamic timeScope;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)awakeFromNib;

@end

