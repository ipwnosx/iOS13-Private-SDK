//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class TSCH3DChartMeshSharedResource, TSCH3DChartTexcoordSharedResource, TSCH3DGeometry, TSCH3DGeometryArrays, TSCH3DResource, TSCHChartSeries, TSUOnce;
@protocol TSCH3DChartMeshCreator;

__attribute__((visibility("hidden")))
@interface TSCH3DChartMeshResources : NSObject <TSCHUnretainedParent>
{
    NSObject<TSCH3DChartMeshCreator> *mCreator;
    TSCHChartSeries *mSeries;
    TSCH3DChartMeshSharedResource *mVertex;
    TSCH3DChartMeshSharedResource *mBounds;
    TSCH3DResource *mCachedBounds;
    TSUOnce *mCachedBoundsOnce;
    TSCH3DChartMeshSharedResource *mNormal;
    TSCH3DChartTexcoordSharedResource *mTexcoord;
    TSCH3DGeometryArrays *mArrays;
    TSCH3DGeometry *mGeometry;
}

+ (id)resourcesWithSeries:(id)arg1 creator:(id)arg2;
+ (id)nullBuffer;
- (void)regenerateForChild:(id)arg1;
- (void)regenerateBounds;
- (id)geometryResourceWithPrimitiveType:(int)arg1;
- (void)regenerate;
@property(readonly, nonatomic) TSCH3DResource *texcoord;
@property(readonly, nonatomic) TSCH3DResource *normal;
@property(readonly, nonatomic) TSCH3DResource *vertex;
@property(readonly, nonatomic) TSCH3DResource *bounds;
- (void)clearParent;
- (void)dealloc;
- (id)initWithSeries:(id)arg1 creator:(id)arg2;

@end

