//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCEFormulaOwning-Protocol.h>

@class TSCECalculationEngine, TSTFormulaStore, TSTTableModel, TSUSparseArray;

__attribute__((visibility("hidden")))
@interface TSTPencilAnnotationOwner : NSObject <TSCEFormulaOwning>
{
    TSCECalculationEngine *_calculationEngine;
    TSTTableModel *_tableModel;
    TSTFormulaStore *_formulaStore;
    TSUSparseArray *_annotations;
    UUIDData_5fbc143e _ownerUID;
}

@property(retain, nonatomic) TSUSparseArray *annotations; // @synthesize annotations=_annotations;
@property(readonly, nonatomic) TSTFormulaStore *formulaStore; // @synthesize formulaStore=_formulaStore;
@property(readonly, nonatomic) __weak TSTTableModel *tableModel; // @synthesize tableModel=_tableModel;
@property(readonly, nonatomic) __weak TSCECalculationEngine *calculationEngine; // @synthesize calculationEngine=_calculationEngine;
@property(nonatomic) UUIDData_5fbc143e ownerUID; // @synthesize ownerUID=_ownerUID;
- (id).cxx_construct;
// - (void).cxx_destruct;
//  (void)saveToArchive:(struct PencilAnnotationOwnerArchive )arg1 archiver:(id)arg2;
//  (id)initWithArchive:(const struct PencilAnnotationOwnerArchive )arg1 unarchiver:(id)arg2 forTableModel:(id)arg3;
- (void)invalidateForCalcEngine:(id)arg1;
- (void)writeResultsForCalcEngine:(id)arg1;
// - (CDStruct_2a4d9400)recalculateForCalcEngine:(id)arg1 atFormulaCoord:(struct TSUCellCoord)arg2 recalcOptions:(CDStruct_3d581f42)arg3;
- (id)linkedResolver;
- (unsigned short)ownerKind;
- (void)rollbackToMark:(NSUInteger)arg1;
- (NSUInteger)markForRollback;
- (void)remapTableUIDsInFormulasWithMap:(const UUIDMap_b66c2694 )arg1;
- (id)_indexesIntersectingButNotContainingBaseCellRegion:(id)arg1;
- (id)_indexesContainedByRegion:(id)arg1;
- (void)_enumerateIndexesIntersectingRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_indexesForRows:(id)arg1;
//  (id)_indexesForRange:(struct TSUModelCellRect)arg1 startingOnly:(BOOL)arg2;
- (id)_annotationsIntersectingButNotContainingBaseCellRegion:(id)arg1;
- (id)annotationsContainedByRegion:(id)arg1;
- (id)_annotationsInRows:(id)arg1;
//  (id)annotationsStartingInRange:(struct TSUModelCellRect)arg1;
- (id)_annotationsForIndexes:(id)arg1;
- (NSUInteger)indexOfAnnotation:(id)arg1;
- (BOOL)containsAnnotation:(id)arg1;
- (void)enumerateAnnotationsAndFormulasContainedInRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
//  (void)enumerateAnnotationsAndFormulasInRange:(struct TSUModelCellRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateAnnotationsAndFormulasWithIndexes:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateAnnotationsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSUInteger count;
//  (struct TSUCellRect)cellRangeForAnnotation:(id)arg1;
//  (const struct TSCEFormula )removeAnnotationAtIndex:(NSUInteger)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeAllAnnotations;
//  (const struct TSCEFormula )removeAnnotation:(id)arg1;
//  (void)addAnnotation:(id)arg1 withFormula:(struct TSCEFormula)arg2 atIndex:(NSUInteger)arg3;
//  (NSUInteger)addAnnotation:(id)arg1 withAnchorRange:(struct TSUCellRect)arg2;
- (void)unregisterFromCalcEngine;
- (int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const UUIDData_5fbc143e )arg2;
- (id)initWithTableModel:(id)arg1 ownerUID:(UUIDData_5fbc143e)arg2 annotations:(id)arg3 formulaStore:(id)arg4;
- (id)initWithTableModel:(id)arg1;

@end

