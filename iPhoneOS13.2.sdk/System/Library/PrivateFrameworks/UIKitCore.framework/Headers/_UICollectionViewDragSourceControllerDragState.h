//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath, NSMutableOrderedSet, NSPointerArray;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragSourceControllerDragState : NSObject
{
    NSMutableOrderedSet *_dataSourceIndexPathsOfDraggingItems;
    NSPointerArray *_dragItemsWithRebasableIndexPaths;
}

@property(retain, nonatomic) NSPointerArray *dragItemsWithRebasableIndexPaths; // @synthesize dragItemsWithRebasableIndexPaths=_dragItemsWithRebasableIndexPaths;
@property(retain, nonatomic) NSMutableOrderedSet *dataSourceIndexPathsOfDraggingItems; // @synthesize dataSourceIndexPathsOfDraggingItems=_dataSourceIndexPathsOfDraggingItems;
// - (void).cxx_destruct;
- (void)rebaseDataSourceIndexPathsWithUpdateMap:(id)arg1;
@property(readonly, nonatomic) NSArray *draggingDataSourceIndexPaths;
- (BOOL)isDraggingFromDataSourceIndexPath:(id)arg1;
- (id)dataSourceIndexPathForDragItem:(id)arg1 forCollectionView:(id)arg2;
- (void)setDataSourceIndexPath:(id)arg1 forDragItem:(id)arg2 collectionView:(id)arg3;
- (void)addDraggingDataSourceIndexPath:(id)arg1;
@property(readonly, nonatomic) NSIndexPath *dragFromDataSourceIndexPath;
- (id)description;
- (id)init;

@end

