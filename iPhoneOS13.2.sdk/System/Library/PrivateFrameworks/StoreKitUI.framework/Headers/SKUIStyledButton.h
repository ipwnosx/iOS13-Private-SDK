//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <StoreKitUI/SKUIViewElementOfferButton-Protocol.h>

@class SKUIAttributedStringLayout, SKUIAttributedStringView, SKUIButtonBorderStyle, SKUIImageView, SKUIItemOfferButton, SKUIShapeView, UIImageView;
@protocol SKUIItemOfferButtonDelegate;

__attribute__((visibility("hidden")))
@interface SKUIStyledButton : UIControl <SKUIViewElementOfferButton>
{
    SKUIAttributedStringView *_attributedStringView;
    UIEdgeInsets _bigHitInsets;
    SKUIButtonBorderStyle *_borderStyle;
    SKUIShapeView *_borderView;
    long long _buttonType;
    BOOL _didInitialHighlightForTouch;
    UIImageView *_disclosureImageView;
    double _imageTextPaddingInterior;
    SKUIImageView *_imageView;
    double _imageYAdjustment;
    SKUIItemOfferButton *_itemOfferButton;
    id <SKUIItemOfferButtonDelegate> _itemOfferDelegate;
    BOOL _useBigHitTarget;
    BOOL _usesTintColor;
    UIEdgeInsets _buttonPadding;
}

+ (BOOL)usesItemOfferAppearanceForButtonType:(long long)arg1 itemState:(id)arg2;
+ (CGSize)sizeForTextSize:(CGSize)arg1 buttonType:(long long)arg2 borderStyle:(id)arg3 interiorPadding:(double)arg4;
+ (CGSize)sizeForTextSize:(CGSize)arg1 buttonType:(long long)arg2 borderStyle:(id)arg3;
+ (CGSize)sizeForTextSize:(CGSize)arg1 buttonType:(long long)arg2;
+ (long long)buttonTypeForElement:(id)arg1;
@property(nonatomic) UIEdgeInsets buttonPadding; // @synthesize buttonPadding=_buttonPadding;
@property(nonatomic) BOOL usesTintColor; // @synthesize usesTintColor=_usesTintColor;
@property(nonatomic) BOOL useBigHitTarget; // @synthesize useBigHitTarget=_useBigHitTarget;
@property(nonatomic) __weak id <SKUIItemOfferButtonDelegate> itemOfferDelegate; // @synthesize itemOfferDelegate=_itemOfferDelegate;
@property(nonatomic) double imageYAdjustment; // @synthesize imageYAdjustment=_imageYAdjustment;
@property(readonly, nonatomic) SKUIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double imageTextPaddingInterior; // @synthesize imageTextPaddingInterior=_imageTextPaddingInterior;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(copy, nonatomic) SKUIButtonBorderStyle *borderStyle; // @synthesize borderStyle=_borderStyle;
@property(nonatomic) UIEdgeInsets bigHitInsets; // @synthesize bigHitInsets=_bigHitInsets;
// - (void).cxx_destruct;
- (BOOL)_usesTintColor;
- (id)_textColor;
- (id)_textBackgroundColor;
- (void)_reloadOverrideTextColor;
- (void)_reloadDisclosureImage;
- (void)_reloadImageView;
- (id)_borderFillColor;
- (id)_borderColor;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_showConfirmationAction:(id)arg1;
- (void)_itemOfferButtonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)tintColorDidChange;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (CGRect)hitRect;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)setValuesUsingBuyButtonDescriptor:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4;
@property(retain, nonatomic) SKUIAttributedStringLayout *titleLayout;
- (void)setTitleLayout:(id)arg1 forceRefresh:(BOOL)arg2;
@property(readonly, nonatomic, getter=isUsingItemOfferAppearance) BOOL usingItemOfferAppearance;
@property(readonly, nonatomic) double firstBaselineOffset;
@property(readonly, nonatomic) double baselineOffset;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

