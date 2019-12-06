//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BSUICAPackageView, LAUIPearlGlyphView, NSSet, SBUIFaceIDCameraGlyphView, SBUIFaceIDCoachingView, UIColor, _UILegibilitySettings;

@interface SBUIProudLockIconView : UIView
{
    long long _state;
    UIView *_iconContainerView;
    BSUICAPackageView *_lockView;
    NSSet *_imageLayers;
    NSSet *_shadowImageLayers;
    NSSet *_shadowFilterLayers;
    LAUIPearlGlyphView *_lazy_pearlGlyphView;
    id _pearlGlyphViewSharedResources;
    SBUIFaceIDCoachingView *_lazy_faceIDCoachingView;
    BOOL _performingIncomingLayout;
    SBUIFaceIDCameraGlyphView *_cameraCoveredView;
    _UILegibilitySettings *_legibilitySettings;
    double _durationOnCameraCoveredGlyphBeforeCoaching;
    UIColor *_contentColor;
}

@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(nonatomic) double durationOnCameraCoveredGlyphBeforeCoaching; // @synthesize durationOnCameraCoveredGlyphBeforeCoaching=_durationOnCameraCoveredGlyphBeforeCoaching;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) SBUIFaceIDCameraGlyphView *cameraCoveredView; // @synthesize cameraCoveredView=_cameraCoveredView;
@property(nonatomic) long long state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (void)_resetCameraGlyphView;
- (void)_resetfaceIDCoachingView;
- (void)_resetPearlGlyphView;
- (id)_faceIDCoachingView;
- (id)_pearlGlyphView;
- (double)_alphaForActiveViewForState:(long long)arg1;
- (double)_lockToCoachingSpacing;
- (CGSize)_smallLockSizeForTextSize:(id)arg1;
- (CGSize)_smallLockSize;
- (double)_scaleAmountForZoom;
- (CGAffineTransform)_zoomedTransform;
- (CGAffineTransform)_outgoingTransformForView:(id)arg1 fromState:(long long)arg2;
- (CGAffineTransform)_transformForActiveView:(id)arg1 forState:(long long)arg2;
- (CGAffineTransform)_incomingTransformForActiveView:(id)arg1 forState:(long long)arg2;
- (id)_activeViewsForState:(long long)arg1;
- (id)_layoutAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4;
- (id)_defaultAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4;
- (id)_alphaAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4 forIncomingViews:(BOOL)arg5;
- (id)_transformAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4 forIncomingViews:(BOOL)arg5;
- (void)_transitionToState:(long long)arg1 animated:(BOOL)arg2 options:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_forEachLayerInHierarchy:(id)arg1 perform:(CDUnknownBlockType)arg2;
- (void)_configureShadowFromLegibilitySettings:(id)arg1;
- (void)layoutSubviews;
- (void)setState:(long long)arg1 animated:(BOOL)arg2 options:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setState:(long long)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setState:(long long)arg1 animated:(BOOL)arg2;
- (id)fileNameForCurrentDevice;
- (id)initWithFrame:(CGRect)arg1;

@end

