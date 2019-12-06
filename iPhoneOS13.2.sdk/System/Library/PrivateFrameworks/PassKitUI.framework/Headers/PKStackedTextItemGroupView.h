//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableArray, PKStackedTextItemGroup;

@interface PKStackedTextItemGroupView : UIView
{
    double _intrinsicHeight;
    CGSize _boundsSize;
    BOOL _initialLayout[2];
    NSMutableArray *_itemViews;
    NSMutableArray *_snapshotsToRemove;
    BOOL _animated;
    long long _slideMode;
    long long _style;
    PKStackedTextItemGroup *_content;
    UIEdgeInsets _contentInset;
}

@property(nonatomic) UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) PKStackedTextItemGroup *content; // @synthesize content=_content;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (void)setContent:(id)arg1 animated:(BOOL)arg2;
- (void)_updateSubviewsAnimated:(BOOL)arg1;
- (void)layoutIfNeededAnimated:(BOOL)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) double headerPadding;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

