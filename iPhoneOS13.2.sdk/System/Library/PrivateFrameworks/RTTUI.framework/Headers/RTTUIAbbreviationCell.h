//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UILabel, UIVisualEffectView;

@interface RTTUIAbbreviationCell : UICollectionViewCell
{
    UIVisualEffectView *_abbreviationContainer;
    UIVisualEffectView *_hintContainer;
    UILabel *_abbreviation;
    UILabel *_hint;
}

@property(retain, nonatomic) UILabel *hint; // @synthesize hint=_hint;
@property(retain, nonatomic) UILabel *abbreviation; // @synthesize abbreviation=_abbreviation;
// - (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)dealloc;
- (id)abbreviationText;
- (void)setAbbreviationData:(id)arg1;
- (void)layoutSubviews;
- (BOOL)accessibilityIgnoresInvertColors;
- (id)initWithFrame:(CGRect)arg1;

@end

