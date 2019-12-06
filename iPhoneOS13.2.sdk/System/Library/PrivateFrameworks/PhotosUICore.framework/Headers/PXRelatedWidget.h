//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXRelatedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXRelatedTilingLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>
#import <PhotosUICore/PXTilingControllerScrollDelegate-Protocol.h>
#import <PhotosUICore/PXTilingControllerTransitionDelegate-Protocol.h>
#import <PhotosUICore/PXWidget-Protocol.h>

@class NSDictionary, NSString, PXBasicTileAnimator, PXPhotosDetailsContext, PXRelatedDataSource, PXRelatedDataSourceManager, PXRelatedSpecManager, PXRelatedTilingLayout, PXSectionedObjectReference, PXTilingController;
@protocol PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXRelatedWidget : NSObject <PXRelatedDataSourceManagerObserver, PXTilingControllerTransitionDelegate, PXTilingControllerScrollDelegate, PXRelatedTilingLayoutDelegate, PXTileSource, PXChangeObserver, PXWidget>
{
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
   struct {
        BOOL dataSourceManager;
        BOOL layout;
        BOOL availableNumberOfRows;
        BOOL maximumNumberOfRowsToDisplay;
        BOOL canExpand;
        BOOL hasLoadedContentData;
        BOOL prefetchedDataSources;
    } _needsUpdateFlags;
    BOOL __shouldLoadContentData;
    BOOL __expanded;
    BOOL __canExpand;
    BOOL _hasLoadedContentData;
    id <PXWidgetDelegate> _widgetDelegate;
    id <PXWidgetUnlockDelegate> _widgetUnlockDelegate;
    PXPhotosDetailsContext *_context;
    PXRelatedDataSourceManager *__dataSourceManager;
    PXRelatedSpecManager *__specManager;
    PXRelatedTilingLayout *__layout;
    PXBasicTileAnimator *__tileAnimator;
    PXTilingController *__tilingController;
    long long __availableNumberOfRows;
    long long __maximumNumberOfRowsToDisplay;
    PXRelatedDataSource *__anchorDataSource;
    NSDictionary *__prefetchedDataSourceByRelatedEntry;
    PXSectionedObjectReference *_highlightedObjectReference;
    PXSectionedObjectReference *_focusedObjectReference;
    CGPoint __anchorOffset;
//    struct PXSimpleIndexPath __anchorIndexPath;
}

