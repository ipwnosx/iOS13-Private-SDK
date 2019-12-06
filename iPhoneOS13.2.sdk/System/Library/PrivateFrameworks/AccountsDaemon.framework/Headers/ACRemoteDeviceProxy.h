//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/IDSServiceDelegate-Protocol.h>

@class ACRemoteCommandHandler, IDSService, NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ACRemoteDeviceProxy : NSObject <IDSServiceDelegate>
{
    IDSService *_messageSendingService;
    NSObject<OS_dispatch_queue> *_messageSendingQueue;
    NSObject<OS_dispatch_queue> *_commandProcessingQueue;
    ACRemoteCommandHandler *_remoteCommandHandler;
    NSMutableDictionary *_completionHandlersByInternalMessageID;
    NSMutableDictionary *_internalMessageIDsByTransportID;
    NSLock *_completionHandlersLock;
}

// - (void).cxx_destruct;
- (long long)_priorityForMessageCarryingCommand:(id)arg1;
- (BOOL)_isValidCommandForOutgoingMessage:(id)arg1;
- (void)_dequeueCompletionHandlersForMessageWithTransportID:(id)arg1 success:(BOOL)arg2 result:(id)arg3 error:(id)arg4;
- (void)_dequeueCompletionHandlersForMessageWithInternalID:(id)arg1 success:(BOOL)arg2 result:(id)arg3 error:(id)arg4;
- (void)_enqueueCompletionHandler:(CDUnknownBlockType)arg1 forMessageWithInternalID:(id)arg2 transportID:(id)arg3;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)_sendReplyForMessage:(id)arg1 withSuccess:(BOOL)arg2 result:(id)arg3 error:(id)arg4;
- (BOOL)_sendMessageData:(id)arg1 toDestination:(id)arg2 withPriority:(long long)arg3 bypassDuet:(BOOL)arg4 transportID:(id )arg5 error:(id )arg6;
- (void)sendCommand:(id)arg1 withAccount:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendCommand:(id)arg1 withAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

