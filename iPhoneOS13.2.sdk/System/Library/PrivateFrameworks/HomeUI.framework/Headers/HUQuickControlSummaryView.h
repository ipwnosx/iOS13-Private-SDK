//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HUIconView, NSArray, UILabel, UILayoutGuide;
@protocol HFStringGenerator;

@interface HUQuickControlSummaryView : UIView
{
    HUIconView *_iconView;
    UILabel *_primaryStatusLabel;
    UILabel *_secondaryStatusLabel;
    id <HFStringGenerator> _primaryStatusText;
    id <HFStringGenerator> _secondaryStatusText;
    NSUInteger _contentAlignment;
    long long _sizeSubclass;
    NSUInteger _iconSize;
    NSArray *_contentConstraints;
    UILayoutGuide *_lastBaselineLayoutGuide;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) UILayoutGuide *lastBaselineLayoutGuide; // @synthesize lastBaselineLayoutGuide=_lastBaselineLayoutGuide;
@property(retain, nonatomic) NSArray *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(nonatomic) NSUInteger iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) long long sizeSubclass; // @synthesize sizeSubclass=_sizeSubclass;
@property(nonatomic) NSUInteger contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property(copy, nonatomic) id <HFStringGenerator> secondaryStatusText; // @synthesize secondaryStatusText=_secondaryStatusText;
@property(copy, nonatomic) id <HFStringGenerator> primaryStatusText; // @synthesize primaryStatusText=_primaryStatusText;
@property(readonly, nonatomic) UILabel *secondaryStatusLabel; // @synthesize secondaryStatusLabel=_secondaryStatusLabel;
@property(readonly, nonatomic) UILabel *primaryStatusLabel; // @synthesize primaryStatusLabel=_primaryStatusLabel;
@property(readonly, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
// - (void).cxx_destruct;
- (id)_secondaryFont;
- (id)_primaryFont;
- (id)_primaryFontTextStyle;
- (void)dealloc;
- (void)contentSizeCategoryDidChangeNotification;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)lastBaselineAnchor;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (double)_iconWidth;
- (double)_iconHeight;
- (void)_updateSecondaryStatusContent;
- (void)_updatePrimaryStatusContent;
- (void)_invalidateContentAndConstraints;
- (id)_statusParagraphStyleWithLineHeight:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

