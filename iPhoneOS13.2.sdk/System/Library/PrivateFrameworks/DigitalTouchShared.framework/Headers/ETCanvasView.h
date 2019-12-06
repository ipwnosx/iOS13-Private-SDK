//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <DigitalTouchShared/ETMessageDelegate-Protocol.h>

@class AVPlayerLayer, DTSSceneView, ETAngerMessage, ETGLSketchView, ETHeartbeatMessage, ETKissMessage, ETMessage, ETTapMessage, NSMutableDictionary, NSMutableSet, NSTimer, SKScene, UIColor, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer, UITouch;
@protocol ETCanvasViewDelegate, ETMessageTimeSource;

@interface ETCanvasView : UIView <ETMessageDelegate, UIGestureRecognizerDelegate>
{
    NSMutableSet *_playingMessages;
    ETGLSketchView *_currentSketchView;
    ETTapMessage *_currentTaps;
    ETHeartbeatMessage *_currentHeartbeat;
    NSTimer *_heartbeatDurationTimer;
    UILongPressGestureRecognizer *_heartbeatRecognizer;
    CGPoint _heartbeatStartCenter;
    double _lastActivityTimestamp;
    double _touchesBeganTimestamp;
    NSTimer *_sendMessageTimer;
    NSTimer *_idleTimer;
    BOOL _setAlwaysPaused;
    unsigned short _messageType;
    CGPoint _lastPt;
    UITouch *_drawingTouch;
    BOOL _drawingTouchStartedStroke;
    double _drawingTouchMovedDistance;
    CGRect _ignoredTouchesRect;
    BOOL _didIgnoreTouchesBegan;
    BOOL _ignoreTouchesUntilAllTouchesEnded;
    NSMutableSet *_touchesDown;
    NSMutableDictionary *_messageIdentifierToDoodleView;
    UITapGestureRecognizer *_tapRecognizer;
    NSTimer *_fastTapAllowableMovementTimer;
    double _lastFastTapTimestamp;
    UITapGestureRecognizer *_kissRecognizer;
    ETKissMessage *_currentKissMessage;
    UILongPressGestureRecognizer *_angerRecognizer;
    ETAngerMessage *_currentAnger;
    NSTimer *_angerDurationLimitTimer;
    double _wispDelay;
    BOOL _sketchDidReachSizeLimit;
    SKScene *_scene;
    DTSSceneView *_sceneView;
    UIImageView *_photoView;
    UIView *_videoView;
    AVPlayerLayer *_videoLayer;
    BOOL _canComposeHeartbeat;
    BOOL _canComposeTap;
    BOOL _canComposeKiss;
    BOOL _canComposeAnger;
    BOOL _isComposing;
    BOOL _usesMediaAppearance;
    BOOL _paused;
    BOOL _useFastVerticalWisp;
    BOOL _angerUsesForceTouch;
    id <ETCanvasViewDelegate> _canvasDelegate;
    id <ETMessageTimeSource> _timeSource;
    UIColor *_drawingColor;
    ETMessage *_parentMessage;
}

