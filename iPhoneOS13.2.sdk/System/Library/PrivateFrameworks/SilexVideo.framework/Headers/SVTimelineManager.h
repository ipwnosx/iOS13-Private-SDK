//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@class SVTimeline;
@protocol SVVideoPlaybackProgressObserverFactory, SVVideoPlaybackProgressObserving;

@interface SVTimelineManager : NSObject <SVVideoTransitionObserver>
{
    SVTimeline *_timeline;
    id <SVVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;
    id <SVVideoPlaybackProgressObserving> _playbackProgressObserver;
}

@property(retain, nonatomic) id <SVVideoPlaybackProgressObserving> playbackProgressObserver; // @synthesize playbackProgressObserver=_playbackProgressObserver;
@property(readonly, nonatomic) id <SVVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory; // @synthesize playbackProgressObserverFactory=_playbackProgressObserverFactory;
@property(readonly, nonatomic) SVTimeline *timeline; // @synthesize timeline=_timeline;
// - (void).cxx_destruct;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithTimeline:(id)arg1 playbackProgressObserverFactory:(id)arg2;

@end

