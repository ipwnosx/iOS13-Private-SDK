//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGSplitLayout.h>

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryBodyLayout-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryInlineHeadersLayoutGeometrySource-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryViewModelPresenter-Protocol.h>
#import <PhotosUICore/PXGDisplayAssetSource-Protocol.h>
#import <PhotosUICore/PXGItemsLayoutDelegate-Protocol.h>

@class NSArray, NSDateInterval, NSMutableSet, NSString, PXAssetReference, PXAssetsDataSource, PXAssetsDataSourceManager, PXCuratedLibraryAssetDecorationSource, PXCuratedLibraryInlineHeadersDataSourceManager, PXCuratedLibraryInlineHeadersLayout, PXCuratedLibraryLayoutSpec, PXCuratedLibraryViewModel, PXGAnchor, PXGItemsLayout, PXGOneColumnLayout, PXGPinchEffect, PXGZoomLayout, PXNumberAnimator, PXPhotoKitUIMediaProvider, PXPointAnimator;
@protocol PXCuratedLibraryAllPhotosBodyLayout, PXDisplayAssetFetchResult;

@interface PXCuratedLibraryAllPhotosLayout : PXGSplitLayout <PXAssetsDataSourceManagerObserver, PXChangeObserver, PXCuratedLibraryViewModelPresenter, PXGDisplayAssetSource, PXCuratedLibraryInlineHeadersLayoutGeometrySource, PXGItemsLayoutDelegate, PXCuratedLibraryBodyLayout>
{
    CDStruct_d97c9657 _preUpdateFlags;
    CDStruct_d97c9657 _postUpdateFlags;
    PXGZoomLayout *_zoomLayout;
    PXGPinchEffect *_pinchEffect;
    unsigned int _pinchEffectCaptureSpriteIndex;
    struct _PXGSpriteIndexRange _lightBackgroundSpriteIndexRange;
    unsigned int _backgroundMediaVersion;
    PXCuratedLibraryInlineHeadersDataSourceManager *_inlineHeadersDataSourceManager;
    PXCuratedLibraryInlineHeadersLayout *_inlineHeadersLayout;
    PXAssetsDataSourceManager *_dataSourceManager;
    PXAssetsDataSource *_currentDataSource;
    PXCuratedLibraryAssetDecorationSource *_assetDecorationSource;
    PXPhotoKitUIMediaProvider *_preheatMediaProvider;
    struct _NSRange _preheatedThumbsForItemsByColumnIndex[10];
    _Bool _isPreheatingByColumnIndex[10];
    _Bool _isPerformingUpdate;
    struct _NSRange _prefetchedForLoadedItems;
    struct _NSRange _cachedClampedItemRange;
    id <PXDisplayAssetFetchResult> _cachedClampedFetchResult;
    NSArray *_layers;
    NSArray *_itemLayouts;
    PXGItemsLayout<PXCuratedLibraryAllPhotosBodyLayout> *_itemLayoutByHeaderLevel[2];
    struct PXGItemsLayout *_decadesItemLayout;
    NSMutableSet *_itemLayoutsAllowedToLoad;
    NSDateInterval *_lastReturnedDateInterval;
    unsigned long long _lastReturnedDateIntervalDataSourceIdentifier;
    NSArray *_lastReturnedLocationNames;
    unsigned long long _lastReturnedLocationNamesDataSourceIdentifier;
    _Bool _scrolledWhileAnimatingZoom;
    _Bool _performedInitialVisualShift;
    long long _visuallyStableAnchorItem;
    long long _visuallyStableAnchorItemDesiredColumn;
    _Bool _visuallyStableAnchorAllowedCloseToTop;
    unsigned long long _dataSourceIdentifierOfCachedRangeForSelectedItems;
    struct _NSRange _cachedRangeForSelectedItems;
    _Bool _didChangeFiltering;
    _Bool _shouldAnimateTowardsAnchor;
    _Bool _wasTracking;
    PXCuratedLibraryLayoutSpec *_spec;
    PXAssetReference *__anchorAssetReference;
    PXCuratedLibraryViewModel *_viewModel;
    PXAssetsDataSource *_presentedDataSource;
    PXGAnchor *_anchor;
    PXPointAnimator *_anchorViewportScaleCenterAnimator;
    PXNumberAnimator *_anchorViewportScaleCenterVelocityTracker;
    struct PXGItemsLayout *_didAnimateTowardsAnchorInItemsLayout;
    PXGOneColumnLayout *_oneColLayout;
    struct CGPoint _anchorTargetViewportCenter;
    struct CGPoint _normalizedScaleCenterInAnchorSprite;
    struct UIEdgeInsets _overlayInsets;
    struct UIEdgeInsets _effectiveOverlayInsets;
}

