//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVPlayer, AVPlayerItem, AVPlayerLayer;
@protocol CKVideoPreviewViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKVideoPreviewViewController : UIViewController
{
    BOOL _redisplayStatusBar;
    BOOL _reachedEnd;
    id <CKVideoPreviewViewControllerDelegate> _videoPreviewDelegate;
    AVPlayerItem *_avPlayerItem;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_avPlayerLayer;
}

@property(nonatomic) BOOL reachedEnd; // @synthesize reachedEnd=_reachedEnd;
@property(retain, nonatomic) AVPlayerLayer *avPlayerLayer; // @synthesize avPlayerLayer=_avPlayerLayer;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) AVPlayerItem *avPlayerItem; // @synthesize avPlayerItem=_avPlayerItem;
@property(nonatomic) BOOL redisplayStatusBar; // @synthesize redisplayStatusBar=_redisplayStatusBar;
@property(nonatomic) __weak id <CKVideoPreviewViewControllerDelegate> videoPreviewDelegate; // @synthesize videoPreviewDelegate=_videoPreviewDelegate;
// - (void).cxx_destruct;
- (void)videoDidReachEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)pause;
- (void)play;
- (BOOL)togglePlayPause;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing; // @dynamic playing;
- (void)dealloc;
- (void)setVideoFileURL:(id)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)loadView;
- (id)init;

@end

