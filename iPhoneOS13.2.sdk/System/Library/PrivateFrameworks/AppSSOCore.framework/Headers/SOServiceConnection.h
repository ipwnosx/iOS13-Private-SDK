//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppSSOCore/SOServiceProtocol-Protocol.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SOServiceConnection : NSObject <SOServiceProtocol>
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
// - (void).cxx_destruct;
- (id)_doConnectWithOptions:(NSUInteger)arg1;
- (BOOL)_connectToService;
// - (void)isExtensionProcessWithAuditToken:(CDStruct_6ad76789)arg1 completion:(CDUnknownBlockType)arg2;
- (void)debugHintsWithCompletion:(CDUnknownBlockType)arg1;
- (void)realmsWithCompletion:(CDUnknownBlockType)arg1;
- (void)configurationWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

