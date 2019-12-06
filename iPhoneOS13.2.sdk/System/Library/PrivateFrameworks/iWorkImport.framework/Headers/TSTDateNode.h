//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface TSTDateNode : TSTExpressionNode
{
    BOOL _isBlank;
    NSDate *_value;
    NSString *_dateFormat;
}

@property(retain, nonatomic) NSString *dateFormat; // @synthesize dateFormat=_dateFormat;
@property(nonatomic) BOOL isBlank; // @synthesize isBlank=_isBlank;
@property(retain, nonatomic) NSDate *value; // @synthesize value=_value;
// - (void).cxx_destruct;
- (id)description;
// - (void)saveToArchive:(struct DateNodeArchive )arg1 archiver:(id)arg2;
// - (void)loadFromArchive:(const struct DateNodeArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
// - (struct TSTDurationWrapper)durationWrapper;
- (id)date;
- (id)exportString;
// - (void)buildASTNodeArray:(struct TSCEASTNodeArray )arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable )arg3;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (id)string;
- (int)tokenType;
- (BOOL)isEqualToExpressionNode:(id)arg1;
// - (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(NSUInteger)arg3 lastIndex:(NSUInteger)arg4;
- (id)initWithContext:(id)arg1 asBlank:(BOOL)arg2 firstIndex:(NSUInteger)arg3 lastIndex:(NSUInteger)arg4;
- (id)initWithContext:(id)arg1 dateValue:(id)arg2 firstIndex:(NSUInteger)arg3 lastIndex:(NSUInteger)arg4;

@end

