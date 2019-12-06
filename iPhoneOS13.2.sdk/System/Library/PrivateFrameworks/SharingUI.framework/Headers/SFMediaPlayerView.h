//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVPlayerLooper, AVQueuePlayer, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface SFMediaPlayerView : UIView
{
    AVPlayerLooper *_avLooper;
    AVQueuePlayer *_avQueuePlayer;
    NSMutableArray *_mediaItems;
    NSObject<OS_dispatch_source> *_speedUpTimer;
    BOOL _pausesAfterEachItem;
}

+ (Class)layerClass;
@property(nonatomic) BOOL pausesAfterEachItem; // @synthesize pausesAfterEachItem=_pausesAfterEachItem;
// - (void).cxx_destruct;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)setUpTimeRangeNotificationsForItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)dequeueNonPlayingItemsFromMediaItem:(id)arg1;
- (void)enqueueItemsFromMediaItem:(id)arg1 afterItem:(id)arg2;
- (void)stopSpeedUpTimer;
- (void)speedUpRemainderOfCurrentItem;
- (void)breakFirstEnqueuedLoop;
- (void)removeMovieItem:(id)arg1;
- (void)addMovieItem:(id)arg1;
- (void)advanceToNextItem;
- (BOOL)isPaused;
- (void)_pause;
- (void)pause;
- (void)play;
- (void)stop;
- (void)startMovieLoopWithPath:(id)arg1 assetType:(int)arg2 adjustmentsURL:(id)arg3;
- (void)updateViewForAssetType:(int)arg1 adjustmentsURL:(id)arg2;
- (void)startMovieLoopWithPath:(id)arg1;

@end

