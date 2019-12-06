//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSPCopying-Protocol.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSTConditionalStyleSet : TSPObject <TSPCopying>
{
    NSMutableArray *_conditionalStyleSetRules;
}

@property(readonly, nonatomic) NSArray *currentRules; // @synthesize currentRules=_conditionalStyleSetRules;
// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (NSUInteger)ruleCount;
- (id)ruleAtIndex:(NSUInteger)arg1;
- (id)rules;
- (id)description;
- (BOOL)isEqualForInspector:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
//  (id)precedentsWithCalcEngine:(id)arg1 hostOwnerUID:(const UUIDData_5fbc143e )arg2 hostCellID:(const struct TSUCellCoord )arg3;
- (BOOL)hasBadRefWithUidInfo;
- (BOOL)containsUidReferences;
//  (id)copyByRepairingBadReferences:(struct TSCEFormulaRewriteContext )arg1;
//  (id)copyToGeometricFormWithRewriteContext:(struct TSCEFormulaRewriteContext )arg1;
//  (id)copyToUidFormForTableInfo:(id)arg1 inCellCoordinate:(struct TSUCellCoord)arg2 preserveHostCell:(BOOL)arg3;
- (void)setHostCell:(const UUIDData_5fbc143e )arg1 hostColumnUID:(const UUIDData_5fbc143e )arg2 hostRowUID:(const UUIDData_5fbc143e )arg3;
- (id)copyByClearingUids:(id)arg1 containingTableUID:(const UUIDData_5fbc143e )arg2;
//  (id)copyByConvertingToRelativeAncestorsWithRewriteContext:(struct TSCEFormulaRewriteContext )arg1;
//  (id)copyByResolvingRelativeAncestorsWithRewriteContext:(struct TSCEFormulaRewriteContext )arg1;
//  (id)copyByReparenting:(id)arg1 groupByUID:(const UUIDData_5fbc143e )arg2 rewriteContext:(struct TSCEFormulaRewriteContext )arg3;
//  (void)iterateFormulasWithContext:(struct TSCEFormulaRewriteContext )arg1 block:(CDUnknownBlockType)arg2;
//  (id)copyByRewritingWithContext:(struct TSCEFormulaRewriteContext )arg1 rewriteBlock:(CDUnknownBlockType)arg2;
//  (id)copyByUpdatingHostCellRef:(const struct TSCECellRef )arg1;
//  (id)copyByUpgradingToLinkedRefAtHostCellRef:(const struct TSCECellRef )arg1;
//  (id)copyByOffsettingRelativeReferencesWithOffset:(struct TSUColumnRowOffset)arg1;
//  (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(struct TSUCellCoord)arg3;
- (id)copyByRemappingHostCellAgnosticOwnerUIDsWithMap:(const UUIDMap_b66c2694 )arg1 calcEngine:(id)arg2 ownerUID:(const UUIDData_5fbc143e )arg3 error:(BOOL )arg4;
- (id)copyByRemappingOwnerUIDsWithMap:(const UUIDMap_b66c2694 )arg1 calcEngine:(id)arg2 error:(BOOL )arg3;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 rules:(id)arg2;
- (id)initWithConditionalStyleSet:(id)arg1;

@end

