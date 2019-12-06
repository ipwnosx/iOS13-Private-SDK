//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDisplayAssetUIView.h>

#import <PhotosUICore/PXActivityCoordinatorItem-Protocol.h>

@class AVPlayerItem, ISWrappedAVAudioSession, ISWrappedAVPlayer, NSNumber, PXVideoPlayerView;

@interface PXDisplayAssetLoopingVideoUIView : PXDisplayAssetUIView <PXActivityCoordinatorItem>
{
    PXVideoPlayerView *_videoView;
    long long _requestID;
    NSUInteger _loadingIntervalID;
    NSUInteger _playbackIntervalID;
    id _timeObserver;
    BOOL _canLoadVideo;
    ISWrappedAVPlayer *_videoPlayer;
    AVPlayerItem *_videoPlayerItem;
    NSNumber *_queuePosition;
    ISWrappedAVAudioSession *_audioSession;
    double _videoLoadingProgress;
}

@property(nonatomic) double videoLoadingProgress; // @synthesize videoLoadingProgress=_videoLoadingProgress;
@property(retain, nonatomic) ISWrappedAVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(retain, nonatomic) NSNumber *queuePosition; // @synthesize queuePosition=_queuePosition;
@property(nonatomic) BOOL canLoadVideo; // @synthesize canLoadVideo=_canLoadVideo;
@property(retain, nonatomic) AVPlayerItem *videoPlayerItem; // @synthesize videoPlayerItem=_videoPlayerItem;
@property(retain, nonatomic) ISWrappedAVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
// - (void).cxx_destruct;
- (void)_endLoadingInterval:(BOOL)arg1;
- (void)_endPlaybackInterval;
- (void)_updateVideoViewPlaceholderFilters;
// - (void)_handleVideoPlayerTimeObserverWithTime:(CDStruct_1b6d18a9)arg1;
- (void)_updateVideoViewContentMode;
- (void)_updateVideoPlayerPlayerItem;
- (void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 requestID:(long long)arg3;
- (void)_loadVideo;
- (void)_handleDidShowPlaceholderForUnloadingPlayerItem:(id)arg1;
- (void)_unloadVideo;
@property(nonatomic) NSUInteger activityCoordinatorQueuePosition;
- (void)contentsRectDidChange;
- (void)isDisplayingFullQualityContentDidChange;
- (BOOL)isDisplayingFullQualityContent;
- (void)contentModeDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)animatedContentEnabledDidChange;
- (void)imageProgressDidChange;
- (void)imageDidChange;
- (double)loadingProgress;
- (void)updateContent;
- (void)didMoveToWindow;
- (id)currentImage;
- (CGRect)currentContentsRect;
- (id)contentView;
- (long long)playbackStyle;
- (void)dealloc;

@end

