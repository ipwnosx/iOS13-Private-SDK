//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSTCell, TSTCellMap, TSTCellUIDIterator;

__attribute__((visibility("hidden")))
@interface TSTCellMapIterator : NSObject
{
    TSTCellMap *_cellMap;
    TSTCellUIDIterator *_cellUIDIterator;
    NSUInteger _index;
    BOOL _oneToMany;
//     struct TSTCellUID _currentCellUID;
    TSTCell *_currentCell;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)currentCell;
// - (const struct TSTCellUID )currentCellUID;
- (pair_4d5b4bcf)nextCellAndCellUID;
- (id)initWithCellMap:(id)arg1;

@end

