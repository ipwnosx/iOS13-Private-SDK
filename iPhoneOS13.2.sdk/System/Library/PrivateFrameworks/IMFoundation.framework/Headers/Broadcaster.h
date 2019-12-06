//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <IMFoundation/IDSSendXPCProtocol-Protocol.h>

@class IMMessageContext, IMRemoteObjectBroadcaster, NSArray, Protocol;

@interface Broadcaster : NSProxy <IDSSendXPCProtocol>
{
    NSArray *_targets;
    IMRemoteObjectBroadcaster *_parent;
    Protocol *_protocol;
    IMMessageContext *_messageContext;
    int _curXPCMessagePriority;
    id /* CDUnknownBlockType */ _completion;
}

@property(nonatomic) int curXPCMessagePriority; // @synthesize curXPCMessagePriority=_curXPCMessagePriority;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)sendXPCObject:(id)arg1;
- (void)dealloc;
- (id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 priority:(int)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 priority:(int)arg5;
- (id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4;

@end

