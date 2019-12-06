//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSTStringNode : TSTExpressionNode
{
    NSString *_value;
}

@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
// - (void).cxx_destruct;
// - (void)saveToArchive:(struct StringNodeArchive )arg1 archiver:(id)arg2;
// - (void)loadFromArchive:(const struct StringNodeArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)exportString;
// - (void)buildASTNodeArray:(struct TSCEASTNodeArray )arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable )arg3;
- (void)fixStorageLanguage:(id)arg1;
- (id)formulaPlainText;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (id)string;
- (int)tokenType;
- (BOOL)isEqualToExpressionNode:(id)arg1;
// - (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(NSUInteger)arg3 lastIndex:(NSUInteger)arg4;
- (id)initWithContext:(id)arg1 stringValue:(id)arg2 firstIndex:(NSUInteger)arg3 lastIndex:(NSUInteger)arg4;

@end

