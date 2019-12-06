//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CCUICAPackageDescription, CCUIRoundButton, MTVisualStylingProvider, NSString, UIColor, UIImage, UILabel;

@interface CCUILabeledRoundButton : UIView
{
    MTVisualStylingProvider *_visualStylingProvider;
    BOOL _labelsVisible;
    BOOL _useAlternateBackground;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_glyphImage;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
    CCUIRoundButton *_buttonView;
    UIColor *_highlightColor;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) CCUIRoundButton *buttonView; // @synthesize buttonView=_buttonView;
@property(nonatomic) BOOL useAlternateBackground; // @synthesize useAlternateBackground=_useAlternateBackground;
@property(nonatomic) BOOL labelsVisible; // @synthesize labelsVisible=_labelsVisible;
@property(copy, nonatomic) NSString *glyphState; // @synthesize glyphState=_glyphState;
@property(retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // @synthesize glyphPackageDescription=_glyphPackageDescription;
@property(retain, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (void)_updateVisualStylingOfLabel:(id)arg1;
- (BOOL)_shouldUseLargeTextLayout;
- (void)_contentSizeCategoryDidChange;
- (void)_layoutLabels;
- (void)_setupLabelsBounds;
- (void)buttonTapped:(id)arg1;
- (CGSize)intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2;
- (void)dealloc;
- (id)initWithHighlightColor:(id)arg1 useLightStyle:(BOOL)arg2;

@end

