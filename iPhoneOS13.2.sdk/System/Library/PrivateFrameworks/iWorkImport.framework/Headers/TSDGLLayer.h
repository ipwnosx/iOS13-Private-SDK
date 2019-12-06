//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAEAGLLayer.h>

@class CADisplayLink, EAGLContext, NSObject;
@protocol TSDGLLayerContext, TSDGLLayerDelegate;

__attribute__((visibility("hidden")))
@interface TSDGLLayer : CAEAGLLayer
{
    id <TSDGLLayerContext> _layerContext;
    NSObject<TSDGLLayerDelegate> *_delegate;
    BOOL _setNeedsDisplay;
    EAGLContext *_sharedContext;
    BOOL _wasSharedContextCreated;
    CADisplayLink *_displayLink;
}

@property(nonatomic) EAGLContext *sharedContext; // @synthesize sharedContext=_sharedContext;
@property NSObject<TSDGLLayerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)displayAtCurrentLayerTime;
- (void)unlock;
- (void)lock;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setCurrentContext;
- (void)p_drawFrameFromDisplayLink:(id)arg1;
- (void)p_drawFrameAtLayerTime:(double)arg1;
- (void)teardown;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 isOpaque:(BOOL)arg2 delegate:(id)arg3 sharedContext:(id)arg4 isWideGamut:(BOOL)arg5;

@end

