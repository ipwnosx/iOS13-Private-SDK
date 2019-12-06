//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessClient, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface TLAttentionAwarenessObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMutableDictionary *_pollingForAttentionEventHandlers;
    BOOL _isFullyInitialized;
    BOOL _isPollingForAttention;
    AWAttentionAwarenessClient *_attentionAwarenessClient;
    NSObject<OS_dispatch_queue> *_attentionAwarenessClientQueue;
}

+ (BOOL)supportsAttenuatingTonesForAttentionDetected;
+ (id)sharedAttentionAwarenessObserver;
// - (void).cxx_destruct;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (void)_invokePollingForAttentionEventHandlers:(id)arg1 eventType:(long long)arg2;
- (void)_didCompleteInitialization;
- (void)_didReceiveAttentionPollingEventOfType:(NSUInteger)arg1 attentionEvent:(id)arg2;
- (void)_endPollingForAttention;
- (void)_beginPollingForAttention;
- (void)cancelPollForAttentionWithToken:(id)arg1;
- (id)pollForAttentionWithEventHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

