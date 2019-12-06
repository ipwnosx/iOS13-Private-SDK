//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMetalLayer, NSArray, NSMutableArray, PKLinedPaper, PKMetalRenderer, PKStrokeGenerator;
@protocol CAMetalDrawable, MTLCommandQueue, MTLDevice, MTLTexture, OS_dispatch_queue, OS_dispatch_semaphore, PKMetalRendererControllerDelegate;

@interface PKMetalRendererController : NSObject
{
    NSObject<OS_dispatch_queue> *_renderQueue;
    _Atomic int _cancelLongRunningRenderingCount;
    _Atomic int _cancelAllRendering;
    NSObject<OS_dispatch_semaphore> *_canBeginRenderSemaphore;
//    struct atomic_flag _readyToBeginRender;
    _Atomic double _lastFrameDuration;
    _Atomic NSUInteger _lastPresentationTime;
    _Atomic int _queuedRenders;
    NSMutableArray *_postPresentCallbacks;
    BOOL _isTorndown;
    CGSize _pixelSize;
    CGSize _actualSize;
    double _presentationCount;
    double _presentationDelay;
    double _presentationDelayGrowth;
    double _presentationMaxDelay;
    id /* CDUnknownBlockType */ _vSyncTimeoutBlock;
//    struct PKRunningStat _strokeLatencyStat;
    id <MTLTexture> _currentTextureTarget;
    id <CAMetalDrawable> _currentDrawable;
    CGImageRef _paperTextureImage;
    BOOL _liveStrokeMode;
    id <PKMetalRendererControllerDelegate> _delegate;
    PKStrokeGenerator *_inputController;
    PKLinedPaper *_linedPaper;
    NSArray *_liveStrokeStrokes;
    double _liveStrokeElapsedTime;
    double _liveStrokeDuration;
    CAMetalLayer *_presentationLayer;
    PKMetalRenderer *_renderer;
    double _inputScale;
    CGRect _viewScissor;
    CGAffineTransform _strokeTransform;
    CGAffineTransform _paperTransform;
    CGAffineTransform _renderTransform;
}

@property double inputScale; // @synthesize inputScale=_inputScale;
@property CGAffineTransform renderTransform; // @synthesize renderTransform=_renderTransform;
@property(retain, nonatomic) PKMetalRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak CAMetalLayer *presentationLayer; // @synthesize presentationLayer=_presentationLayer;
@property(nonatomic) double liveStrokeDuration; // @synthesize liveStrokeDuration=_liveStrokeDuration;
@property(nonatomic) double liveStrokeElapsedTime; // @synthesize liveStrokeElapsedTime=_liveStrokeElapsedTime;
@property(copy, nonatomic) NSArray *liveStrokeStrokes; // @synthesize liveStrokeStrokes=_liveStrokeStrokes;
@property(nonatomic) BOOL liveStrokeMode; // @synthesize liveStrokeMode=_liveStrokeMode;
@property(readonly, nonatomic) CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(readonly, nonatomic) CGSize actualSize; // @synthesize actualSize=_actualSize;
@property(nonatomic) CGAffineTransform paperTransform; // @synthesize paperTransform=_paperTransform;
@property(nonatomic) CGRect viewScissor; // @synthesize viewScissor=_viewScissor;
@property(retain, nonatomic) PKLinedPaper *linedPaper; // @synthesize linedPaper=_linedPaper;
@property(readonly, nonatomic) PKStrokeGenerator *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) CGAffineTransform strokeTransform; // @synthesize strokeTransform=_strokeTransform;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
@property(nonatomic) __weak id <PKMetalRendererControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
// - (void).cxx_destruct;
@property(nonatomic) BOOL invertColors;
- (void)replaceInkTexture:(id)arg1 image:(CGImageRef)arg2;
- (BOOL)setupCurrentDrawable;
- (BOOL)_renderAheadWithTransform:(CGAffineTransform)arg1 at:(double)arg2;
- (void)callBlockAfterPresenting:(CDUnknownBlockType)arg1;
- (void)didFinishRendering:(CDUnknownBlockType)arg1;
- (BOOL)prerenderWithTransform:(CGAffineTransform)arg1 inputScale:(double)arg2 at:(double)arg3;
- (void)renderWithTransform:(CGAffineTransform)arg1 inputScale:(double)arg2 at:(double)arg3;
- (void)pokeEventDispatcher;
- (void)_renderLiveStrokeAndPresentWithTransform:(CGAffineTransform)arg1 at:(double)arg2;
- (void)_present:(double)arg1;
- (void)_renderAndPresent:(BOOL)arg1 withTransform:(CGAffineTransform)arg2;
- (void)_renderDrawPoints;
- (void)changeRenderSize;
- (void)drawingCancelledWithCompletion:(CDUnknownBlockType)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(id)arg1 finishStrokeBlock:(CDUnknownBlockType)arg2;
- (void)drawingBeganWithStroke:(id)arg1;
- (void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 useLayerContext:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawStrokes:(id)arg1 renderIntermediateSteps:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purgeOriginalBackFramebuffer;
- (void)flushMemoryIfPossible;
- (void)clear;
- (CGImageRef)newCGImageWithClipRect:(CGRect)arg1;
- (CGImageRef)newCGImage;
- (void)drawImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 clippedToStrokeSpaceRect:(CGRect)arg3;
- (void)drawImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2;
- (void)drawTexture:(id)arg1;
- (void)renderTilesIntoTiles:(id)arg1;
- (void)renderTiles:(id)arg1 tileTransform:(CGAffineTransform)arg2;
- (void)_copyIntoTilesFromRenderQueue:(id)arg1 tileTransform:(CGAffineTransform)arg2;
- (void)copyIntoTiles:(id)arg1;
- (BOOL)drawStrokes:(id)arg1 intoTile:(id)arg2 renderCount:(long long)arg3;
@property(nonatomic) double backboardPaperMultiply;
- (void)setLiveRenderingOverrideColor:(CGColorRef)arg1;
- (void)setBackgroundColor:(CGColorRef)arg1;
- (void)setPaperTextureImage:(CGImageRef)arg1;
- (void)setResourceCacheSize:(NSUInteger)arg1;
- (void)testLiveStrokeToFrame:(CGRect)arg1 texture:(CGImageRef)arg2 strokeInterval:(float)arg3;
- (NSUInteger)_drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 useLayerContext:(BOOL)arg4 progress:(id)arg5;
- (void)_drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 useLayerContext:(BOOL)arg4 renderCompletion:(CDUnknownBlockType)arg5;
- (void)buildRenderCacheForStrokes:(id)arg1;
- (void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 imageClipRect:(CGRect)arg4 completion:(CDUnknownBlockType)arg5;
- (CGImageRef)renderStrokesSync:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 imageClipRect:(CGRect)arg4;
- (BOOL)isAllRenderingCancelled;
- (void)cancelAllRendering;
- (BOOL)isLongRunningRenderingCancelled;
- (void)resumeLongRunningRendersAfterAllWorkIsDone;
- (void)resumeLongRunningRenders;
- (void)cancelLongRunningRenders;
- (void)signalVSyncSemaphore:(double)arg1 presentationTime:(NSUInteger)arg2;
- (void)cancelVSyncTimeoutBlock;
- (void)setupSync;
- (void)setup;
- (void)dealloc;
- (void)teardown;
- (void)teardownSync;
- (void)setPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device; // @dynamic device;
- (id)initWithPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2 renderQueue:(id)arg3 usePrivateResourceHandler:(BOOL)arg4;

@end

