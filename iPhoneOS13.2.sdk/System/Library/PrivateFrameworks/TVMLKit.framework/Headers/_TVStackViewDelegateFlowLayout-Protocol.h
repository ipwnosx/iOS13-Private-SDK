//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UICollectionView, UICollectionViewLayout;

@protocol _TVStackViewDelegateFlowLayout <UICollectionViewDelegateFlowLayout>
- (UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 sizeForSectionAtIndex:(long long)arg3;

@optional
- (void)collectionView:(UICollectionView *)arg1 showcaseFactorDidChangeForLayout:(UICollectionViewLayout *)arg2;
@end

