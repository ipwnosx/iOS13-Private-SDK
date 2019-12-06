//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>

__attribute__((visibility("hidden")))
@interface TSTOperatorNode : TSTExpressionNode
{
    unsigned short _operatorChar;
}

@property(nonatomic) unsigned short operatorChar; // @synthesize operatorChar=_operatorChar;
// - (void)saveToArchive:(struct OperatorNodeArchive )arg1 archiver:(id)arg2;
// - (void)loadFromArchive:(const struct OperatorNodeArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
// - (void)buildASTNodeArray:(struct TSCEASTNodeArray )arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable )arg3;
// - (struct TSCEFunctionArgSpec )argumentSpec;
- (id)string;
- (int)tokenType;
- (BOOL)isEqualToExpressionNode:(id)arg1;
// - (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (BOOL)forceReferenceInterpretationOfChildren;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2;
- (id)initWithContext:(id)arg1 operatorChar:(unsigned short)arg2 children:(id)arg3 firstIndex:(NSUInteger)arg4 lastIndex:(NSUInteger)arg5;

@end

