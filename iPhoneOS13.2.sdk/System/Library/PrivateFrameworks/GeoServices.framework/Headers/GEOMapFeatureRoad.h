//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapFeatureLine.h>

@class GEOMapFeatureJunction, NSString;

@interface GEOMapFeatureRoad : GEOMapFeatureLine
{
//     CDStruct_c8b5ad3f _feature;
    NSUInteger _roadID;
    GEOMapFeatureJunction *_junctionA;
    GEOMapFeatureJunction *_junctionB;
    BOOL _checkedJunctionA;
    BOOL _checkedJunctionB;
}

// + (double)estimatedWidthForRoad:(CDStruct_c8b5ad3f )arg1;
// - (void).cxx_destruct;
// - (CDStruct_6e3f967a )_tilePointsForSection:(NSUInteger)arg1 withCount:(out NSUInteger )arg2;
- (id)_attributes;
- (id)_containingTile;
- (int)_flippedSidewalkSideFor:(int)arg1;
- (int)_flippedWalkableSideFor:(int)arg1;
- (id)_junctionB;
- (id)_junctionA;
- (id)localizedRoadName:(out id )arg1;
- (void)flip;
@property(readonly, nonatomic) NSString *internalRoadName;
@property(readonly, nonatomic) int rampType;
@property(readonly, nonatomic) BOOL isRail;
@property(readonly, nonatomic) BOOL isBridge;
@property(readonly, nonatomic) BOOL isTunnel;
@property(readonly, nonatomic) int sidewalkSide;
@property(readonly, nonatomic) int walkableSide;
@property(readonly, nonatomic) BOOL isRoadPedestrianNavigable;
@property(readonly, nonatomic) BOOL isWalkable;
@property(readonly, nonatomic) BOOL isDrivable;
@property(readonly, nonatomic) BOOL speedLimitIsMPH;
@property(readonly, nonatomic) NSUInteger speedLimit;
@property(readonly, nonatomic) double roadWidth;
@property(readonly, nonatomic) long long laneCount;
@property(readonly, nonatomic) int travelDirection;
@property(readonly, nonatomic) int formOfWay;
@property(readonly, nonatomic) int roadClass;
@property(readonly, nonatomic) GEOMapFeatureJunction *endJunction;
@property(readonly, nonatomic) GEOMapFeatureJunction *startJunction;
@property(readonly, nonatomic) NSUInteger roadID;
- (id)debugDescription;
@property(readonly, nonatomic) BOOL isFlipped;
@property(readonly, nonatomic) NSUInteger featureIndex;
// @property(readonly, nonatomic) CDStruct_c8b5ad3f feature;
// @property(readonly, nonatomic) struct _GEOTileKey tileKey;
- (void)dealloc;
// - (id)initWithFeature:(CDStruct_c8b5ad3f )arg1;
- (void)updateForDesiredRoadDirectionality:(NSUInteger)arg1 isOutboundRoad:(BOOL)arg2;

@end

