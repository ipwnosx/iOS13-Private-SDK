//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>

@class SBAppSwitcherPageShadowView, SBAppSwitcherSettings, SBWallpaperEffectView;
@protocol SBAppSwitcherPageContentView;

@interface SBAppSwitcherPageView : UIView <PTSettingsKeyObserver>
{
    UIView *_hitTestBlocker;
    UIView *_dimmingView;
    SBWallpaperEffectView *_wallpaperOverlayView;
    UIView *_lighteningView;
    UIView *_viewClippingView;
    UIView<SBAppSwitcherPageContentView> *_view;
    UIView *_overlayClippingView;
    UIView *_overlayView;
    long long _shadowStyle;
    double _shadowAlpha;
    double _shadowOffset;
    UIRectCornerRadii _cornerRadii;
    BOOL _isHighlighted;
    BOOL _isShadowHighlighted;
    SBAppSwitcherPageShadowView *_shadowView;
    SBAppSwitcherSettings *_settings;
    long long _orientation;
    BOOL _shouldClipContentView;
    BOOL _shouldScaleOverlayToFillBounds;
    BOOL _needsBackgroundWallpaperTreatment;
    double _switcherCardScale;
    double _darkeningAlpha;
    double _killingDarkeningAlpha;
    double _wallpaperOverlayAlpha;
    double _lighteningAlpha;
    CGSize _overlayViewSize;
    CGSize _fullyPresentedSize;
    CGRect _contentClippingFrame;
}

@property(nonatomic) double lighteningAlpha; // @synthesize lighteningAlpha=_lighteningAlpha;
@property(nonatomic) double wallpaperOverlayAlpha; // @synthesize wallpaperOverlayAlpha=_wallpaperOverlayAlpha;
@property(nonatomic) BOOL needsBackgroundWallpaperTreatment; // @synthesize needsBackgroundWallpaperTreatment=_needsBackgroundWallpaperTreatment;
@property(nonatomic) double killingDarkeningAlpha; // @synthesize killingDarkeningAlpha=_killingDarkeningAlpha;
@property(nonatomic) double darkeningAlpha; // @synthesize darkeningAlpha=_darkeningAlpha;
@property(readonly, nonatomic) SBAppSwitcherPageShadowView *_shadowView; // @synthesize _shadowView;
@property(readonly, nonatomic) UIView *_overlayClippingView; // @synthesize _overlayClippingView;
@property(nonatomic) BOOL shouldScaleOverlayToFillBounds; // @synthesize shouldScaleOverlayToFillBounds=_shouldScaleOverlayToFillBounds;
@property(nonatomic) double switcherCardScale; // @synthesize switcherCardScale=_switcherCardScale;
@property(nonatomic) CGSize fullyPresentedSize; // @synthesize fullyPresentedSize=_fullyPresentedSize;
@property(nonatomic) CGSize overlayViewSize; // @synthesize overlayViewSize=_overlayViewSize;
@property(nonatomic) CGRect contentClippingFrame; // @synthesize contentClippingFrame=_contentClippingFrame;
@property(nonatomic) BOOL shouldClipContentView; // @synthesize shouldClipContentView=_shouldClipContentView;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) UIRectCornerRadii cornerRadii; // @synthesize cornerRadii=_cornerRadii;
@property(nonatomic) double shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(nonatomic) long long shadowStyle; // @synthesize shadowStyle=_shadowStyle;
@property(retain, nonatomic) UIView *overlay; // @synthesize overlay=_overlayView;
@property(retain, nonatomic) UIView<SBAppSwitcherPageContentView> *view; // @synthesize view=_view;
// - (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (CGRect)_viewFrame;
- (void)_updateCornerRadius;
- (void)_updateEffectOverlayViews;
- (void)_setupShadowView;
- (void)_updateShadow;
- (void)invalidate;
@property(nonatomic, getter=isShadowHighlighted) BOOL shadowHighlighted;
- (void)_updateLighteningAlpha;
- (void)_updateWallpaperOverlayAlpha;
- (void)_updateDimmingViewAlpha;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
@property(nonatomic) double contentAlpha;
@property(nonatomic) double overlayAlpha;
- (void)setOverlay:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) BOOL blocksTouches;
@property(nonatomic, getter=isVisible) BOOL visible;
@property(nonatomic, getter=isActive) BOOL active;
- (void)setView:(id)arg1 animated:(BOOL)arg2;
- (void)_layoutOverlayView;
- (void)layoutSubviews;
- (void)_orderSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

