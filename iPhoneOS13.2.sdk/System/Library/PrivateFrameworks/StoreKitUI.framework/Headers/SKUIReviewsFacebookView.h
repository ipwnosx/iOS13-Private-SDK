//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, SKUIClientContext, SKUIColorScheme, UIButton, UIControl, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIReviewsFacebookView : UIView
{
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    NSArray *_friendNames;
    UILabel *_friendsLabel;
    UIButton *_likeButton;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    BOOL _userLiked;
    UIView *_separatorView;
    UIEdgeInsets _contentInsets;
}

@property(nonatomic) UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic, getter=isUserLiked) BOOL userLiked; // @synthesize userLiked=_userLiked;
@property(readonly, nonatomic) UIControl *likeToggleButton; // @synthesize likeToggleButton=_likeButton;
@property(copy, nonatomic) NSArray *friendNames; // @synthesize friendNames=_friendNames;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
// - (void).cxx_destruct;
- (void)_reloadLikeButtonState;
- (void)_reloadFriendNamesLabel;
- (id)_composedStringForNames:(id)arg1 userLiked:(BOOL)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithClientContext:(id)arg1;

@end

