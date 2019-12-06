//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <StoreKitUI/SKUIItemCollectionDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableIndexSet, NSOperationQueue, SKUIClientContext, SKUIItemArtworkContext, SKUIItemCollectionController, SKUIStyledImageDataConsumer, SKUIUber, UICollectionView, UIImage;
@protocol SKUIItemGridDelegate;

@interface SKUIItemGridViewController : UIViewController <SKUIItemCollectionDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_collectionView;
    NSMutableIndexSet *_hiddenIconIndexSet;
    SKUIItemCollectionController *_itemCollectionController;
    UIImage *_placeholderImage;
    NSMutableIndexSet *_selectedItemIndexSet;
    NSMutableArray *_items;
    double _rowHeight;
    SKUIClientContext *_clientContext;
    id <SKUIItemGridDelegate> _delegate;
    NSOperationQueue *_operationQueue;
    SKUIUber *_uber;
    CGSize _imageBoundingSize;
}

@property(retain, nonatomic) SKUIUber *uber; // @synthesize uber=_uber;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) CGSize imageBoundingSize; // @synthesize imageBoundingSize=_imageBoundingSize;
@property(nonatomic) __weak id <SKUIItemGridDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
// - (void).cxx_destruct;
- (id)_itemCollectionController;
- (void)_reloadLayout;
- (id)_collectionViewLayout;
- (id)_collectionView;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)itemCollectionView:(id)arg1 didPerformEditActionForCell:(id)arg2;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (NSRange *)visibleItemRangeForItemCollectionController:(id)arg1;
- (NSRange *)itemCollectionController:(id)arg1 itemPageRangeForOffset:(CGPoint)arg2;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (NSUInteger)supportedInterfaceOrientations;
- (void)loadView;
- (void)unhideIcons;
- (void)setItemCellClass:(Class)arg1;
@property(retain, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer;
@property(nonatomic) CGPoint contentOffset;
@property(retain, nonatomic) SKUIItemArtworkContext *artworkContext;
- (void)removeItemsAtIndexes:(id)arg1;
- (id)popIconImageViewForItemAtIndex:(long long)arg1;
- (void)loadNextPageOfArtworkWithReason:(long long)arg1;
- (void)dealloc;
- (id)initWithRowHeight:(double)arg1;

@end

