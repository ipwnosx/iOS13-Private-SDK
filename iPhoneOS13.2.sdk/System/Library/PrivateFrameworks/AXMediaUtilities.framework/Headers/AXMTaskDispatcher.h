//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol AXMTaskDispatcherDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface AXMTaskDispatcher : NSObject
{
    NSObject<OS_dispatch_source> *_processQueueSource;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_taskList;
    BOOL _queue_taskIsBeingProcessed;
    id <AXMTaskDispatcherDelegate> _delegate;
}

@property(nonatomic) __weak id <AXMTaskDispatcherDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_queue_dequeueTask;
- (id)_queue_unscheduleAllTasks;
- (id)unscheduleAllTasks;
- (void)_queue_scheduleTask:(id)arg1;
- (void)scheduleTask:(id)arg1;
- (void)_queue_processNextTask;
@property(readonly, nonatomic) BOOL isEmpty;
- (long long)_queue_count;
@property(readonly, nonatomic) long long count;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;

@end

