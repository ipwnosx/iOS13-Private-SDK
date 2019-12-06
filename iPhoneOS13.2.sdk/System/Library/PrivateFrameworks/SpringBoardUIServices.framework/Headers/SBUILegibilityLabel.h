//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoardUIServices/SBUILegibility-Protocol.h>

@class NSAttributedString, NSString, UIColor, UIFont, UILabel, _UILegibilitySettings, _UILegibilityView;

@interface SBUILegibilityLabel : UIView <SBUILegibility>
{
    UILabel *_lookasideLabel;
    _UILegibilityView *_legibilityView;
    BOOL _isDirty;
    double _strength;
    long long _options;
    double _scale;
    NSString *_string;
    UIFont *_font;
    NSAttributedString *_attributedText;
    UIColor *_textColorOverride;
    _UILegibilitySettings *_legibilitySettings;
    BOOL _isWaitingToMoveToWindow;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
// - (void).cxx_destruct;
- (void)_updateLegibilityView;
- (BOOL)_needsColorImage;
- (void)_updateLabelForLegibilitySettings;
- (void)_markOurselfDirty;
- (void)layoutSubviews;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (void)setBounds:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)didMoveToWindow;
@property(readonly, nonatomic) double lastBaselineOffsetFromBottom;
@property(readonly, nonatomic) double firstBaselineOffsetFromBottom;
@property(readonly, nonatomic) UIEdgeInsets characterOverflowInsets;
- (void)setOptions:(long long)arg1;
@property(readonly, nonatomic) double baselineOffset;
@property(nonatomic) float hyphenationFactor; // @dynamic hyphenationFactor;
@property(nonatomic) long long lineBreakMode; // @dynamic lineBreakMode;
@property(nonatomic) long long textAlignment; // @dynamic textAlignment;
@property(nonatomic) double minimumScaleFactor; // @dynamic minimumScaleFactor;
@property(nonatomic) BOOL adjustsFontSizeToFitWidth; // @dynamic adjustsFontSizeToFitWidth;
@property(nonatomic) long long numberOfLines; // @dynamic numberOfLines;
@property(copy, nonatomic) UIColor *textColor;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4;
- (id)initWithSettings:(id)arg1 strength:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

