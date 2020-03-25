//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapEdgeBuilder : GEOMapRequest
{
    BOOL _buildAhead;
    BOOL _buildBehind;
    Matrix_8746f91e _firstTilePoint;
    Matrix_8746f91e _lastTilePoint;
    GEOMapTileFinder *_currentTileFinder;
    id /* CDUnknownBlockType */ _edgeHandler;
    unordered_set_684af1c2 _tileKeysSeen;
    BOOL _searchDirection;
    NSUInteger _buildDirection;
}

@property(nonatomic) NSUInteger buildDirection; // @synthesize buildDirection=_buildDirection;
@property(copy, nonatomic) id /* CDUnknownBlockType */ edgeHandler; // @synthesize edgeHandler=_edgeHandler;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
- (id)_lastTile;
- (id)_firstTile;
- (Matrix_8746f91e)_lastPoint;
- (Matrix_8746f91e)_firstPoint;
- (BOOL)_shouldFindEdgeBehind;
- (BOOL)_shouldFindEdgeAhead;
- (BOOL)_findEdgeBehindInTile:(id)arg1;
- (BOOL)_findEdgeAheadInTile:(id)arg1;
- (void)_buildCompleteEdge;
- (NSUInteger)_maxTileCount;
- (BOOL)_edgeStart:(const Matrix_8746f91e )arg1 end:(const Matrix_8746f91e )arg2 connectsTo:(const Matrix_8746f91e )arg3;
- (BOOL)_pointConnects:(const Matrix_8746f91e )arg1 rect:(const CDStruct_90e2a262 )arg2 to:(const CDStruct_c3b9c2ee )arg3;
- (void)_findTilesAdjacentToTile:(const struct _GEOTileKey )arg1 containingPoint:(const Matrix_8746f91e )arg2 findAhead:(BOOL)arg3;
- (void)buildEdge:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_findNextEdge;
- (BOOL)_findEdgeBehind;
- (BOOL)_findEdgeAhead;
@property(readonly, nonatomic) GEOMapAccess *map;
- (void)cancel;
- (id)initWithMap:(id)arg1;

@end
