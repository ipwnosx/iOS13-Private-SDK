//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFDispatchQueue.h>

#import <PhotoFoundation/PFDispatchQueueRunBlock-Protocol.h>

@class PFDispatchQueueExtensionManager, PFSerialQueue;

@interface PFExtendedDispatchQueue : PFDispatchQueue <PFDispatchQueueRunBlock>
{
    PFDispatchQueue *_queue;
    PFSerialQueue *_requestSerializer;
    PFDispatchQueueExtensionManager *_extensionManager;
    NSUInteger _suspendCount;
}

// - (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)assertNotOnQueue;
- (BOOL)assertQueueBarrier;
- (BOOL)assertOnQueue;
- (void)setTargetQueue:(id)arg1;
- (id)_dispatchQueueForSetTargetQueue;
- (unsigned int)qualityOfService;
- (void )getSpecific:(void )arg1;
- (void)setSpecific:(void )arg1 forKey:(void )arg2;
- (void)resume;
- (void)suspend;
- (const char )label;
- (void)dispatchGroup:(id)arg1 notify:(CDUnknownBlockType)arg2;
- (void)dispatchGroup:(id)arg1 async:(CDUnknownBlockType)arg2;
- (void)dispatchAfter:(NSUInteger)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAsyncWithQOS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchBarrierAsync:(CDUnknownBlockType)arg1;
- (void)dispatchBarrierSync:(CDUnknownBlockType)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)_performAsyncNotify:(id)arg1 enqueueBlock:(CDUnknownBlockType)arg2;
- (void)_invoke:(CDUnknownBlockType)arg1 extensionDataArray:(id)arg2;
- (id)extensionMatching:(CDUnknownBlockType)arg1;
- (void)disableExtension:(id)arg1;
- (void)enableExtension:(id)arg1;
- (void)resumeRequests;
- (void)suspendRequests;
- (id)_extensionManager;
- (id)wrappedQueue;
- (id)description;
- (void)addExtensions:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)_extensionsForTargetingQueue;
- (id)dispatchCancellableGroup:(id)arg1 notify:(CDUnknownBlockType)arg2;
- (id)dispatchCancellableAfterInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)dispatchCancellableAfterDelay:(NSUInteger)arg1 block:(CDUnknownBlockType)arg2;
- (id)dispatchCancellable:(CDUnknownBlockType)arg1;
- (void)dispatchAfterInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAfterDelay:(NSUInteger)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeAllQueuedBlocksAndWait;
- (void)removeAllQueuedBlocks;
- (void)runBlock:(CDUnknownBlockType)arg1;
- (BOOL)onQueue;

@end

