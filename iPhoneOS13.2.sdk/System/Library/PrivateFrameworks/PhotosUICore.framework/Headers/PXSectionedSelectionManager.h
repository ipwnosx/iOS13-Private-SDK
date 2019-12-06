//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class PXMutableIndexPathSet, PXSectionedDataSource, PXSectionedDataSourceManager, PXSelectionSnapshot;

@interface PXSectionedSelectionManager : PXObservable <PXSectionedDataSourceManagerObserver>
{
   struct {
        BOOL selectionSnapshot;
    } _needsUpdateFlags;
    PXSectionedDataSourceManager *_dataSourceManager;
    PXSelectionSnapshot *_selectionSnapshot;
    PXSectionedDataSource *_dataSource;
    PXMutableIndexPathSet *_selectedIndexPaths;
//    struct PXSimpleIndexPath _cursorIndexPath;
}

// property(nonatomic, setter=_setCursorIndexPath:) struct PXSimpleIndexPath cursorIndexPath; // @synthesize cursorIndexPath=_cursorIndexPath;
@property(retain, nonatomic, setter=_setSelectedIndexPaths:) PXMutableIndexPathSet *selectedIndexPaths; // @synthesize selectedIndexPaths=_selectedIndexPaths;
@property(retain, nonatomic, setter=_setDataSource:) PXSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic, setter=_setSelectionSnapshot:) PXSelectionSnapshot *selectionSnapshot; // @synthesize selectionSnapshot=_selectionSnapshot;
@property(readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
//  (void)setCursorIndexPath:(struct PXSimpleIndexPath)arg1;
//  (void)setSelectedIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)setSelectedIndexPaths:(id)arg1;
- (void)deselectAll;
- (void)selectAllItems;
- (void)setSelectedState:(BOOL)arg1 forIndexPathSet:(id)arg2;
//  (void)setSelectedState:(BOOL)arg1 forIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)_updateSelectionSnapshotIfNeeded;
- (void)_invalidateSelectionSnapshot;
- (void)_updateIfNeeded;
- (void)_makeSimpleModificationToSelectedIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_setDataSource:(id)arg1 withChangeHistory:(id)arg2;
- (void)didPerformChanges;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1;
- (void)selectNonCopiedAssetsWithImportStatusManager:(id)arg1;

@end

