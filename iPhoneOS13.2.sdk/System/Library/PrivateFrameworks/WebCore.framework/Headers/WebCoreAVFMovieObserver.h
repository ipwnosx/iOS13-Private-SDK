//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVPlayerItemLegibleOutputPushDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate>
{
    WeakPtr_1a409454 m_player;
//     struct GenericTaskQueue<WebCore::Timer> m_taskQueue;
    int m_delayCallbacks;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)outputSequenceWasFlushed:(id)arg1;
// - (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(CDStruct_198678f7)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(int)arg4;
- (void)didEnd:(id)arg1;
- (void)metadataLoaded;
- (void)disconnect;
- (id)initWithPlayer:(WeakPtr_1a409454 )arg1;

@end

