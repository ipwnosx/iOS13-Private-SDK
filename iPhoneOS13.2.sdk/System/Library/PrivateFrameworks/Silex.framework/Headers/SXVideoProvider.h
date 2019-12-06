//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoProviding-Protocol.h>

@class NSString, NSURL, SVTimeline;
@protocol SVVideoMetadata, SXAnalyticsReporting;

@interface SXVideoProvider : NSObject <SXVideoProviding>
{
    NSURL *_URL;
    id <SXAnalyticsReporting> _analyticsReporter;
    id <SVVideoMetadata> _metadata;
    SVTimeline *_timeline;
    double _pausedAtTime;
    NSString *_mediaIdentifier;
}

@property(readonly, nonatomic) NSString *mediaIdentifier; // @synthesize mediaIdentifier=_mediaIdentifier;
@property(nonatomic) double pausedAtTime; // @synthesize pausedAtTime=_pausedAtTime;
@property(readonly, nonatomic) SVTimeline *timeline; // @synthesize timeline=_timeline;
@property(nonatomic) __weak id <SVVideoMetadata> metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) id <SXAnalyticsReporting> analyticsReporter; // @synthesize analyticsReporter=_analyticsReporter;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
// - (void).cxx_destruct;
- (BOOL)supportsQuartileReporting;
- (void)playbackResumedAtTime:(double)arg1;
- (void)playbackPausedAtTime:(double)arg1;
- (void)configureTimelineForQuartileReporting;
- (void)timeElapsed:(double)arg1 duration:(double)arg2;
- (void)muteStateChanged:(BOOL)arg1;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackStarted;
- (void)playbackInitiated;
- (CDUnknownBlockType)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;

@end

