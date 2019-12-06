//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSLayoutConstraint, UIImageView, UILabel, UIView, WFModuleAppearance;
@protocol WFContentClassesToolbarDelegate;

@interface WFContentClassesToolbar : UICollectionReusableView
{
    BOOL _toolbarDisabled;
    BOOL _highlighted;
    WFModuleAppearance *_appearance;
    id <WFContentClassesToolbarDelegate> _delegate;
    NSArray *_contentClasses;
    double _horizontalInset;
    UIView *_contentView;
    UILabel *_typesLabel;
    UIImageView *_chevronImageView;
    NSLayoutConstraint *_contentViewLeadingConstraint;
    NSLayoutConstraint *_contentViewTrailingConstraint;
    NSLayoutConstraint *_chevronVisibleConstraint;
    NSLayoutConstraint *_chevronHiddenConstraint;
}

+ (double)preferredHeight;
+ (id)headingFont;
+ (NSDirectionalEdgeInsets)contentViewInsets;
@property(readonly, nonatomic) NSLayoutConstraint *chevronHiddenConstraint; // @synthesize chevronHiddenConstraint=_chevronHiddenConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *chevronVisibleConstraint; // @synthesize chevronVisibleConstraint=_chevronVisibleConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *contentViewTrailingConstraint; // @synthesize contentViewTrailingConstraint=_contentViewTrailingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *contentViewLeadingConstraint; // @synthesize contentViewLeadingConstraint=_contentViewLeadingConstraint;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) __weak UIImageView *chevronImageView; // @synthesize chevronImageView=_chevronImageView;
@property(nonatomic) __weak UILabel *typesLabel; // @synthesize typesLabel=_typesLabel;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double horizontalInset; // @synthesize horizontalInset=_horizontalInset;
@property(nonatomic) BOOL toolbarDisabled; // @synthesize toolbarDisabled=_toolbarDisabled;
@property(copy, nonatomic) NSArray *contentClasses; // @synthesize contentClasses=_contentClasses;
@property(nonatomic) __weak id <WFContentClassesToolbarDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (NSUInteger)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)fadeOutHighlight;
- (void)unhighlight;
- (void)highlight;
- (void)typesLabelTapped;
- (void)updateTypesLabel;
- (void)updateAppearance;
@property(retain, nonatomic) WFModuleAppearance *appearance; // @synthesize appearance=_appearance;
- (id)initWithFrame:(CGRect)arg1;

@end