@property(nonatomic) struct UIEdgeInsets effectiveOverlayInsets; // @synthesize effectiveOverlayInsets=_effectiveOverlayInsets;
@property(readonly, nonatomic) PXGOneColumnLayout *oneColLayout; // @synthesize oneColLayout=_oneColLayout;
@property(readonly, nonatomic) PXGItemsLayout<PXCuratedLibraryAllPhotosBodyLayout> *didAnimateTowardsAnchorInItemsLayout; // @synthesize didAnimateTowardsAnchorInItemsLayout=_didAnimateTowardsAnchorInItemsLayout;
@property(readonly, nonatomic) _Bool wasTracking; // @synthesize wasTracking=_wasTracking;
@property(readonly, nonatomic) _Bool shouldAnimateTowardsAnchor; // @synthesize shouldAnimateTowardsAnchor=_shouldAnimateTowardsAnchor;
@property(readonly, nonatomic) PXNumberAnimator *anchorViewportScaleCenterVelocityTracker; // @synthesize anchorViewportScaleCenterVelocityTracker=_anchorViewportScaleCenterVelocityTracker;
@property(readonly, nonatomic) struct CGPoint normalizedScaleCenterInAnchorSprite; // @synthesize normalizedScaleCenterInAnchorSprite=_normalizedScaleCenterInAnchorSprite;
@property(readonly, nonatomic) struct CGPoint anchorTargetViewportCenter; // @synthesize anchorTargetViewportCenter=_anchorTargetViewportCenter;
@property(readonly, nonatomic) PXPointAnimator *anchorViewportScaleCenterAnimator; // @synthesize anchorViewportScaleCenterAnimator=_anchorViewportScaleCenterAnimator;
@property(readonly, nonatomic) PXGAnchor *anchor; // @synthesize anchor=_anchor;
@property(nonatomic) struct UIEdgeInsets overlayInsets; // @synthesize overlayInsets=_overlayInsets;
@property(readonly, nonatomic) PXAssetsDataSource *presentedDataSource; // @synthesize presentedDataSource=_presentedDataSource;
@property(readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) PXAssetReference *anchorAssetReference; // @synthesize anchorAssetReference=__anchorAssetReference;
@property(retain, nonatomic) PXCuratedLibraryLayoutSpec *spec; // @synthesize spec=_spec;
- (id)viewModel:(id)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (unsigned long long)behaviorForCaptureSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (struct UIColor *)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(struct PXGItemsLayout *)arg2;
- (struct CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(struct PXGItemsLayout *)arg1;
- (id /* block */)locationNamesFutureForContentInRect:(struct CGRect)arg1;
- (id /* block */)dateIntervalFutureForContentInRect:(struct CGRect)arg1;
- (_Bool)_layoutWantsSingleDateTitle;
- (struct _NSRange)_rangeOfItemsForContentInRect:(struct CGRect)arg1;
- (struct CGRect)boundsForLevel:(unsigned long long)arg1;
- (CDStruct_3fe57b01)spriteTransformForLevel:(unsigned long long)arg1;
- (struct CGRect)frameForItemAtIndexPath:(struct PXSimpleIndexPath)arg1 level:(unsigned long long)arg2;
- (id)_displayAssetForItem:(long long)arg1;
- (void)itemsLayout:(id)arg1 updateTagsInSpriteInfos:(CDStruct_9d1ebe49 *)arg2 forItemsInRange:(struct _NSRange)arg3;
- (struct CGRect)itemsLayout:(id)arg1 bestCropRectForItem:(long long)arg2 withAspectRatio:(double)arg3;
- (double)itemsLayout:(id)arg1 aspectRatioForItem:(long long)arg2;
- (long long)itemsLayout:(id)arg1 itemForObjectReference:(id)arg2;
- (CDStruct_3fe57b01)_spriteTransformForLayout:(id)arg1;
- (void)_performAnchorAlignmentVisualShiftWithBaseLayout:(struct PXGItemsLayout *)arg1;
- (void)_performVisualShiftWithLayout:(struct PXGItemsLayout *)arg1 movingItem:(long long)arg2 toColumn:(long long)arg3;
- (long long)_estimatedItemsPerScreenForLayout:(struct PXGItemsLayout *)arg1;
- (void)_updateViewModelIsAnimating;
- (void)_updatePrefetching;
- (void)_updatePinchEffect;
- (void)_updateBackgroundSprites;
- (void)_updateZoomTransforms;
- (void)_updateDecorationSource;
- (void)_updateDataSource;
- (void)_updateVisualShifting;
- (void)_updateZoom;
- (void)_updateLayers;
- (void)_updateEffectiveOverlayInsets;
- (void)update;
- (void)invalidateItemsLayout;
- (id)presentedItemsGeometryForDataSource:(id)arg1;
@property(readonly, nonatomic) PXGItemsLayout<PXCuratedLibraryAllPhotosBodyLayout> *primaryItemsLayout;
- (_Bool)_wantsDecorationForNumberOfColumns:(long long)arg1;
- (double)_itemCaptionSpacingForLayout:(struct PXGItemsLayout *)arg1;
- (double)_interItemSpacingForLayout:(struct PXGItemsLayout *)arg1;
- (_Bool)_layoutHasIndividualItems:(struct PXGItemsLayout *)arg1;
- (_Bool)_layoutIsAspectFit:(struct PXGItemsLayout *)arg1;
- (void)_configureLayout:(struct PXGItemsLayout *)arg1;
- (struct PXGItemsLayout *)_createLayoutWithNumberOfColumns:(long long)arg1;
- (struct CGSize)_scaleForLayout:(struct PXGItemsLayout *)arg1;
- (unsigned long long)zoomBehavior;
- (_Bool)isAnimating;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(id /* block */)arg1;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id /* block */)arg1;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (void)screenScaleDidChange;
- (void)visibleRectDidChange;
- (void)containingScrollViewDidScroll:(struct CGPoint)arg1;
- (id)init;
- (id)initWithViewModel:(id)arg1 spec:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
