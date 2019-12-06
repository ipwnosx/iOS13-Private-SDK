//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKCollectionViewDataSource.h>


@class NSArray, NSPredicate;

@interface GKBasicCollectionViewDataSource : GKCollectionViewDataSource <NSCopying>
{
    NSArray *_items;
    SEL _showAllAction;
    NSUInteger _pageSize;
    NSPredicate *_filterPredicate;
    NSRange * _preloadedRange;
}

@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(nonatomic) NSRange * preloadedRange; // @synthesize preloadedRange=_preloadedRange;
@property(nonatomic) NSUInteger pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) SEL showAllAction; // @synthesize showAllAction=_showAllAction;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)preloadImagesForItems:(id)arg1 startingAtIndex:(NSUInteger)arg2 loadBlock:(CDUnknownBlockType)arg3;
- (void)replaceItemsAtIndexes:(id)arg1 withItems:(id)arg2;
- (void)removeItemsAtIndexes:(id)arg1;
- (void)insertItems:(id)arg1 atIndexes:(id)arg2;
- (id)itemsAtIndexes:(id)arg1;
- (NSUInteger)countOfItems;
- (void)setItems:(id)arg1 animated:(BOOL)arg2 complete:(CDUnknownBlockType)arg3;
- (void)setItemsNoNotify:(id)arg1;
- (id)sectionTitle;
- (void)configureCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)indexPathsForItem:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (id)_gkDescriptionWithChildren:(int)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;

@end

