//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ToneKit/TKVibrationRecorderRippleView.h>

@class TKVibrationRecorderTouchSurfaceRecordedDataWrapper, TLVibrationPattern;
@protocol NSCopying, TKVibrationRecorderTouchSurfaceDelegate;

@interface TKVibrationRecorderTouchSurface : TKVibrationRecorderRippleView
{
    BOOL _isRecordingModeEnabled;
    double _vibrationPatternMaximumDuration;
    TKVibrationRecorderTouchSurfaceRecordedDataWrapper *_recordedDataWrapper;
    BOOL _shouldIgnoreCurrentTouch;
    BOOL _isReplayModeEnabled;
    TLVibrationPattern *_vibrationPatternToReplay;
    double _replayModeWasEnteredStartTime;
    id <NSCopying> _displayLinkManagerObserverToken;
    id <TKVibrationRecorderTouchSurfaceDelegate> _delegate;
}

@property(nonatomic) __weak id <TKVibrationRecorderTouchSurfaceDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_updateTouchLocationForReplayMode:(id)arg1;
- (void)exitReplayMode;
- (void)enterReplayModeWithVibrationPattern:(id)arg1;
- (void)_recordTouchLocation:(CGPoint)arg1 touchPhase:(int)arg2;
- (void)currentVibrationComponentShouldEnd;
- (void)exitRecordingMode;
- (void)enterRecordingMode;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1 styleProvider:(id)arg2;

@end

