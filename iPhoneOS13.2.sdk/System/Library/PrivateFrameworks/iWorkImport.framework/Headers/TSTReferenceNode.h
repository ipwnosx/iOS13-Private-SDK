//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>


@class NSString, TSCECalculationEngine, TSKChangeNotifier, TSKDocumentRoot, TSTReferenceColorHelper, TSTUIDRectRef;

__attribute__((visibility("hidden")))
@interface TSTReferenceNode : TSTExpressionNode <NSCopying>
{
    NSString *_refString;
    NSString *_formulaPlainText;
    unsigned char _rangeContext;
    BOOL _rangeWithFunction;
    BOOL _isBlankForKeyboardInsertion;
    BOOL _suppressAutomaticNamedReferenceInvalidation;
    BOOL _isCategoryRef;
    TSCECalculationEngine *_calcEngine;
    TSTUIDRectRef *_uidRectRef;
    TSTReferenceColorHelper *_referenceColorHelper;
//     struct TSCECellRef _hostCellRef;
//     struct TSCECategoryRef _categoryRef;
}

// + (unsigned char)preserveFlagsForReference:(const struct TSCERangeRef )arg1 calcEngine:(id)arg2;
// + (BOOL)p_rangeRef:(const struct TSCERangeRef )arg1 isContainedWithinSummaryAndLabelRowsInTable:(id)arg2;
// + (struct TSUCellRect)p_cellRangeForSingleCategoryRefInViewRangeRef:(const RefTypeHolder_45a2a752 )arg1 inTable:(id)arg2 rangeContext:(unsigned char)arg3;
+ (RefTypeHolder_45a2a752)p_expandedViewRangeRefForViewRangeRef:(const RefTypeHolder_45a2a752 )arg1 forLabelRowsInTable:(id)arg2;
// + (struct TSCECategoryRef)p_spanningCategoryRefForViewRangeRef:(const RefTypeHolder_45a2a752 )arg1 groupByUid:(UUIDData_5fbc143e)arg2 categoryLevel:(unsigned char)arg3 calculationEngine:(id)arg4;
// + (struct TSCECategoryRef)p_singleCategoryRefForViewRangeRef:(const RefTypeHolder_45a2a752 )arg1 rangeContext:(unsigned char)arg2 calculationEngine:(id)arg3 hostCellRef:(const struct TSCECellRef )arg4;
@property(retain, nonatomic) TSTReferenceColorHelper *referenceColorHelper; // @synthesize referenceColorHelper=_referenceColorHelper;
// @property(nonatomic) struct TSCECategoryRef categoryRef; // @synthesize categoryRef=_categoryRef;
@property(readonly, nonatomic) BOOL isCategoryRef; // @synthesize isCategoryRef=_isCategoryRef;
@property(readonly, nonatomic) BOOL suppressAutomaticNamedReferenceInvalidation; // @synthesize suppressAutomaticNamedReferenceInvalidation=_suppressAutomaticNamedReferenceInvalidation;
@property(nonatomic) BOOL isBlankForKeyboardInsertion; // @synthesize isBlankForKeyboardInsertion=_isBlankForKeyboardInsertion;
@property(nonatomic, getter=isRangeWithFunction) BOOL rangeWithFunction; // @synthesize rangeWithFunction=_rangeWithFunction;
@property(nonatomic) unsigned char rangeContext; // @synthesize rangeContext=_rangeContext;
// @property(nonatomic) struct TSCECellRef hostCellRef; // @synthesize hostCellRef=_hostCellRef;
@property(readonly, nonatomic) TSTUIDRectRef *uidRectRef; // @synthesize uidRectRef=_uidRectRef;
- (id).cxx_construct;
// - (void).cxx_destruct;
// - (void)saveToArchive:(struct ReferenceNodeArchive )arg1 archiver:(id)arg2;
// - (void)loadFromArchive:(const struct ReferenceNodeArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_resetMenu;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (BOOL)isValidReference;
- (void)invalidate;
- (id)exportString;
// - (void)buildASTNodeArray:(struct TSCEASTNodeArray )arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable )arg3;
// - (void)p_buildASTNodeArray:(struct TSCEASTNodeArray )arg1 forCoord:(struct TSUCellCoord)arg2 preserveFlags:(unsigned char)arg3 hostCell:(struct TSUCellCoord)arg4;
- (id)formulaPlainText;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (id)string;
- (id)referenceAsStringWithContext:(id)arg1;
- (int)tokenType;
- (BOOL)isEqualToExpressionNode:(id)arg1;
// - (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (id)p_subregionForRange:(id)arg1 rangeContext:(unsigned char)arg2;
- (id)subregionForRange:(id)arg1;
- (id)subregionForReference:(id)arg1 range:(id)arg2;
@property(readonly, nonatomic) BOOL isResizable;
@property(readonly, nonatomic) BOOL isSpanningCategorySummaryRef;
@property(readonly, nonatomic) BOOL isCategorySummaryRef;
@property(readonly, nonatomic) BOOL isLocalReference;
@property(readonly, nonatomic) BOOL isNonSpanningRangeExpression;
@property(readonly, nonatomic) BOOL isSingleRowSpanningReference;
@property(readonly, nonatomic) BOOL isSingleColumnSpanningReference;
@property(readonly, nonatomic) BOOL spansAllRows;
@property(readonly, nonatomic) BOOL spansAllColumns;
@property(readonly, nonatomic) BOOL isRangeExpression;
@property(nonatomic) UUIDData_5fbc143e hostTableUID;
@property(readonly, nonatomic) UUIDData_5fbc143e tableUID;
@property(readonly, nonatomic) UUIDData_5fbc143e categoryRefTableUID;
- (id)p_categoryRefViewTractRef;
- (RefTypeHolder_45a2a752)p_boundingViewRangeRef;
- (void)setBaseRangeRef:(const RefTypeHolder_1140c985 )arg1 preserveFlags:(unsigned char)arg2;
- (void)setChromeRangeRef:(const RefTypeHolder_8c6da553 )arg1 preserveFlags:(unsigned char)arg2;
- (void)setViewRangeRef:(const RefTypeHolder_45a2a752 )arg1 preserveFlags:(unsigned char)arg2;
- (RefTypeHolder_45a2a752)viewRangeRefDeprecated;
// @property(readonly) struct TSCERangeCoordinate baseBoundingBox;
// @property(readonly) struct TSCERangeCoordinate viewBoundingBox;
// @property(readonly) struct TSUModelCellCoord baseBottomRightCoord;
// @property(readonly) struct TSUModelCellCoord baseTopLeftCoord;
// @property(readonly) struct TSUViewCellCoord viewBottomRightCoord;
// @property(readonly) struct TSUViewCellCoord viewTopLeftCoord;
@property(nonatomic) unsigned char viewPreserveFlags;
@property(nonatomic) unsigned char basePreserveFlags;
@property(readonly, nonatomic) __weak TSCECalculationEngine *calcEngine; // @synthesize calcEngine=_calcEngine;
@property(readonly, nonatomic) TSKChangeNotifier *changeNotifier;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithReferenceStart:(id)arg1 referenceEnd:(id)arg2 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg3;
// - (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 categoryRef:(const struct TSCECategoryRef )arg3 hostCellRef:(const struct TSCECellRef )arg4 referenceColorHelper:(id)arg5;
// - (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 baseRangeRef:(const RefTypeHolder_1140c985 )arg3 preserveFlags:(unsigned char)arg4 hostCellRef:(const struct TSCECellRef )arg5 referenceColorHelper:(id)arg6 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg7;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 chromeRangeRef:(const RefTypeHolder_8c6da553 )arg3 preserveFlags:(unsigned char)arg4 hostCellRef:(const RefTypeHolder_a8d05c9a )arg5 referenceColorHelper:(id)arg6 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg7;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 viewRangeRef:(const RefTypeHolder_45a2a752 )arg3 preserveFlags:(unsigned char)arg4 hostCellRef:(const RefTypeHolder_a8d05c9a )arg5 referenceColorHelper:(id)arg6 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg7;
// - (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 uidRectRef:(id)arg3 hostCellRef:(const struct TSCECellRef )arg4 referenceColorHelper:(id)arg5 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg6;
// - (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 uidRectRef:(id)arg3 categoryRef:(const struct TSCECategoryRef )arg4 hostCellRef:(const struct TSCECellRef )arg5 referenceColorHelper:(id)arg6 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg7;

@end