@property(nonatomic) BOOL angerUsesForceTouch; // @synthesize angerUsesForceTouch=_angerUsesForceTouch;
@property(nonatomic) BOOL useFastVerticalWisp; // @synthesize useFastVerticalWisp=_useFastVerticalWisp;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(retain, nonatomic) ETMessage *parentMessage; // @synthesize parentMessage=_parentMessage;
@property(nonatomic) BOOL usesMediaAppearance; // @synthesize usesMediaAppearance=_usesMediaAppearance;
@property(readonly, nonatomic) BOOL isComposing; // @synthesize isComposing=_isComposing;
@property(nonatomic) BOOL canComposeAnger; // @synthesize canComposeAnger=_canComposeAnger;
@property(nonatomic) BOOL canComposeKiss; // @synthesize canComposeKiss=_canComposeKiss;
@property(nonatomic) BOOL canComposeTap; // @synthesize canComposeTap=_canComposeTap;
@property(nonatomic) BOOL canComposeHeartbeat; // @synthesize canComposeHeartbeat=_canComposeHeartbeat;
@property(retain, nonatomic) UIColor *drawingColor; // @synthesize drawingColor=_drawingColor;
@property(nonatomic) __weak id <ETMessageTimeSource> timeSource; // @synthesize timeSource=_timeSource;
@property(nonatomic) __weak id <ETCanvasViewDelegate> canvasDelegate; // @synthesize canvasDelegate=_canvasDelegate;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_configureAngerRecognizer;
- (void)setForceTouchEnabled:(BOOL)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)messageDidStopPlaying:(id)arg1;
- (void)messageWillStopPlaying:(id)arg1;
- (void)messageWillReachSizeLimit:(id)arg1;
- (void)playMessage:(id)arg1;
- (void)playTestStrokeWithColor:(id)arg1 duration:(double)arg2;
- (void)_hideHeartbeatTimerFired;
- (void)_hideHeartbeat;
- (void)_showHeartbeatAtNormalizedPoint:(CGPoint)arg1 rotation:(double)arg2;
- (void)updateCurrentMessageWithHeartRate:(NSUInteger)arg1;
- (void)_sendHeartbeat;
- (void)_sendKiss;
- (void)_heartbeatRecognized:(id)arg1;
- (CGPoint)_viewPointNormalizedInSceneSpace:(CGPoint)arg1;
- (double)_angleOfRotationBetweenTwoFingers:(id)arg1;
- (void)sendCurrentMessage;
- (void)_sendTaps;
- (void)_sendSketch;
- (id)composedSketchMessage;
- (void)endMessageComposition;
- (BOOL)_sendMessageTimerFired;
- (void)_clearSendMessageTimer;
- (void)_startSendMessageTimer;
- (void)handleDotAtX:(float)arg1 Y:(float)arg2 color:(id)arg3 time:(double)arg4 isRemote:(BOOL)arg5;
- (void)handlePanAtX:(float)arg1 Y:(float)arg2 color:(id)arg3 time:(double)arg4 state:(long long)arg5 isRemote:(BOOL)arg6;
- (void)handleTapAtX:(float)arg1 Y:(float)arg2 color:(id)arg3 time:(double)arg4 isRemote:(BOOL)arg5;
- (void)_createSketchViewWithColor:(id)arg1 time:(double)arg2 message:(id)arg3;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_doodleEndedWithTouches:(id)arg1 cancelled:(BOOL)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)_areRecognizersTrackingMultipleFingers;
- (void)_tapRecognized:(id)arg1;
- (void)_kissRecognized:(id)arg1;
- (void)_angerDurationLimitTimerFired;
- (void)_hideAnger;
- (void)_showAngerAtPoint:(CGPoint)arg1;
- (void)_sendAnger;
- (void)_angerRecognized:(id)arg1;
- (CGPoint)_normalizedGesturePoint:(id)arg1;
- (void)_fastTapAllowableMovementTimerFired;
- (void)_startFastTapAllowableMovementTimer;
- (void)updateIgnoredTouchesRectForStatusBarSize:(CGSize)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)_isTapTooRecentAfterKissGesture;
- (BOOL)_canComposeExclusiveMessage;
- (void)_checkForIdle;
- (void)_stopCheckForIdleTimer;
- (void)_startCheckForIdleTimer;
- (void)clearCanvasAnimated:(BOOL)arg1;
- (void)_clearDoodleViewForMessage:(id)arg1;
- (void)_animateOutSketchView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)wispVisibleSketchViewsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setAlwaysPaused:(BOOL)arg1;
- (BOOL)_sketchesPaused;
- (void)_setSketchesPaused:(BOOL)arg1;
- (void)dealloc;
- (void)_endMessage:(id)arg1 withSend:(BOOL)arg2;
- (void)_updateRecognizersAtEndOfComposition;
- (void)_setIsComposingMessageOfType:(unsigned short)arg1;
- (void)startDoodleMessageComposition;
- (void)_startDoodleMessageCompositionAtTime:(double)arg1;
- (BOOL)_tapsInProgress;
- (BOOL)isComposingSketch;
- (BOOL)isComposingHeartbeat;
- (BOOL)_sketchInProgress;
- (void)layoutSubviews;
- (void)_updatePhotoViewFrame;
- (void)_updateVideoViewFrame;
- (void)hideVideo;
- (void)showVideoForPlayer:(id)arg1;
- (void)hidePhoto;
- (void)showPhotoForImage:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

