//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXTilingControllerComposition.h>

#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXWidgetCompositionElementDelegate-Protocol.h>
#import <PhotosUICore/PXWidgetCompositionElementObserver-Protocol.h>

@class NSArray, PXScrollViewController, PXTilingController, PXWidgetCompositionSpec;
@protocol PXWidgetCompositionDelegate;

@interface PXWidgetComposition : PXTilingControllerComposition <PXWidgetCompositionElementObserver, PXWidgetCompositionElementDelegate, PXScrollViewControllerObserver>
{
   struct {
        BOOL respondsToHasContentAbove;
        BOOL respondsToShouldUseEdgeToEdgeLayoutForWidget;
        BOOL respondsToLoadingPriorityForWidget;
        BOOL respondsToWidgetTransitionToViewControllerWithTransitionType;
        BOOL respondsToRequestViewControllerDismissalAnimated;
        BOOL respondsToDidUpdateCompositionWithDefaultAnimationOptions;
    } _delegateFlags;
    BOOL _isPerformingWidgetLoadingChange;
   struct {
        BOOL elementsToLoad;
    } _needsUpdateFlags;
    BOOL _shouldLoadVisibleWidgets;
    BOOL _shouldLoadAllWidgets;
    BOOL _shouldUnloadAllWidgets;
    BOOL __didLayoutWidgets;
    NSArray *__elements;
    PXScrollViewController *_scrollViewController;
    id <PXWidgetCompositionDelegate> _delegate;
    NSArray *_widgets;
    PXWidgetCompositionSpec *_spec;
    long long _minimumWidgetLoadingPriority;
    PXTilingController *__focusedTilingController;
    CGPoint __lastContentAdjustmentOffset;
}

@property(nonatomic, setter=_setLastContentAdjustmentOffset:) CGPoint _lastContentAdjustmentOffset; // @synthesize _lastContentAdjustmentOffset=__lastContentAdjustmentOffset;
@property(nonatomic, setter=_setDidLayoutWidgets:) BOOL _didLayoutWidgets; // @synthesize _didLayoutWidgets=__didLayoutWidgets;
@property(retain, nonatomic, setter=_setFocusedTilingController:) PXTilingController *_focusedTilingController; // @synthesize _focusedTilingController=__focusedTilingController;
@property(nonatomic) BOOL shouldUnloadAllWidgets; // @synthesize shouldUnloadAllWidgets=_shouldUnloadAllWidgets;
@property(nonatomic) BOOL shouldLoadAllWidgets; // @synthesize shouldLoadAllWidgets=_shouldLoadAllWidgets;
@property(nonatomic) BOOL shouldLoadVisibleWidgets; // @synthesize shouldLoadVisibleWidgets=_shouldLoadVisibleWidgets;
@property(nonatomic) long long minimumWidgetLoadingPriority; // @synthesize minimumWidgetLoadingPriority=_minimumWidgetLoadingPriority;
@property(retain, nonatomic) PXWidgetCompositionSpec *spec; // @synthesize spec=_spec;
@property(copy, nonatomic) NSArray *widgets; // @synthesize widgets=_widgets;
@property(nonatomic) __weak id <PXWidgetCompositionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(copy, nonatomic, setter=_setElements:) NSArray *_elements; // @synthesize _elements=__elements;
// - (void).cxx_destruct;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (BOOL)element:(id)arg1 requestViewControllerDismissalAnimated:(BOOL)arg2;
- (BOOL)element:(id)arg1 transitionToViewController:(NSObject )arg2 withTransitionType:(long long)arg3;
- (NSObject )elementViewController:(id)arg1;
- (void)elementHasLoadedContentDataDidChange:(id)arg1;
- (void)elementNeedsLayout:(id)arg1 preferredAnimationOptions:(id)arg2 originatingTilingController:(id)arg3;
- (id)footerTilingControllerForWidget:(id)arg1;
- (id)headerTilingControllerForWidget:(id)arg1;
- (CGRect)frameForWidget:(id)arg1;
- (id)widgetAtLocation:(CGPoint)arg1;
- (void)_updateElementsToLoadIfNeeded;
- (void)_invalidateElementsToLoad;
- (void)_setNeedsUpdateWidgetLoading;
- (void)_updateWidgetLoadingIfNeeded;
- (void)performWidgetLoadingChange:(CDUnknownBlockType)arg1;
- (long long)_loadingPriorityForElement:(id)arg1;
- (BOOL)_shouldUseEdgeToEdgeLayoutForWidget:(id)arg1;
- (void)updateComposition;
- (BOOL)_shouldFocusOnTilingController:(id)arg1;
- (void)_updateFocusedTilingController;
- (void)_invalidateFocusedTilingController;
- (id)tilingControllers;
- (void)_updateElementsSpec;
- (void)_invalidateElementsSpec;
- (void)_updateElements;
- (void)_invalidateElements;
- (id)initWithScrollViewController:(id)arg1;
- (id)init;

@end

