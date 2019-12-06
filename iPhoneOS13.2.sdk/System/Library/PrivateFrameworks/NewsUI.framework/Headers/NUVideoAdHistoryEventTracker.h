//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUVideoPlayerEventTracker-Protocol.h>

@class NUAdBannerView;

@interface NUVideoAdHistoryEventTracker : NSObject <NUVideoPlayerEventTracker>
{
    NUAdBannerView *_mostRecentBannerView;
}

@property(retain, nonatomic) NUAdBannerView *mostRecentBannerView; // @synthesize mostRecentBannerView=_mostRecentBannerView;
// - (void).cxx_destruct;
- (void)clearHistory;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)loadingFinishedForVideoAdWithMetadata:(id)arg1;

@end

