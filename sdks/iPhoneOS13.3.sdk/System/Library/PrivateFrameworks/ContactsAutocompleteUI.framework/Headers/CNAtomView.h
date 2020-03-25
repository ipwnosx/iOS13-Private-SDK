//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIDefaultKeyboardInput.h>

#import <ContactsAutocompleteUI/CNAtomViewResembling-Protocol.h>

@class CNModernAtomBackgroundView, CNModernAtomIconView, NSString, UIActivityIndicatorView, UIColor, UIFont, UILabel, UIView;

@interface CNAtomView : UIDefaultKeyboardInput <CNAtomViewResembling>
{
    CNModernAtomIconView *_badgeIconView;
    CNModernAtomIconView *_accessoryIconView;
    UIColor *_effectiveTintColor;
    NSUInteger _disabledPresentationOptions;
    UIView *_baselineView;
    CNModernAtomBackgroundView *_background;
    UIView *_compositingView;
    UIView *_titleLabelFillView;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    double _scalingFactor;
    BOOL _wrappingSupported;
    BOOL _cachedIsWrappingEnabled;
    BOOL _isPrimaryAddressAtom;
    BOOL _separatorHidden;
    BOOL _separatorIsLeftAligned;
    BOOL _selected;
    NSString *_title;
    UIFont *_titleFont;
    NSUInteger _presentationOptions;
    double _firstLineIndent;
}

+ (BOOL)presentationOptions:(NSUInteger )arg1 encodedIntoAddress:(id)arg2;
+ (id)_badgeImagesForPresentationOptions:(NSUInteger)arg1 iconOrder:(const NSUInteger )arg2 orderingLength:(NSUInteger)arg3 tintColor:(id)arg4 large:(BOOL)arg5 variant:(int)arg6;
+ (id)_defaultLabelAttributesWithFont:(id)arg1 wrappingEnabled:(BOOL)arg2;
+ (id)_defaultLabelAttributesWithWrappingEnabled:(BOOL)arg1;
+ (id)_SMSTintColor;
+ (id)_downtimeBlockedTintColor;
+ (id)_failureTintColor;
+ (id)_defaultTintColor;
+ (id)primaryAtomFont;
+ (id)defaultFont;
+ (double)horizontalPadding;
+ (CGPoint)defaultBaselinePoint;
+ (double)defaultHeight;
@property(nonatomic) double firstLineIndent; // @synthesize firstLineIndent=_firstLineIndent;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) NSUInteger presentationOptions; // @synthesize presentationOptions=_presentationOptions;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) BOOL separatorIsLeftAligned; // @synthesize separatorIsLeftAligned=_separatorIsLeftAligned;
@property(nonatomic) BOOL isPrimaryAddressAtom; // @synthesize isPrimaryAddressAtom=_isPrimaryAddressAtom;
@property(readonly, nonatomic) CNModernAtomIconView *badgeIconView; // @synthesize badgeIconView=_badgeIconView;
@property(readonly, nonatomic) CNModernAtomIconView *accessoryIconView; // @synthesize accessoryIconView=_accessoryIconView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_label;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2;
- (CGSize)intrinsicContentSize;
- (id)viewForLastBaselineLayout;
@property(readonly, nonatomic) CGPoint baselinePoint;
@property(nonatomic) double scale; // @synthesize scale=_scalingFactor;
- (double)_leftPadding;
- (double)_rightPadding;
- (double)_rightInset;
- (double)_leftInset;
@property(readonly, nonatomic) UIEdgeInsets edgeInsets;
@property(readonly, nonatomic) CGRect selectionFrame;
- (void)layoutSubviews;
- (double)preferredWidthWithSizeConstraints:(CGSize)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)preferredWidth;
- (void)_updateFontIfNecessary;
- (void)_updateActivityIndicator;
- (void)_updateCompositingFilters;
@property(nonatomic) BOOL hidesVIPIndicator;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 style:(NSUInteger)arg3;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic) int separatorStyle;
@property(nonatomic) BOOL separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(readonly, nonatomic) NSUInteger effectivePresentationOptions;
- (void)_setPresentationOption:(NSUInteger)arg1 enabled:(BOOL)arg2;
- (void)clearPresentationOption:(NSUInteger)arg1;
- (void)appendPresentationOption:(NSUInteger)arg1;
- (void)_invalidatePresentationOptions;
- (void)_updateLabelAttributes;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
- (void)tintColorDidChange;
- (void)_setEffectiveTintColor:(id)arg1;
@property(readonly, nonatomic) UIColor *effectiveTintColor;
@property(readonly, nonatomic) CNModernAtomBackgroundView *backgroundView;
- (BOOL)isWrappingEnabled;
- (id)_chevronTextAttachment;
- (id)_centeredTextAttachmentWithImage:(id)arg1;
- (void)_updateSubviewsForWrapping;
- (void)_updateIconViewsSemanticContentAttribute;
- (int)_preferredIconVariant;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(CGRect)arg1 presentationOptions:(NSUInteger)arg2 separatorStyle:(int)arg3 wrappingSupported:(BOOL)arg4;

@end
