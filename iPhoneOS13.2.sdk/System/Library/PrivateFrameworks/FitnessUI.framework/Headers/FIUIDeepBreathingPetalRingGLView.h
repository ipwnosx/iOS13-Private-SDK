//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKitUI/HKGLView.h>

@class GLKTextureInfo, MISSING_TYPE;
@protocol FIUIDeepBreathingPetalRingGLViewDelegate;

@interface FIUIDeepBreathingPetalRingGLView : HKGLView
{
    unsigned int _program;
    MISSING_TYPE *_ringCenterVector;
    unsigned int _vertexBuffer;
    unsigned int _indexBuffer;
   struct {
        union _GLKVector2 position;
        union _GLKVector2 coordinate;
    } _vertices[25];
    unsigned int _indices[72];
    unsigned int _projectionMatrixUniform;
    unsigned int _textureSamplerUniform;
    unsigned int _petalPositionUniform;
    unsigned int _petalPropertiesUniform;
    unsigned int _textureRotationUniform;
    GLKTextureInfo *_texture;
    MISSING_TYPE *_circlePosition[20];
    MISSING_TYPE *_circleProperties[20];
    MISSING_TYPE *_textureRotationVector;
    BOOL _showBlurTrails;
    float _ringRadius;
    id <FIUIDeepBreathingPetalRingGLViewDelegate> _petalRingDelegate;
    long long _numberOfPetals;
    long long _numberOfVisiblePetals;
    CGPoint _ringCenter;
}

@property(readonly, nonatomic) BOOL showBlurTrails; // @synthesize showBlurTrails=_showBlurTrails;
@property(readonly, nonatomic) long long numberOfVisiblePetals; // @synthesize numberOfVisiblePetals=_numberOfVisiblePetals;
@property(readonly, nonatomic) long long numberOfPetals; // @synthesize numberOfPetals=_numberOfPetals;
@property(nonatomic) float ringRadius; // @synthesize ringRadius=_ringRadius;
@property(nonatomic) CGPoint ringCenter; // @synthesize ringCenter=_ringCenter;
@property(nonatomic) __weak id <FIUIDeepBreathingPetalRingGLViewDelegate> petalRingDelegate; // @synthesize petalRingDelegate=_petalRingDelegate;
// - (void).cxx_destruct;
- (void)_teardown;
- (unsigned int)drawInRect:(CGRect)arg1 withContext:(id)arg2;
- (void)_updateVertices;
- (void)setGradientRotationAngle:(float)arg1;
- (void)_clearCirclesInRange:(NSRange *)arg1;
- (void)setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(BOOL)arg2;
- (void)_setCircleAtIndex:(long long)arg1 center:(CGPoint)arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;
- (void)setPetalAtIndex:(long long)arg1 center:(CGPoint)arg2 radius:(float)arg3 alpha:(float)arg4;
- (void)setBlurTrailAtIndex:(long long)arg1 center:(CGPoint)arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;
- (double)_maxPetalRingRadius;
- (void)_context_applyInitialState;
- (void)_context_setupScene;
- (void)_context_findUniformsAndAttributes;
- (void)_context_createBuffers;
- (void)_context_loadShadersWithNumberOfPetals:(long long)arg1 showBlurTrails:(BOOL)arg2;
- (void)update;
- (void)dealloc;
- (void)importDataFromPetalRing:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 numberOfPetals:(long long)arg2 showBlurTrails:(BOOL)arg3;

@end

