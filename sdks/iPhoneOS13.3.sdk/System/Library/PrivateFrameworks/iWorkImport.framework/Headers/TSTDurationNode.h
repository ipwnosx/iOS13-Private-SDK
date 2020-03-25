//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>

__attribute__((visibility("hidden")))
@interface TSTDurationNode : TSTExpressionNode
{
    BOOL _blank;
    struct TSTDurationWrapper _value;
}

@property(nonatomic, getter=isBlank) BOOL blank; // @synthesize blank=_blank;
@property(nonatomic) struct TSTDurationWrapper value; // @synthesize value=_value;
- (id)description;
- (void)saveToArchive:(struct DurationNodeArchive )arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct DurationNodeArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)format;
- (struct TSTDurationWrapper)durationWrapper;
- (id)date;
- (id)exportString;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray )arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable )arg3;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (id)string;
- (int)tokenType;
- (BOOL)isEqualToExpressionNode:(id)arg1;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(NSUInteger)arg3 lastIndex:(NSUInteger)arg4;
- (id)initWithContext:(id)arg1 asBlank:(BOOL)arg2 firstIndex:(NSUInteger)arg3 lastIndex:(NSUInteger)arg4;
- (id)initWithContext:(id)arg1 duration:(struct TSTDurationWrapper)arg2 firstIndex:(NSUInteger)arg3 lastIndex:(NSUInteger)arg4;

@end
