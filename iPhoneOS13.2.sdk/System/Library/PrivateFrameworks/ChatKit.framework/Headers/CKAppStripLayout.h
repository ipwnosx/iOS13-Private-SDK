//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;

@interface CKAppStripLayout : UICollectionViewLayout
{
    NSArray *_minifiedAttributes;
    NSArray *_magnifiedAttributes;
    NSArray *_supplementryMinifiedAttributes;
    NSArray *_supplementryMagnifiedAttributes;
    BOOL _inLayoutModeTransition;
    BOOL _shouldDimPluginCells;
    BOOL _shouldShowCellBorders;
    NSUInteger _layoutMode;
}

+ (double)maxHeight;
+ (double)minHeight;
@property(nonatomic) BOOL shouldShowCellBorders; // @synthesize shouldShowCellBorders=_shouldShowCellBorders;
@property(nonatomic) BOOL shouldDimPluginCells; // @synthesize shouldDimPluginCells=_shouldDimPluginCells;
@property(nonatomic) NSUInteger layoutMode; // @synthesize layoutMode=_layoutMode;
// - (void).cxx_destruct;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (CGSize)collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
//  (struct _Spec)_specForLayoutMode:(NSUInteger)arg1;
//  (id)_generateSupplementryAttributesForSpec:(struct _Spec)arg1 minified:(BOOL)arg2;
//  (id)_generateAttributesForSpec:(struct _Spec)arg1;
- (id)_supplementryAttributesForLayoutMode:(NSUInteger)arg1;
- (id)_attributesForLayoutMode:(NSUInteger)arg1;
- (id)_currentSupplementryAttributes;
- (id)_currentAttributes;
- (long long)_recentsCount;
- (long long)_favoritesCount;
- (long long)_itemCount;
- (void)finishLayoutModeTransition;
- (void)prepareForLayoutModeTransition;
- (void)invalidateLayout;
- (void)invalidateCachedLayout;
- (CGSize)collectionViewContentSizeForLayoutMode:(NSUInteger)arg1;
- (id)init;

@end

