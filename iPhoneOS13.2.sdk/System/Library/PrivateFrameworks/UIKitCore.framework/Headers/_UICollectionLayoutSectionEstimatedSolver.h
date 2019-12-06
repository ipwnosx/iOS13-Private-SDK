//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionLayoutAuxillaryHosting-Protocol.h>
#import <UIKitCore/_UICollectionLayoutSectionSolver-Protocol.h>

@class NSCollectionLayoutSection, NSIndexSet, UITraitCollection, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutSolutionState, _UICollectionLayoutSupplementaryRegistrar;
@protocol NSCollectionLayoutContainer, _UICollectionPreferredSizes;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSectionEstimatedSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting>
{
    BOOL _layoutRTL;
    BOOL _shouldAdjustContentSizeForPartialLastGroupSolution;
    int _layoutAxis;
    int _containerLayoutAxis;
    NSCollectionLayoutSection *_layoutSection;
    id <NSCollectionLayoutContainer> _container;
    UITraitCollection *_traitCollection;
    long long _frameCount;
    id <_UICollectionPreferredSizes> _preferredSizes;
    _UICollectionLayoutAuxillaryItemSolver *_sectionSupplementarySolution;
    _UICollectionLayoutSupplementaryRegistrar *_sectionSupplementaryRegistrar;
    id <NSCollectionLayoutContainer> _memoizedSupplementaryHostContainer;
    _UICollectionLayoutSolutionState *_solutionState;
    CGPoint _orthogonalOffset;
    CGVector _orthogonalScrollingPrefetchingUnitVector;
}

@property(nonatomic) int containerLayoutAxis; // @synthesize containerLayoutAxis=_containerLayoutAxis;
@property(retain, nonatomic) _UICollectionLayoutSolutionState *solutionState; // @synthesize solutionState=_solutionState;
@property(retain, nonatomic) id <NSCollectionLayoutContainer> memoizedSupplementaryHostContainer; // @synthesize memoizedSupplementaryHostContainer=_memoizedSupplementaryHostContainer;
@property(retain, nonatomic) _UICollectionLayoutSupplementaryRegistrar *sectionSupplementaryRegistrar; // @synthesize sectionSupplementaryRegistrar=_sectionSupplementaryRegistrar;
@property(retain, nonatomic) _UICollectionLayoutAuxillaryItemSolver *sectionSupplementarySolution; // @synthesize sectionSupplementarySolution=_sectionSupplementarySolution;
@property(nonatomic) BOOL shouldAdjustContentSizeForPartialLastGroupSolution; // @synthesize shouldAdjustContentSizeForPartialLastGroupSolution=_shouldAdjustContentSizeForPartialLastGroupSolution;
@property(nonatomic) CGVector orthogonalScrollingPrefetchingUnitVector; // @synthesize orthogonalScrollingPrefetchingUnitVector=_orthogonalScrollingPrefetchingUnitVector;
@property(nonatomic) CGPoint orthogonalOffset; // @synthesize orthogonalOffset=_orthogonalOffset;
@property(readonly, nonatomic) id <_UICollectionPreferredSizes> preferredSizes; // @synthesize preferredSizes=_preferredSizes;
@property(readonly, nonatomic) long long frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) int layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property(readonly, nonatomic) BOOL layoutRTL; // @synthesize layoutRTL=_layoutRTL;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) id <NSCollectionLayoutContainer> container; // @synthesize container=_container;
@property(readonly, nonatomic) NSCollectionLayoutSection *layoutSection; // @synthesize layoutSection=_layoutSection;
// - (void).cxx_destruct;
- (id)auxillaryHostPreferredSizes;
- (id)auxillaryHostSupplementaryEnroller;
- (long long)auxillaryHostAuxillaryKind;
- (int)auxillaryHostLayoutAxis;
- (BOOL)auxillaryHostShouldLayoutRTL;
- (id)auxillaryHostAuxillaryItems;
- (id)auxillaryHostContainer;
- (CGSize)auxillaryHostPinningContentSize;
- (CGSize)auxillaryHostContentSize;
- (CGRect)_rectWithContentInsetTrailingLayoutDimensionAddedToToRect:(CGRect)arg1 insets:(NSDirectionalEdgeInsets)arg2 layoutAxis:(int)arg3;
- (CGRect)_adjustContentFrameForLastPartialSolutionIfNeededForContentFrame:(CGRect)arg1 bookmarks:(id)arg2;
- (void)_updateSolutionAuxillaryRangeIndexerKindDict:(id)arg1 fromBookmark:(id)arg2;
- (id)_sectionContainer;
- (id)_indexesOfBookmarksAffectedByResolveItems:(id)arg1;
- (id)_solveWithParameters:(id)arg1;
- (double)_dimensionForRootGroupAlongAxis:(int)arg1;
- (void)_configureInitialOrthogonalPrefetchingUnitVector;
- (void)_setOrthogonalOffset:(CGPoint)arg1;
- (id)supplementaryKeysAssociatedWithItemAtIndex:(long long)arg1;
- (id)allSupplementaryKeys;
@property(readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
@property(readonly, nonatomic) CGRect effectiveContentFrame;
@property(readonly, nonatomic) CGSize contentSize;
- (id)visualDescription;
- (id)sectionSupplementaryFrameWithKind:(id)arg1 index:(long long)arg2;
- (long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)arg1;
- (id)sectionSupplementaryFrameForIndex:(long long)arg1;
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2;
- (id)frameForIndex:(long long)arg1;
- (id)queryFramesIntersectingRect:(CGRect)arg1 frameOffset:(CGPoint)arg2;
- (id)queryFramesIntersectingRect:(CGRect)arg1;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(CGRect)arg1;
- (id)resolveWithParameters:(id)arg1 preferredSizes:(id)arg2;
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(int)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5 layoutRTL:(BOOL)arg6;
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(int)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5;
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(int)arg3 frameCount:(long long)arg4;
- (id)initWithLayoutSection:(id)arg1;

@end

