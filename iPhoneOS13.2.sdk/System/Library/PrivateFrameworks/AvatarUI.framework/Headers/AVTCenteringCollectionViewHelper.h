//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVTCenteringCollectionViewHelper : NSObject
{
}

+ (id)indexPathForItemBeingScrolledTowardFromOffset:(CGPoint)arg1 currentOffset:(CGPoint)arg2 nearestItemToCenter:(id)arg3 itemCount:(NSUInteger)arg4 itemOffsetProvider:(CDUnknownBlockType)arg5 ratio:(double )arg6;
+ (CGPoint)contentOffsetForCenteringPoint:(CGPoint)arg1 collectionView:(id)arg2;
+ (id)indexPathForNearestItemToCenterWithOffset:(CGPoint)arg1 collectionView:(id)arg2;
+ (UIEdgeInsets)insetsForBounds:(CGRect)arg1 withFirstCellSize:(CGSize)arg2 lastCellSize:(CGSize)arg3;

@end

