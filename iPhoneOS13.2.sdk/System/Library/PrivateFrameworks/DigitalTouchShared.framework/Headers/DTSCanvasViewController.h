//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <DigitalTouchShared/DTSColorPickerDelegate-Protocol.h>
#import <DigitalTouchShared/ETCanvasViewDelegate-Protocol.h>

@class AVPlayer, DTSColorPicker, ETBalloonPluginDataSource, ETCanvasView, ETMessage, NSArray, NSMutableArray, NSTimer, UIButton;
@protocol DTSCanvasViewControllerSendDelegate;

@interface DTSCanvasViewController : UIViewController <ETCanvasViewDelegate, DTSColorPickerDelegate>
{
    NSMutableArray *_unplayedMessages;
    BOOL _isPlayingMessage;
    BOOL _playbackEnabled;
    UIButton *_replayButton;
    BOOL _showingReplayButton;
    NSTimer *_composeSessionEndTimer;
    NSMutableArray *_deferredMessages;
    AVPlayer *_videoPlayer;
    UIButton *_audioToggleButton;
    UIButton *_cancelButton;
    UIButton *_skipButton;
    BOOL _composingCompositeMessage;
    BOOL _playingCompositeMessage;
    BOOL _paused;
    BOOL _composeDisabled;
    BOOL _autoPlayOnAppearanceDisabled;
    BOOL _ignoreAppearanceCallbacks;
    BOOL _playingMessages;
    BOOL _deferMessageSend;
    BOOL _usesCompactKeyboardLayout;
    BOOL _overrideAudioDefaultToOff;
    unsigned short _composingMessageType;
    id <DTSCanvasViewControllerSendDelegate> _sendDelegate;
    double _mediaMessagePlayTrackerTime;
    ETCanvasView *_canvasView;
    ETMessage *_playingMessage;
    DTSColorPicker *_colorPicker;
    double _bottomMargin;
    ETBalloonPluginDataSource *_dataSource;
    id /* CDUnknownBlockType */ _balloonPlaybackCompletion;
    ETMessage *_messageForReplay;
}

