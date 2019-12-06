//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIMissingItemDelegate-Protocol.h>

@class NSMapTable, SKUIMissingItemLoader, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIBrickGridPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate>
{
    NSMapTable *_artworkRequests;
    double _baseHeight;
    double _columnWidth;
    NSMapTable *_editorialLayouts;
    SKUIMissingItemLoader *_missingItemLoader;
    long long _numberOfColumns;
    double _paddingHorizontal;
    double _paddingTop;
    UIImage *_placeholderImage;
}

// - (void).cxx_destruct;
- (id)_missingItemLoader;
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (void)_loadArtworkForBrick:(id)arg1 artworkLoader:(id)arg2 reason:(long long)arg3;
- (void)_enumerateVisibleBricksUsingBlock:(CDUnknownBlockType)arg1;
- (id)_editorialLayoutForBrick:(id)arg1;
- (UIEdgeInsets)_contentInsetsForColumnIndex:(long long)arg1 rowWidth:(double)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (long long)numberOfCells;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

@end

