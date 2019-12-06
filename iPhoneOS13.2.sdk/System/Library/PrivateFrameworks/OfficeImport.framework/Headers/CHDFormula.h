//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDFormula.h>

@class EDReferenceCollection, EDWorkbook;

__attribute__((visibility("hidden")))
@interface CHDFormula : EDFormula
{
    EDReferenceCollection *mReferences;
    EDWorkbook *mWorkbook;
}

+ (id)formulaWithReferences:(id)arg1;
+ (id)formulaWithReference:(id)arg1;
// - (void).cxx_destruct;
- (id)constantValuesFromConstantStringFormula;
- (BOOL)isConstantStringFormula;
- (void)prepareTokens;
- (NSUInteger)countOfCellsBeingReferenced;
- (void)setReferences:(id)arg1;
- (id)references;
- (void)setWorkbook:(id)arg1;
- (id)initWithReferences:(id)arg1;
- (id)initWithReference:(id)arg1;
- (id)initWithWorkbook:(id)arg1;
- (id)referencesFromFormula;

@end

