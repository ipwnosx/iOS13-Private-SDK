//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <AvatarUI/AVTCollectionViewLayout-Protocol.h>

@interface UICollectionViewLayout (AVTCollectionViewLayout) <AVTCollectionViewLayout>
- (CGRect)finalFrameForDisappearingElementAtOriginForVisibleBounds:(CGRect)arg1;
- (CGRect)initialFrameForAppearingElementAtOriginForVisibleBounds:(CGRect)arg1;
- (CGSize)contentSizeForVisibleBounds:(CGRect)arg1 numberOfItems:(long long)arg2;
- (CGPoint)centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(CGSize)arg2 proposedOrigin:(CGPoint)arg3;
- (id)indexesForElementsInRect:(CGRect)arg1 visibleBounds:(CGRect)arg2 numberOfItems:(long long)arg3;
- (CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(CGRect)arg2;
@end

