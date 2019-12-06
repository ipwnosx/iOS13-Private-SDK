//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXPreloadScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    CADisplayLink *_displayLink;
    NSMutableArray *_pendingBlocks;
//    struct __CFRunLoopObserver _runloopObserver;
    BOOL __isActive;
}

+ (id)sharedScheduler;
@property(nonatomic, setter=_setActive:) BOOL _isActive; // @synthesize _isActive=__isActive;
// - (void).cxx_destruct;
- (void)scheduleTaskAfterCATransactionCommits:(CDUnknownBlockType)arg1;
- (void)_updateIsActive;
- (void)_runLoopWillStartWaiting;
- (BOOL)_shouldExecutePendingBlock;
- (void)_displayLinkTick:(id)arg1;
- (void)scheduleDeferredBackgroundTask:(CDUnknownBlockType)arg1;
- (void)scheduleBackgroundTask:(CDUnknownBlockType)arg1;
- (void)scheduleMainQueueTaskAndWait:(CDUnknownBlockType)arg1;
- (void)scheduleMainQueueTask:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

