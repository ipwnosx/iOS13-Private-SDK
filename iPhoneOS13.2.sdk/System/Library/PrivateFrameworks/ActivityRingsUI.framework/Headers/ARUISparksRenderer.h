//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUICelebrationsRendering-Protocol.h>

@class ARUIAngularSparksComputeState, ARUIAngularSparksRenderState, ARUIKineticSparksComputeState, ARUIKineticSparksParticleRenderState;
@protocol ARUIBlurRendering, ARUICompositeRendering, MTLBuffer, MTLDevice, MTLLibrary, MTLTexture;

__attribute__((visibility("hidden")))
@interface ARUISparksRenderer : NSObject <ARUICelebrationsRendering>
{
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    BOOL _prewarmed;
    id <MTLBuffer> _quadVertexBuffer;
    id <MTLBuffer> _quadIndexBuffer;
    NSUInteger _quadIndexCount;
    id <MTLTexture> _particleTexture;
    ARUIAngularSparksComputeState *_angularSparksComputeState;
    ARUIKineticSparksComputeState *_kineticSparksComputeState;
    ARUIAngularSparksRenderState *_angularSparksRenderState;
    ARUIKineticSparksParticleRenderState *_kineticSparksRenderState;
    id <ARUICompositeRendering> _compositeRenderer;
    id <ARUIBlurRendering> _blurRenderer;
}

@property(nonatomic) __weak id <ARUIBlurRendering> blurRenderer; // @synthesize blurRenderer=_blurRenderer;
@property(nonatomic) __weak id <ARUICompositeRendering> compositeRenderer; // @synthesize compositeRenderer=_compositeRenderer;
// - (void).cxx_destruct;
- (long long)_smallBlurRadiusForSize:(float)arg1;
- (long long)_largeBlurRadiusForSize:(float)arg1;
- (void)_renderWithCommandEncoder:(id)arg1 ring:(id)arg2 sparksCelebration:(id)arg3 uniformsType:(NSUInteger)arg4;
- (void)_computeWithCommandEncoder:(id)arg1 ring:(id)arg2 sparksCelebration:(id)arg3;
- (void)prewarm;
- (id)initWithDevice:(id)arg1 library:(id)arg2;

@end

