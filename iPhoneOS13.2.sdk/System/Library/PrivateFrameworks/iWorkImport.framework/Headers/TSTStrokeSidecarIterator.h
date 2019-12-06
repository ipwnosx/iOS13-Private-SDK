//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTCellRegionIterating-Protocol.h>
#import <iWorkImport/TSTMutableCellIteratorDataUpdating-Protocol.h>

@class TSTCellRegion, TSTStrokeSidecar;
@protocol TSTCellRegionIterating;

__attribute__((visibility("hidden")))
@interface TSTStrokeSidecarIterator : NSObject <TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating>
{
    TSTStrokeSidecar *_strokeSidecar;
    TSTCellRegion *_region;
    NSObject _regionIterator;
//     struct TSUCellCoord _curCellID;
}

+ (id)p_filterRegion:(id)arg1 strokeSidecar:(id)arg2;
// @property(nonatomic) struct TSUCellCoord curCellID; // @synthesize curCellID=_curCellID;
@property(readonly, nonatomic) NSObject<TSTCellRegionIterating> *regionIterator; // @synthesize regionIterator=_regionIterator;
@property(readonly, nonatomic) TSTCellRegion *region; // @synthesize region=_region;
@property(readonly, nonatomic) TSTStrokeSidecar *strokeSidecar; // @synthesize strokeSidecar=_strokeSidecar;
// - (void).cxx_destruct;
- (void)terminate;
// - (struct TSUCellCoord)advanceToCellID:(struct TSUCellCoord)arg1;
// - (struct TSUCellCoord)getNext;
- (void)updateFormulaForCellData:(id)arg1;
- (void)updateCellData:(id)arg1;
- (id)initWithStrokeSidecar:(id)arg1 region:(id)arg2;

@end

