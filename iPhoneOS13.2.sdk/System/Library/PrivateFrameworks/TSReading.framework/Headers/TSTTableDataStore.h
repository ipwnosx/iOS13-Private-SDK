//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPContainedObject.h>

@class TSPLazyReference, TSTCustomFormatList, TSTMergeRegionMap, TSTTableHeaderStorage, TSTTileIDKeyDict;

@interface TSTTableDataStore : TSPContainedObject
{
//     struct TSTTableRBTreeNode_s mColumnTileIndex;
//     struct TSTTableRBTreeNode_s mRowTileIndex;
    TSTTileIDKeyDict *mTileStorage;
    TSTTableHeaderStorage *mRowHeaderStorage;
    TSPLazyReference *mColumnHeaderStorageReference;
    TSPLazyReference *mConditionalStyleSetTableReference;
    TSPLazyReference *mStringTableReference;
    TSPLazyReference *mStyleTableReference;
    TSPLazyReference *mFormulaTableReference;
    TSPLazyReference *mFormulaErrorTableReference;
    TSPLazyReference *mRichTextPayloadTableReference;
    TSPLazyReference *mFormatTableReference;
    TSPLazyReference *mMultipleChoiceListFormatTableReference;
    TSPLazyReference *mCommentStorageTableReference;
    TSTCustomFormatList *mPasteboardCustomFormatList;
    unsigned short mNextRowStripID;
    unsigned short mNextColumnStripID;
    TSTMergeRegionMap *mMergedCellRanges;
    unsigned int mCellCount;
    BOOL mCellCountValid;
    BOOL mDrawableIsBeingCopied;
    unsigned int mStorageVersion;
}

- (void)validate;
- (void)debugDump;
- (void)upgradeDataStoreCellStorage;
- (BOOL)needToUpgradeCellStorage;
- (void)setStorageParentToInfo:(id)arg1;
- (void)p_updateTileStorageToCurrentVersion;
- (void)setDrawableIsBeingCopied:(BOOL)arg1;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;

@end

