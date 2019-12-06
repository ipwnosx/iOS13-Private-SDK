//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTTableHiddenRowColumnProviding-Protocol.h>
#import <iWorkImport/TSTTableInternalGeometryProviding-Protocol.h>
#import <iWorkImport/TSTTableMergeRangeProviding-Protocol.h>

@class NSIndexSet, NSMutableArray, NSMutableSet, NSPointerArray, NSString, TSDFill, TSDInfoGeometry, TSDLayoutGeometry, TSKChangeNotifier, TSTCellRegion, TSTCellSelection, TSTConcurrentMutableIndexSet, TSTDupContentCache, TSTFontInfoCache, TSTHiddenRowsColumnsCache, TSTLayout, TSTLayoutDynamicResizeInfo, TSTMergeRangeSortedSet, TSTRWRetainedPointerKeyDictionary, TSTStrokeDefaultVendor, TSTStrokeWidthCache, TSTTableInfo, TSTWPColumnCache, TSTWidthHeightCache, TSUColor, TSUWidthLimitedQueue, TSWPColumnStyle;
@protocol OS_dispatch_group, OS_dispatch_queue, TSTLayoutDynamicCellFillProtocol, TSTLayoutDynamicContentProtocol;

__attribute__((visibility("hidden")))
@interface TSTMasterLayout : NSObject <TSTTableHiddenRowColumnProviding, TSTTableInternalGeometryProviding, TSTTableMergeRangeProviding>
{
    double _tableDefaultFontHeightForArea[15];
    NSObject<OS_dispatch_group> *_layoutInFlight;
//     struct _opaque_pthread_rwlock_t _strokesRWLock;
//     struct _opaque_pthread_rwlock_t _contentRWLock;
    BOOL _inDynamicLayoutMode;
    BOOL _dynamicBandedFill;
    BOOL _dynamicBandedFillSetting;
    BOOL _dynamicRepResize;
    BOOL _dynamicResizingColumns;
    BOOL _dynamicResizingRows;
    BOOL _processHiddenRowsForExport;
    BOOL _tableNameEnabled;
    BOOL _headerColumnsFrozen;
    BOOL _headerRowsFrozen;
    BOOL _headerColumnsRepeat;
    BOOL _headerRowsRepeat;
    BOOL _tableNameHeightValid;
    BOOL _bandedFillIsValid;
    BOOL _useBandedFill;
    BOOL _tableDefaultFontHeightsAreValid;
    BOOL _emptyFilteredTable;
    BOOL _isGrouped;
    BOOL _dynamicRepressFrozenHeaderRows;
    BOOL _dynamicRepressFrozenHeaderColumns;
    unsigned int _maxConcurrentTasks;
    unsigned int _numCellsPerTask;
    int _tableEnvironment;
    int _tableRowsBehavior;
    int _dynamicColumnAdjustment;
    int _dynamicRowAdjustment;
    unsigned int _cachedNumberOfColumns;
    unsigned int _cachedNumberOfRows;
    unsigned int _cachedNumberOfHeaderColumns;
    unsigned int _cachedNumberOfHeaderRows;
    unsigned int _cachedNumberOfFooterRows;
    TSTTableInfo *_tableInfo;
    TSKChangeNotifier *_changeNotifier;
    TSTStrokeDefaultVendor *_strokesDefaultVendor;
    TSTWPColumnCache *_cellIDToWPColumnCache;
    TSTDupContentCache *_dupContentCache;
    TSTWPColumnCache *_tempWPColumnCache;
    TSTWidthHeightCache *_widthHeightCache;
    TSTHiddenRowsColumnsCache *_hiddenRowsColumnsCache;
    TSDFill *_bandedFillObject;
    double _dynamicAddOrRemoveColumnElementSize;
    double _dynamicAddOrRemoveRowElementSize;
    double _dynamicColumnTabSize;
    TSUColor *_dynamicFontColor;
    TSDInfoGeometry *_dynamicInfoGeometry;
    double _dynamicWidthResize;
    double _dynamicHeightResize;
    double _dynamicResizingColumnAdjustment;
    double _dynamicResizingRowAdjustment;
    double _dynamicRowTabSize;
    TSDLayoutGeometry *_dynamicSavedLayoutGeometry;
    TSTCellSelection *_dynamicSelection;
    double _dynamicTableNameResize;
//     struct TSUCellCoord _dynamicSuppressingConditionalStylesCellID;
    NSMutableArray *_changeDescriptors;
    TSTMergeRangeSortedSet *_mergeRanges;
    TSTFontInfoCache *_fontInfoCache;
    TSUWidthLimitedQueue *_layoutValidateQueue;
    TSUWidthLimitedQueue *_layoutMeasureQueue;
    NSObject<OS_dispatch_queue> *_layoutConcurrentQueue;
    NSPointerArray *_topRowStrokes;
    NSPointerArray *_bottomRowStrokes;
    NSPointerArray *_leftColumnStrokes;
    NSPointerArray *_rightColumnStrokes;
    TSTConcurrentMutableIndexSet *_spillStrokeColumns;
    TSTCellRegion *_cellRegionForClearedMergeStrokes;
    TSTStrokeWidthCache *_columnToStrokeWidthCache;
    TSTStrokeWidthCache *_rowToStrokeHeightCache;
    TSTRWRetainedPointerKeyDictionary *_paraStyleToHeightCache;
    double _cachedTableNameHeight;
    NSUInteger _cachedMaxNumberOfColumns;
    NSUInteger _cachedMaxNumberOfRows;
    NSMutableSet *_contentReadingThreads;
    NSMutableSet *_dynamicLayoutParticipants;
    TSTLayout *_dynamicLayout;
    id <TSTLayoutDynamicContentProtocol> _dynamicContentDelegate;
    long long _dynamicHidingRowsColsDirection;
    TSTLayoutDynamicResizeInfo *_dynamicResizeInfo;
    long long _dynamicRevealingRowsColsDirection;
    id <TSTLayoutDynamicCellFillProtocol> _dynamicCellFillDelegate;
    TSWPColumnStyle *_defaultColumnStyle;
//     struct TSUCellRect _dynamicFontColorCellRange;
//     struct TSUCellRect _dynamicResizingColumnRange;
//     struct TSUCellRect _dynamicResizingRowRange;
    CGSize _maximumPartitionSize;
//     struct TSUCellRect _dynamicHidingContent;
//     struct TSUCellRect _dynamicHidingRowsCols;
//     struct TSUCellRect _dynamicHidingText;
//     struct TSUCellRect _dynamicRemovingText;
//     struct TSUCellRect _dynamicRevealingRowsCols;
    CGRect _tableNameBounds;
}

