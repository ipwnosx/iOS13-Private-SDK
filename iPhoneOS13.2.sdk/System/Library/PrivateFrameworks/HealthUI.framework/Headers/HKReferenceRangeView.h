//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HKReferenceRangeDotView, HKReferenceRangeViewConfiguration, HKReferenceRangeViewData, NSString, UIFont, UILabel;

@interface HKReferenceRangeView : UIView
{
    double _lowValueXPosition;
    double _highValueXPosition;
    double _currentValueXPosition;
    long long _valueDirection;
    double _intrinsicHeight;
    _Bool _showOutOfRangeIndicator;
    HKReferenceRangeViewConfiguration *_configuration;
    NSString *_multiValueSeparator;
    HKReferenceRangeViewData *_data;
    UIView *_referenceRangeView;
    UIView *_referenceRangeContainerView;
    HKReferenceRangeDotView *_currentValueView;
    UILabel *_lowValueLabel;
    UILabel *_highValueLabel;
    UILabel *_currentValueLabel;
    UIFont *_dynamicTypeAnchorFont;
    UIFont *_valueFont;
    UIFont *_overriddenValueFont;
    UIFont *_unitFont;
    UILabel *_outOfRangeLabel;
}

@property(retain, nonatomic) UILabel *outOfRangeLabel; // @synthesize outOfRangeLabel=_outOfRangeLabel;
@property(retain, nonatomic) UIFont *unitFont; // @synthesize unitFont=_unitFont;
@property(retain, nonatomic) UIFont *overriddenValueFont; // @synthesize overriddenValueFont=_overriddenValueFont;
@property(retain, nonatomic) UIFont *valueFont; // @synthesize valueFont=_valueFont;
@property(retain, nonatomic) UIFont *dynamicTypeAnchorFont; // @synthesize dynamicTypeAnchorFont=_dynamicTypeAnchorFont;
@property(retain, nonatomic) UILabel *currentValueLabel; // @synthesize currentValueLabel=_currentValueLabel;
@property(retain, nonatomic) UILabel *highValueLabel; // @synthesize highValueLabel=_highValueLabel;
@property(retain, nonatomic) UILabel *lowValueLabel; // @synthesize lowValueLabel=_lowValueLabel;
@property(retain, nonatomic) HKReferenceRangeDotView *currentValueView; // @synthesize currentValueView=_currentValueView;
@property(retain, nonatomic) UIView *referenceRangeContainerView; // @synthesize referenceRangeContainerView=_referenceRangeContainerView;
@property(retain, nonatomic) UIView *referenceRangeView; // @synthesize referenceRangeView=_referenceRangeView;
@property(copy, nonatomic) HKReferenceRangeViewData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *multiValueSeparator; // @synthesize multiValueSeparator=_multiValueSeparator;
@property(readonly, nonatomic) HKReferenceRangeViewConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)_outOfRangeColor;
- (id)_configuredPreferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
- (id)_generateMultilineAttributedValueStringForOriginalString:(id)arg1;
- (id)_generateAttributedValueStringWithOverrideColor:(id)arg1;
- (void)_applyNormalizedValuesToView;
- (void)_normalizeValuesIfNeeded;
- (void)_setupSubviews;
- (void)_updateContainerBorderColors;
- (_Bool)_hasReferenceRange;
- (void)updateWithData:(id)arg1;
- (void)_layoutCurrentValueOnly;
- (struct CGRect)_assureLabelFrameWithinBounds:(struct CGRect)arg1;
- (void)_layoutFullReferenceRange;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)unitLabelFont;
- (id)valueLabelFont;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;

@end
