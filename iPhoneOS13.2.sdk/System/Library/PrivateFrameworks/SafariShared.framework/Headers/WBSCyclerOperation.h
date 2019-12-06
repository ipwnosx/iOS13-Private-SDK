//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSCyclerOperation : NSObject
{
    NSUInteger _numberOfRemainingAttempts;
    float _backoffRatio;
    BOOL _finished;
    BOOL _executing;
    id /* CDUnknownBlockType */ _block;
    double _nextBackoffTimeInterval;
}

@property(readonly, nonatomic) double nextBackoffTimeInterval; // @synthesize nextBackoffTimeInterval=_nextBackoffTimeInterval;
@property(readonly, nonatomic, getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
@property(readonly, nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property(copy, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
// - (void).cxx_destruct;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithMaximumNumberOfAttempts:(NSUInteger)arg1 backoffRatio:(float)arg2;
- (id)init;

@end

