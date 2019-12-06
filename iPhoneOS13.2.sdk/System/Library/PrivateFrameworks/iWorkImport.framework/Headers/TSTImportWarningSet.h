//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSSPropertyCommandSerializing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSTImportWarningSet : NSObject <TSSPropertyCommandSerializing>
{
//    struct TSTImportWarningSetCellWarningFlags _cellWarning;
    NSString *_originalDataFormat;
//    struct TSTImportFormulaWarning _formulaWarning;
}

+ (id)cellDiffClearingAllWarningsWithContext:(id)arg1;
+ (id)warningSetForUnsupportedDataFormat:(id)arg1;
+ (id)warningSetForUnsupportedCondFormat;
+ (id)warningSetForCondFormatUnsupportedTimePeriod;
+ (id)warningSetForCondFormatUnsupportedStyling;
+ (id)warningSetForCondFormatUnsupportedOperator;
+ (id)warningSetForCondFormatStopIfTrue;
+ (id)warningSetForCondFormatParamatersNotAllTheSame;
+ (id)warningSetForCondFormatNotContainsErrors;
+ (id)warningSetForCondFormatExpr;
+ (id)warningSetForCondFormatContainsErrors;
+ (id)warningSetForCondFormatComplexFormula;
+ (id)warningSetForCondFormatAboveAvgStdDev;
+ (id)warningSetForCondFormatAboveAvgEqualAvg;
+ (id)warningSetForFilteredColumnFormulaNotCopied;
+ (id)warningSetForTransposeUnmodifiedWithIssues;
+ (id)warningSetForTransposedWithIssues:(id)arg1;
+ (id)warningSetForTransposedWithoutIssues:(id)arg1;
+ (id)warningSetForUnsupportedNameFormula:(id)arg1 originalFormula:(id)arg2;
+ (id)warningSetForUnsupportedFunction:(id)arg1 originalFormula:(id)arg2;
+ (id)warningSetForUnsupportedFormula:(id)arg1;
+ (id)warningSetForUnknownName:(id)arg1 originalFormula:(id)arg2;
+ (id)warningSetForSharedFormulaBaseNotFoundFormula:(id)arg1;
+ (id)warningSetForReferenceOutOfBoundsFormula:(id)arg1;
+ (id)warningSetForNaturalLanguageFormula:(id)arg1;
+ (id)warningSetForExternalReferenceFormula:(id)arg1;
+ (id)warningSetForErrorTokenFormula:(id)arg1;
+ (id)warningSetForDifferentBehaviorForFunctionFormula:(id)arg1 originalFormula:(id)arg2;
+ (id)warningSetForArrayedFormula:(id)arg1;
+ (id)warningSetFor3DReferenceFormula:(id)arg1;
+ (id)emptyWarningSet;
+ (id)p_warningSetForFormulaWarningType:(long long)arg1 originalFormula:(id)arg2 supplementaryText:(id)arg3;
- (id).cxx_construct;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
//  (void)saveToArchive:(struct ImportWarningSetArchive )arg1;
- (int)TSTImportFormulaWarningTypeToArchive;
//  (id)initFromArchive:(const struct ImportWarningSetArchive )arg1;
- (long long)TSTImportFormulaWarningTypeFromArchive:(int)arg1;
//  (void)saveToPropertyCommandMessage:(struct Message )arg1 archiver:(id)arg2;
//  (id)initFromPropertyCommandMessage:(const struct Message )arg1 unarchiver:(id)arg2;
- (BOOL)p_isPersistedWithFormulaWarningTypeEnumeration;
- (id)warningSetByRemovingWarningsFromSet:(id)arg1;
- (id)cellDiffClearingWarningsWithContext:(id)arg1;
- (id)warningSetByAddingWarningsFromSet:(id)arg1;
- (id)localizedWarningStrings;
- (id)individualWarnings;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)areAnySet;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

