//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GKCollectionViewDataSource, GKCollectionViewLayoutAttributes, GKDataSourceMetrics, GKSectionMetrics, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableOrderedSet, NSMutableSet, NSPointerArray, NSSet;

@interface GKGridLayout : UICollectionViewLayout
{
    BOOL _showPlaceholder;
    BOOL _hideSearchBarOnAppear;
    BOOL _hideAboveSegmentOnAppear;
    BOOL _ignoreBoundsForSizeCalculation;
    BOOL _noMoreShowMore;
    BOOL _movedItemsInUpdateCarrySections;
    BOOL _displayClipView;
    BOOL _displayingOverlay;
    BOOL _shouldLayoutRTL;
    NSUInteger _portraitInterleavedSectionsCount;
    NSUInteger _landscapeInterleavedSectionsCount;
    double _leftLayoutGuideOffset;
    double _rightLayoutGuideOffset;
    double _bottomContentPadding;
    NSPointerArray *_sectionToPresentationData;
    NSPointerArray *_sectionToMetricData;
    NSMutableArray *_laidOutAttributes;
    NSMutableOrderedSet *_laidOutPinnableAttributes;
    NSMutableDictionary *_indexPathToSupplementary;
    NSMutableDictionary *_indexPathToDecoration;
    NSMutableDictionary *_indexPathToItem;
    NSMutableDictionary *_oldIndexPathToSupplementary;
    NSMutableDictionary *_oldIndexPathToDecoration;
    NSMutableDictionary *_oldIndexPathToItem;
    NSMutableDictionary *_indexPathToMetrics;
    NSMutableIndexSet *_sectionsWithPinnedHeaders;
    NSMutableSet *_revealedIndexPaths;
    NSIndexPath *_indexPathOfTouchedShowMore;
    NSMutableDictionary *_keyToMetricData;
    NSMutableDictionary *_oldSectionToMetricKeys;
    long long _metricsInvalidationCount;
    NSArray *_currentUpdateItems;
    NSMutableSet *_knownSupplementaryKinds;
    GKCollectionViewDataSource *_dataSourceForUpdate;
    NSUInteger _updateType;
    GKCollectionViewLayoutAttributes *_clipViewAttributes;
    NSUInteger _invalidationFlags;
    double _segmentedBoxY;
    NSSet *_visibleIndexPathsFilter;
    GKSectionMetrics *_defaultSectionMetricsInternal;
    GKDataSourceMetrics *_dataSourceMetrics;
    double _hiddenSearchBarOffset;
    double _segmentedHeaderPinningOffset;
    CGSize _laidOutContentSize;
    CGSize _minimumLaidOutContentSize;
    CGSize _oldLaidOutContentSize;
}

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
@property(nonatomic) double segmentedHeaderPinningOffset; // @synthesize segmentedHeaderPinningOffset=_segmentedHeaderPinningOffset;
@property(nonatomic) double hiddenSearchBarOffset; // @synthesize hiddenSearchBarOffset=_hiddenSearchBarOffset;
@property(retain, nonatomic) GKDataSourceMetrics *dataSourceMetrics; // @synthesize dataSourceMetrics=_dataSourceMetrics;
@property(retain, nonatomic) GKSectionMetrics *defaultSectionMetricsInternal; // @synthesize defaultSectionMetricsInternal=_defaultSectionMetricsInternal;
@property(retain, nonatomic) NSSet *visibleIndexPathsFilter; // @synthesize visibleIndexPathsFilter=_visibleIndexPathsFilter;
@property(nonatomic) BOOL shouldLayoutRTL; // @synthesize shouldLayoutRTL=_shouldLayoutRTL;
@property(nonatomic) double segmentedBoxY; // @synthesize segmentedBoxY=_segmentedBoxY;
@property(nonatomic) BOOL displayingOverlay; // @synthesize displayingOverlay=_displayingOverlay;
@property(nonatomic) NSUInteger invalidationFlags; // @synthesize invalidationFlags=_invalidationFlags;
@property(retain, nonatomic) GKCollectionViewLayoutAttributes *clipViewAttributes; // @synthesize clipViewAttributes=_clipViewAttributes;
@property(nonatomic) BOOL displayClipView; // @synthesize displayClipView=_displayClipView;
@property(nonatomic) BOOL movedItemsInUpdateCarrySections; // @synthesize movedItemsInUpdateCarrySections=_movedItemsInUpdateCarrySections;
@property(nonatomic) NSUInteger updateType; // @synthesize updateType=_updateType;
@property(retain, nonatomic) GKCollectionViewDataSource *dataSourceForUpdate; // @synthesize dataSourceForUpdate=_dataSourceForUpdate;
@property(retain, nonatomic) NSMutableSet *knownSupplementaryKinds; // @synthesize knownSupplementaryKinds=_knownSupplementaryKinds;
@property(retain, nonatomic) NSArray *currentUpdateItems; // @synthesize currentUpdateItems=_currentUpdateItems;
@property(nonatomic) long long metricsInvalidationCount; // @synthesize metricsInvalidationCount=_metricsInvalidationCount;
@property(retain, nonatomic) NSMutableDictionary *oldSectionToMetricKeys; // @synthesize oldSectionToMetricKeys=_oldSectionToMetricKeys;
@property(retain, nonatomic) NSMutableDictionary *keyToMetricData; // @synthesize keyToMetricData=_keyToMetricData;
@property(nonatomic) BOOL noMoreShowMore; // @synthesize noMoreShowMore=_noMoreShowMore;
@property(retain, nonatomic) NSIndexPath *indexPathOfTouchedShowMore; // @synthesize indexPathOfTouchedShowMore=_indexPathOfTouchedShowMore;
@property(retain, nonatomic) NSMutableSet *revealedIndexPaths; // @synthesize revealedIndexPaths=_revealedIndexPaths;
@property(retain, nonatomic) NSMutableIndexSet *sectionsWithPinnedHeaders; // @synthesize sectionsWithPinnedHeaders=_sectionsWithPinnedHeaders;
@property(retain, nonatomic) NSMutableDictionary *indexPathToMetrics; // @synthesize indexPathToMetrics=_indexPathToMetrics;
@property(retain, nonatomic) NSMutableDictionary *oldIndexPathToItem; // @synthesize oldIndexPathToItem=_oldIndexPathToItem;
@property(retain, nonatomic) NSMutableDictionary *oldIndexPathToDecoration; // @synthesize oldIndexPathToDecoration=_oldIndexPathToDecoration;
@property(retain, nonatomic) NSMutableDictionary *oldIndexPathToSupplementary; // @synthesize oldIndexPathToSupplementary=_oldIndexPathToSupplementary;
@property(retain, nonatomic) NSMutableDictionary *indexPathToItem; // @synthesize indexPathToItem=_indexPathToItem;
@property(retain, nonatomic) NSMutableDictionary *indexPathToDecoration; // @synthesize indexPathToDecoration=_indexPathToDecoration;
@property(retain, nonatomic) NSMutableDictionary *indexPathToSupplementary; // @synthesize indexPathToSupplementary=_indexPathToSupplementary;
@property(nonatomic) CGSize oldLaidOutContentSize; // @synthesize oldLaidOutContentSize=_oldLaidOutContentSize;
@property(retain, nonatomic) NSMutableOrderedSet *laidOutPinnableAttributes; // @synthesize laidOutPinnableAttributes=_laidOutPinnableAttributes;
@property(retain, nonatomic) NSMutableArray *laidOutAttributes; // @synthesize laidOutAttributes=_laidOutAttributes;
@property(retain, nonatomic) NSPointerArray *sectionToMetricData; // @synthesize sectionToMetricData=_sectionToMetricData;
@property(retain, nonatomic) NSPointerArray *sectionToPresentationData; // @synthesize sectionToPresentationData=_sectionToPresentationData;
@property(nonatomic) BOOL ignoreBoundsForSizeCalculation; // @synthesize ignoreBoundsForSizeCalculation=_ignoreBoundsForSizeCalculation;
@property(nonatomic) double bottomContentPadding; // @synthesize bottomContentPadding=_bottomContentPadding;
@property(nonatomic) CGSize minimumLaidOutContentSize; // @synthesize minimumLaidOutContentSize=_minimumLaidOutContentSize;
@property(nonatomic) CGSize laidOutContentSize; // @synthesize laidOutContentSize=_laidOutContentSize;
@property(nonatomic) BOOL hideAboveSegmentOnAppear; // @synthesize hideAboveSegmentOnAppear=_hideAboveSegmentOnAppear;
@property(nonatomic) BOOL hideSearchBarOnAppear; // @synthesize hideSearchBarOnAppear=_hideSearchBarOnAppear;
@property(nonatomic) double rightLayoutGuideOffset; // @synthesize rightLayoutGuideOffset=_rightLayoutGuideOffset;
@property(nonatomic) double leftLayoutGuideOffset; // @synthesize leftLayoutGuideOffset=_leftLayoutGuideOffset;
@property(nonatomic) NSUInteger landscapeInterleavedSectionsCount; // @synthesize landscapeInterleavedSectionsCount=_landscapeInterleavedSectionsCount;
@property(nonatomic) NSUInteger portraitInterleavedSectionsCount; // @synthesize portraitInterleavedSectionsCount=_portraitInterleavedSectionsCount;
@property(nonatomic) BOOL showPlaceholder; // @synthesize showPlaceholder=_showPlaceholder;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(NSUInteger)arg3;
- (void)prepareForMovingItemsCarryingSections;
- (void)prepareForUpdate:(NSUInteger)arg1 inDataSource:(id)arg2;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForAnimatedBoundsChange:(CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)shouldSlideOutSupplementaryElementOfKind:(id)arg1 forUpdateItem:(id)arg2 atIndexPath:(id)arg3;
- (double)yOffsetForSlidingUpdate;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)shouldSlideInSupplementaryElementOfKind:(id)arg1 forUpdateItem:(id)arg2 atIndexPath:(id)arg3;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForSlidingAwayItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForSlidingInItemAtIndexPath:(id)arg1;
- (id)revealMoreForSectionIndex:(long long)arg1 revealCount:(NSUInteger)arg2 andDeleteItemCount:(NSUInteger)arg3;
- (id)revealMoreForSectionIndex:(long long)arg1;
- (NSUInteger)currentMaxVisibleItemCountForSection:(long long)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (void)_filterPinnedAttributes;
- (void)finalizePinnedAttributes:(id)arg1 forSection:(long long)arg2 footer:(BOOL)arg3;
- (double)layoutTopPinningAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3;
- (double)layoutBottomPinningAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3;
- (double)applyTopPinningToAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3;
- (double)applyBottomPinningToAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3;
- (void)fullyRebuildLayout;
- (void)prepareLayout;
- (void)_resetState;
- (NSUInteger)_prepareItemLayoutForSection:(long long)arg1;
- (id)firstVisibleIndexAtOrAfterItem:(long long)arg1 itemCount:(long long)arg2 inSection:(long long)arg3;
- (void)_prepareSegmentedBoxLayoutWithOffset:(long long)arg1;
- (long long)_prepareOverlayLayoutForSection:(long long)arg1 offset:(long long)arg2;
- (long long)_prepareSupplementaryLayoutForSection:(long long)arg1 atLocation:(NSUInteger)arg2 offset:(long long)arg3 globalOffset:(long long )arg4;
- (long long)indexOfSupplementaryMetricsOfKind:(id)arg1 inList:(id)arg2;
- (void)enumerateSectionsIndexesOverlappingYOffset:(double)arg1 block:(CDUnknownBlockType)arg2;
- (double)yOffsetForSection:(long long)arg1;
- (NSUInteger)sectionsPerRow;
- (BOOL)_areWePortrait;
- (id)presentationDataForSection:(long long)arg1;
- (id)_existingPresentationDataForSection:(long long)arg1;
- (void)finalizeGlobalPresentationDataWithSectionRange:(NSRange *)arg1;
- (void)updatePresentationDataInSection:(long long)arg1 withAttributes:(id)arg2 supplementaryLocation:(NSUInteger)arg3;
- (void)updatePresentationDataForLastInterleavedSections;
- (double)calculatedBottomPaddingForSection:(long long)arg1;
- (void)forceFullInvalidate;
- (id)invalidationContextForBoundsChange:(CGRect)arg1;
- (BOOL)shouldUpdateVisibleCellLayoutAttributes;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (void)disableClipView;
- (void)enableClipView;
- (void)updatePinnableAreas;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)refreshMetrics;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1;
- (CGSize)collectionViewContentSize;
- (void)calculateCollectionViewContentSize;
- (CGSize)_sizeAdjustedForTabBarSettingsBasedOnSize:(CGSize)arg1;
- (void)updatePlaceholderVisibility;
- (long long)searchResultsCount;
- (id)metricsForSection:(long long)arg1;
- (id)attributesForSupplementaryIndexPath:(id)arg1;
- (void)setMetricData:(id)arg1 forSection:(long long)arg2;
- (NSUInteger)filteredTotalItemCountForSection:(long long)arg1;
- (id)metricDataForSection:(long long)arg1;
- (id)metricDataForKey:(id)arg1;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (CGRect)layoutBounds;
- (double)scale;
- (void)dealloc;
- (id)init;

@end

