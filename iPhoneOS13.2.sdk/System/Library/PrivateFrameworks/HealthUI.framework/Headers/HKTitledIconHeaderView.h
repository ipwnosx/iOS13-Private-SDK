//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIColor, UIImage, UIImageView, UILabel;

@interface HKTitledIconHeaderView : UIView
{
    BOOL _centersSubtitle;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_iconImage;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) BOOL centersSubtitle; // @synthesize centersSubtitle=_centersSubtitle;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (CGSize)_sizeThatFitsLabel:(id)arg1 containerSize:(CGSize)arg2;
- (double)_verticalOffsetForSubtitle;
- (double)_verticalOffsetForTitle;
- (id)_titleFont;
- (id)_healthIconImage;
- (void)traitCollectionDidChange:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)_positionSubtitleLabel;
- (void)layoutSubviews;
- (void)setLayoutMarginsWithTableView:(id)arg1;
@property(retain, nonatomic) UIColor *iconImageTint;
- (void)_updateFont;
- (id)initWithFrame:(CGRect)arg1;

@end

