//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock;
@protocol OS_dispatch_queue;

@interface _PASCoalescingTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    double _leewaySeconds;
    id /* block */ _coalesceData;
    id /* block */ _operation;
    _PASLock *_lock;
}

- (void)cancelPendingOperations;
- (void)_replaceCoalescingTimerUsingLockWitness:(id)arg1;
- (void)processData:(id)arg1 afterStrictDelaySeconds:(double)arg2;
- (void)immediatelyProcessData:(id)arg1;
- (void)processData:(id)arg1 afterDelaySeconds:(double)arg2 coalescingBehavior:(unsigned char)arg3;
- (id)initWithQueue:(id)arg1 coalesceData:(id /* block */)arg2 operation:(id /* block */)arg3;
- (id)initWithQueue:(id)arg1 leewaySeconds:(double)arg2 coalesceData:(id /* block */)arg3 operation:(id /* block */)arg4;

@end
