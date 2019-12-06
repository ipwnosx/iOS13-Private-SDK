//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAppleIDAuthenticationController, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface AKAppleIDSigningController : NSObject
{
//    struct os_unfair_lock_s _signerLock;
    NSObject<OS_dispatch_queue> *_signingQueue;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSXPCConnection *_connection;
    BOOL _isProxy;
    AKAppleIDAuthenticationController *_authenticationController;
}

@property(retain, nonatomic) AKAppleIDAuthenticationController *authenticationController; // @synthesize authenticationController=_authenticationController;
@property(nonatomic) BOOL isProxy; // @synthesize isProxy=_isProxy;
// - (void).cxx_destruct;
- (void)signaturesForData:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)absintheSignatureForData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (id)_connection;
- (void)dealloc;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (id)init;
- (void)_additionalAttestationHeadersForRequest:(id)arg1 withInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_additionalAbsintheHeadersForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signingHeadersForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

