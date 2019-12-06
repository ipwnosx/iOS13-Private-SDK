//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SKUIItem, SKUIItemCellLayout, SKUIItemCollectionController, SKUIScreenshot, UIImage;

@protocol SKUIItemCollectionDelegate <NSObject>
- (NSRange *)visibleItemRangeForItemCollectionController:(SKUIItemCollectionController *)arg1;
- (NSRange *)itemCollectionController:(SKUIItemCollectionController *)arg1 itemPageRangeForOffset:(CGPoint)arg2;
- (SKUIItemCellLayout *)itemCollectionController:(SKUIItemCollectionController *)arg1 cellLayoutForItemIndex:(long long)arg2;

@optional
- (BOOL)shouldCacheAheadWhenIdleForItemCollectionController:(SKUIItemCollectionController *)arg1;
- (SKUIScreenshot *)itemCollectionController:(SKUIItemCollectionController *)arg1 screenshotForItem:(SKUIItem *)arg2;
- (void)itemCollectionController:(SKUIItemCollectionController *)arg1 applyScreenshotImage:(UIImage *)arg2 toCellLayout:(SKUIItemCellLayout *)arg3;
@end

