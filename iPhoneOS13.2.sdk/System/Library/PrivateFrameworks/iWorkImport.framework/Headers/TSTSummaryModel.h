//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSTGroupByChangeProtocol-Protocol.h>
#import <iWorkImport/TSTTableTileCreating-Protocol.h>

@class TSTCategoryAggregateFormulaOwner, TSTColumnRowUIDMap, TSTSummaryCellVendor, TSTTableDataStore, TSTTableInfo;

__attribute__((visibility("hidden")))
@interface TSTSummaryModel : TSPObject <TSTTableTileCreating, TSTGroupByChangeProtocol>
{
    BOOL _needsFormulaReset;
    TSTTableDataStore *_dataStore;
    TSTColumnRowUIDMap *_columnRowUIDMap;
    TSTSummaryCellVendor *_summaryCellVendor;
    TSTCategoryAggregateFormulaOwner *_aggregateFormulaOwner;
    TSTTableInfo *_tableInfo;
    double _categoryColumnWidth;
    UUIDData_5fbc143e _aggregateFormulaOwnerUID;
    vector_b67dfe3a _summaryRowHeightList;
    vector_b67dfe3a _labelRowHeightList;
    vector_12bd641b _labelRowVisibilityList;
}

+ (unsigned char)categoryLevelForTableStyleArea:(NSUInteger)arg1;
+ (NSUInteger)tableStyleAreaForCategoryLevel:(unsigned char)arg1 isLabel:(BOOL)arg2;
@property(nonatomic) BOOL needsFormulaReset; // @synthesize needsFormulaReset=_needsFormulaReset;
@property(readonly, nonatomic) vector_12bd641b labelRowVisibilityList; // @synthesize labelRowVisibilityList=_labelRowVisibilityList;
@property(readonly, nonatomic) vector_b67dfe3a labelRowHeightList; // @synthesize labelRowHeightList=_labelRowHeightList;
@property(readonly, nonatomic) vector_b67dfe3a summaryRowHeightList; // @synthesize summaryRowHeightList=_summaryRowHeightList;
@property(nonatomic) double categoryColumnWidth; // @synthesize categoryColumnWidth=_categoryColumnWidth;
@property(nonatomic) UUIDData_5fbc143e aggregateFormulaOwnerUID; // @synthesize aggregateFormulaOwnerUID=_aggregateFormulaOwnerUID;
@property(readonly, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
@property(readonly, nonatomic) TSTCategoryAggregateFormulaOwner *aggregateFormulaOwner; // @synthesize aggregateFormulaOwner=_aggregateFormulaOwner;
@property(readonly, nonatomic) TSTSummaryCellVendor *summaryCellVendor; // @synthesize summaryCellVendor=_summaryCellVendor;
@property(retain, nonatomic) TSTColumnRowUIDMap *columnRowUIDMap; // @synthesize columnRowUIDMap=_columnRowUIDMap;
@property(readonly, nonatomic) TSTTableDataStore *dataStore; // @synthesize dataStore=_dataStore;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)description;
- (void)copyPasteboardCustomFormatsFromTableModel:(id)arg1;
- (void)makePasteboardCustomFormatList;
- (void)reassignPasteboardCustomFormatKeys;
- (void)addPasteboardCustomFormatsToDocumentAndUpdateCells;
- (void)didChangeGroupByStructure;
- (void)didRemoveRowUID:(const UUIDData_5fbc143e )arg1 fromGroup:(id)arg2;
- (void)didAddRowUID:(const UUIDData_5fbc143e )arg1 toGroup:(id)arg2;
- (void)didRemoveGroup:(id)arg1;
- (void)willRemoveGroup:(id)arg1;
- (void)didCreateGroup:(id)arg1;
- (void)endOfGroupingChangesBatch;
- (void)startOfGroupingChangesBatch;
- (void)runChange:(id)arg1 withSummaryChangeState:(id)arg2 migrationHelper:(id)arg3;
- (id)currentState;
- (void)setTextStyle:(id)arg1 forSummaryLabelAtLevel:(unsigned char)arg2;
- (void)setCellStyle:(id)arg1 forSummaryLabelAtLevel:(unsigned char)arg2;
- (id)textStyleOfSummaryLabelRowAtLevel:(unsigned char)arg1 isDefault:(out BOOL )arg2;
- (id)textStyleOfSummaryRowAtLevel:(unsigned char)arg1 isDefault:(out BOOL )arg2;
- (id)cellStyleOfSummaryLabelRowAtLevel:(unsigned char)arg1 isDefault:(out BOOL )arg2;
- (id)cellStyleOfSummaryRowAtLevel:(unsigned char)arg1 isDefault:(out BOOL )arg2;
- (NSUInteger)labelRowVisibilityAtCategoryLevel:(unsigned char)arg1;
- (void)setLabelRowVisibility:(NSUInteger)arg1 atCategoryLevel:(unsigned char)arg2;
- (double)labelRowHeightAtCategoryLevel:(unsigned char)arg1;
- (void)setLabelRowHeight:(double)arg1 atCategoryLevel:(unsigned char)arg2;
- (double)summaryRowHeightAtCategoryLevel:(unsigned char)arg1;
- (void)setSummaryRowHeight:(double)arg1 atCategoryLevel:(unsigned char)arg2;
// - (id)textStyleAtCellCoord:(struct TSUModelCellCoord)arg1 isDefault:(out BOOL )arg2;
// - (id)cellStyleAtCellCoord:(struct TSUModelCellCoord)arg1 isDefault:(out BOOL )arg2;
// - (id)formatAtCellCoord:(struct TSUModelCellCoord)arg1 formatIsExplicitOut:(BOOL )arg2;
// - (id)defaultCellStyleForCellCoord:(struct TSUModelCellCoord)arg1;
// - (id)defaultTextStyleForCellCoord:(struct TSUModelCellCoord)arg1;
// - (id)cellStyleForCellWithEmptyStyleAtCellCoord:(struct TSUModelCellCoord)arg1 isDefault:(out BOOL )arg2;
// - (id)textStyleForCellWithEmptyStyleAtCellCoord:(struct TSUModelCellCoord)arg1 isDefault:(out BOOL )arg2;
// - (id)textStyleOfRowAtIndex:(struct TSUModelRowIndex)arg1 isDefault:(out BOOL )arg2;
// - (id)cellStyleOfRowAtIndex:(struct TSUModelRowIndex)arg1 isDefault:(out BOOL )arg2;
// - (id)characterFillAtCellCoord:(struct TSUModelCellCoord)arg1 optionalCell:(id)arg2;
// - (id)textStyleAtBaseCellCoord:(struct TSUModelCellCoord)arg1 isDefault:(out BOOL )arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)enumerateDataStoreCellsWithBlock:(CDUnknownBlockType)arg1;
- (id)newCell;
// @property(readonly, nonatomic) struct TSUModelColumnIndex numberOfColumns;
// @property(readonly, nonatomic) struct TSUModelRowIndex numberOfRows;
- (NSUInteger)numberOfPopulatedCells;
// - (id)metadataForRowIndex:(struct TSUModelRowIndex)arg1 hidingAction:(unsigned char)arg2;
- (id)allRichTextStorages;
// - (struct TSUModelCellRect)range;
// - (BOOL)cellExistsAtCellCoord:(struct TSUModelCellCoord)arg1;
// - (id)stringAtCellCoord:(struct TSUModelCellCoord)arg1 optionalCell:(id)arg2;
- (void)setAggregateType:(unsigned char)arg1 forColumnUID:(const UUIDData_5fbc143e )arg2 atGroupLevel:(unsigned char)arg3;
- (void)removeRows:(NSRange *)arg1;
- (void)removeColumnsAtSummaryIndexes:(id)arg1;
// - (int)insertColumnsAtIndex:(struct TSUModelColumnIndex)arg1 metadatas:(id)arg2;
- (int)setFormulaResultCellsWithCellMap:(id)arg1;
// - (int)setCell:(id)arg1 atCellUID:(const struct TSTCellUID )arg2;
- (void)setStorageParentToInfo:(id)arg1;
- (void)registerAllFormulasWithCalculationEngine:(id)arg1 wasCrossDocumentPaste:(BOOL)arg2;
- (void)upgradeDuringDocumentUpgradeIfNeeded:(NSUInteger)arg1 tableInfo:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (unsigned int)_appendRowWithUID:(const UUIDData_5fbc143e )arg1;
- (unsigned short)_appendColumnWithUID:(const UUIDData_5fbc143e )arg1;
- (void)resetWithForce:(BOOL)arg1;
- (void)reset;
- (void)setupReceiver;
- (id)initWithContext:(id)arg1 tableInfo:(id)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithTableInfo:(id)arg1;
// - (int)getCell:(id)arg1 atCellCoord:(struct TSUModelCellCoord)arg2;
// - (BOOL)hasFormulaAtCellCoord:(struct TSUModelCellCoord)arg1;
// - (struct TSCEFormula )formulaAtCellCoord:(struct TSUModelCellCoord)arg1;

@end

