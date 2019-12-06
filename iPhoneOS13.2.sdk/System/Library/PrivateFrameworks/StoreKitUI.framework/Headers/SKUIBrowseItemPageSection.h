//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIBrowseItemComponent, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIBrowseItemPageSection : SKUIStorePageSection
{
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIBrowseItemComponent *_component;
}

@property(readonly, nonatomic) SKUIBrowseItemComponent *pageComponent; // @synthesize pageComponent=_component;
// - (void).cxx_destruct;
- (id)_imageForImageViewElement:(id)arg1 styleColor:(id)arg2;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (long long)numberOfCells;
- (UIEdgeInsets)sectionContentInset;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)initWithPageComponent:(id)arg1;

@end

