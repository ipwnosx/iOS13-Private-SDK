//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TSTCellRegion, TSTMergeListWrapper;

@protocol TSTTableMergeRangeProviding <NSObject>
- (TSTCellRegion *)expandCellRegionToCoverMergedCells:(TSTCellRegion *)arg1;
//  (struct TSUCellRect)expandCellRangeToCoverMergedCells:(struct TSUCellRect)arg1;
//  (BOOL)hasRangeSpanningRowsForCellRange:(struct TSUCellRect)arg1;
- (TSTMergeListWrapper *)mergesIntersectingCellRegion:(TSTCellRegion *)arg1;
//  (TSTMergeListWrapper *)mergesIntersectingRange:(struct TSUCellRect)arg1;
@end

