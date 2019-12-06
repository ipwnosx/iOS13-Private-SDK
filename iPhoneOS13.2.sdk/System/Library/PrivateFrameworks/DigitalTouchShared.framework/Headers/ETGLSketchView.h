//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <DigitalTouchShared/ETGLSketchRendererDelegate-Protocol.h>

@class CADisplayLink, EAGLContext, ETBoxcarFilterPointFIFO, ETGLSketchRenderer, ETPointFIFO, ETQuadCurvePointFIFO, ETSketchMessage, MISSING_TYPE, UIColor;

@interface ETGLSketchView : UIView <ETGLSketchRendererDelegate>
{
    CADisplayLink *_displayLink;
    UIColor *_currentStrokeColor;
    double _lastDisplayLinkTime;
    BOOL _renderingOffscreen;
    NSUInteger _currentStrokeIndex;
    NSUInteger _currentPointIndex;
    NSUInteger _numberOfDrawnStrokes;
    double _renderingDelay;
    double _renderingStartTime;
    double _pauseTime;
    BOOL _playing;
    BOOL _paused;
    BOOL _playbackCompleted;
    BOOL _useFastVerticalWisp;
    float _unitSize;
    ETSketchMessage *_messageData;
    double _wispDelay;
    double _timestampForLastDrawnPoint;
    EAGLContext *_context;
    ETGLSketchRenderer *_renderer;
    ETQuadCurvePointFIFO *_interpolatingFIFO;
    ETBoxcarFilterPointFIFO *_smoothingFIFO;
    ETPointFIFO *_pointFIFO;
    ETQuadCurvePointFIFO *_secondaryInterpolatingFIFO;
    ETBoxcarFilterPointFIFO *_secondarySmoothingFIFO;
    ETPointFIFO *_secondaryPointFIFO;
    NSUInteger _vertexOffset;
    double _delayBetweenStrokes;
    vector_c2d99b46 _vertexBatches;
    vector_e654105b _controlBatches;
    vector_06e666a8 _vertexBatchCount;
    vector_06e666a8 _secondaryVertexBatchCount;
}

+ (Class)layerClass;
@property(nonatomic) double delayBetweenStrokes; // @synthesize delayBetweenStrokes=_delayBetweenStrokes;
@property(nonatomic) NSUInteger vertexOffset; // @synthesize vertexOffset=_vertexOffset;
@property(nonatomic) vector_06e666a8 secondaryVertexBatchCount; // @synthesize secondaryVertexBatchCount=_secondaryVertexBatchCount;
@property(nonatomic) vector_06e666a8 vertexBatchCount; // @synthesize vertexBatchCount=_vertexBatchCount;
@property(nonatomic) vector_80ea899f controlBatches; // @synthesize controlBatches=_controlBatches;
@property(nonatomic) vector_c2d99b46 vertexBatches; // @synthesize vertexBatches=_vertexBatches;
@property(nonatomic) float unitSize; // @synthesize unitSize=_unitSize;
@property(retain, nonatomic) ETPointFIFO *secondaryPointFIFO; // @synthesize secondaryPointFIFO=_secondaryPointFIFO;
@property(retain, nonatomic) ETBoxcarFilterPointFIFO *secondarySmoothingFIFO; // @synthesize secondarySmoothingFIFO=_secondarySmoothingFIFO;
@property(retain, nonatomic) ETQuadCurvePointFIFO *secondaryInterpolatingFIFO; // @synthesize secondaryInterpolatingFIFO=_secondaryInterpolatingFIFO;
@property(retain, nonatomic) ETPointFIFO *pointFIFO; // @synthesize pointFIFO=_pointFIFO;
@property(retain, nonatomic) ETBoxcarFilterPointFIFO *smoothingFIFO; // @synthesize smoothingFIFO=_smoothingFIFO;
@property(retain, nonatomic) ETQuadCurvePointFIFO *interpolatingFIFO; // @synthesize interpolatingFIFO=_interpolatingFIFO;
@property(retain, nonatomic) ETGLSketchRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(nonatomic) BOOL useFastVerticalWisp; // @synthesize useFastVerticalWisp=_useFastVerticalWisp;
@property(nonatomic) BOOL playbackCompleted; // @synthesize playbackCompleted=_playbackCompleted;
@property(nonatomic) double timestampForLastDrawnPoint; // @synthesize timestampForLastDrawnPoint=_timestampForLastDrawnPoint;
@property(nonatomic) double wispDelay; // @synthesize wispDelay=_wispDelay;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=_playing;
@property(retain, nonatomic) ETSketchMessage *messageData; // @synthesize messageData=_messageData;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)sketchRendererDidReachVertexLimit:(id)arg1;
- (void)clearAllPoints;
- (void)didCompleteStroke;
- (void)handleSketchAtPosition:(CGPoint)arg1;
- (void)updateRendererWithSecondaryPoints:(MISSING_TYPE *)arg1 count:(NSUInteger)arg2 controlPoint:(MISSING_TYPE *)arg3 flush:(BOOL)arg4;
- (void)updateRendererWithPoints:(MISSING_TYPE *)arg1 count:(NSUInteger)arg2 controlPoint:(MISSING_TYPE *)arg3 flush:(BOOL)arg4;
- (void)handleTapAtPosition:(CGPoint)arg1;
- (void)layoutSubviews;
- (void)clear;
- (void)_endPlayback;
- (CGImageRef)createImageForTime:(double)arg1;
- (CGImageRef)createRenderedFrameImage;
// - (BOOL)_getCurrentSketchPoint:(CDStruct_e6681aac )arg1;
- (void)drawView:(id)arg1;
// - (BOOL)_doesPoint:(CDStruct_e6681aac )arg1 predateTime:(double)arg2;
- (void)drawFrameBeforeWisp;
- (void)_drawCurrentPointAdvancingPlayback;
- (void)beginStrokeWithColor:(id)arg1;
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setGLContextAsCurrent;

@end

