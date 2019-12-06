//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class TSTCellStyle, TSTFormulaPredicate, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSTConditionalStyleRule : NSObject <NSCopying>
{
    TSTFormulaPredicate *_predicate;
    TSWPParagraphStyle *_textStyle;
    TSTCellStyle *_cellStyle;
    int mPredicateType;
}

+ (id)conditionalStyleRuleWithRule:(id)arg1;
@property(readonly, nonatomic) int predicateType; // @synthesize predicateType=mPredicateType;
// - (void).cxx_destruct;
// - (void)getPrecedents:(struct TSCEReferenceSet )arg1 calcEngine:(id)arg2 hostOwnerUID:(const UUIDData_5fbc143e )arg3 hostCellID:(const struct TSUCellCoord )arg4;
- (BOOL)hasBadRefWithUidInfo;
- (BOOL)containsUidReferences;
- (void)setHostCell:(const UUIDData_5fbc143e )arg1 hostColumnUID:(const UUIDData_5fbc143e )arg2 hostRowUID:(const UUIDData_5fbc143e )arg3;
- (id)copyByClearingUids:(id)arg1 containingTableUID:(const UUIDData_5fbc143e )arg2;
// - (void)iterateFormulasWithContext:(struct TSCEFormulaRewriteContext )arg1 shouldStop:(BOOL )arg2 block:(CDUnknownBlockType)arg3;
// - (id)copyByRewritingWithContext:(struct TSCEFormulaRewriteContext )arg1 rewriteBlock:(CDUnknownBlockType)arg2;
// - (id)copyByRepairingBadReferences:(struct TSCEFormulaRewriteContext )arg1;
// - (id)copyToGeometricFormWithRewriteContext:(struct TSCEFormulaRewriteContext )arg1;
// - (id)copyToUidFormForTableInfo:(id)arg1 inCellCoordinate:(struct TSUCellCoord)arg2 preserveHostCell:(BOOL)arg3;
// - (id)copyByUpdatingHostCellRef:(const struct TSCECellRef )arg1;
// - (id)copyByUpgradingToLinkedRefAtHostCellRef:(const struct TSCECellRef )arg1;
// - (id)copyByOffsettingRelativeReferencesWithOffset:(struct TSUColumnRowOffset)arg1;
// - (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(struct TSUCellCoord)arg3;
- (id)copyByRemappingHostCellAgnosticOwnerUIDsWithMap:(const UUIDMap_b66c2694 )arg1 calcEngine:(id)arg2 ownerUID:(const UUIDData_5fbc143e )arg3 error:(BOOL )arg4;
- (id)copyByRemappingOwnerUIDsWithMap:(const UUIDMap_b66c2694 )arg1 calcEngine:(id)arg2 error:(BOOL )arg3;
- (id)description;
// - (BOOL)evaluateFormulaAtCellID:(struct TSUCellCoord)arg1 withCalcEngine:(id)arg2 onSubOwnerID:(const struct TSCESubFormulaOwnerID )arg3;
// @property(readonly, nonatomic) struct TSCEFormula formula;
@property(readonly, copy, nonatomic) TSTFormulaPredicate *predicate;
- (void)setCellStyle:(id)arg1 textStyle:(id)arg2;
- (id)privateTextStyle;
@property(readonly, copy, nonatomic) TSWPParagraphStyle *textStyle;
- (id)privateCellStyle;
@property(readonly, copy, nonatomic) TSTCellStyle *cellStyle;
- (BOOL)isEqualForInspector:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 cellStyle:(id)arg2 textStyle:(id)arg3;

@end

