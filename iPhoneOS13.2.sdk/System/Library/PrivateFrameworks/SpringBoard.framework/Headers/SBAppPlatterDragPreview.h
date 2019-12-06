//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/SBIconDragPreview-Protocol.h>

@class BSCornerRadiusConfiguration, NSArray, NSString, SBApplicationBlurContentView, SBFView, SBIcon, SBIconView, SBPortalView;

@interface SBAppPlatterDragPreview : UIView <SBIconDragPreview, BSDescriptionProviding>
{
    BOOL _isBlurredPlatterReady;
    BOOL _hasAnimatedToBlurredPlatter;
    NSUInteger _platterViewAlphaAnimationCount;
    BOOL _flocked;
    BOOL _iconAllowsLabelArea;
    BOOL _iconCanShowCloseBox;
    BOOL _iconIsHighlighted;
    NSUInteger _dragState;
    double _iconContentScale;
    NSUInteger _mode;
    id /* CDUnknownBlockType */ _cleanUpHandler;
    UIView *_sourceView;
    SBApplicationBlurContentView *_platterView;
    id /* CDUnknownBlockType */ _platterViewAlphaAnimationCompletionBlock;
    double _platterScale;
    NSArray *_diffuseShadowFilters;
    NSArray *_rimShadowFilters;
    BSCornerRadiusConfiguration *_cornerRadiusConfiguration;
    double _rotation;
    SBIconView *_iconView;
    UIView *_anchorPointAdjustmentContainerView;
    UIView *_iconContainerView;
    UIView *_cornerMaskingView;
    SBPortalView *_sourcePortalView;
    UIView *_unclippedSourceContainerView;
    SBFView *_diffuseShadowView;
    SBFView *_rimShadowView;
    CGSize _platterSize;
    CGPoint _anchorPoint;
//    struct SBDragPreviewShadowParameters _diffuseShadowParameters;
//    struct SBDragPreviewShadowParameters _rimShadowParameters;
}

@property(retain, nonatomic) SBFView *rimShadowView; // @synthesize rimShadowView=_rimShadowView;
@property(retain, nonatomic) SBFView *diffuseShadowView; // @synthesize diffuseShadowView=_diffuseShadowView;
@property(retain, nonatomic) UIView *unclippedSourceContainerView; // @synthesize unclippedSourceContainerView=_unclippedSourceContainerView;
@property(retain, nonatomic) SBPortalView *sourcePortalView; // @synthesize sourcePortalView=_sourcePortalView;
@property(retain, nonatomic) UIView *cornerMaskingView; // @synthesize cornerMaskingView=_cornerMaskingView;
@property(retain, nonatomic) UIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(retain, nonatomic) UIView *anchorPointAdjustmentContainerView; // @synthesize anchorPointAdjustmentContainerView=_anchorPointAdjustmentContainerView;
@property(nonatomic) BOOL iconIsHighlighted; // @synthesize iconIsHighlighted=_iconIsHighlighted;
@property(nonatomic) BOOL iconCanShowCloseBox; // @synthesize iconCanShowCloseBox=_iconCanShowCloseBox;
@property(retain, nonatomic) SBIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration; // @synthesize cornerRadiusConfiguration=_cornerRadiusConfiguration;
@property(copy, nonatomic) NSArray *rimShadowFilters; // @synthesize rimShadowFilters=_rimShadowFilters;
@property(copy, nonatomic) NSArray *diffuseShadowFilters; // @synthesize diffuseShadowFilters=_diffuseShadowFilters;
// property(nonatomic) struct SBDragPreviewShadowParameters rimShadowParameters; // @synthesize rimShadowParameters=_rimShadowParameters;
// property(nonatomic) struct SBDragPreviewShadowParameters diffuseShadowParameters; // @synthesize diffuseShadowParameters=_diffuseShadowParameters;
@property(nonatomic) double platterScale; // @synthesize platterScale=_platterScale;
@property(nonatomic) CGSize platterSize; // @synthesize platterSize=_platterSize;
@property(copy, nonatomic) id /* CDUnknownBlockType */ platterViewAlphaAnimationCompletionBlock; // @synthesize platterViewAlphaAnimationCompletionBlock=_platterViewAlphaAnimationCompletionBlock;
@property(retain, nonatomic) SBApplicationBlurContentView *platterView; // @synthesize platterView=_platterView;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(copy, nonatomic) id /* CDUnknownBlockType */ cleanUpHandler; // @synthesize cleanUpHandler=_cleanUpHandler;
@property(nonatomic) NSUInteger mode; // @synthesize mode=_mode;
@property(nonatomic) double iconContentScale; // @synthesize iconContentScale=_iconContentScale;
@property(nonatomic) BOOL iconAllowsLabelArea; // @synthesize iconAllowsLabelArea=_iconAllowsLabelArea;
@property(nonatomic, getter=isFlocked) BOOL flocked; // @synthesize flocked=_flocked;
@property(nonatomic) NSUInteger dragState; // @synthesize dragState=_dragState;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (BOOL)_effectiveIconCanShowCloseBox;
- (BOOL)_effectiveIconIsHighlighted;
- (BOOL)_effectiveIconAllowsLabelArea;
- (double)_effectiveIconAccessoryAlpha;
- (void)_updateIconViewComponentVisibility;
- (double)_effectiveCornerRadius;
- (id)_effectiveCornerRadiusConfiguration;
- (CGRect)_effectivePlatterFrame;
- (CGPoint)_effectiveIconContainerCenter;
- (double)_blurContentViewIconViewCenterYOffset;
- (double)_effectiveIconContentScale;
- (void)_setSourcePortalViewHidden:(BOOL)arg1;
- (void)_updateSubviewVisibility;
- (void)_updateShadowView;
- (NSUInteger)_effectiveMode;
- (BOOL)_isDragging;
- (void)_updateContainerViewPositionForAnchorPoint;
- (void)layoutSubviews;
- (void)dropDestinationAnimationCompleted;
- (void)draggingSourceCancelAnimationCompleted;
- (void)draggingSourceDroppedWithOperation:(NSUInteger)arg1;
- (void)handleCleanup;
@property(nonatomic) BOOL iconIsEditing;
@property(retain, nonatomic) SBIcon *icon;
- (void)configurePlatterForSceneHandle:(id)arg1 withTargetView:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=isAnimatingPlatterViewAlpha) BOOL animatingPlatterViewAlpha;
- (void)invalidateSourceView;
- (void)updateSourceView:(id)arg1;
- (void)_matchMoveView:(id)arg1 toContainerView:(id)arg2;
- (id)initWithReferenceIconView:(id)arg1 sourceView:(id)arg2;

@end

