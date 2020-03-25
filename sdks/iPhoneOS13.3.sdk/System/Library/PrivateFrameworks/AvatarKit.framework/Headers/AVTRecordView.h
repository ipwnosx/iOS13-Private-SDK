//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarKit/AVTView.h>

#import <AvatarKit/AVTFaceTrackerDelegate-Protocol.h>

@class AVAssetWriter, AVAssetWriterInput, AVCaptureMovieFileOutput, AVPlayer, AVTAvatar, CAAnimationGroup, CALayer, NSLock, NSMutableArray, NSMutableData, NSObject;
@protocol AVTRecordViewDelegate, OS_dispatch_queue;

@interface AVTRecordView : AVTView <AVTFaceTrackerDelegate>
{
    id <AVTRecordViewDelegate> _recordDelegate;
    BOOL _exportingMovie;
    BOOL _recording;
    int _isFading;
    NSObject<OS_dispatch_queue> *_preloadQueue;
    BOOL _playBakedAnimation;
    BOOL _disableRendering;
    float _maxRecordingDuration;
    NSMutableData *_rawTimesData;
    NSMutableData *_rawBlendShapesData;
    NSMutableData *_rawTransformsData;
    NSMutableData *_rawParametersData;
    double _referenceAnimationBeginTime;
    double _recordingStartTime;
    int _recordedCount;
    int _recordingCapacity;
    CAAnimationGroup *_recordedAnimationGroup;
    AVTAvatar *_avatarForMovieExport;
    AVCaptureMovieFileOutput *_movieFileOutput;
    AVPlayer *_audioPlayer;
    AVAssetWriterInput *_audioWriterInput;
    AVAssetWriter *_audioWriter;
    NSLock *_audioLock;
    CDStruct_1b6d18a9 _currentAudioTime;
    CDStruct_1b6d18a9 _startAudioTime;
    CDStruct_1b6d18a9 _stopAudioTime;
    long long _recordedSampleCount;
    BOOL _audioIsRecording;
    double _lastAudioPlayerTime;
    double _lastAudioSystemTime;
    BOOL _playing;
    BOOL _mute;
    BOOL _transitioningFromSnapshot;
    double _t0;
    int _benchFrameCounter;
    BOOL _doubleBuffer;
    BOOL _checkDrawableAvailable;
    NSMutableArray *_droppedDoubleBufferFrames;
    long long _preferredFramesPerSecond_user;
    long long _preferredFramesPerSecond_thermal;
    CALayer *_backingLayer;
}

+ (void)setUsesInternalTrackingPipeline:(BOOL)arg1;
+ (BOOL)usesInternalTrackingPipeline;
@property(readonly, nonatomic, getter=isRecording) BOOL recording; // @synthesize recording=_recording;
@property(nonatomic) __weak id <AVTRecordViewDelegate> recordDelegate; // @synthesize recordDelegate=_recordDelegate;
@property(nonatomic) BOOL mute; // @synthesize mute=_mute;
// - (void).cxx_destruct;
- (double)currentAudioTime;
- (BOOL)isDoubleBuffered;
- (void)stopPlayingAudio;
- (void)updateMuteState;
- (void)startPlayingAudio;
- (void)audioPlayerItemDidReachEnd:(id)arg1;
- (void)updateAudioState;
- (void)cancelRecordingAudio;
- (void)finalizeAudioFile;
- (void)stopRecordingAudio;
- (struct opaqueCMSampleBuffer )createSilentAudioAtFrame:(long long)arg1 nFrames:(int)arg2 sampleRate:(double)arg3 numChannels:(int)arg4;
- (void)startRecordingAudio;
- (void)cancelMovieExport;
- (BOOL)exportMovieToURL:(id)arg1 options:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)fadePuppetToWhite:(float)arg1;
- (BOOL)mergeAudio:(id)arg1 andVideoTo:(id)arg2 error:(id )arg3;
- (id)_tmpMaskVideoURL;
- (id)_tmpVideoURL;
- (id)_tmpAudioURL;
@property(nonatomic) float maxRecordingDuration;
- (void)convertRecordedDataToAnimationGroup;
- (double)finalVideoDuration;
- (double)recordingDuration;
- (void)trimRecordedData;
- (BOOL)faceIsFullyActive;
- (void)updateForChangedFaceTrackingPaused;
- (void)setFaceTrackingPaused:(BOOL)arg1;
- (void)_updateTrackingState;
- (void)setDisableRendering:(BOOL)arg1;
- (BOOL)disableRendering;
- (void)setPlayBakedAnimation:(BOOL)arg1;
- (BOOL)playBakedAnimation;
@property(readonly, nonatomic, getter=isPreviewing) BOOL previewing;
- (void)stopPreviewing;
- (void)playPreviewOnce;
- (void)startPreviewing;
- (void)_playLivePreviewAnimation;
- (void)removeRecordedAnimationFromAvatar:(id)arg1;
- (void)addRecordedAnimationToAvatar:(id)arg1;
- (BOOL)recording;
- (void)stopRecording;
- (void)_smoothRecordedData;
- (void)cancelRecording;
- (void)startRecording;
- (void)avatarDidChange;
- (void)setAvatar:(id)arg1;
- (BOOL)allowTrackSmoothing;
- (void)setPuppetState:(id)arg1;
- (id)puppetState;
- (double)_renderer:(id)arg1 inputTimeForCurrentFrameWithTime:(double)arg2;
- (void)_renderer:(id)arg1 updateAtTime:(double)arg2;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)_didUpdateAtTime:(double)arg1;
- (void)willUpdateAvatarWithNewFaceTrackingData:(double)arg1;
- (void)didLostTrackingForAWhile;
- (void)updateAtTime:(double)arg1;
- (void)faceTrackerDidUpdate:(id)arg1 trackingInfo:(id)arg2;
- (void)faceTracker:(id)arg1 session:(id)arg2 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer )arg3;
- (void)setFaceTrackingRecordingURL:(id)arg1;
- (id)faceTrackingRecordingURL;
- (void)_processInfoThermalStateDidChange:(id)arg1;
- (void)_updateFrameRateForThermalState:(long long)arg1;
- (void)_setEffectivePreferredFramesPerSecond;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (long long)preferredFramesPerSecond;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_avt_commonInit;

@end
