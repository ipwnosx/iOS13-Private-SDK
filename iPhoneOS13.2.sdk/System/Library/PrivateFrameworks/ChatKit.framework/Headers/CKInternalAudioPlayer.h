//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/AVAudioPlayerDelegate-Protocol.h>

@class AVAudioPlayer, AVPlayer, AVPlayerItem;
@protocol CKInternalAudioPlayerDelegate;

__attribute__((visibility("hidden")))
@interface CKInternalAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    AVAudioPlayer *_avAudioPlayer;
    AVPlayer *_avPlayer;
    AVPlayerItem *_playerItem;
    long long _avPlayerState;
    BOOL _avPlayerPrepareRequested;
    BOOL _avPlayerPlayRequested;
    long long _playerType;
    id <CKInternalAudioPlayerDelegate> _delegate;
}

@property(nonatomic) __weak id <CKInternalAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long playerType; // @synthesize playerType=_playerType;
// - (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)_notifyPlayerDidPrepareAudioFileSuccessfully:(BOOL)arg1;
- (void)_notifyPlayerDidFinishSuccessfully:(BOOL)arg1;
- (void)_handleAVPlayerItemStateChange;
- (void)_playerItemDidEndNotification:(id)arg1;
- (void)dealloc;
- (void)prepareToPlay;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing;
@property(nonatomic) float volume;
- (void)pause;
- (void)stop;
@property(readonly) double deviceCurrentTime;
- (BOOL)_playAtTime:(double)arg1;
- (BOOL)playAtTime:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (id)initWithContentsOfURL:(id)arg1 playerType:(long long)arg2;

@end

