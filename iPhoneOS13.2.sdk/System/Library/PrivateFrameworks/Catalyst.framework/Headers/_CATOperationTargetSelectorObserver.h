//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Catalyst/CATOperationObserver-Protocol.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _CATOperationTargetSelectorObserver : NSObject <CATOperationObserver>
{
    id _target;
    SEL _selector;
    NSUInteger _events;
    id _userInfo;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSUInteger events; // @synthesize events=_events;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
// - (void).cxx_destruct;
- (void)invokeActionWithOperation:(id)arg1;
- (void)operationDidFinish:(id)arg1;
- (void)operationDidProgress:(id)arg1;
- (void)operationDidStart:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 events:(NSUInteger)arg3 userInfo:(id)arg4 delegateQueue:(id)arg5;
- (id)init;

@end

