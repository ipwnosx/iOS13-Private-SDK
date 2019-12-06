//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUICollectionDOMFeatureTargetting-Protocol.h>
#import <StoreKitUI/SKUIGridViewElementPageSectionConfigurationDataSource-Protocol.h>

@class CPLRUDictionary, NSMutableDictionary, SKUIDynamicPageSectionIndexMapper, SKUIGridViewElementPageSectionConfiguration, SKUIMutableIntegerValue, SKUIViewElement, SKUIViewElementLayoutContext, SKUIViewElementTextLayoutCache, _SKUIDynamicGridSizeCacheKey;
@protocol SKUIEntityProviding;

__attribute__((visibility("hidden")))
@interface SKUIDynamicGridViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIGridViewElementPageSectionConfigurationDataSource, SKUICollectionDOMFeatureTargetting>
{
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUIGridViewElementPageSectionConfiguration *_configuration;
    SKUIDynamicPageSectionIndexMapper *_dynamicPageSectionIndexMapper;
    BOOL _editing;
    id <SKUIEntityProviding> _entityProvider;
    CPLRUDictionary *_globalIndexToEntityValueProviderValueCache;
    CPLRUDictionary *_globalIndexToTemplateViewElementCache;
    SKUIViewElement *_independentlySizedViewElement;
    SKUIViewElementTextLayoutCache *_labelLayoutCache;
    long long _minimumEntityCountForSections;
    _SKUIDynamicGridSizeCacheKey *_reusableSizeCacheKey;
    SKUIMutableIntegerValue *_reusableGlobalIndexIntegerValue;
    NSUInteger _sectionHeaderGlobalIndices;
    NSUInteger _numberOfSections;
    BOOL _showsSectionHeaders;
    NSMutableDictionary *_sizeCacheKeyToCachedCellSize;
    NSMutableDictionary *_templateViewElementsCache;
    BOOL _usesSizingEntityValueProvider;
   struct {
        unsigned int respondsToSectionEntityValueProviderAtIndex:1;
    } _entityProviderFlags;
}

// - (void).cxx_destruct;
- (id)_viewElementAtGlobalIndex:(long long)arg1;
- (void)_updateStyleProperties;
- (BOOL)_updateShowsSectionHeaders;
- (id)_sectionTemplateViewElementForEntityValueProvider:(id)arg1;
- (void)_resetLayoutProperties;
- (void)_reloadVisibleCellsAnimated:(BOOL)arg1;
- (void)_reloadViewElementProperties;
- (void)_reloadEntityProperties;
- (id)_itemTemplateViewElementForEntityValueProvider:(id)arg1;
- (void)_invalidateCellSizeCache;
- (long long)_globalIndexForEntityGlobalIndex:(long long)arg1;
- (void)_enumerateVisibleCellsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_entityValueProviderForGlobalIndex:(long long)arg1 sectionIndex:(long long )arg2;
- (long long)_entityGlobalIndexForGlobalIndex:(long long)arg1 returningSection:(out long long )arg2;
- (id)_dynamicGridViewElement;
- (void)gridViewElementPageSectionConfiguration:(id)arg1 configurePosition:(inout long long )arg2 forItemAtIndexPath:(id)arg3;
- (id)gridViewElementPageSectionConfiguration:(id)arg1 viewElementForIndexPath:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic, getter=isEditing) BOOL editing;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)_setContext:(id)arg1;
- (void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2;
- (UIEdgeInsets)sectionContentInset;
- (void)reloadVisibleCellsWithReason:(long long)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (id)relevantEntityProviders;
- (long long)pinningStyleForItemAtIndexPath:(id)arg1;
- (UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)invalidateCachedLayoutInformation;
- (id)indexPathsForPinningItems;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (void)deselectItemsAnimated:(BOOL)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewDidConfirmButtonElement:(id)arg1 withClickInfo:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (CGSize)cellSizeForIndexPath:(id)arg1;
- (id)_templateViewElementsForType:(id)arg1 mode:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

@end

