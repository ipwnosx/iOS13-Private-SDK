//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PXGItemsLayout;

@protocol PXGItemsLayoutDelegate <NSObject>

@optional
// - (void)itemsLayout:(PXGItemsLayout *)arg1 updateTagsInSpriteInfos:(CDStruct_9d1ebe49 )arg2 forItemsInRange:(NSRange *)arg3;
- (CGRect)itemsLayout:(PXGItemsLayout *)arg1 bestCropRectForItem:(long long)arg2 withAspectRatio:(double)arg3;
- (double)itemsLayout:(PXGItemsLayout *)arg1 aspectRatioForItem:(long long)arg2;
- (long long)itemsLayout:(PXGItemsLayout *)arg1 itemForObjectReference:(id)arg2;
@end

