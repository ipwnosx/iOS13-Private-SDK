//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NUVideoAdMetadata;

@protocol NUVideoAdEventTracker <NSObject>

@optional
- (void)userEngagedWithCallToActionOfVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)userSkippedPlaybackOfVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)playbackFinishedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)playbackPausedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)playbackStartedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)loadingFinishedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)impressionThresholdReachedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
@end