+ (int)tableRowsBehaviorForTable:(id)arg1 andEnvironment:(int)arg2;
+ (double)effectiveTableNameHeightForTable:(id)arg1;
+ (CGSize)tableNameTextSize:(id)arg1;
+ (id)tableNameTextEngine:(id)arg1;
@property(readonly, nonatomic) TSWPColumnStyle *defaultColumnStyle; // @synthesize defaultColumnStyle=_defaultColumnStyle;
@property(retain, nonatomic) id <TSTLayoutDynamicCellFillProtocol> dynamicCellFillDelegate; // @synthesize dynamicCellFillDelegate=_dynamicCellFillDelegate;
@property(nonatomic) long long dynamicRevealingRowsColsDirection; // @synthesize dynamicRevealingRowsColsDirection=_dynamicRevealingRowsColsDirection;
// @property(nonatomic) struct TSUCellRect dynamicRevealingRowsCols; // @synthesize dynamicRevealingRowsCols=_dynamicRevealingRowsCols;
@property(retain, nonatomic) TSTLayoutDynamicResizeInfo *dynamicResizeInfo; // @synthesize dynamicResizeInfo=_dynamicResizeInfo;
@property(nonatomic) BOOL dynamicRepressFrozenHeaderColumns; // @synthesize dynamicRepressFrozenHeaderColumns=_dynamicRepressFrozenHeaderColumns;
@property(nonatomic) BOOL dynamicRepressFrozenHeaderRows; // @synthesize dynamicRepressFrozenHeaderRows=_dynamicRepressFrozenHeaderRows;
// @property(nonatomic) struct TSUCellRect dynamicRemovingText; // @synthesize dynamicRemovingText=_dynamicRemovingText;
// @property(nonatomic) struct TSUCellRect dynamicHidingText; // @synthesize dynamicHidingText=_dynamicHidingText;
@property(nonatomic) long long dynamicHidingRowsColsDirection; // @synthesize dynamicHidingRowsColsDirection=_dynamicHidingRowsColsDirection;
// @property(nonatomic) struct TSUCellRect dynamicHidingRowsCols; // @synthesize dynamicHidingRowsCols=_dynamicHidingRowsCols;
// @property(nonatomic) struct TSUCellRect dynamicHidingContent; // @synthesize dynamicHidingContent=_dynamicHidingContent;
@property(retain, nonatomic) id <TSTLayoutDynamicContentProtocol> dynamicContentDelegate; // @synthesize dynamicContentDelegate=_dynamicContentDelegate;
@property(retain, nonatomic) TSTLayout *dynamicLayout; // @synthesize dynamicLayout=_dynamicLayout;
@property(retain, nonatomic) NSMutableSet *dynamicLayoutParticipants; // @synthesize dynamicLayoutParticipants=_dynamicLayoutParticipants;
@property(nonatomic) BOOL isGrouped; // @synthesize isGrouped=_isGrouped;
@property(nonatomic) BOOL emptyFilteredTable; // @synthesize emptyFilteredTable=_emptyFilteredTable;
@property(retain, nonatomic) NSMutableSet *contentReadingThreads; // @synthesize contentReadingThreads=_contentReadingThreads;
@property(nonatomic) BOOL tableDefaultFontHeightsAreValid; // @synthesize tableDefaultFontHeightsAreValid=_tableDefaultFontHeightsAreValid;
@property(nonatomic) BOOL useBandedFill; // @synthesize useBandedFill=_useBandedFill;
@property(nonatomic) BOOL bandedFillIsValid; // @synthesize bandedFillIsValid=_bandedFillIsValid;
@property(nonatomic) NSUInteger cachedMaxNumberOfRows; // @synthesize cachedMaxNumberOfRows=_cachedMaxNumberOfRows;
@property(nonatomic) NSUInteger cachedMaxNumberOfColumns; // @synthesize cachedMaxNumberOfColumns=_cachedMaxNumberOfColumns;
@property(nonatomic) unsigned int cachedNumberOfFooterRows; // @synthesize cachedNumberOfFooterRows=_cachedNumberOfFooterRows;
@property(nonatomic) unsigned int cachedNumberOfHeaderRows; // @synthesize cachedNumberOfHeaderRows=_cachedNumberOfHeaderRows;
@property(nonatomic) unsigned int cachedNumberOfHeaderColumns; // @synthesize cachedNumberOfHeaderColumns=_cachedNumberOfHeaderColumns;
@property(nonatomic) unsigned int cachedNumberOfRows; // @synthesize cachedNumberOfRows=_cachedNumberOfRows;
@property(nonatomic) unsigned int cachedNumberOfColumns; // @synthesize cachedNumberOfColumns=_cachedNumberOfColumns;
@property(nonatomic) BOOL tableNameHeightValid; // @synthesize tableNameHeightValid=_tableNameHeightValid;
@property(nonatomic) double cachedTableNameHeight; // @synthesize cachedTableNameHeight=_cachedTableNameHeight;
@property(nonatomic) CGRect tableNameBounds; // @synthesize tableNameBounds=_tableNameBounds;
@property(nonatomic) BOOL headerRowsRepeat; // @synthesize headerRowsRepeat=_headerRowsRepeat;
@property(nonatomic) BOOL headerColumnsRepeat; // @synthesize headerColumnsRepeat=_headerColumnsRepeat;
@property(nonatomic) BOOL headerRowsFrozen; // @synthesize headerRowsFrozen=_headerRowsFrozen;
@property(nonatomic) BOOL headerColumnsFrozen; // @synthesize headerColumnsFrozen=_headerColumnsFrozen;
@property(retain, nonatomic) TSTRWRetainedPointerKeyDictionary *paraStyleToHeightCache; // @synthesize paraStyleToHeightCache=_paraStyleToHeightCache;
@property(retain, nonatomic) TSTStrokeWidthCache *rowToStrokeHeightCache; // @synthesize rowToStrokeHeightCache=_rowToStrokeHeightCache;
@property(retain, nonatomic) TSTStrokeWidthCache *columnToStrokeWidthCache; // @synthesize columnToStrokeWidthCache=_columnToStrokeWidthCache;
@property(retain, nonatomic) TSTCellRegion *cellRegionForClearedMergeStrokes; // @synthesize cellRegionForClearedMergeStrokes=_cellRegionForClearedMergeStrokes;
@property(retain, nonatomic) TSTConcurrentMutableIndexSet *spillStrokeColumns; // @synthesize spillStrokeColumns=_spillStrokeColumns;
@property(retain, nonatomic) NSPointerArray *rightColumnStrokes; // @synthesize rightColumnStrokes=_rightColumnStrokes;
@property(retain, nonatomic) NSPointerArray *leftColumnStrokes; // @synthesize leftColumnStrokes=_leftColumnStrokes;
@property(retain, nonatomic) NSPointerArray *bottomRowStrokes; // @synthesize bottomRowStrokes=_bottomRowStrokes;
@property(retain, nonatomic) NSPointerArray *topRowStrokes; // @synthesize topRowStrokes=_topRowStrokes;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *layoutConcurrentQueue; // @synthesize layoutConcurrentQueue=_layoutConcurrentQueue;
@property(retain, nonatomic) TSUWidthLimitedQueue *layoutMeasureQueue; // @synthesize layoutMeasureQueue=_layoutMeasureQueue;
@property(retain, nonatomic) TSUWidthLimitedQueue *layoutValidateQueue; // @synthesize layoutValidateQueue=_layoutValidateQueue;
@property(retain, nonatomic) TSTFontInfoCache *fontInfoCache; // @synthesize fontInfoCache=_fontInfoCache;
@property(nonatomic) BOOL tableNameEnabled; // @synthesize tableNameEnabled=_tableNameEnabled;
@property(nonatomic) CGSize maximumPartitionSize; // @synthesize maximumPartitionSize=_maximumPartitionSize;
@property(nonatomic) BOOL processHiddenRowsForExport; // @synthesize processHiddenRowsForExport=_processHiddenRowsForExport;
@property(retain, nonatomic) TSTMergeRangeSortedSet *mergeRanges; // @synthesize mergeRanges=_mergeRanges;
@property(retain, nonatomic) NSMutableArray *changeDescriptors; // @synthesize changeDescriptors=_changeDescriptors;
// @property(nonatomic) struct TSUCellCoord dynamicSuppressingConditionalStylesCellID; // @synthesize dynamicSuppressingConditionalStylesCellID=_dynamicSuppressingConditionalStylesCellID;
@property(nonatomic) double dynamicTableNameResize; // @synthesize dynamicTableNameResize=_dynamicTableNameResize;
@property(retain, nonatomic) TSTCellSelection *dynamicSelection; // @synthesize dynamicSelection=_dynamicSelection;
@property(copy, nonatomic) TSDLayoutGeometry *dynamicSavedLayoutGeometry; // @synthesize dynamicSavedLayoutGeometry=_dynamicSavedLayoutGeometry;
@property(nonatomic) double dynamicRowTabSize; // @synthesize dynamicRowTabSize=_dynamicRowTabSize;
@property(nonatomic) int dynamicRowAdjustment; // @synthesize dynamicRowAdjustment=_dynamicRowAdjustment;
@property(nonatomic) double dynamicResizingRowAdjustment; // @synthesize dynamicResizingRowAdjustment=_dynamicResizingRowAdjustment;
// @property(nonatomic) struct TSUCellRect dynamicResizingRowRange; // @synthesize dynamicResizingRowRange=_dynamicResizingRowRange;
@property(nonatomic) BOOL dynamicResizingRows; // @synthesize dynamicResizingRows=_dynamicResizingRows;
@property(nonatomic) double dynamicResizingColumnAdjustment; // @synthesize dynamicResizingColumnAdjustment=_dynamicResizingColumnAdjustment;
// @property(nonatomic) struct TSUCellRect dynamicResizingColumnRange; // @synthesize dynamicResizingColumnRange=_dynamicResizingColumnRange;
@property(nonatomic) BOOL dynamicResizingColumns; // @synthesize dynamicResizingColumns=_dynamicResizingColumns;
@property(nonatomic) double dynamicHeightResize; // @synthesize dynamicHeightResize=_dynamicHeightResize;
@property(nonatomic) double dynamicWidthResize; // @synthesize dynamicWidthResize=_dynamicWidthResize;
@property(retain, nonatomic) TSDInfoGeometry *dynamicInfoGeometry; // @synthesize dynamicInfoGeometry=_dynamicInfoGeometry;
@property(nonatomic) BOOL dynamicRepResize; // @synthesize dynamicRepResize=_dynamicRepResize;
// @property(nonatomic) struct TSUCellRect dynamicFontColorCellRange; // @synthesize dynamicFontColorCellRange=_dynamicFontColorCellRange;
@property(retain, nonatomic) TSUColor *dynamicFontColor; // @synthesize dynamicFontColor=_dynamicFontColor;
@property(nonatomic) double dynamicColumnTabSize; // @synthesize dynamicColumnTabSize=_dynamicColumnTabSize;
@property(nonatomic) int dynamicColumnAdjustment; // @synthesize dynamicColumnAdjustment=_dynamicColumnAdjustment;
@property(nonatomic) BOOL dynamicBandedFillSetting; // @synthesize dynamicBandedFillSetting=_dynamicBandedFillSetting;
@property(nonatomic) BOOL dynamicBandedFill; // @synthesize dynamicBandedFill=_dynamicBandedFill;
@property(nonatomic) double dynamicAddOrRemoveRowElementSize; // @synthesize dynamicAddOrRemoveRowElementSize=_dynamicAddOrRemoveRowElementSize;
@property(nonatomic) double dynamicAddOrRemoveColumnElementSize; // @synthesize dynamicAddOrRemoveColumnElementSize=_dynamicAddOrRemoveColumnElementSize;
@property(nonatomic, getter=isInDynamicLayoutMode) BOOL inDynamicLayoutMode; // @synthesize inDynamicLayoutMode=_inDynamicLayoutMode;
@property(nonatomic) int tableRowsBehavior; // @synthesize tableRowsBehavior=_tableRowsBehavior;
@property(nonatomic) int tableEnvironment; // @synthesize tableEnvironment=_tableEnvironment;
@property(retain, nonatomic) TSDFill *bandedFillObject; // @synthesize bandedFillObject=_bandedFillObject;
@property(nonatomic) unsigned int numCellsPerTask; // @synthesize numCellsPerTask=_numCellsPerTask;
@property(nonatomic) unsigned int maxConcurrentTasks; // @synthesize maxConcurrentTasks=_maxConcurrentTasks;
@property(retain, nonatomic) TSTHiddenRowsColumnsCache *hiddenRowsColumnsCache; // @synthesize hiddenRowsColumnsCache=_hiddenRowsColumnsCache;
@property(retain, nonatomic) TSTWidthHeightCache *widthHeightCache; // @synthesize widthHeightCache=_widthHeightCache;
@property(retain, nonatomic) TSTWPColumnCache *tempWPColumnCache; // @synthesize tempWPColumnCache=_tempWPColumnCache;
@property(retain, nonatomic) TSTDupContentCache *dupContentCache; // @synthesize dupContentCache=_dupContentCache;
@property(retain, nonatomic) TSTWPColumnCache *cellIDToWPColumnCache; // @synthesize cellIDToWPColumnCache=_cellIDToWPColumnCache;
@property(retain, nonatomic) TSTStrokeDefaultVendor *strokesDefaultVendor; // @synthesize strokesDefaultVendor=_strokesDefaultVendor;
@property(nonatomic) __weak TSKChangeNotifier *changeNotifier; // @synthesize changeNotifier=_changeNotifier;
@property(nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
// - (void).cxx_destruct;
- (void)readSafelyUsingBlock:(CDUnknownBlockType)arg1;
- (void)modifySafelyUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)isLastVisibleBodyRowCategorySummaryOrLabelRow;
- (BOOL)isCategoryLastSummaryRowCollapsed;
- (id)indexesForCategoryColumnsInRegion:(id)arg1;
- (id)indexesForCategoryColumns;
- (id)indexesForSummaryAndLabelRows;
- (id)indexesForLabelRowsInRegion:(id)arg1;
- (id)indexesForLabelRows;
- (id)indexesForSummaryRows;
- (id)indexesForSummaryRowsInRegion:(id)arg1;
// - (BOOL)isCategoryGroupValueLabelCell:(struct TSUCellCoord)arg1;
// - (BOOL)isCategoryGroupValueCell:(struct TSUCellCoord)arg1;
// - (BOOL)isCategoryColumnUneditableCell:(struct TSUCellCoord)arg1;
// - (BOOL)isCategoryLabelCell:(struct TSUCellCoord)arg1;
// - (BOOL)isCategorySummaryCell:(struct TSUCellCoord)arg1;
- (BOOL)isCategoryColumn:(unsigned short)arg1;
- (BOOL)isCategorySummaryRowCollapsed:(unsigned int)arg1;
- (unsigned char)categoryGroupLevelAtLabelRow:(unsigned int)arg1;
- (unsigned char)categoryGroupLevelAtSummaryRow:(unsigned int)arg1;
- (BOOL)isCategorySummaryOrLabelRow:(unsigned int)arg1;
- (BOOL)isCategorySummaryRow:(unsigned int)arg1;
- (unsigned int)numberOfCategoryLevels;
- (BOOL)isCategorized;
- (double)fontHeightOfParagraphStyle:(id)arg1;
// - (UIEdgeInsets)defaultPaddingForCellID:(struct TSUCellCoord)arg1;
// - (UIEdgeInsets)paddingForCellID:(struct TSUCellCoord)arg1;
- (UIEdgeInsets)edgeInsetsFromPadding:(id)arg1;
// - (id)formattedDataParagraphStylePropertyMapForCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
// - (id)newTextEngineForCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 textStyle:(id)arg3;
// - (id)newTextEngineForCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 textStyle:(id)arg3 naturalAlignment:(int)arg4 cellDirection:(int)arg5;
// - (id)resolvedTextStyleForCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 textStyle:(id)arg3 outNaturalAlignment:(int )arg4 outCellDirection:(int )arg5;
- (id)p_validationBundleForRegionToValidate:(id)arg1 rowsNeedingFittingInfo:(id)arg2;
- (id)unwrappedFittingWidthsForColumnsInCellRegion:(id)arg1;
- (double)unwrappedFittingWidthsForColumnInCellRegionWorker:(id)arg1;
- (void)waitForLayoutToComplete:(id)arg1;
- (void)processLayoutTask:(id)arg1 validationBundle:(id)arg2;
- (void)measureWithLayoutState:(id)arg1;
// - (void)queueCellForValidation:(struct TSUCellRect)arg1 cell:(id)arg2 textStyle:(id)arg3 modelMergeRange:(struct TSUCellRect)arg4 wrap:(BOOL)arg5 verticalAlignment:(int)arg6 padding:(id)arg7 prop:(BOOL)arg8 layoutCacheFlags:(int)arg9 validationBundle:(id)arg10 layoutTask:(id)arg11;
// - (id)validateCellForDrawing:(struct TSUCellCoord)arg1 cell:(id)arg2 contents:(id)arg3 wrap:(BOOL)arg4 verticalAlignment:(int)arg5 padding:(id)arg6 layoutCacheFlags:(int)arg7 pageNumber:(NSUInteger)arg8 pageCount:(NSUInteger)arg9;
- (void)validateFittingWidthsForRegion:(id)arg1;
- (id)validateFittingInfoForChangeDescriptors:(id)arg1 rowsNeedingFittingInfo:(id)arg2;
- (BOOL)p_containsGradientThatFillsContainerInStyle:(id)arg1;
- (BOOL)p_containsGradientFillThatFillsContainerInCell:(id)arg1 cellContents:(id)arg2;
- (BOOL)p_deferredMergeExpansionForChangeDescriptorType:(int)arg1;
- (id)p_validationFittingForChangeDescriptorType:(int)arg1 regionFromChangeDescriptor:(id)arg2 currentRegionToValidate:(id)arg3;
- (id)p_validationFittingCellRegionForStrokesChanged:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForRangeMergeUnmerge:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForRowsMovedFrom:(id)arg1 toRowIndex:(unsigned int)arg2 currentRegionToValidate:(id)arg3;
- (id)p_validationFittingCellRegionForRowsInserted:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForRowsDeleted:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForColumnsMovedFrom:(id)arg1 toColumnIndex:(unsigned short)arg2 currentRegionToValidate:(id)arg3;
- (id)p_validationFittingCellRegionForColumnsVisibility:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForColumnsInserted:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForColumnsDeleted:(id)arg1 currentRegionToValidate:(id)arg2;
// - (void)p_validateFittingInfoForEmptyMergeRange:(struct TSUCellRect)arg1;
// - (struct TSUCellCoord)p_validateFittingInfoForEmptyCellsBetween:(struct TSUCellCoord)arg1 andCellID:(struct TSUCellCoord)arg2 inRange:(struct TSUCellRect)arg3 widthHeightCollection:(id)arg4;
// - (void)p_validateFittingInfoForEmptyCellsOnSingleRowBetween:(struct TSUCellCoord)arg1 andEndCellID:(struct TSUCellCoord)arg2 widthHeightCollection:(id)arg3;
// - (void)validateFittingInfoWithCellRange:(struct TSUCellRect)arg1 validationBundle:(id)arg2;
// - (void)validateFittingInfoWithCellRangeWorker:(struct TSUCellRect)arg1 widthHeightCollection:(id)arg2 validationBundle:(id)arg3;
// - (void)validateFittingInfoForCell:(id)arg1 cellID:(struct TSUCellCoord)arg2 mergeRange:(struct TSUCellRect)arg3 setFitting:(BOOL)arg4 layoutTask:(id)arg5 widthHeightCollection:(id)arg6 validationBundle:(id)arg7;
- (void)validateRowVisibility:(id)arg1;
- (void)updateWHCForMergeRanges;
- (void)p_validateCellIDToWPColumnCacheForChangeDescriptors:(id)arg1;
- (void)validateChangeDescriptorQueue;
- (void)validateMasterLayoutForChangeDescriptors:(id)arg1;
- (void)validate;
- (void)addChangeDescriptor:(id)arg1;
// - (void)addChangeDescriptorWithType:(int)arg1 andCellRange:(struct TSUCellRect)arg2 andStrokeRange:(struct TSUCellRect)arg3;
// - (void)addChangeDescriptorWithType:(int)arg1 andCellRange:(struct TSUCellRect)arg2;
- (void)validateDynamicResizeInfo;
- (void)invalidateDynamicResizeInfo;
- (void)updateDynamicResizeInfo:(id)arg1;
- (void)captureDynamicResizeInfo;
// - (BOOL)isDynamicallyChangingFontColorOfCellID:(struct TSUCellCoord)arg1;
- (BOOL)isDynamicallyChangingContent;
- (BOOL)isDynamicallyChangingCellFill;
// - (void)updateDynamicFontColor:(id)arg1 andRange:(struct TSUCellRect)arg2;
- (BOOL)isDynamicallyRepressingFrozenHeaderColumns;
- (BOOL)isDynamicallyRepressingFrozenHeaderRows;
- (BOOL)isDynamicallySettingBandedFill;
- (BOOL)isDynamicallyRowTabResizing;
- (BOOL)isDynamicallyColumnTabResizing;
- (BOOL)isDynamicallyChangingSelection;
- (BOOL)isDynamicallyChangingRowOrColumnCount;
- (BOOL)isDynamicallyChangingColumnCount;
- (BOOL)isDynamicallyChangingRowCount;
- (BOOL)isDynamicallyResizingTableName;
- (void)updateDynamicTableNameSize:(double)arg1;
- (BOOL)isDynamicallyRevealingRowsCols:(long long)arg1 rowColIndex:(unsigned int)arg2;
- (BOOL)isDynamicallyRevealingRowsCols;
- (BOOL)isDynamicallyChangingInfoGeometry;
// - (BOOL)isDynamicallyRemovingTextOfCellID:(struct TSUCellCoord)arg1;
// - (BOOL)isDynamicallyHidingTextOfCellID:(struct TSUCellCoord)arg1;
// - (BOOL)isDynamicallyHidingContentOfCellID:(struct TSUCellCoord)arg1;
// - (BOOL)isDynamicallyHidingRowsColsCellID:(struct TSUCellCoord)arg1;
- (BOOL)isDynamicallyHidingRowsCols:(long long)arg1 rowColIndex:(unsigned int)arg2;
- (BOOL)isDynamicallyHidingRowsCols;
// - (BOOL)containsAnyContentInRange:(struct TSUCellRect)arg1;
- (unsigned int)firstEmptyBodyRow;
// - (struct TSUCellRect)expandCellRangeToVisibleNeighbors:(struct TSUCellRect)arg1;
@property(readonly, nonatomic) NSIndexSet *hiddenColumnIndices;
@property(readonly, nonatomic) NSIndexSet *hiddenRowIndices;
@property(readonly, nonatomic) NSIndexSet *visibleColumnIndices;
@property(readonly, nonatomic) NSIndexSet *visibleRowIndices;
- (unsigned short)indexOfVisibleColumnAfterAndIncludingColumnAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleColumnAfterColumnAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleColumnBeforeAndIncludingColumnAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleColumnBeforeColumnAtIndex:(unsigned short)arg1;
- (unsigned int)nonUserHiddenRowAfterAndIncludingRow:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowAfterAndIncludingRowAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowAfterRowAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowBeforeAndIncludingRowAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowBeforeRowAtIndex:(unsigned int)arg1;
// - (BOOL)anyHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
// - (BOOL)anyRowsUserHiddenInCellRange:(struct TSUCellRect)arg1;
// - (BOOL)anyHiddenRowsInCellRange:(struct TSUCellRect)arg1;
// - (BOOL)isEntireCellRangeHidden:(struct TSUCellRect)arg1;
- (BOOL)hasHiddenColumnAtIndex:(unsigned short)arg1;
- (BOOL)isRowUserHidden:(unsigned int)arg1;
- (BOOL)hasHiddenRowAtIndex:(unsigned int)arg1;
// - (BOOL)isDynamicallyResizingCellID:(struct TSUCellCoord)arg1;
- (BOOL)isDynamicallyResizing:(long long)arg1 rowColIndex:(unsigned int)arg2;
- (BOOL)isDynamicallyResizing:(long long)arg1;
- (id)layoutCellRegionForModelCellRegion:(id)arg1;
// - (struct TSUCellCoord)layoutCellIDForModelCellID:(struct TSUCellCoord)arg1;
- (unsigned short)layoutColumnForModelColumn:(unsigned short)arg1;
- (unsigned int)layoutRowForModelRow:(unsigned int)arg1;
- (id)modelCellRegionForLayoutCellRegion:(id)arg1;
// - (struct TSUCellCoord)modelCellIDForLayoutCellID:(struct TSUCellCoord)arg1;
- (unsigned short)modelColumnForLayoutColumn:(unsigned short)arg1;
- (unsigned int)modelRowForLayoutRow:(unsigned int)arg1;
// - (BOOL)cell:(id )arg1 forCellID:(struct TSUCellCoord)arg2;
- (void)endDynamicMode;
- (void)beginDynamicMode:(id)arg1;
- (void)p_setDefaultFontHeight:(double)arg1 forTableStyleArea:(NSUInteger)arg2;
- (double)p_defaultFontHeightForTableStyleArea:(NSUInteger)arg1;
- (void)validateDefaultFontHeights;
- (void)invalidateDefaultFontHeights;
- (void)validateBandedFill;
- (void)invalidateBandedFill;
- (BOOL)shouldRowUseBandedFill:(unsigned int)arg1;
- (void)p_validateStrokeWidthCachesForRegion:(id)arg1 invalidateStrokeDefaults:(BOOL)arg2;
- (void)p_validateStrokesForRegion:(id)arg1;
- (void)validateStrokesForChangeDescriptors:(id)arg1;
// - (double)contentHeightForCellRange:(struct TSUCellRect)arg1 skipDynamicSwap:(BOOL)arg2;
// - (double)p_contentWidthForCellRange:(struct TSUCellRect)arg1 skipDynamicSwap:(BOOL)arg2 validationBundle:(id)arg3;
// - (double)contentWidthForCellRange:(struct TSUCellRect)arg1 validationBundle:(id)arg2;
// - (double)contentWidthForCellRange:(struct TSUCellRect)arg1 skipDynamicSwap:(BOOL)arg2;
// - (CGSize)contentSizeForCellRange:(struct TSUCellRect)arg1 skipDynamicSwap:(BOOL)arg2;
- (void)p_clearStrokesForMergesInCellRegion:(id)arg1;
- (void)p_invalidateClearedStrokesForCellRegion:(id)arg1;
- (void)enumerateMergedStrokesAndCapsForGridRow:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateMergedStrokesAndCapsForGridColumn:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateMergedStrokesForGridRow:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateMergedStrokesForGridColumn:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
// - (void)clearDynamicStrokesForCellRange:(struct TSUCellRect)arg1;
// - (void)strokesForCellID:(struct TSUCellCoord)arg1 top:(id )arg2 left:(id )arg3 bottom:(id )arg4 right:(id )arg5;
// - (void)setDynamicCellBorder:(id)arg1 forCellID:(struct TSUCellCoord)arg2;
- (double)strokeHeightOfGridRow:(unsigned int)arg1 atColumnIndex:(unsigned int)arg2;
- (double)strokeHeightOfGridRow:(unsigned int)arg1 beginColumn:(unsigned int)arg2 endColumn:(unsigned int)arg3;
// - (double)strokeHeightOfGridRow:(unsigned int)arg1 inColumnRange:(struct TSTSimpleRange)arg2;
- (id)mergedStrokesForGridRow:(unsigned int)arg1;
- (id)p_strokesForGridRow:(unsigned int)arg1 isTop:(BOOL)arg2 takeStrokeWriteLock:(BOOL)arg3;
- (BOOL)adjustGridRowForVisibility:(unsigned int )arg1 isTop:(BOOL)arg2;
- (void)p_setDynamicStroke:(id)arg1 strokeOrder:(int)arg2 forGridRow:(unsigned int)arg3 isTop:(BOOL)arg4 beginColumn:(unsigned int)arg5 endColumn:(unsigned int)arg6;
- (double)strokeWidthOfGridColumn:(unsigned int)arg1 atRowIndex:(unsigned int)arg2;
- (double)strokeWidthOfGridColumn:(unsigned int)arg1 beginRow:(unsigned int)arg2 endRow:(unsigned int)arg3;
// - (double)strokeWidthOfGridColumn:(unsigned int)arg1 inRowRange:(struct TSTSimpleRange)arg2;
- (id)mergedStrokesForGridColumn:(unsigned int)arg1;
- (id)p_strokesForGridColumn:(unsigned int)arg1 isLeft:(BOOL)arg2 takeStrokeWriteLock:(BOOL)arg3;
- (BOOL)adjustGridColumnForVisibility:(unsigned int )arg1 isLeft:(BOOL)arg2;
- (void)setClearedStrokeForGridRow:(unsigned int)arg1 beginColumn:(unsigned int)arg2 endColumn:(unsigned int)arg3;
- (void)setClearedStrokeForGridColumn:(unsigned int)arg1 beginRow:(unsigned int)arg2 endRow:(unsigned int)arg3;
- (BOOL)hasStrokeSpillForLeftGridColumn:(unsigned int)arg1 inRow:(unsigned int)arg2;
- (void)setStrokeSpillForRightGridColumn:(unsigned int)arg1 leftGridColumn:(unsigned int)arg2 inRow:(unsigned int)arg3;
- (void)p_setDynamicStroke:(id)arg1 strokeOrder:(int)arg2 forGridColumn:(unsigned int)arg3 isLeft:(BOOL)arg4 beginRow:(unsigned int)arg5 endRow:(unsigned int)arg6;
- (void)validateStrokesArrays:(id)arg1;
- (void)invalidateStrokeSpills;
- (void)invalidateStrokeDefaults;
@property(readonly, nonatomic) BOOL hasActiveFilters;
- (double)heightOfRowIgnoringFitting:(unsigned int)arg1 withStrokeHeights:(BOOL)arg2;
- (double)heightOfRow:(unsigned int)arg1 skipDynamicSwap:(BOOL)arg2 withStrokeHeights:(BOOL)arg3 returnZeroIfHidden:(BOOL)arg4 clampToPartitionSize:(BOOL)arg5 outIsFitting:(BOOL )arg6;
- (double)widthOfColumn:(unsigned short)arg1 skipDynamicSwap:(BOOL)arg2 returnZeroIfHidden:(BOOL)arg3 outIsFitting:(BOOL )arg4;
// - (BOOL)hasRangeSpanningRowsForCellRange:(struct TSUCellRect)arg1;
- (id)expandCellRegionToCoverMergedCells:(id)arg1;
// - (struct TSUCellRect)expandCellRangeToCoverMergedCells:(struct TSUCellRect)arg1;
- (id)mergesIntersectingCellRegion:(id)arg1;
// - (id)mergesIntersectingRange:(struct TSUCellRect)arg1;
- (id)mergeRangesProppingRowHeightsInRegion:(id)arg1;
@property(readonly, nonatomic) unsigned short numberOfColumns;
@property(readonly, nonatomic) unsigned int numberOfRows;
// - (NSUInteger)tableStyleAreaForCellID:(struct TSUCellCoord)arg1;
// - (NSUInteger)tableAreaForCellID:(struct TSUCellCoord)arg1;
// @property(readonly, nonatomic) struct TSUCellRect entireBodyCellRange;
// @property(readonly, nonatomic) struct TSUCellRect entireBodyRowsCellRange;
// @property(readonly, nonatomic) struct TSUCellRect entireFooterRowsCellRange;
// @property(readonly, nonatomic) struct TSUCellRect entireHeaderRowsCellRange;
// @property(readonly, nonatomic) struct TSUCellRect entireActualHeaderColumnsCellRange;
// @property(readonly, nonatomic) struct TSUCellRect entireHeaderColumnsCellRange;
// @property(readonly, nonatomic) struct TSUCellRect categoryColumnsCellRange;
@property(readonly, nonatomic) unsigned int numberOfNonHiddenFooterRows;
@property(readonly, nonatomic) unsigned int numberOfFooterRows;
@property(readonly, nonatomic) unsigned int numberOfHeaderRows;
@property(readonly, nonatomic) unsigned int numberOfHeaderColumns;
// @property(readonly, nonatomic) struct TSUCellRect cellRange;
- (void)updateCellRange;
- (void)validateTableNameHeight;
- (void)invalidateTableNameHeight;
- (double)calculatedTableNameHeightIncludingDynamicResize:(BOOL)arg1;
- (double)calculatedTableNameHeight;
- (double)tableNameHeight;
- (CGSize)tableNameTextSize;
- (id)tableNameTextEngine;
// - (void)clearModelHeightWidthCacheForCellRange:(struct TSUCellRect)arg1;
- (void)resetModelHeightWidthCache;
- (BOOL)validateLayoutHint:(id)arg1;
- (BOOL)hintIsValid:(id)arg1;
- (id)newLayoutHint;
- (id)customStrokeProvider;
- (id)tableStrokeProvider;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
// - (void)iterateCellsInRange:(struct TSUCellRect)arg1 flags:(NSUInteger)arg2 searchFlags:(NSUInteger)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)iterateCellsAndTerminateWithIterator:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
// - (id)cellIteratorWithRange:(struct TSUCellRect)arg1 flags:(NSUInteger)arg2 searchFlags:(NSUInteger)arg3;

@end

