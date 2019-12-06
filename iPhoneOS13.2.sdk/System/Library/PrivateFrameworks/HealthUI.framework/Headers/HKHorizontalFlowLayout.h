//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface HKHorizontalFlowLayout : UICollectionViewFlowLayout
{
    BOOL _snapsToItemBoundaries;
    BOOL _snapsToItemCenters;
}

+ (double)snapToBoundariesDecelerationRate;
@property(nonatomic) BOOL snapsToItemCenters; // @synthesize snapsToItemCenters=_snapsToItemCenters;
@property(nonatomic) BOOL snapsToItemBoundaries; // @synthesize snapsToItemBoundaries=_snapsToItemBoundaries;
@property(nonatomic) double trailingInset;
@property(nonatomic) double leadingInset;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2;
- (id)init;

@end

