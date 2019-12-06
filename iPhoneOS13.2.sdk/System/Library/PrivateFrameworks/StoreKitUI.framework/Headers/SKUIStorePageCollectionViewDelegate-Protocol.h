//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IKColor, NSArray, NSIndexPath, SKUICollectionViewLayoutAttributes, SKUIStorePageCollectionViewLayout, UICollectionView;

@protocol SKUIStorePageCollectionViewDelegate <UICollectionViewDelegateFlowLayout>

@optional
- (NSArray *)indexPathsForGradientItemsInCollectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2;
- (NSArray *)indexPathsForPinningItemsInCollectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2;
- (void)collectionView:(UICollectionView *)arg1 willBeginEditingItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2 willApplyLayoutAttributes:(SKUICollectionViewLayoutAttributes *)arg3;
- (long long)collectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2 pinningTransitionStyleForItemAtIndexPath:(NSIndexPath *)arg3;
- (long long)collectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2 pinningGroupForItemAtIndexPath:(NSIndexPath *)arg3;
- (long long)collectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2 pinningStyleForItemAtIndexPath:(NSIndexPath *)arg3;
- (UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2 pinningContentInsetForItemAtIndexPath:(NSIndexPath *)arg3;
- (BOOL)collectionView:(UICollectionView *)arg1 canScrollCellAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didEndEditingItemAtIndexPath:(NSIndexPath *)arg2;
- (IKColor *)backgroundColorForSection:(long long)arg1;
@end

