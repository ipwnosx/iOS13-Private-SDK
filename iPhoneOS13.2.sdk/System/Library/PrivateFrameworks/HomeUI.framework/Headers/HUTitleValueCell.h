//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUIconCell.h>

@class NSArray, NSString, UIFont, UILabel, UIStackView;

@interface HUTitleValueCell : HUIconCell
{
    BOOL _hideTitle;
    BOOL _hideValue;
    BOOL _titleColorFollowsTintColor;
    BOOL _valueColorFollowsTintColor;
    BOOL _allowCopyValueToPasteboard;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UIStackView *_labelsStackView;
    NSString *_titleText;
    UIFont *_titleFont;
    NSString *_valueText;
    UIFont *_valueFont;
    NSArray *_stackViewConstraints;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *stackViewConstraints; // @synthesize stackViewConstraints=_stackViewConstraints;
@property(nonatomic) BOOL allowCopyValueToPasteboard; // @synthesize allowCopyValueToPasteboard=_allowCopyValueToPasteboard;
@property(nonatomic) BOOL valueColorFollowsTintColor; // @synthesize valueColorFollowsTintColor=_valueColorFollowsTintColor;
@property(nonatomic) BOOL titleColorFollowsTintColor; // @synthesize titleColorFollowsTintColor=_titleColorFollowsTintColor;
@property(nonatomic) BOOL hideValue; // @synthesize hideValue=_hideValue;
@property(retain, nonatomic) UIFont *valueFont; // @synthesize valueFont=_valueFont;
@property(retain, nonatomic) NSString *valueText; // @synthesize valueText=_valueText;
@property(nonatomic) BOOL hideTitle; // @synthesize hideTitle=_hideTitle;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) UIStackView *labelsStackView; // @synthesize labelsStackView=_labelsStackView;
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (void)_updateValue;
- (void)_updateTitle;
- (void)_addValueLabel;
- (void)_addTitleLabel;
- (void)updateUIWithAnimation:(BOOL)arg1;
- (void)layoutMarginsDidChange;
- (void)_ensureCorrectHeaderViewOrientation;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)setDisabled:(BOOL)arg1;
- (void)copy:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)tintColorDidChange;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

