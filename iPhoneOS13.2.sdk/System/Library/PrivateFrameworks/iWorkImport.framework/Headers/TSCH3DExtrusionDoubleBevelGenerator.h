//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DExtrusionDoubleBevelGenerator : NSObject
{
    vector_7200ab52 mInputSpinePoints;
    vector_7200ab52 mSpinePoints;
    vector_d73af98f mScaleValues;
    float mBevelHeight;
    long long mBevelSlices;
    BOOL mEnableBevelEdges;
}

+ (id)generator;
+ (id)namedBevelInterpolationShaderFunction;
@property(nonatomic) BOOL enableBevelEdges; // @synthesize enableBevelEdges=mEnableBevelEdges;
@property(nonatomic) long long bevelSlices; // @synthesize bevelSlices=mBevelSlices;
@property(nonatomic) float bevelHeight; // @synthesize bevelHeight=mBevelHeight;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (long long)bottomSlices;
- (long long)topSlices;
- (void)adjustBottomScales;
- (void)adjustTopScales;
- (void)resetAllScales;
- (float)scaleUValueAtIndex:(long long)arg1;
- (void)adjustBottomOffset;
- (void)generateBottom;
@property(readonly, nonatomic) long long bottomBevelStartIndex;
- (tvec3_17f03ce0)bottomDirection;
@property(readonly, nonatomic) long long bottomNonBevelStartIndex;
- (void)generateTop;
- (long long)topBevelStartIndex;
- (void)createSpinePointArray;
- (float)spineUValueAtIndex:(long long)arg1;
- (const vector_d73af98f )scaleValues;
- (const vector_7200ab52 )spinePoints;
- (vector_7200ab52 )inputSpinePoints;
- (void)generate;
- (id)init;

@end

