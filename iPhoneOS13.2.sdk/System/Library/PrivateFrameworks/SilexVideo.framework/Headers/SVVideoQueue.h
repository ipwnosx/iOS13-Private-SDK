//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoQueue-Protocol.h>
#import <SilexVideo/SVVideoQueueDiffing-Protocol.h>

@class NSOrderedSet;
@protocol SVVideo;

@interface SVVideoQueue : NSObject <SVVideoQueue, SVVideoQueueDiffing>
{
    id <SVVideo> _video;
    NSOrderedSet *_videos;
}

@property(copy, nonatomic) NSOrderedSet *videos; // @synthesize videos=_videos;
@property(retain, nonatomic) id <SVVideo> video; // @synthesize video=_video;
// - (void).cxx_destruct;
- (NSUInteger)indexOfVideo:(id)arg1;
- (id)videoAtIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfVideos;
- (id)previousVideoOfType:(NSUInteger)arg1;
- (id)nextVideoOfType:(NSUInteger)arg1;
- (id)videoBeforeVideo:(id)arg1;
@property(readonly, nonatomic) id <SVVideo> previousVideo;
- (id)videoAfterVideo:(id)arg1;
@property(readonly, nonatomic) id <SVVideo> nextVideo;
@property(readonly, nonatomic) id <SVVideo> lastVideo;
@property(readonly, nonatomic) id <SVVideo> firstVideo;
- (id)diffWithQueue:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithVideos:(id)arg1;

@end

