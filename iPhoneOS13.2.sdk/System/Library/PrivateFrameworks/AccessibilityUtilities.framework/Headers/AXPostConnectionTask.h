//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXAccessQueueTimer;

@interface AXPostConnectionTask : NSObject
{
    BOOL _didTimeout;
    id /* CDUnknownBlockType */ _postConnectionBlock;
    AXAccessQueueTimer *_timeoutTimer;
}

@property(nonatomic) BOOL didTimeout; // @synthesize didTimeout=_didTimeout;
@property(retain, nonatomic) AXAccessQueueTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) id /* CDUnknownBlockType */ postConnectionBlock; // @synthesize postConnectionBlock=_postConnectionBlock;
// - (void).cxx_destruct;
- (void)_performTask;
- (void)performTask;
- (id)initWithConnectBlock:(CDUnknownBlockType)arg1 timeout:(double)arg2 accessQueue:(id)arg3;

@end

