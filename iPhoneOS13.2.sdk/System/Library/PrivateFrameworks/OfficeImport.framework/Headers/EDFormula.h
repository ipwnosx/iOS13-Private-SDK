//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDFormulaBuilding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDFormula : NSObject <EDFormulaBuilding>
{
//     struct __CFData mPackedData;
}

+ (id)formula;
- (BOOL)insertName:(NSUInteger)arg1 atIndex:(unsigned int)arg2;
- (BOOL)uppercaseArgAtIndex:(unsigned int)arg1;
- (BOOL)fixTableOfConstantsRefs;
- (BOOL)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (BOOL)addInfixOperator:(int)arg1 atIndex:(unsigned int)arg2 factor:(double)arg3;
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (void)markLastTokenAsSpanningRefVertically:(BOOL)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (void)markLastTokenAsDuration;
- (BOOL)convertToIntersect:(unsigned int)arg1;
@property(readonly, copy) NSString *description;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL )arg1 withEDLinks:(id)arg2;
- (BOOL)convertLastRefsToArea;
- (BOOL)convertToList:(unsigned int)arg1 withFinalParen:(BOOL)arg2;
- (BOOL)convertToList:(unsigned int)arg1;
- (char )setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (BOOL)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (BOOL)insertExternalName:(NSUInteger)arg1 withLink:(NSUInteger)arg2 atIndex:(unsigned int)arg3;
- (id)saveArgs:(unsigned int)arg1 andDelete:(BOOL)arg2;
- (unsigned int)firstTokenIndexForArgAtIndex:(unsigned int)arg1;
- (BOOL)isBaseFormula;
- (BOOL)isSharedFormula;
- (void)updateCleanedWithEvaluationStack:(BOOL)arg1;
- (BOOL)isCleanedWithEvaluationStack;
- (void)updateContainsRelativeReferences:(BOOL)arg1;
- (BOOL)isContainsRelativeReferences;
- (void)setCleaned:(BOOL)arg1;
- (BOOL)isCleaned;
- (BOOL)isSupportedFormula;
- (void)setWarningParameter:(id)arg1;
- (id)warningParameter;
- (void)setWarning:(int)arg1;
- (id)warning;
- (int)warningType;
- (void)setOriginalFormulaString:(id)arg1;
- (id)originalFormulaString;
- (BOOL)convertTokensToSharedAtRow:(unsigned int)arg1 column:(unsigned int)arg2;
- (ChVector_1f909c3e )xlPtgs;
// - (void)populateXlPtg:(struct XlPtg )arg1 index:(unsigned int)arg2;
- (BOOL)replaceTokenAtIndex:(unsigned int)arg1 withFormula:(id)arg2 formulaTokenIndex:(unsigned int)arg3;
- (BOOL)replaceTokenAtIndex:(unsigned int)arg1 withFormula:(id)arg2;
- (BOOL)removeTokenAtIndex:(unsigned int)arg1;
- (void)removeAllTokens;
// - (BOOL)copyTokenFromXlPtg:(struct XlPtg )arg1;
- (BOOL)copyTokenAtIndex:(unsigned int)arg1 fromFormula:(id)arg2;
- (void)setupExtendedDataForTokenAtIndex:(unsigned int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;
- (char )setExtendedDataAtIndex:(unsigned int)arg1 extendedDataIndex:(unsigned int)arg2 length:(unsigned int)arg3;
- (BOOL)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;
- (char )addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (char )addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (unsigned int)countExtendedDataForTokenAtIndex:(unsigned int)arg1;
- (char )lastExtendedDataForTokenAtIndex:(unsigned int)arg1 length:(unsigned int )arg2;
- (char )extendedDataForTokenAtIndex:(unsigned int)arg1 extendedDataIndex:(unsigned int)arg2 length:(unsigned int )arg3;
- (void)replaceTokenTypeAtIndex:(unsigned int)arg1 withType:(int)arg2;
- (int)tokenTypeAtIndex:(unsigned int)arg1;
- (unsigned int)tokenCount;
- (BOOL)setupTokensWithTokensCount:(unsigned int)arg1 tokensWithDataCount:(unsigned int)arg2 extendedDataLength:(unsigned int)arg3 extendedDataCount:(unsigned int)arg4;
- (void)dealloc;
- (id)initWithFormula:(id)arg1;
- (id)init;
// - (struct EDToken )tokenAtIndex:(unsigned int)arg1;
// - (void)archiveByAppendingToMutableData:(struct __CFData )arg1;
// - (void)unarchiveFromData:(struct __CFData )arg1 offset:(NSUInteger )arg2;

@end

