//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class CCUICAPackageDescription, CCUICAPackageView, MTVisualStylingProvider, NSString, UIColor, UIImage, UIImageView, UILongPressGestureRecognizer, UIView;

@interface CCUIRoundButton : UIControl <UIGestureRecognizerDelegate>
{
    MTVisualStylingProvider *_visualStylingProvider;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    BOOL _useAlternateBackground;
    CCUICAPackageDescription *_glyphPackageDescription;
    UIImage *_glyphImage;
    NSString *_glyphState;
    UIColor *_highlightColor;
    UIView *_normalStateBackgroundView;
    UIView *_selectedStateBackgroundView;
    UIView *_alternateSelectedStateBackgroundView;
    UIImageView *_glyphImageView;
    UIImageView *_selectedGlyphView;
    CCUICAPackageView *_glyphPackageView;
}

@property(retain, nonatomic) CCUICAPackageView *glyphPackageView; // @synthesize glyphPackageView=_glyphPackageView;
@property(retain, nonatomic) UIImageView *selectedGlyphView; // @synthesize selectedGlyphView=_selectedGlyphView;
@property(retain, nonatomic) UIImageView *glyphImageView; // @synthesize glyphImageView=_glyphImageView;
@property(retain, nonatomic) UIView *alternateSelectedStateBackgroundView; // @synthesize alternateSelectedStateBackgroundView=_alternateSelectedStateBackgroundView;
@property(retain, nonatomic) UIView *selectedStateBackgroundView; // @synthesize selectedStateBackgroundView=_selectedStateBackgroundView;
@property(retain, nonatomic) UIView *normalStateBackgroundView; // @synthesize normalStateBackgroundView=_normalStateBackgroundView;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) BOOL useAlternateBackground; // @synthesize useAlternateBackground=_useAlternateBackground;
@property(copy, nonatomic) NSString *glyphState; // @synthesize glyphState=_glyphState;
@property(retain, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property(retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // @synthesize glyphPackageDescription=_glyphPackageDescription;
// - (void).cxx_destruct;
- (void)_updateVisualStylingOfGlyphView:(id)arg1;
- (void)_updateForStateChange;
- (void)_deactivateReachability:(id)arg1;
- (void)_primaryActionPerformed:(id)arg1;
- (void)_setCornerRadius:(double)arg1;
- (double)_cornerRadius;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)didMoveToWindow;
- (CGSize)intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2;
- (id)initWithHighlightColor:(id)arg1 useLightStyle:(BOOL)arg2;

@end

