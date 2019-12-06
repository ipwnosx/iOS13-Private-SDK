//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableSet, PKStackedTextItem, UIFont, UILabel;

@interface PKStackedTextItemView : UIView
{
    UILabel *_title;
    UILabel *_primary;
    UILabel *_secondary;
    UILabel *_tertiary;
    CGSize _boundsSize;
    NSMutableSet *_snapshots;
    UIFont *_significantPrimaryFont;
    UIFont *_primaryFont;
    UIFont *_layoutPrimaryFont;
    UIFont *_idealTitleFont;
    UIFont *_idealPrimaryFont;
    UIFont *_idealSecondaryFont;
    UIFont *_idealTertiaryFont;
    BOOL _animated;
    long long _style;
    long long _textAlignment;
    PKStackedTextItem *_content;
//     CDStruct_c7197326 _contentConstraints;
}

// @property(nonatomic) CDStruct_c7197326 contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(copy, nonatomic) PKStackedTextItem *content; // @synthesize content=_content;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (void)setContent:(id)arg1 animated:(BOOL)arg2;
- (void)setTextAlignment:(long long)arg1 animated:(BOOL)arg2;
- (double)_prepareViewForReuse:(id)arg1;
- (void)_updateAlignmentAnimated:(BOOL)arg1;
- (void)_updateSubviewsAnimated:(BOOL)arg1;
- (id)_attributedStringWithText:(id)arg1 strikethrough:(BOOL)arg2;
- (void)prepareForReuse;
- (void)layoutIfNeededAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (double)headerPadding;
// - (CDStruct_9c0b9312)_titleFontMetrics;
// - (CDStruct_c7197326)boundingMetricForWidth:(double)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