@property(retain, nonatomic) PXSectionedObjectReference *focusedObjectReference; // @synthesize focusedObjectReference=_focusedObjectReference;
@property(retain, nonatomic) PXSectionedObjectReference *highlightedObjectReference; // @synthesize highlightedObjectReference=_highlightedObjectReference;
@property(retain, nonatomic, setter=_setPrefetchedDataSourceByRelatedEntry:) NSDictionary *_prefetchedDataSourceByRelatedEntry; // @synthesize _prefetchedDataSourceByRelatedEntry=__prefetchedDataSourceByRelatedEntry;
@property(nonatomic, setter=_setHasLoadedContentData:) BOOL hasLoadedContentData; // @synthesize hasLoadedContentData=_hasLoadedContentData;
@property(nonatomic, setter=_setAnchorOffset:) CGPoint _anchorOffset; // @synthesize _anchorOffset=__anchorOffset;
// property(nonatomic, setter=_setAnchorIndexPath:) struct PXSimpleIndexPath _anchorIndexPath; // @synthesize _anchorIndexPath=__anchorIndexPath;
@property(retain, nonatomic, setter=_setAnchorDataSource:) PXRelatedDataSource *_anchorDataSource; // @synthesize _anchorDataSource=__anchorDataSource;
@property(nonatomic, setter=_setCanExpand:) BOOL _canExpand; // @synthesize _canExpand=__canExpand;
@property(nonatomic, getter=_isExpanded, setter=_setExpanded:) BOOL _expanded; // @synthesize _expanded=__expanded;
@property(nonatomic, setter=_setMaximumNumberOfRowsToDisplay:) long long _maximumNumberOfRowsToDisplay; // @synthesize _maximumNumberOfRowsToDisplay=__maximumNumberOfRowsToDisplay;
@property(nonatomic, setter=_setAvailableNumberOfRows:) long long _availableNumberOfRows; // @synthesize _availableNumberOfRows=__availableNumberOfRows;
@property(nonatomic, setter=_setShouldLoadContentData:) BOOL _shouldLoadContentData; // @synthesize _shouldLoadContentData=__shouldLoadContentData;
@property(readonly, nonatomic) PXTilingController *_tilingController; // @synthesize _tilingController=__tilingController;
@property(readonly, nonatomic) PXBasicTileAnimator *_tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property(readonly, nonatomic) PXRelatedTilingLayout *_layout; // @synthesize _layout=__layout;
@property(readonly, nonatomic) PXRelatedSpecManager *_specManager; // @synthesize _specManager=__specManager;
@property(readonly, nonatomic) PXRelatedDataSourceManager *_dataSourceManager; // @synthesize _dataSourceManager=__dataSourceManager;
@property(retain, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <PXWidgetUnlockDelegate> widgetUnlockDelegate; // @synthesize widgetUnlockDelegate=_widgetUnlockDelegate;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
// - (void).cxx_destruct;
//  (CGRect)relatedTilingLayout:(id)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;
//  (id)relatedTilingLayout:(id)arg1 titleFontNameForEntryAtIndexPath:(struct PXSimpleIndexPath)arg2;
//  (BOOL)relatedTilingLayout:(id)arg1 isPlaceholderEntryAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
//  (void)checkInTile:(void )arg1 withIdentifier:(struct PXTileIdentifier)arg2;
//  (void )checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_updateHasLoadedContentDataIfNeeded;
- (void)_invalidateHasLoadedContentData;
- (void)_updatePrefetchedDataSources;
- (void)_invalidatePrefetchedDataSources;
- (void)_updateLayoutIfNeeded;
- (void)_invalidateLayout;
- (void)_updateCanExpandIfNeeded;
- (void)_invalidateCanExpand;
- (void)_updateMaximumNumberOfRowsToDisplayIfNeeded;
- (void)_invalidateMaximumNumberOfRowsToDisplay;
- (void)_updateAvailableNumberOfRowsIfNeeded;
- (void)_invalidateAvailableNumberOfRows;
- (void)_updateDataSourceManagerIfNeeded;
- (void)_invalidateDataSourceManager;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)userDidSelectDisclosureControl;
- (void)_loadTilingController;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
- (void)unloadContentData;
- (void)_loadContentDataIfNeeded;
- (void)loadContentData;
@property(readonly, nonatomic) BOOL hasContentForCurrentInput;
- (id)_createPhotosDataSourceForRelatedEntry:(id)arg1;
- (CGPoint)_anchorPointForLayoutContentBounds:(CGRect)arg1;
- (void)_saveAnchoring;
- (void)enumerateTilesForRelatedRelatedEntry:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (CGRect)rectOfInterestForRelatedEntry:(id)arg1 inCoordinateSpaceWithIdentifier:(void )arg2;
- (id)relatedEntryForPhotosDataSource:(id)arg1;
- (id)photosDataSourceForRelatedEntry:(id)arg1;
- (id)allRelatedEntries;
- (id)entryObjectReferenceAtPoint:(CGPoint)arg1 inCoordinateSpaceWithIdentifier:(void )arg2;
- (id)relatedEntryAtPoint:(CGPoint)arg1 inCoordinateSpaceWithIdentifier:(void )arg2;
//  (struct PXTileIdentifier)identifierForTileWithKind:(long long)arg1 relatedEntry:(id)arg2;
//  (struct PXTileIdentifier)identifierForTileWithKind:(long long)arg1 relatedEntry:(id)arg2 layout:(id)arg3;
//  (id)relatedEntryForTileIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (id)extendedTraitCollection;
- (id)createTileAnimator;
- (void)installGestureRecognizers;
- (id)init;

@end

