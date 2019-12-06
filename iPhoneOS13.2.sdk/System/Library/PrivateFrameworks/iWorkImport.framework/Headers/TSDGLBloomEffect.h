//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDGLFrameBuffer, TSDGLShader;
@protocol TSDGLDataBuffer;

__attribute__((visibility("hidden")))
@interface TSDGLBloomEffect : NSObject
{
    CGSize _effectSize;
    CGSize _blurBufferSize;
    TSDGLFrameBuffer *_colorFramebuffer;
    TSDGLFrameBuffer *_blurFramebuffer;
    id <TSDGLDataBuffer> _dataBuffer;
    id <TSDGLDataBuffer> _blurTransferDataBuffer;
    id <TSDGLDataBuffer> _blurDataBuffer;
    TSDGLShader *_blurHorizontalShader;
    TSDGLShader *_blurVerticalShader;
    TSDGLShader *_bloomShader;
    TSDGLShader *_fboTransferShader;
    int _oldViewportRect[4];
    BOOL _oldViewportRectInitialized;
}

// - (void)drawBloomEffectWithMVPMatrix:(struct CATransform3D)arg1 bloomAmount:(double)arg2 currentGLFramebuffer:(int)arg3 GLState:(id)arg4;
- (void)p_blurColorBufferWithPreviousFramebuffer:(int)arg1 GLState:(id)arg2;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)bindFramebuffer;
- (void)p_setupBuffers;
- (void)p_setupShaders;
- (void)teardown;
- (void)dealloc;
- (id)initWithEffectSize:(CGSize)arg1 blurScale:(double)arg2;

@end

