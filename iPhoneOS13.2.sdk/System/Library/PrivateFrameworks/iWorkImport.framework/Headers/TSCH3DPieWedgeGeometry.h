//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DGeometry.h>

@class TSCH3DNormalDirectionMapper;

__attribute__((visibility("hidden")))
@interface TSCH3DPieWedgeGeometry : TSCH3DGeometry
{
    float mStartAngle;
    float mEndAngle;
    long long mAngleSteps;
    long long mRadiusSteps;
    long long mBevelEdgeSteps;
    float mRadius;
    float mBottomZ;
    float mTopZ;
    long long mCapOffset;
    long long mCapCount;
    TSCH3DNormalDirectionMapper *mNormalDirectionMapper;
}

@property(readonly, nonatomic) TSCH3DNormalDirectionMapper *normalDirectionMapper; // @synthesize normalDirectionMapper=mNormalDirectionMapper;
@property(nonatomic) long long bevelEdgeSteps; // @synthesize bevelEdgeSteps=mBevelEdgeSteps;
@property(readonly, nonatomic) long long capCount; // @synthesize capCount=mCapCount;
@property(readonly, nonatomic) long long capOffset; // @synthesize capOffset=mCapOffset;
@property(nonatomic) float topZ; // @synthesize topZ=mTopZ;
@property(nonatomic) float bottomZ; // @synthesize bottomZ=mBottomZ;
@property(nonatomic) float radius; // @synthesize radius=mRadius;
@property(nonatomic) long long radiusSteps; // @synthesize radiusSteps=mRadiusSteps;
@property(nonatomic) long long angleSteps; // @synthesize angleSteps=mAngleSteps;
@property(nonatomic) float endAngle; // @synthesize endAngle=mEndAngle;
@property(nonatomic) float startAngle; // @synthesize startAngle=mStartAngle;
- (id)selectionKnobPositions;
- (int)geometryCount;
- (void)generateArrays;
- (void)p_generateBevelCoordinates:(vector_7200ab52 )arg1 andAngles:(vector_7584168e )arg2 radiusArray:(const vector_7584168e )arg3 topArray:(const vector_7584168e )arg4;
- (void)p_generateAngles:(vector_7584168e )arg1;
- (void)generateRoundedTop:(vector_7584168e )arg1 radiusArray:(vector_7584168e )arg2;
- (float)bevelHeight;
- (BOOL)isFullCircle;
- (void)dealloc;
- (id)init;

@end

