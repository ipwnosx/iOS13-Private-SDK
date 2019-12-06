//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSServiceDispatchingQueue-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface FBSSerialQueue : NSObject <BSServiceDispatchingQueue>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_blocks;
    NSUInteger _enqueueID;
    NSUInteger _dequeueID;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSArray *_mainRunLoopModes;
//     struct __CFRunLoopSource _runLoopSource;
    BOOL _callingOut;
    NSObject<OS_dispatch_semaphore> *_synchronizingEnqueueSemaphore;
    NSUInteger _lastSynchronizingWorkspaceName;
}

+ (id)queueWithMainRunLoopModes:(id)arg1;
+ (id)queueWithDispatchQueue:(id)arg1;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (void)_performNextFromRunLoopSource;
- (void)_setSynchronizingEnqueueSemaphore:(id)arg1 forWorkspaceWithName:(NSUInteger)arg2;
- (BOOL)_queue_performNextIfPossible;
- (BOOL)_performNext;
- (BOOL)_hasNext;
- (void)_queue_performAsync:(CDUnknownBlockType)arg1;
- (void)performAfter:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)backingQueueIfExists;
- (void)performAsync:(CDUnknownBlockType)arg1 withHandoff:(id)arg2;
- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)assertOnQueue;
- (void)dealloc;
- (id)init;
- (id)_initWithDispatchQueue:(id)arg1 mainRunLoopModes:(id)arg2;

@end

