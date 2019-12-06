//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSPCopying-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSTTableFilterSet : TSPObject <TSPCopying>
{
    int _type;
    BOOL _isEnabled;
    NSArray *_rules;
    BOOL _needsFormulaRewriteForImport;
    vector_06e666a8 _filterOffsets;
}

@property(nonatomic) BOOL needsFormulaRewriteForImport; // @synthesize needsFormulaRewriteForImport=_needsFormulaRewriteForImport;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
- (id).cxx_construct;
// - (void).cxx_destruct;
// - (void)saveToArchive:(struct FilterSetArchive )arg1 archiver:(id)arg2;
// - (void)loadFromArchive:(const struct FilterSetArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (BOOL)allowsRowInsertion;
- (id)viewColumnIndicesForRulesInTable:(id)arg1;
- (id)baseColumnIndicesForRulesInTable:(id)arg1;
// - (id)absoluteRuleIndicesForColumn:(struct TSUModelColumnIndex)arg1 inTable:(id)arg2;
- (NSUInteger)numberOfRulesInFilter:(NSUInteger)arg1;
- (NSUInteger)ruleIndexInFilter:(NSUInteger)arg1 matchingCell:(id)arg2;
// - (NSUInteger)firstFilterIndexForBaseColumn:(struct TSUModelColumnIndex)arg1 inTable:(id)arg2;
// - (id)filterIndicesForBaseColumn:(struct TSUModelColumnIndex)arg1 inTable:(id)arg2;
- (void)enumerateRulesInFilterIndex:(NSUInteger)arg1 usingBlock:(CDUnknownBlockType)arg2;
// - (void)enumerateFiltersForColumn:(struct TSUModelColumnIndex)arg1 withTable:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateFilterIndicesInTable:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateFiltersInTable:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)replaceRule:(id)arg1 atRuleIndex:(NSUInteger)arg2 inFilter:(NSUInteger)arg3;
- (void)addRules:(id)arg1 inFilter:(NSUInteger)arg2;
- (void)p_addRules:(id)arg1 atRuleIndices:(id)arg2 inFilter:(NSUInteger)arg3 isNew:(BOOL)arg4;
- (void)removeRulesForBaseColumnIndices:(id)arg1 withTableInfo:(id)arg2;
- (void)removeRulesWithIndices:(id)arg1 inFilter:(NSUInteger)arg2;
- (id)removeRulesWithAbsoluteIndices:(id)arg1;
@property(readonly, nonatomic) NSUInteger filterCount;
@property(readonly, nonatomic) NSUInteger newFilterIndex;
@property(nonatomic) int filterSetType;
@property(readonly, nonatomic) BOOL canAddRules;
@property(readonly, nonatomic) NSUInteger ruleCount;
- (id)filterAtIndex:(NSUInteger)arg1 inTable:(id)arg2;
- (id)ruleInFilter:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (id)ruleAtAbsoluteIndex:(NSUInteger)arg1;
- (BOOL)rowIsShown:(unsigned int)arg1 withHiddenStateExtent:(id)arg2 withCalcEngine:(id)arg3;
- (BOOL)p_thresholdComparisonMatchesFilter:(long long)arg1 withPredicateType:(int)arg2;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)containsFilterRulesInUIDForm;
- (id)copyByRewritingFilterRulesToGeometricFormWithContext:(id)arg1 withTableInfo:(id)arg2;
- (id)copyByRewritingFilterRulesToUidFormWithContext:(id)arg1 withTableInfo:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (id)initWithFilterRules:(id)arg1 type:(int)arg2 context:(id)arg3;

@end

