//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SKUIBorderView, UIColor;

@interface SKUITableViewCell : UITableViewCell
{
    SKUIBorderView *_bottomBorderView;
    SKUIBorderView *_topBorderView;
    double _titlePaddingLeft;
    UIEdgeInsets _textLabelInsets;
    double _borderPaddingLeft;
}

@property(nonatomic) UIEdgeInsets textLabelInsets; // @synthesize textLabelInsets=_textLabelInsets;
@property(nonatomic) double borderPaddingLeft; // @synthesize borderPaddingLeft=_borderPaddingLeft;
// - (void).cxx_destruct;
- (void)_reloadBorderVisibility;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
@property(copy, nonatomic) UIColor *topBorderColor;
@property(copy, nonatomic) UIColor *bottomBorderColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

