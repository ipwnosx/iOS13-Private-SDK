//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError;

@protocol SVVideoPlaybackEventTracking <NSObject>
@property(readonly, copy, nonatomic) NSError *error;
@property(copy, nonatomic, setter=onPlaybackFailed:) id /* CDUnknownBlockType */ playbackFailedBlock;
@property(copy, nonatomic, setter=onPlaybackFinished:) id /* CDUnknownBlockType */ playbackFinishedBlock;
@property(copy, nonatomic, setter=onPlaybackResumed:) id /* CDUnknownBlockType */ playbackResumedBlock;
@property(copy, nonatomic, setter=onPlaybackPaused:) id /* CDUnknownBlockType */ playbackPausedBlock;
@property(copy, nonatomic, setter=onPlaybackStart:) id /* CDUnknownBlockType */ playbackStartBlock;
@end

