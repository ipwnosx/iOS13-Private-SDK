//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <StoreKitUI/SKUIViewElementOfferButton-Protocol.h>

@class NSMutableAttributedString, NSString, SKUIButtonViewElement, SKUIBuyButtonDescriptor, SKUICircleProgressIndicator, SKUIFocusedTouchGestureRecognizer, UIColor, UIImage, UIImageView, UILabel, UIView;
@protocol SKUIItemOfferButtonDelegate;

@interface SKUIItemOfferButton : UIControl <SKUIViewElementOfferButton>
{
    UIColor *_backgroundColor;
    BOOL _borderCornerRadiusMatchesHalfBoundingDimension;
    UIView *_borderView;
    SKUIFocusedTouchGestureRecognizer *_cancelGestureRecognizer;
    UIImage *_cloudImage;
    UIColor *_cloudTintColor;
    UIColor *_confirmationColor;
    NSMutableAttributedString *_confirmationTitleAttributedString;
    long long _confirmationTitleStyle;
    CGSize _confirmationTitleFitSize;
    id <SKUIItemOfferButtonDelegate> _delegate;
    long long _fillStyle;
    UIImage *_image;
    UIImageView *_imageView;
    UIImageView *_borderedImageView;
    double _progress;
    SKUICircleProgressIndicator *_progressIndicator;
    BOOL _showsConfirmationState;
    NSMutableAttributedString *_titleAttributedString;
    CGSize _titleFitSize;
    UILabel *_titleLabel;
    long long _titleStyle;
    BOOL _universal;
    BOOL _usesDrawRectPath;
    UIImageView *_universalImageView;
    BOOL _downloadRestores;
    NSString *_offerButtonStateDescription;
    BOOL _disabledButSelectable;
    UIImage *_borderedImage;
    id /* CDUnknownBlockType */ _centerImageProvider;
    double _borderColorAlphaMultiplier;
    SKUIBuyButtonDescriptor *_buttonDescriptor;
    NSString *_buyType;
    SKUIButtonViewElement *_element;
}

