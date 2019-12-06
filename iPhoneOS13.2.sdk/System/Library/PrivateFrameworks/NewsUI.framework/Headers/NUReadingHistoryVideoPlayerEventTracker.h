//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUVideoPlayerEventTracker-Protocol.h>

@protocol NUVideoReadingHistory;

@interface NUReadingHistoryVideoPlayerEventTracker : NSObject <NUVideoPlayerEventTracker>
{
    id <NUVideoReadingHistory> _readingHistory;
}

@property(readonly, nonatomic) id <NUVideoReadingHistory> readingHistory; // @synthesize readingHistory=_readingHistory;
// - (void).cxx_destruct;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (id)initWithReadingHistory:(id)arg1;
- (id)init;

@end

