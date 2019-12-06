//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUISwooshViewController.h>

#import <StoreKitUI/SKUIEmbeddedMediaViewDelegate-Protocol.h>

@class SKUISwooshPageComponent, SKUISwooshView, UICollectionView;
@protocol SKUIGallerySwooshViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIGallerySwooshViewController : SKUISwooshViewController <SKUIEmbeddedMediaViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_collectionView;
    BOOL _delegateWantsWillDisplay;
    SKUISwooshPageComponent *_gallerySwoosh;
    double _itemHeight;
    SKUISwooshView *_swooshView;
}

@property(readonly, nonatomic) SKUISwooshPageComponent *gallerySwoosh; // @synthesize gallerySwoosh=_gallerySwoosh;
// - (void).cxx_destruct;
- (id)_newViewWithMediaComponent:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)loadView;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
@property(nonatomic) __weak id <SKUIGallerySwooshViewControllerDelegate> delegate; // @dynamic delegate;
- (id)indexPathsForVisibleItems;
- (void)setColorScheme:(id)arg1;
- (void)performActionForItemAtIndex:(long long)arg1 animated:(BOOL)arg2;
- (id)artworkForItemAtIndex:(long long)arg1;
- (id)initWithGallerySwoosh:(id)arg1;

@end

