//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSTListNode : TSTExpressionNode
{
    NSString *_whitespaceAfterLeftParen;
    NSArray *_whitespaceAfterDelimiters;
}

@property(retain, nonatomic) NSArray *whitespaceAfterDelimiters; // @synthesize whitespaceAfterDelimiters=_whitespaceAfterDelimiters;
@property(retain) NSString *whitespaceAfterLeftParen; // @synthesize whitespaceAfterLeftParen=_whitespaceAfterLeftParen;
-     // Error parsing type: v32@0:8^{ListNodeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{ExpressionNodeArchive}}16@24, name: saveToArchive:archiver:
-     // Error parsing type: v32@0:8r^{ListNodeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{ExpressionNodeArchive}}16@24, name: loadFromArchive:unarchiver:
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (struct TSCEFunctionArgSpec *)argumentSpec;
- (id)string;
- (int)tokenType;
- (_Bool)isEqualToExpressionNode:(id)arg1;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (id)mostSpecificNodeContainingIndex:(unsigned long long)arg1 correspondingIndex:(unsigned long long)arg2;
- (id)description;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;

@end
