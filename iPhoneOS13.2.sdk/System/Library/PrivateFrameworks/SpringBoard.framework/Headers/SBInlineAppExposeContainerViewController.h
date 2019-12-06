//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoard/SBAppPlatterDragSourceViewProviding-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>
#import <SpringBoard/SBSwitcherContentViewControllerDataSource-Protocol.h>
#import <SpringBoard/SBSwitcherContentViewControllerDelegate-Protocol.h>

@class BSCornerRadiusConfiguration, NSArray, NSString, SBAsymmetricalCornerRadiusWrapperView, SBDeviceApplicationSceneViewController, SBFluidSwitcherViewController, SBHomeScreenBackdropViewBase, SBInlineAppExposeLiveContentOverlayCoordinator, SBInlineAppExposeRootSwitcherModifier, SBWallpaperEffectView, UIView;
@protocol SBInlineAppExposeContainerViewControllerDelegate;

@interface SBInlineAppExposeContainerViewController : UIViewController <SBSwitcherContentViewControllerDelegate, SBSwitcherContentViewControllerDataSource, SBLayoutStateTransitionObserver, SBAppPlatterDragSourceViewProviding>
{
    NSString *_bundleIdentifier;
    BOOL _transitioningFromOverlay;
    SBAsymmetricalCornerRadiusWrapperView *_asymmetricalCornerRadiusWrapperView;
    NSArray *_appLayouts;
    SBFluidSwitcherViewController *_contentViewController;
    SBInlineAppExposeLiveContentOverlayCoordinator *_liveContentCoordinator;
    SBInlineAppExposeRootSwitcherModifier *_rootModifier;
    SBWallpaperEffectView *_wallpaperEffectView;
    SBHomeScreenBackdropViewBase *_backdropView;
    UIView *_dimmingView;
    CGSize _contentRef erenceSize;
    long long _contentInterfaceOrientation;
    BOOL _didPerformInitialSetup;
    BOOL _isRotating;
    BOOL _dragging;
    BOOL _overlay;
    BOOL _clipsToBounds;
    id <SBInlineAppExposeContainerViewControllerDelegate> _delegate;
    long long _layoutRole;
    BSCornerRadiusConfiguration *_cornerRadiusConfiguration;
    NSUInteger _maskedCorners;
    SBDeviceApplicationSceneViewController *_deviceApplicationSceneViewController;
}

@property(retain, nonatomic) SBDeviceApplicationSceneViewController *deviceApplicationSceneViewController; // @synthesize deviceApplicationSceneViewController=_deviceApplicationSceneViewController;
@property(nonatomic) BOOL clipsToBounds; // @synthesize clipsToBounds=_clipsToBounds;
@property(nonatomic) NSUInteger maskedCorners; // @synthesize maskedCorners=_maskedCorners;
@property(retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration; // @synthesize cornerRadiusConfiguration=_cornerRadiusConfiguration;
@property(nonatomic, getter=isOverlay) BOOL overlay; // @synthesize overlay=_overlay;
@property(nonatomic) long long layoutRole; // @synthesize layoutRole=_layoutRole;
@property(nonatomic) __weak id <SBInlineAppExposeContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isDragging) BOOL dragging; // @synthesize dragging=_dragging;
// - (void).cxx_destruct;
- (id)_inlineAppLayoutForDisplayItem:(id)arg1;
- (CGRect)_frameForInlineAppExposeItemAspectFill:(BOOL)arg1 referenceSize:(CGSize)arg2 interfaceOrientation:(long long)arg3 scale:(inout double )arg4;
- (void)_addAppLayoutToFront:(id)arg1;
- (id)_liveSceneIDsExcludingCurrentRole:(BOOL)arg1 matchingBundleIdentifier:(id)arg2 forTransitionContext:(id)arg3;
- (id)_unfilteredAppLayoutsForBundleID:(id)arg1;
- (id)_inlineDisplayItemInLayoutState:(id)arg1;
- (id)_newInlineDisplayItemFromSceneHandle:(id)arg1;
- (void)_insertAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 animated:(BOOL)arg3 modelMutation:(CDUnknownBlockType)arg4;
- (void)_updateContentViewControllerFrame;
- (id)containerViewForBlurContentView;
- (id)initialRimShadowFilters;
- (id)initialDiffuseShadowFilters;
//  (struct SBDragPreviewShadowParameters)initialRimShadowParameters;
//  (struct SBDragPreviewShadowParameters)initialDiffuseShadowParameters;
- (id)initialCornerRadiusConfiguration;
- (id)sourceView;
- (BOOL)switcherContentControllerReloadsSnapshotsForActiveInterfaceOrientationChange:(id)arg1;
- (BOOL)switcherContentController:(id)arg1 shouldMorphToPiPForTransitionContext:(id)arg2;
- (id)switcherContentController:(id)arg1 transitionEventForContext:(id)arg2 identifier:(id)arg3 phase:(NSUInteger)arg4 animated:(BOOL)arg5;
- (id)switcherContentController:(id)arg1 transitionEventForLayoutState:(id)arg2 identifier:(id)arg3 phase:(NSUInteger)arg4 animated:(BOOL)arg5;
- (CGRect)frameForInlineAppExposeItemAspectFill:(BOOL)arg1;
- (long long)sbActiveInterfaceOrientation;
- (long long)switcherInterfaceOrientationForContentController:(id)arg1;
- (long long)shadowStyleForSwitcherContentController:(id)arg1;
- (id)appLayoutsForSwitcherContentController:(id)arg1;
- (long long)backdropInterfaceStyleForContentController:(id)arg1;
- (void)switcherContentController:(id)arg1 setContainerStatusBarHidden:(BOOL)arg2 animationDuration:(double)arg3;
- (void)switcherContentController:(id)arg1 setDimmingAlpha:(double)arg2 withAnimationMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)switcherContentController:(id)arg1 setBackdropBlurProgress:(double)arg2 withAnimationMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)switcherContentController:(id)arg1 setBackdropBlurType:(long long)arg2;
- (void)switcherContentController:(id)arg1 handlePlusButtonActionForBundleIdentifier:(id)arg2;
- (void)switcherContentController:(id)arg1 deletedAppLayout:(id)arg2 forReason:(long long)arg3;
- (void)switcherContentController:(id)arg1 setContentOrientation:(long long)arg2;
- (void)switcherContentController:(id)arg1 performTransitionWithRequest:(id)arg2 gestureInitiated:(BOOL)arg3;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2;
- (UIRectCornerRadii)cornerRadii;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1 layoutRole:(long long)arg2 overlay:(BOOL)arg3;

@end

