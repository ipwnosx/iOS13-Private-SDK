//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPObject.h>

@interface TSTMergeRegionMap : TSPObject
{
//     struct unordered_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, TSTCellIDHasher, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate>>> mCellIDToMergeRegionTopLeft;
//     struct unordered_map<TSUColumnRowCoordinate, TSUColumnRowSize, TSTCellIDHasher, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowSize>>> mMergeRegionTopLeftToMergeRegionSize;
//     CDStruct_5f1f7aa9 mUnionedMergeRange;
}

// + (id)mergeRegionMapFromMap:(id)arg1 intersectingRange:(CDStruct_5f1f7aa9)arg2;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (BOOL)hasRangeSpanningRows;
- (id)mergedGridIndicesForDimension:(int)arg1;
// - (BOOL)find:(CDStruct_5f1f7aa9)arg1;
// - (CDStruct_5f1f7aa9)unionedMergeRange;
- (BOOL)partiallyIntersectsCellRegion:(id)arg1;
// - (BOOL)partiallyIntersectsCellRange:(CDStruct_5f1f7aa9)arg1;
// - (CDStruct_5f1f7aa9)mergedRangeForCellID:(CDStruct_0441cfb5)arg1;
// - (BOOL)remove:(CDStruct_5f1f7aa9)arg1;
// - (BOOL)insert:(CDStruct_5f1f7aa9)arg1;
- (id)description;
- (NSUInteger)count;
- (id)iterator;
- (id)initWithContext:(id)arg1;
// - (id)initRegionMapFromMap:(id)arg1 intersectingRange:(CDStruct_5f1f7aa9)arg2;
- (id)initRegionMapFromMap:(id)arg1 rowRemapping:(id)arg2;

@end

