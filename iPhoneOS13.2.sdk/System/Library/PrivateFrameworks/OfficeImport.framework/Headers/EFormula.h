//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDFormula, EFTableData, NSString;
@protocol EFHelper;

__attribute__((visibility("hidden")))
@interface EFormula : NSObject
{
    id <EFHelper> mHelper;
//     struct EFLexer mYylex;
    Class mFormulaClass;
    EDFormula *mFormula;
    EFTableData *mTableData;
    NSString *mErrMsg;
}

+ (id)stringToFormula:(id)arg1 formulaHelper:(id)arg2 formulaClass:(Class)arg3;
+ (id)singletonEFormula;
- (void)setTableData:(id)arg1;
- (id)tableData;
- (id)resolveTable:(const char )arg1 sheetIndex:(NSUInteger )arg2;
- (NSUInteger)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
- (NSUInteger)resolveSheet:(const char )arg1 isCurrentSheet:(BOOL )arg2;
- (NSUInteger)resolveName:(const char )arg1;
- (id)stringToTokens:(id)arg1;
- (void)setFormulaClass:(Class)arg1;
- (Class)formulaClass;
- (void)setFormula:(id)arg1;
- (void)setFormulaHelper:(id)arg1;
- (id)formulaHelper;
- (void)dealloc;

@end

