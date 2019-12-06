//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <TVMLKit/_UIFloatingContentViewDelegate-Protocol.h>

@class NSAttributedString, UIColor, UILabel, UITapGestureRecognizer, UITextView, UIVisualEffectView, _UIFloatingContentView;

@interface TVFocusableTextView : UIView <_UIFloatingContentViewDelegate, UIGestureRecognizerDelegate>
{
    UIColor *_backgroundColor;
    UIVisualEffectView *_vibrantEffectView;
    UITextView *_auxilliaryTextView;
    BOOL _textTruncating;
    BOOL _moreLabelOnNewLine;
    BOOL _trackHorizontal;
    BOOL _alwaysShowBackground;
    BOOL _alwaysFocusable;
    BOOL _disableFocus;
    BOOL _needsTextSizeComputation;
    UIColor *_descriptionTextColor;
    UIColor *_descriptionTextHighlightColor;
    long long _descriptionTextAlignment;
    UIColor *_highlightBackgroundColor;
    double _moreHighlightPadding;
    UIColor *_moreLabelTextColor;
    NSUInteger _focusSizeIncrease;
    id /* CDUnknownBlockType */ _selectionHandler;
    id /* CDUnknownBlockType */ _playHandler;
    UITextView *_descriptionTextView;
    _UIFloatingContentView *_floatingView;
    UIVisualEffectView *_backgroundView;
    UITapGestureRecognizer *_selectRecognizer;
    UITapGestureRecognizer *_playRecognizer;
    UILabel *_moreLabel;
    UITapGestureRecognizer *_moreLabelTapGestureRecognizer;
    UIEdgeInsets _padding;
}

+ (double)cornerRadius;
@property(nonatomic) BOOL needsTextSizeComputation; // @synthesize needsTextSizeComputation=_needsTextSizeComputation;
@property(readonly, nonatomic) UITapGestureRecognizer *moreLabelTapGestureRecognizer; // @synthesize moreLabelTapGestureRecognizer=_moreLabelTapGestureRecognizer;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UITapGestureRecognizer *playRecognizer; // @synthesize playRecognizer=_playRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *selectRecognizer; // @synthesize selectRecognizer=_selectRecognizer;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(copy, nonatomic) id /* CDUnknownBlockType */ playHandler; // @synthesize playHandler=_playHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) BOOL disableFocus; // @synthesize disableFocus=_disableFocus;
@property(nonatomic, getter=isAlwaysFocusable) BOOL alwaysFocusable; // @synthesize alwaysFocusable=_alwaysFocusable;
@property(nonatomic) NSUInteger focusSizeIncrease; // @synthesize focusSizeIncrease=_focusSizeIncrease;
@property(nonatomic) BOOL alwaysShowBackground; // @synthesize alwaysShowBackground=_alwaysShowBackground;
@property(nonatomic) UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) BOOL trackHorizontal; // @synthesize trackHorizontal=_trackHorizontal;
@property(retain, nonatomic) UIColor *moreLabelTextColor; // @synthesize moreLabelTextColor=_moreLabelTextColor;
@property(nonatomic) BOOL moreLabelOnNewLine; // @synthesize moreLabelOnNewLine=_moreLabelOnNewLine;
@property(nonatomic) double moreHighlightPadding; // @synthesize moreHighlightPadding=_moreHighlightPadding;
@property(readonly, nonatomic, getter=isTextTruncating) BOOL textTruncating; // @synthesize textTruncating=_textTruncating;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(nonatomic) long long descriptionTextAlignment; // @synthesize descriptionTextAlignment=_descriptionTextAlignment;
@property(retain, nonatomic) UIColor *descriptionTextHighlightColor; // @synthesize descriptionTextHighlightColor=_descriptionTextHighlightColor;
@property(retain, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
// - (void).cxx_destruct;
- (void)_playButtonAction:(id)arg1;
- (void)_selectButtonAction:(id)arg1;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (CGRect)_moreLabelFrame;
- (CGRect)_moreLabelExclusionPathFrame;
- (void)_recomputeTextSizeIfNeeded;
- (void)_setNeedsTextSizeComputation;
@property(nonatomic) NSUInteger maximumNumberOfLines;
@property(retain, nonatomic) NSAttributedString *descriptionText;
- (void)setFrame:(CGRect)arg1;
- (CGSize)intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (void)layoutSubviews;
- (void)_updateTextColorsForFocusState:(BOOL)arg1;
- (void)_updateTextColorsIfNeeded;
- (void)_updateBackgroundColors;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

