//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXCoreUtilities/AXAccessQueueTimer-Protocol.h>

@class AXAccessQueue, NSString;
@protocol OS_dispatch_source;

@interface AXAccessQueueTimer : NSObject <AXAccessQueueTimer>
{
    BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    BOOL _active;
    BOOL _accessQueueIsExternal;
    int _state;
    NSString *_label;
    AXAccessQueue *_accessQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
}

+ (id)timerTargettingMainAccessQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer; // @synthesize dispatchTimer=_dispatchTimer;
@property(nonatomic) BOOL accessQueueIsExternal; // @synthesize accessQueueIsExternal=_accessQueueIsExternal;
@property(retain, nonatomic) AXAccessQueue *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock; // @synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property(copy) NSString *label; // @synthesize label=_label;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_warnAboutAsynchronousCancelling;
- (void)_reallyCancel;
- (void)cancel;
- (void)_warnAboutAsynchronousScheduling;
- (void)_didFinishProcessingBlock;
- (void)_afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2 shouldTreatAsWritingBlock:(BOOL)arg3;
- (void)afterDelay:(double)arg1 processWritingBlock:(CDUnknownBlockType)arg2;
- (void)afterDelay:(double)arg1 processReadingBlock:(CDUnknownBlockType)arg2;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2;
- (void)_performEnqueuedWritingBlock:(CDUnknownBlockType)arg1 asynchronousExecutionWarningHandler:(SEL)arg2;
@property(readonly, nonatomic, getter=isPending) BOOL pending;
- (void)dealloc;
- (id)initWithTargetAccessQueue:(id)arg1;
- (id)init;

@end

