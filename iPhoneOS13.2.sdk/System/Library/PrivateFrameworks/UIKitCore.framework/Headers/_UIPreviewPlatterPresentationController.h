//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIPresentationController.h"

#import <UIKitCore/_UIContextMenuActionsListViewDelegate-Protocol.h>
#import <UIKitCore/_UIPreviewPlatterPanControllerDelegate-Protocol.h>

@class NSArray, UIPanGestureRecognizer, UITapGestureRecognizer, UITargetedPreview, UIView, UIVisualEffectView, _UIContextMenuActionsListView, _UIContextMenuStyle, _UIFulfilledContextMenuConfiguration, _UIPreviewPlatterLayoutArbiter, _UIPreviewPlatterPanController, _UIPreviewPlatterView;

__attribute__((visibility("hidden")))
@interface _UIPreviewPlatterPresentationController : UIPresentationController <_UIContextMenuActionsListViewDelegate, UIGestureRecognizerDelegate, _UIPreviewPlatterPanControllerDelegate>
{
    BOOL _isAnimatingPresentation;
    BOOL _platterContentSizeDidChange;
    UIView *_platterContainerView;
    UIView *_platterTransitionView;
    UIVisualEffectView *_backgroundEffectView;
    _UIPreviewPlatterView *_contentPlatterView;
    _UIContextMenuActionsListView *_actionsView;
    _UIFulfilledContextMenuConfiguration *_displayedConfiguration;
    NSArray *_accessoryViews;
    UITapGestureRecognizer *_platterActionTapGestureRecognizer;
    UITapGestureRecognizer *_dismissalTapGestureRecognizer;
    UIPanGestureRecognizer *_actionScrubbingHandoffGestureRecognizer;
    UITargetedPreview *_sourcePreview;
    _UIPreviewPlatterPanController *_platterPanController;
    _UIPreviewPlatterLayoutArbiter *_layoutArbiter;
    _UIContextMenuStyle *_currentStyle;
    CGSize _platterContentSize;
}

@property(nonatomic) BOOL platterContentSizeDidChange; // @synthesize platterContentSizeDidChange=_platterContentSizeDidChange;
@property(nonatomic) CGSize platterContentSize; // @synthesize platterContentSize=_platterContentSize;
@property(copy, nonatomic) _UIContextMenuStyle *currentStyle; // @synthesize currentStyle=_currentStyle;
@property(retain, nonatomic) _UIPreviewPlatterLayoutArbiter *layoutArbiter; // @synthesize layoutArbiter=_layoutArbiter;
@property(retain, nonatomic) _UIPreviewPlatterPanController *platterPanController; // @synthesize platterPanController=_platterPanController;
@property(retain, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
@property(retain, nonatomic) UIPanGestureRecognizer *actionScrubbingHandoffGestureRecognizer; // @synthesize actionScrubbingHandoffGestureRecognizer=_actionScrubbingHandoffGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *dismissalTapGestureRecognizer; // @synthesize dismissalTapGestureRecognizer=_dismissalTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *platterActionTapGestureRecognizer; // @synthesize platterActionTapGestureRecognizer=_platterActionTapGestureRecognizer;
@property(readonly, nonatomic) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
@property(nonatomic) BOOL isAnimatingPresentation; // @synthesize isAnimatingPresentation=_isAnimatingPresentation;
@property(retain, nonatomic) _UIFulfilledContextMenuConfiguration *displayedConfiguration; // @synthesize displayedConfiguration=_displayedConfiguration;
@property(readonly, nonatomic) _UIContextMenuActionsListView *actionsView; // @synthesize actionsView=_actionsView;
// - (void).cxx_destruct;
- (void)_testing_tapAnAction;
- (void)_testing_dismissByTappingOutside;
@property(readonly, nonatomic) UIVisualEffectView *backgroundEffectView; // @synthesize backgroundEffectView=_backgroundEffectView;
@property(readonly, nonatomic) UIView *platterContainerView; // @synthesize platterContainerView=_platterContainerView;
@property(readonly, nonatomic) UIView *platterTransitionView; // @synthesize platterTransitionView=_platterTransitionView;
@property(readonly, nonatomic) _UIPreviewPlatterView *contentPlatterView; // @synthesize contentPlatterView=_contentPlatterView;
- (void)setDisplayedMenu:(id)arg1 withAnimationStyle:(NSUInteger)arg2;
- (void)previewActionsView:(id)arg1 didSelectAction:(id)arg2;
- (id)_actionsOnlyViewControllerForSourcePreview:(id)arg1;
- (void)_createActionsViewIfNecessary;
- (void)_updatePlatterAndActionViewLayoutForce:(BOOL)arg1 updateAttachment:(BOOL)arg2;
- (void)_updatePresentedViewFrame;
- (void)_updatePlatterContentSizeWithPreferredContentSize:(CGSize)arg1;
// - (CDStruct_6f807b77)layoutAnchor;
- (void)_didCompleteLayout;
- (void)initialPlatterFrame:(inout CGRect )arg1 actionViewFrame:(inout CGRect )arg2 updateAttachment:(BOOL)arg3;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_updatePlatterContainerViewTraitCollection;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_handleActionHandoffGesture:(id)arg1;
- (void)_handlePlatterActionTapGesture:(id)arg1;
- (void)_handleDismissalTapGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)tearOffForDraggingWithDragContainerView:(id)arg1;
- (void)platterPanInteractionEnded:(id)arg1;
- (void)platterPanInteractionBegan:(id)arg1;
- (void)platterPanControllerDidSwipeDown:(id)arg1;
- (void)platterPanControllerDidTearOff:(id)arg1;
- (void)_preDismissalTasks;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double )arg1 rightMargin:(double )arg2;
- (long long)presentationStyle;
- (BOOL)_shouldOccludeDuringPresentation;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (CGRect)frameOfPresentedViewInContainerView;
- (id)initWithPresentingViewController:(id)arg1 configuration:(id)arg2 sourcePreview:(id)arg3 style:(id)arg4;
- (BOOL)_shouldRestoreFirstResponder;
- (BOOL)_shouldKeepCurrentFirstResponder;

@end

