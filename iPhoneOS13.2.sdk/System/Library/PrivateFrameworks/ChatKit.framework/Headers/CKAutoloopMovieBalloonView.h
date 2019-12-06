//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKImageBalloonView.h>

#import <ChatKit/ISChangeObserver-Protocol.h>
#import <ChatKit/ISWrappedAVPlayerDelegate-Protocol.h>

@class CKMovieMediaObject, ISVideoPlayerUIView, ISWrappedAVAudioSession, ISWrappedAVPlayer, NSString, UIImageView, UIView;

@interface CKAutoloopMovieBalloonView : CKImageBalloonView <ISWrappedAVPlayerDelegate, ISChangeObserver>
{
    BOOL _isJellyfishVideo;
    BOOL _isMuted;
    BOOL _isListeningToVideoPlayer;
    CKMovieMediaObject *_mediaObject;
    ISVideoPlayerUIView *_videoPlayer;
    ISWrappedAVPlayer *_avPlayer;
    ISWrappedAVAudioSession *_audioSession;
    UIImageView *_muteButton;
    UIView *_snapshotView;
}

+ (id)_autoloopAVAudioSessionQueue;
+ (BOOL)isEnabled;
+ (Class)VideoPlayerUIViewClass;
+ (Class)AVPlayerLayerClass;
+ (Class)AVPlayerClass;
@property(nonatomic) BOOL isListeningToVideoPlayer; // @synthesize isListeningToVideoPlayer=_isListeningToVideoPlayer;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(nonatomic) BOOL isMuted; // @synthesize isMuted=_isMuted;
@property(retain, nonatomic) UIImageView *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) ISWrappedAVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(retain, nonatomic) ISWrappedAVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) ISVideoPlayerUIView *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(nonatomic) BOOL isJellyfishVideo; // @synthesize isJellyfishVideo=_isJellyfishVideo;
@property(retain, nonatomic) CKMovieMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
// - (void).cxx_destruct;
- (void)previewDidChange:(id)arg1;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)avPlayerDidDeallocate;
- (void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2;
- (BOOL)_shouldPresentQuickLookOnTap;
- (BOOL)_shouldPauseInitialLooping;
- (void)_removeSnapshot;
- (BOOL)_applicationStateAcceptableForLooping;
- (void)_thermalStateDidChange:(id)arg1;
- (BOOL)_thermalStateAcceptableForLooping;
- (void)tapGestureRecognized:(id)arg1;
- (void)didMoveToWindow;
- (void)prepareForAcknowledgementDismissal;
- (void)prepareForAcknowledgementDisplay;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)stopListeningToVideoPlayer;
- (void)startListeningToVideoPlayer;
- (void)layoutSubviews;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;

@end