+ (id)audioToggleOffImage;
+ (id)audioToggleOnImage;
+ (id)replayButtonFont;
@property(retain, nonatomic) ETMessage *messageForReplay; // @synthesize messageForReplay=_messageForReplay;
@property(copy, nonatomic) id /* CDUnknownBlockType */ balloonPlaybackCompletion; // @synthesize balloonPlaybackCompletion=_balloonPlaybackCompletion;
@property(nonatomic) __weak ETBalloonPluginDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic, getter=isPlaybackEnabled) BOOL playbackEnabled; // @synthesize playbackEnabled=_playbackEnabled;
@property(nonatomic) BOOL overrideAudioDefaultToOff; // @synthesize overrideAudioDefaultToOff=_overrideAudioDefaultToOff;
@property(nonatomic) BOOL usesCompactKeyboardLayout; // @synthesize usesCompactKeyboardLayout=_usesCompactKeyboardLayout;
@property(readonly, nonatomic) NSArray *deferredMessages; // @synthesize deferredMessages=_deferredMessages;
@property(nonatomic) BOOL deferMessageSend; // @synthesize deferMessageSend=_deferMessageSend;
@property(retain, nonatomic) DTSColorPicker *colorPicker; // @synthesize colorPicker=_colorPicker;
@property(retain, nonatomic) ETMessage *playingMessage; // @synthesize playingMessage=_playingMessage;
@property(nonatomic, getter=isPlayingMessages) BOOL playingMessages; // @synthesize playingMessages=_playingMessages;
@property(retain, nonatomic) ETCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) BOOL ignoreAppearanceCallbacks; // @synthesize ignoreAppearanceCallbacks=_ignoreAppearanceCallbacks;
@property(nonatomic, getter=isAutoPlayOnAppearanceDisabled) BOOL autoPlayOnAppearanceDisabled; // @synthesize autoPlayOnAppearanceDisabled=_autoPlayOnAppearanceDisabled;
@property(nonatomic, getter=isComposeDisabled) BOOL composeDisabled; // @synthesize composeDisabled=_composeDisabled;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) double mediaMessagePlayTrackerTime; // @synthesize mediaMessagePlayTrackerTime=_mediaMessagePlayTrackerTime;
@property(nonatomic, getter=isPlayingCompositeMessage) BOOL playingCompositeMessage; // @synthesize playingCompositeMessage=_playingCompositeMessage;
@property(nonatomic, getter=isComposingCompositeMessage) BOOL composingCompositeMessage; // @synthesize composingCompositeMessage=_composingCompositeMessage;
@property(nonatomic) unsigned short composingMessageType; // @synthesize composingMessageType=_composingMessageType;
@property(nonatomic) __weak id <DTSCanvasViewControllerSendDelegate> sendDelegate; // @synthesize sendDelegate=_sendDelegate;
// - (void).cxx_destruct;
- (double)minimumBottomMargin;
- (void)dataSource:(id)arg1 didUpdateAttachmentURL:(id)arg2 forMessageWithIdentifier:(id)arg3;
- (BOOL)dataSourceViewIsMostlyVisible:(id)arg1;
- (void)dataSourceStopPlayback:(id)arg1;
- (BOOL)dataSource:(id)arg1 addDemoHookToMessage:(id )arg2;
- (void)dataSource:(id)arg1 startPlaybackWithCompletion:(CDUnknownBlockType)arg2;
- (BOOL)dataSourceShouldUseDemoHook:(id)arg1;
- (void)dataSource:(id)arg1 didReceiveSessionMessage:(id)arg2;
- (double)_nonAnimatedMessagePlaybackDuration;
- (id)_playingParentMessage;
- (void)_setShowingReplayButton:(BOOL)arg1;
- (BOOL)canShowReplayButton;
- (void)_setReplayButton:(id)arg1;
- (id)_replayButton;
- (void)_cancelButtonTapped;
- (void)_skipButtonTapped;
- (id)_skipButton;
- (id)_cancelButton;
- (void)_composeSessionEndTimerFired;
- (void)_clearComposeSessionEndTimer;
- (void)_startComposeSessionEndTimer;
- (void)didEndSessionPlayback;
- (void)willEndSessionPlaybackInterrupted:(BOOL)arg1;
- (void)willBeginSessionPlayback;
- (void)_continueMessagePlaybackLoopWithDelay:(BOOL)arg1;
- (void)_playNextMessage;
- (void)_reloadUnplayedMessages;
- (void)_stopPlaybackAnimated:(BOOL)arg1;
- (void)startMessagePlaybackLoop;
- (BOOL)_canStartMessagePlaybackLoop;
- (void)_setAngerUsesForceTouch:(BOOL)arg1;
- (void)canvasView:(id)arg1 angerUsesForceTouch:(BOOL)arg2;
- (void)canvasViewDidEndMediaAppearance:(id)arg1;
- (void)canvasViewDidStartMediaAppearance:(id)arg1;
- (BOOL)_tapRecognizerShouldBegin:(id)arg1;
- (BOOL)canvasView:(id)arg1 tapRecognizerShouldBegin:(id)arg2;
- (void)clearDeferredMessages;
- (long long)recentHeartRate;
- (void)canvasViewDidUnpause:(id)arg1;
- (void)canvasViewDidPause:(id)arg1;
- (BOOL)canvasViewShouldSendWithTimer:(id)arg1;
- (void)canvasViewWillReachComposingSizeLimit:(id)arg1;
- (BOOL)canvasViewShouldUseFastVerticalWisp:(id)arg1;
- (void)didEndComposingMessage;
- (void)didBeginComposingMessage;
- (void)didChangeColorPickerColor;
- (void)canvasViewDidEndStroke:(id)arg1;
- (void)canvasViewDidBeginStroke:(id)arg1;
- (void)canvasView:(id)arg1 sendMessage:(id)arg2;
- (void)canvasView:(id)arg1 didEndComposingMessageType:(unsigned short)arg2;
- (void)canvasView:(id)arg1 didUpdateComposingMessageType:(unsigned short)arg2;
- (void)canvasView:(id)arg1 didBeginComposingMessageType:(unsigned short)arg2;
- (BOOL)_canComposeAfterMediaPlayback;
- (void)_hideVideoPlayer;
- (void)_startVideoPlayerWithMessage:(id)arg1;
- (void)_videoMessageDidFinishPlaying:(id)arg1;
- (BOOL)_canLoopMessageDuringPlayback:(id)arg1;
- (void)canvasView:(id)arg1 didEndPlayingMessage:(id)arg2;
- (void)canvasView:(id)arg1 willEndPlayingMessage:(id)arg2;
- (void)canvasView:(id)arg1 didBeginPlayingMessage:(id)arg2;
- (void)_updateCanvasInteractionEnabled;
- (void)_showDemoHookAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)_exportDemoHookMessage;
- (void)_sendDemoHookMessage;
- (BOOL)_usingDemoHook;
- (void)colorPickerTapped:(id)arg1;
- (void)colorPickerSelectedColorDidChange:(id)arg1;
- (BOOL)_shouldAutoSend;
- (void)_updateColorPickerEnabled;
- (BOOL)_shouldDimColorPicker;
- (void)updateVideoUI;
- (BOOL)_isVisible;
- (void)_schedulePlaybackOfCompositeMessageContent:(id)arg1;
- (void)_playMessage:(id)arg1;
- (void)_setCachedMessageForReplay:(id)arg1;
- (BOOL)hasMessageForReplay;
- (BOOL)canReplay;
- (void)replay;
- (void)addUnplayedMessage:(id)arg1;
- (void)_applicationDidEnterBackground;
- (void)_applicationDidBecomeActive;
- (void)_sendAutosendingComposition;
- (void)_applicationWillResignActive;
- (void)_audioToggleButtonTapped;
- (void)_relinquishAudio;
- (void)_updateAudioOnOffButtonImage;
- (void)_updateAudioOnOffButton;
- (double)_rightButtonInset;
- (id)_audioToggleButton;
- (void)_updateSendButton;
- (void)_updatePlaybackControls;
- (void)_updateSkipButtonFrame;
- (double)_cornerButtonInset;
- (BOOL)_shouldShowCancelButton;
- (BOOL)_shouldShowSkipButton;
- (void)_updateVideoPlayerUI;
- (BOOL)canExpireMessages;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)init;

@end

