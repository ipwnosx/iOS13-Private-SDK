//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTTargetBootstrap/XCTTarget-Protocol.h>

@class NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue, XCTConnectionAccepting;

@interface XCTTargetSession : NSObject <NSXPCListenerDelegate, XCTTarget>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_daemonConnection;
    NSXPCListener *_clientListener;
    id <XCTConnectionAccepting> _connectionHandler;
}

@property(retain) id <XCTConnectionAccepting> connectionHandler; // @synthesize connectionHandler=_connectionHandler;
@property(retain) NSXPCListener *clientListener; // @synthesize clientListener=_clientListener;
@property(retain) NSXPCConnection *daemonConnection; // @synthesize daemonConnection=_daemonConnection;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_XCT_requestEndpointWithAutomationSupportLibraryPath:(id)arg1 protocolVersion:(NSUInteger)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_on_queue_getListenerEndpoint;
- (void)_on_queue_startListeningForClientConnections;
- (BOOL)_on_queue_loadAutomationSupportLibraryFromPath:(id)arg1 error:(id )arg2;
- (void)_on_queue_connect;
- (void)connect;
- (id)initWithDaemonConnection:(id)arg1;
- (id)init;

@end

