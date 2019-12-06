//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTTableHiddenRowColumnProviding-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, TSTHiddenStateIndexSet;

__attribute__((visibility("hidden")))
@interface TSTHiddenRowsColumnsCache : NSObject <TSTTableHiddenRowColumnProviding>
{
    TSTHiddenStateIndexSet *_rowsVisible;
    TSTHiddenStateIndexSet *_rowsUserVisible;
    NSMutableIndexSet *_rowsInvalid;
    NSUInteger _rowMarkIndex;
    TSTHiddenStateIndexSet *_columnsVisible;
    NSMutableIndexSet *_columnsInvalid;
}

@property(retain, nonatomic) NSMutableIndexSet *columnsInvalid; // @synthesize columnsInvalid=_columnsInvalid;
@property(retain, nonatomic) TSTHiddenStateIndexSet *columnsVisible; // @synthesize columnsVisible=_columnsVisible;
@property(nonatomic) NSUInteger rowMarkIndex; // @synthesize rowMarkIndex=_rowMarkIndex;
@property(retain, nonatomic) NSMutableIndexSet *rowsInvalid; // @synthesize rowsInvalid=_rowsInvalid;
@property(retain, nonatomic) TSTHiddenStateIndexSet *rowsUserVisible; // @synthesize rowsUserVisible=_rowsUserVisible;
@property(retain, nonatomic) TSTHiddenStateIndexSet *rowsVisible; // @synthesize rowsVisible=_rowsVisible;
// - (void).cxx_destruct;
- (void)validateChangeDescriptors:(id)arg1;
- (void)validate:(id)arg1;
- (unsigned int)numberOfVisibleRowsFromStartRowIndex:(NSUInteger)arg1 toEndRowIndex:(unsigned int)arg2;
- (unsigned int)numberOfVisibleRowsFromHeader:(unsigned int)arg1;
@property(readonly, nonatomic) NSIndexSet *visibleColumnIndices;
@property(readonly, nonatomic) NSIndexSet *userVisibleRowIndices;
@property(readonly, nonatomic) NSIndexSet *visibleRowIndices;
// - (struct TSUCellCoord)visibleCellOffsetBy:(struct TSUColumnRowOffset)arg1 fromCellID:(struct TSUCellCoord)arg2;
- (unsigned short)previousNthVisibleColumn:(unsigned int)arg1 fromColumnIndex:(unsigned short)arg2;
- (unsigned int)previousNthVisibleRow:(unsigned int)arg1 fromRowIndex:(unsigned int)arg2;
- (unsigned short)indexOfVisibleColumnAfterAndIncludingColumnAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleColumnAfterColumnAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleColumnBeforeAndIncludingColumnAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleColumnBeforeColumnAtIndex:(unsigned short)arg1;
- (unsigned int)nonUserHiddenRowAfterAndIncludingRow:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowAfterAndIncludingRowAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowAfterRowAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowBeforeAndIncludingRowAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowBeforeRowAtIndex:(unsigned int)arg1;
// - (BOOL)anyHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
// - (BOOL)anyRowsUserHiddenInCellRange:(struct TSUCellRect)arg1;
// - (BOOL)anyHiddenRowsInCellRange:(struct TSUCellRect)arg1;
// - (unsigned int)numberOfVisibleColumnsInCellRange:(struct TSUCellRect)arg1;
// - (unsigned int)numberOfHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
// - (unsigned int)numberOfVisibleRowsInCellRange:(struct TSUCellRect)arg1;
// - (unsigned int)numberOfUserHiddenRowsInCellRange:(struct TSUCellRect)arg1;
// - (unsigned int)numberOfHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (BOOL)hasHiddenColumnAtIndex:(unsigned short)arg1;
- (BOOL)isRowUserHidden:(unsigned int)arg1;
- (BOOL)hasHiddenRowAtIndex:(unsigned int)arg1;
- (id)init;

@end

