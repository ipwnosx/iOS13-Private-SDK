//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPGeniusPlaybackQueue.h>

@interface MPGeniusPlaybackQueue (MPCAdditions)
- (void)_getPlaybackContextFromCloudControllerWithSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPlaybackContextFromMediaLibraryWithSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPlaybackContextWithRecommendedContentWithSeedAdamID:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPlaybackContextWithCompletion:(CDUnknownBlockType)arg1;
@end

