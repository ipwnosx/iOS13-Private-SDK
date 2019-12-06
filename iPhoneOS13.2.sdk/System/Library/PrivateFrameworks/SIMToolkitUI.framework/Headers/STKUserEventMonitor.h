//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration;
@protocol OS_dispatch_queue, STKUserEventMonitorDelegate;

@interface STKUserEventMonitor : NSObject
{
    AWAttentionAwarenessConfiguration *_queue_configuration;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _invalidated;
    BOOL _enabled;
    id <STKUserEventMonitorDelegate> _delegate;
    AWAttentionAwarenessClient *_attentionAwarenessClient;
}

@property(retain, nonatomic) AWAttentionAwarenessClient *attentionAwarenessClient; // @synthesize attentionAwarenessClient=_attentionAwarenessClient;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <STKUserEventMonitorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_suspend;
- (void)_resume;
- (void)_queue_handleAttentionAwarenessEvent:(id)arg1;
- (id)_queue;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (id)_initWithAttentionAwarenessClient:(id)arg1;

@end

