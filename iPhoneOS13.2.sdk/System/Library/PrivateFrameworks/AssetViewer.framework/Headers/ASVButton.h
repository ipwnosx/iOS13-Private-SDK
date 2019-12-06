//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ASVBlurredBackgroundView, ASVWrappedButton, NSString, UIColor, UIFont, UIImage;

@interface ASVButton : UIControl
{
    UIFont *_regularFont;
    UIFont *_boldFont;
    long long _controlStyle;
    ASVWrappedButton *_button;
    ASVBlurredBackgroundView *_blurredBackgroundView;
    long long _buttonStyle;
    long long _textStyle;
    UIColor *_white35PercentColor;
    UIColor *_white100PercentColor;
    UIColor *_white70PercentColor;
    UIColor *_black35PercentColor;
    UIColor *_black70PercentColor;
    UIColor *_blue100PercentColor;
    UIColor *_blue50PercentColor;
    long long _currentStyle;
    UIColor *_white75PercentColor;
    UIColor *_white52PercentColor;
    UIColor *_white26PercentColor;
    UIEdgeInsets _largeImageInsets;
}

@property(retain, nonatomic) UIColor *white26PercentColor; // @synthesize white26PercentColor=_white26PercentColor;
@property(retain, nonatomic) UIColor *white52PercentColor; // @synthesize white52PercentColor=_white52PercentColor;
@property(retain, nonatomic) UIColor *white75PercentColor; // @synthesize white75PercentColor=_white75PercentColor;
@property(nonatomic) long long currentStyle; // @synthesize currentStyle=_currentStyle;
@property(retain, nonatomic) UIColor *blue50PercentColor; // @synthesize blue50PercentColor=_blue50PercentColor;
@property(retain, nonatomic) UIColor *blue100PercentColor; // @synthesize blue100PercentColor=_blue100PercentColor;
@property(retain, nonatomic) UIColor *black70PercentColor; // @synthesize black70PercentColor=_black70PercentColor;
@property(retain, nonatomic) UIColor *black35PercentColor; // @synthesize black35PercentColor=_black35PercentColor;
@property(retain, nonatomic) UIColor *white70PercentColor; // @synthesize white70PercentColor=_white70PercentColor;
@property(retain, nonatomic) UIColor *white100PercentColor; // @synthesize white100PercentColor=_white100PercentColor;
@property(retain, nonatomic) UIColor *white35PercentColor; // @synthesize white35PercentColor=_white35PercentColor;
@property(retain, nonatomic) UIFont *boldFont; // @synthesize boldFont=_boldFont;
@property(retain, nonatomic) UIFont *regularFont; // @synthesize regularFont=_regularFont;
@property(nonatomic) long long textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(retain, nonatomic) ASVBlurredBackgroundView *blurredBackgroundView; // @synthesize blurredBackgroundView=_blurredBackgroundView;
@property(retain, nonatomic) ASVWrappedButton *button; // @synthesize button=_button;
@property(nonatomic) UIEdgeInsets largeImageInsets; // @synthesize largeImageInsets=_largeImageInsets;
@property(nonatomic) long long controlStyle; // @synthesize controlStyle=_controlStyle;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCurrentAppearanceIfNeeded;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *title;
- (void)_didUpdateContentSizeCategory:(id)arg1;
- (void)_didUpdateDarkenColorsSetting:(id)arg1;
- (void)_updateTitleStyleForButton:(id)arg1 withControlStyle:(long long)arg2;
- (id)_colorDarkenedIfNeededForColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
@property(nonatomic) UIEdgeInsets contentEdgeInsets;
- (CGSize)intrinsicContentSize;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(NSUInteger)arg3;
- (id)initWithImage:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 largeImageInsets:(UIEdgeInsets)arg5;
- (id)initWithImage:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4;
- (id)initWithTitle:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 adjustsFontForContentSizeCategory:(BOOL)arg5;
- (id)initWithTitle:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4;
- (id)initWithButton:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 largeImageInsets:(UIEdgeInsets)arg5;

@end

