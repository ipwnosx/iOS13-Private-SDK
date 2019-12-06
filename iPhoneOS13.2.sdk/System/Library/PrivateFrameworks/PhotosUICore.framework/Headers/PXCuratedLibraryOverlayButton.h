//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/PXAccessibilityView-Protocol.h>
#import <PhotosUICore/PXGReusableView-Protocol.h>

@class NSString, PXCuratedLibraryOverlayButtonConfiguration, UIImageView, UILabel, UIView, UIVisualEffectView;

@interface PXCuratedLibraryOverlayButton : UIControl <PXGReusableView, PXAccessibilityView>
{
    PXCuratedLibraryOverlayButtonConfiguration *_userData;
    UIVisualEffectView *_effectView;
    UIView *_contentView;
    UIView *_solidBackgroundView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_captionLabel;
    CGRect _clippingRect;
    UIEdgeInsets _hitTestInsets;
}

+ (id)defaultTitleColor;
+ (UIFont )defaultTitleFont;
+ (void)_getSize:(out CGSize )arg1 titleFrame:(out CGRect )arg2 captionFrame:(out CGRect )arg3 iconFrame:(out CGRect )arg4 forConfiguration:(id)arg5 title:(id)arg6;
+ (CGSize)sizeWithConfiguration:(id)arg1;
+ (CGSize)_sizeOfTitle:(id)arg1 withFont:(UIFont )arg2;
// + (id)roundedCornerMaskImage:(CDStruct_2bd92d94)arg1 size:(CGSize)arg2;
+ (id)buttonSizeCache;
+ (id)titleSizeCache;
@property(nonatomic) UIEdgeInsets hitTestInsets; // @synthesize hitTestInsets=_hitTestInsets;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *solidBackgroundView; // @synthesize solidBackgroundView=_solidBackgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property(copy, nonatomic) PXCuratedLibraryOverlayButtonConfiguration *userData; // @synthesize userData=_userData;
// - (void).cxx_destruct;
- (void)_updateEffectView;
- (void)_updateEffectViewBackgroundStyle;
- (void)_platformSpecificViewSetup;
- (void)_setupEffectView;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)_performAction:(id)arg1;
- (void)_updateButtonWithConfiguration:(id)arg1;
- (void)_setupViews;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel;
@property(readonly, nonatomic) BOOL isContainedInAsset;
@property(readonly, nonatomic) BOOL isAccessible;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(CGRect)arg1;

@end

