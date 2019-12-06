//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXTilingLayout.h>

@class PXCollectionTileLayoutTemplate, PXIndexPathSet, PXMemoriesFeedDataSource, PXMemoriesSpec, PXSectionedLayoutSnapshot;
@protocol PXMemoriesFeedTilingLayoutDelegate;

@interface PXMemoriesFeedTilingLayout : PXTilingLayout
{
   struct {
        BOOL contentsRectForItemAtIndexPathForAspectRatio;
        BOOL titleFontNameForItemAtIndexPath;
    } _delegateRespondsTo;
    PXMemoriesSpec *_spec;
    PXIndexPathSet *_selectedMemoryIndexPaths;
    id <PXMemoriesFeedTilingLayoutDelegate> _delegate;
    PXSectionedLayoutSnapshot *_layoutSnapshot;
    PXCollectionTileLayoutTemplate *__tileLayoutTemplate;
//    struct PXSimpleIndexPath _highlightedMemoryIndexPath;
}

@property(readonly, nonatomic) PXCollectionTileLayoutTemplate *_tileLayoutTemplate; // @synthesize _tileLayoutTemplate=__tileLayoutTemplate;
@property(readonly, nonatomic) PXSectionedLayoutSnapshot *layoutSnapshot; // @synthesize layoutSnapshot=_layoutSnapshot;
@property(nonatomic) __weak id <PXMemoriesFeedTilingLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXIndexPathSet *selectedMemoryIndexPaths; // @synthesize selectedMemoryIndexPaths=_selectedMemoryIndexPaths;
// property(nonatomic) struct PXSimpleIndexPath highlightedMemoryIndexPath; // @synthesize highlightedMemoryIndexPath=_highlightedMemoryIndexPath;
@property(retain, nonatomic) PXMemoriesSpec *spec; // @synthesize spec=_spec;
// - (void).cxx_destruct;
- (void)_invalidateSelectionTilesWithTag:(id)arg1;
//  (CGRect)_contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg1 forAspectRatio:(double)arg2;
- (long long)_itemKindForTileKind:(long long)arg1;
//  (NSUInteger)_zPositionForTileWithIdentifier:(struct PXTileIdentifier)arg1;
//  (id)_titleFontNameForMemoryAtIndexPath:(struct PXSimpleIndexPath)arg1;
//  (id)_viewSpecForTileWithIdentifier:(struct PXTileIdentifier)arg1 boundingSize:(CGSize)arg2;
- (void)_addTileWithKind:(long long)arg1 entryIndex:(NSUInteger)arg2 memoryIndex:(NSUInteger)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_enumerateTilesInLayoutItem:(id)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
//  (struct PXTileIdentifier)tileIdentifierAtIndexPath:(struct PXSimpleIndexPath)arg1 withTileKind:(long long)arg2;
//  (long long)tileKindForTileIdentifier:(struct PXTileIdentifier)arg1;
//  (long long)dataSourceIdentifierForTileIdentifier:(struct PXTileIdentifier)arg1;
//  (struct PXSimpleIndexPath)indexPathForTileIdentifier:(struct PXTileIdentifier)arg1;
- (id)indexPathsForMemoriesInRect:(CGRect)arg1;
//  (struct PXSimpleIndexPath)indexPathForMemoryAtPoint:(CGPoint)arg1;
@property(readonly, nonatomic) PXMemoriesFeedDataSource *dataSource;
//  (BOOL)getGeometry:(struct PXTileGeometry )arg1 group:(NSUInteger )arg2 userData:(id )arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)prepareLayout;
- (void)setReferenceSize:(CGSize)arg1;
- (CGRect)contentBounds;
- (id)init;
- (id)initWithSpec:(id)arg1 layoutSnapshot:(id)arg2;

@end

