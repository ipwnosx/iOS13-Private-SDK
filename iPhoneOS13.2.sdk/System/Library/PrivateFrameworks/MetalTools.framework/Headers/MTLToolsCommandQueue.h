//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLCommandQueueSPI-Protocol.h>

@class MTLToolsPointerArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI>
{
    MTLToolsPointerArray *_commandBuffers;
}

@property(readonly, nonatomic) MTLToolsPointerArray *commandBuffers; // @synthesize commandBuffers=_commandBuffers;
- (id)counterInfo;
@property(nonatomic, getter=getStatLocations) NSUInteger StatLocations;
@property(nonatomic, getter=getStatOptions) NSUInteger StatOptions;
@property(nonatomic, getter=isStatEnabled) BOOL StatEnabled;
- (id)getRequestedCounters;
- (id)availableCounters;
@property(readonly) BOOL disableCrossQueueHazardTracking;
@property(readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property(readonly) BOOL commitSynchronously;
@property(readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property(readonly) NSUInteger qosLevel;
- (id)subdivideCounterList:(id)arg1;
- (int)requestCounters:(id)arg1 withIndex:(NSUInteger)arg2;
- (void)addPerfSampleHandler:(CDUnknownBlockType)arg1;
- (int)requestCounters:(id)arg1;
@property BOOL isOpenGLQueue;
- (void)setSubmissionQueue:(id)arg1;
@property(getter=isProfilingEnabled) BOOL profilingEnabled;
@property BOOL executionEnabled;
@property BOOL skipRender;
- (void)finish;
@property int backgroundTrackingPID;
@property(readonly) NSUInteger maxCommandBufferCount;
- (BOOL)setBackgroundGPUPriority:(NSUInteger)arg1 offset:(unsigned short)arg2;
- (BOOL)setBackgroundGPUPriority:(NSUInteger)arg1;
- (NSUInteger)getBackgroundGPUPriority;
- (BOOL)setGPUPriority:(NSUInteger)arg1 offset:(unsigned short)arg2;
- (BOOL)setGPUPriority:(NSUInteger)arg1;
- (NSUInteger)getGPUPriority;
- (void)insertDebugCaptureBoundary;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBuffer;
@property(copy) NSString *label;
- (void)acceptVisitor:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)dealloc;

@end