+ (id)_basicAnimationWithKeyPath:(id)arg1;
+ (UIEdgeInsets)_imageInsetsForProgressType:(long long)arg1;
+ (id)_imageForProgressType:(long long)arg1;
+ (id)playHighlightImageWithTintColor:(id)arg1;
+ (id)playImageWithTintColor:(id)arg1;
+ (id)playTintColorForBackgroundColor:(id)arg1;
+ (id)_universalPlusImageWithTintColor:(id)arg1;
+ (CGSize)_titleSizeThatFitsForSize:(CGSize)arg1 titleStyle:(long long)arg2 mutableAttributedString:(id)arg3;
+ (BOOL)_sizeMattersForTitleStyle:(long long)arg1;
+ (id)_imageForAttributedTitle:(id)arg1 titleStyle:(long long)arg2 size:(CGSize)arg3 fillStyle:(long long)arg4 universal:(BOOL)arg5 tintColor:(id)arg6;
+ (id)_defaultTitleAttributes;
+ (BOOL)canOpenItemForItemState:(id)arg1 clientContext:(id)arg2;
+ (id)_cachedImageForAttributedTitle:(id)arg1 titleStyle:(long long)arg2 size:(CGSize)arg3 fillStyle:(long long)arg4 universal:(BOOL)arg5 tintColor:(id)arg6 interfaceStyle:(long long)arg7;
+ (id)localizedTitleForItemState:(id)arg1 clientContext:(id)arg2;
+ (id)itemOfferButtonWithAppearance:(id)arg1;
+ (id)cloudTintColorForBackgroundColor:(id)arg1;
+ (id)cloudImageWithTintColor:(id)arg1 arrowTintColor:(id)arg2;
@property(retain, nonatomic) SKUIButtonViewElement *element; // @synthesize element=_element;
@property(nonatomic, getter=isDisabledButSelectable) BOOL disabledButSelectable; // @synthesize disabledButSelectable=_disabledButSelectable;
@property(copy, nonatomic) NSString *buyType; // @synthesize buyType=_buyType;
@property(retain, nonatomic) SKUIBuyButtonDescriptor *buttonDescriptor; // @synthesize buttonDescriptor=_buttonDescriptor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double borderColorAlphaMultiplier; // @synthesize borderColorAlphaMultiplier=_borderColorAlphaMultiplier;
@property(copy, nonatomic) id /* CDUnknownBlockType */ centerImageProvider; // @synthesize centerImageProvider=_centerImageProvider;
@property(retain, nonatomic) UIImage *borderedImage; // @synthesize borderedImage=_borderedImage;
@property(nonatomic, getter=isUniversal) BOOL universal; // @synthesize universal=_universal;
@property(nonatomic) long long titleStyle; // @synthesize titleStyle=_titleStyle;
@property(nonatomic) BOOL showsConfirmationState; // @synthesize showsConfirmationState=_showsConfirmationState;
@property(nonatomic) long long fillStyle; // @synthesize fillStyle=_fillStyle;
@property(nonatomic) __weak id <SKUIItemOfferButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long confirmationTitleStyle; // @synthesize confirmationTitleStyle=_confirmationTitleStyle;
@property(copy, nonatomic) UIColor *cloudTintColor; // @synthesize cloudTintColor=_cloudTintColor;
// - (void).cxx_destruct;
- (void)_removeAllAnimations:(BOOL)arg1;
- (void)_updateForChangedTitleProperty;
- (void)_updateForChangedConfirmationTitleProperty;
- (void)_sendWillAnimate;
- (void)_sendDidAnimate;
- (void)_reloadForCurrentState:(BOOL)arg1;
- (void)_removeCancelGestureRecognizer;
- (void)_insertCancelGestureRecognizer;
- (void)_insertUniversalView;
- (CGRect)_borderedImageViewFrame;
- (void)_insertBorderedImageView;
- (void)_insertImageView;
- (void)_insertLabel;
- (void)_insertBorderView;
- (void)_insertProgressIndicator;
- (void)_adjustViewOrderingForProperties:(id)arg1;
- (void)_transitionFromProgress:(id)arg1 toTitleOrImage:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_transitionFromTitleOrImage:(id)arg1 toProgress:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_transitionFromProgress:(id)arg1 toProgress:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_transitionFromImage:(id)arg1 toImage:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_transitionFromTitle:(id)arg1 toTitle:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_transitionFromBorderedImage:(id)arg1 toTitle:(id)arg2 withDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (double)_horizontalInsetForTitleStyle:(long long)arg1;
- (id)_imageForProgressType:(long long)arg1;
- (id)_buttonPropertiesForState:(id)arg1;
- (void)_cancelGestureAction:(id)arg1;
- (void)tintColorDidChange;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)drawRect:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (BOOL)_touchInBounds:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) __weak id <SKUIItemOfferButtonDelegate> itemOfferDelegate;
@property(readonly, nonatomic) BOOL supportsPlayButton;
- (BOOL)setValuesUsingBuyButtonDescriptor:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4;
- (BOOL)setValuesUsingItemOffer:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4;
- (BOOL)setTitle:(id)arg1 confirmationTitle:(id)arg2 itemState:(id)arg3 clientContext:(id)arg4 animated:(BOOL)arg5;
- (void)setColoringWithAppearance:(id)arg1;
@property(readonly, nonatomic) BOOL restores;
- (BOOL)hasBorderedImage;
- (BOOL)hasNonBorderedImage;
@property(copy, nonatomic) NSString *title;
- (void)showCloudImage;
- (void)setShowingConfirmation:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setProgressType:(long long)arg1 animated:(BOOL)arg2;
@property(nonatomic) long long progressType;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *confirmationTitle;
- (void)removeButtonStateAnimations;
@property(readonly, nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation;
@property(readonly, nonatomic) NSString *offerButtonStateDescription;
- (CGSize)layoutSizeThatFits:(CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

