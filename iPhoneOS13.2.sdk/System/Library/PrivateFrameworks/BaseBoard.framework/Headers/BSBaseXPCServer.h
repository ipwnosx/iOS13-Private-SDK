//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface BSBaseXPCServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listenerConnection;
    NSMutableSet *_clients;
    BOOL _connectionResumed;
    BOOL _usesAnonymousConnection;
    NSString *_serviceName;
    int _notifyToken;
}

@property(nonatomic, getter=usesAnonymousConnection) BOOL usesAnonymousConnection; // @synthesize usesAnonymousConnection=_usesAnonymousConnection;
- (id)_copyEndpoint;
- (id)_clients;
- (id)_connection;
- (id)_getStringFromMessage:(id)arg1 key:(char )arg2;
- (void)_sendReplyForMessage:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;
- (void)_sendMessageReply:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;
- (void)_sendReply:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;
- (void)queue_clientRemoved:(id)arg1;
- (void)queue_clientAdded:(id)arg1;
- (id)queue_newClientForConnection:(id)arg1;
- (Class)queue_classForNewClientConnection:(id)arg1;
- (BOOL)queue_shouldAcceptNewConnection:(id)arg1;
- (void)queue_handleMessage:(id)arg1 client:(id)arg2;
- (id)_queue_clientForConnection:(id)arg1;
- (void)_queue_removeClientConnection:(id)arg1;
- (void)_addClientConnection:(id)arg1;
- (void)_invalidate;
- (void)resumeServer;
- (id)_notifyTokenName;
- (void)registerServerSuspended;
- (void)run;
- (id)queue;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (id)initWithServiceName:(id)arg1;

@end

