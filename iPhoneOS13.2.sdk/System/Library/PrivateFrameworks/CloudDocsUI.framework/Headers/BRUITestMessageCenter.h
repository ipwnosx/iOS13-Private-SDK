//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BRUITestMessageCenter : NSObject
{
    NSMutableDictionary *_pendingReplies;
    NSMutableDictionary *_messageHandlers;
    NSObject<OS_dispatch_queue> *_messageQueue;
    BOOL _started;
    BOOL _isSender;
}

+ (id)defaultCenter;
// - (void).cxx_destruct;
- (void)setHandler:(id)arg1 forMessageNamed:(id)arg2;
- (void)didReceiveMessage:(id)arg1;
- (void)_sendMessageNamed:(id)arg1 userInfo:(id)arg2 isReply:(BOOL)arg3 messageUUID:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)sendMessageNamed:(id)arg1 userInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)stop;
- (void)startReceiver;
- (void)startSender;
- (id)_init;
- (id)init;

@end

