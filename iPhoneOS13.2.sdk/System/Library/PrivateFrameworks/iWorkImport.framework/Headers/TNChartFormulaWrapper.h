//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TNChartFormulaWrapper : NSObject
{
//    struct TSCEFormula _ptrToFormula;
    long long _cachedNumberOfValues;
//    struct TSCEVector _cachedOutputValueVector;
//    struct TSCEVector _cachedOutputValueVectorWithoutHiddenData;
    vector_38b190b0 _cachedChromeCoords;
    vector_38b190b0 _cachedChromeCoordsWithoutHidden;
}

+ (id)chartFormulaForCellRegion:(id)arg1 inTable:(id)arg2;
+ (id)chartFormulaForTractReference:(id)arg1;
+ (id)chartFormulaForTractAsRangeReferences:(id)arg1;
//  (id)chartFormulaForCellReference:(struct TSCECellRef)arg1;
//  (id)chartFormulaForRangeReference:(struct TSCERangeRef)arg1;
+ (id)chartFormulaForString:(id)arg1;
+ (id)emptyChartFormula;
//  (id)chartFormulaWithCopyOfTSCEFormula:(const struct TSCEFormula )arg1;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)formulaByTrimmingCategoryLabels:(NSUInteger)arg1 plotByRow:(BOOL)arg2 calcEngine:(id)arg3 inChart:(UUIDData_5fbc143e )arg4;
- (id)formulaByBakingValuesWithCalcEngine:(id)arg1 inOwner:(const UUIDData_5fbc143e )arg2;
- (id)formulaByRewriting:(BOOL)arg1 withCalcEngine:(id)arg2 andHostUID:(const UUIDData_5fbc143e )arg3;
- (id)formulaByProcessingArgumentsWithCalcEngine:(id)arg1 inOwner:(const UUIDData_5fbc143e )arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)isAllStaticValuesWithCalcEngine:(id)arg1 inOwner:(const UUIDData_5fbc143e )arg2;
//  (struct TSCERangeRef)rangeCircumscribingPrecedentsWithCalcEngine:(id)arg1 inOwner:(const UUIDData_5fbc143e )arg2;
- (id)stringValueForFormulaWithCalcEngine:(id)arg1 inOwner:(const UUIDData_5fbc143e )arg2;
- (id)argumentCollectionWithCalcEngine:(id)arg1 inChart:(const UUIDData_5fbc143e )arg2 storeBadRef:(BOOL)arg3;
- (id)argumentCollectionWithCalcEngine:(id)arg1 inChart:(const UUIDData_5fbc143e )arg2;
- (NSUInteger)numberOfTotalPlotwiseLabelValuesWithCalcEngine:(id)arg1 inChart:(const UUIDData_5fbc143e )arg2 byRow:(BOOL)arg3 shouldSkipHiddenData:(BOOL)arg4;
- (NSUInteger)numberOfValuesWithCalcEngine:(id)arg1 inChart:(const UUIDData_5fbc143e )arg2;
//  (id)plotwiseLabelValuesWithEvaluationContext:(struct TSCEEvaluationContext )arg1 byRow:(BOOL)arg2 shouldSkipHiddenData:(BOOL)arg3;
//  (vector_06892659)outputVectorValuesWithChromeCoords:(struct TSCEEvaluationContext )arg1 shouldSkipHiddenData:(BOOL)arg2;
//  (struct TSCEVector )outputValueVector:(struct TSCEEvaluationContext )arg1 shouldSkipHiddenData:(BOOL)arg2;
- (id)description;
// property(readonly) struct TSCEFormula formula;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)clearCacheForCalculationEngine:(id)arg1;
- (BOOL)formulaIsEqualTo:(id)arg1;
- (void)dealloc;
//  (id)initWithCopyOfTSCEFormula:(const struct TSCEFormula )arg1;

@end

