//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerController, AVValueTiming, NSArray, NSString, WebAVMediaSelectionOption;

__attribute__((visibility("hidden")))
@interface WebAVPlayerController : NSObject
{
    WebAVMediaSelectionOption *_currentAudioMediaSelectionOption;
    WebAVMediaSelectionOption *_currentLegibleMediaSelectionOption;
    BOOL _pictureInPictureInterrupted;
    BOOL _muted;
    BOOL _liveStreamEventModePossible;
    BOOL _isScrubbing;
    BOOL _canScanBackward;
    BOOL _canPlay;
    BOOL _canPause;
    BOOL _canTogglePlayback;
    BOOL _canSeek;
    BOOL _hasEnabledAudio;
    BOOL _hasEnabledVideo;
    BOOL _hasVideo;
    BOOL _playingOnSecondScreen;
    BOOL _externalPlaybackActive;
    BOOL _allowsExternalPlayback;
    BOOL _pictureInPicturePossible;
    AVPlayerController *_playerControllerProxy;
//     struct PlaybackSessionModel _delegate;
//     struct PlaybackSessionInterfaceAVKit _playbackSessionInterface;
    double _rate;
    double _contentDuration;
    double _contentDurationWithinEndTimes;
    NSArray *_loadedTimeRanges;
    long long _status;
    AVValueTiming *_timing;
    NSArray *_seekableTimeRanges;
    NSArray *_audioMediaSelectionOptions;
    NSArray *_legibleMediaSelectionOptions;
    long long _externalPlaybackType;
    NSString *_externalPlaybackAirPlayDeviceLocalizedName;
    double _seekableTimeRangesLastModifiedTime;
    double _liveUpdateInterval;
    AVValueTiming *_minTiming;
    AVValueTiming *_maxTiming;
    CGSize _contentDimensions;
}

+ (id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingMinTime;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingPlaying;
@property(retain, nonatomic) AVValueTiming *maxTiming; // @synthesize maxTiming=_maxTiming;
@property(retain, nonatomic) AVValueTiming *minTiming; // @synthesize minTiming=_minTiming;
@property double liveUpdateInterval; // @synthesize liveUpdateInterval=_liveUpdateInterval;
@property double seekableTimeRangesLastModifiedTime; // @synthesize seekableTimeRangesLastModifiedTime=_seekableTimeRangesLastModifiedTime;
@property(getter=isPictureInPicturePossible) BOOL pictureInPicturePossible; // @synthesize pictureInPicturePossible=_pictureInPicturePossible;
@property BOOL allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(retain) NSString *externalPlaybackAirPlayDeviceLocalizedName; // @synthesize externalPlaybackAirPlayDeviceLocalizedName=_externalPlaybackAirPlayDeviceLocalizedName;
@property long long externalPlaybackType; // @synthesize externalPlaybackType=_externalPlaybackType;
@property(getter=isExternalPlaybackActive) BOOL externalPlaybackActive; // @synthesize externalPlaybackActive=_externalPlaybackActive;
@property(nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen; // @synthesize playingOnSecondScreen=_playingOnSecondScreen;
@property(retain) NSArray *legibleMediaSelectionOptions; // @synthesize legibleMediaSelectionOptions=_legibleMediaSelectionOptions;
@property(retain) NSArray *audioMediaSelectionOptions; // @synthesize audioMediaSelectionOptions=_audioMediaSelectionOptions;
@property(retain) NSArray *seekableTimeRanges; // @synthesize seekableTimeRanges=_seekableTimeRanges;
@property(retain) AVValueTiming *timing; // @synthesize timing=_timing;
@property long long status; // @synthesize status=_status;
@property(retain) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
@property double contentDurationWithinEndTimes; // @synthesize contentDurationWithinEndTimes=_contentDurationWithinEndTimes;
@property BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property BOOL hasEnabledVideo; // @synthesize hasEnabledVideo=_hasEnabledVideo;
@property BOOL hasEnabledAudio; // @synthesize hasEnabledAudio=_hasEnabledAudio;
@property CGSize contentDimensions; // @synthesize contentDimensions=_contentDimensions;
@property double contentDuration; // @synthesize contentDuration=_contentDuration;
@property BOOL canSeek; // @synthesize canSeek=_canSeek;
@property double rate; // @synthesize rate=_rate;
@property BOOL canTogglePlayback; // @synthesize canTogglePlayback=_canTogglePlayback;
@property BOOL canPause; // @synthesize canPause=_canPause;
@property BOOL canPlay; // @synthesize canPlay=_canPlay;
@property BOOL canScanBackward; // @synthesize canScanBackward=_canScanBackward;
// @property struct PlaybackSessionInterfaceAVKit playbackSessionInterface; // @synthesize playbackSessionInterface=_playbackSessionInterface;
// @property struct PlaybackSessionModel delegate; // @synthesize delegate=_delegate;
@property(retain) AVPlayerController *playerControllerProxy; // @synthesize playerControllerProxy=_playerControllerProxy;
- (BOOL)hasSeekableLiveStreamingContent;
- (void)updateMinMaxTiming;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)volumeChanged:(double)arg1;
@property double volume;
- (void)toggleMuted:(id)arg1;
@property(getter=isMuted) BOOL muted;
@property(getter=isPictureInPictureInterrupted) BOOL pictureInPictureInterrupted;
@property(readonly, getter=isPlayingOnExternalScreen) BOOL playingOnExternalScreen;
@property(retain) WebAVMediaSelectionOption *currentLegibleMediaSelectionOption;
@property(retain) WebAVMediaSelectionOption *currentAudioMediaSelectionOption;
@property(readonly) BOOL hasLegibleMediaSelectionOptions;
@property(readonly) BOOL hasAudioMediaSelectionOptions;
@property(readonly) BOOL hasMediaSelectionOptions;
- (void)seekChapterForward:(id)arg1;
- (void)seekToEnd:(id)arg1;
@property(readonly) BOOL canSeekToEnd;
- (void)seekChapterBackward:(id)arg1;
- (void)seekToBeginning:(id)arg1;
@property(readonly) BOOL canSeekToBeginning;
- (void)endScanningBackward:(id)arg1;
- (void)beginScanningBackward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
@property(readonly) BOOL canScanForward;
@property(readonly) BOOL isScrubbing;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
@property(readonly) double minTime;
@property(readonly) double maxTime;
- (BOOL)hasLiveStreamingContent;
- (void)setCurrentTimeWithinEndTimes:(double)arg1;
- (double)currentTimeWithinEndTimes;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekByTimeInterval:(double)arg1;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekToTime:(double)arg1;
- (void)endScrubbing:(id)arg1;
- (void)beginScrubbing:(id)arg1;
@property(getter=isPlaying) BOOL playing;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)player;
- (void)dealloc;
- (id)init;

@end

