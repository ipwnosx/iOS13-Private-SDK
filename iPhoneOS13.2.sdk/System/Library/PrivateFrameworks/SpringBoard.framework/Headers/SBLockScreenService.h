//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSServiceConnectionListenerDelegate-Protocol.h>
#import <SpringBoard/SBSLockScreenServiceServerInterface-Protocol.h>

@class BSServiceConnectionListener, FBServiceClientAuthenticator, NSMutableSet, SBFAuthenticationAssertion, SBLockScreenManager, SBMainWorkspace, SBRemoteTransientOverlaySessionManager, SBSpuriousScreenUndimmingAssertion;
@protocol SBFAuthenticationAssertionProviding;

@interface SBLockScreenService : NSObject <BSServiceConnectionListenerDelegate, SBSLockScreenServiceServerInterface>
{
    SBLockScreenManager *_lockScreenManager;
    SBMainWorkspace *_mainWorkspace;
    id <SBFAuthenticationAssertionProviding> _authenticationAssertionProvider;
    SBRemoteTransientOverlaySessionManager *_remoteTransientOverlaySessionManager;
    FBServiceClientAuthenticator *_requestDeviceUnlockAuthenticator;
    BSServiceConnectionListener *_listener;
    NSMutableSet *_connections;
    NSMutableSet *_connectionsPreventingPasscodeLock;
    SBFAuthenticationAssertion *_preventPasscodeLockAssertion;
    NSMutableSet *_connectionsPreventingSpuriousScreenUndim;
    SBSpuriousScreenUndimmingAssertion *_preventSpuriousScreenUndimAssertion;
}

// - (void).cxx_destruct;
- (oneway void)setPreventSpuriousScreenUndim:(id)arg1;
- (oneway void)setPreventPasscodeLock:(id)arg1;
- (oneway void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (oneway void)launchEmergencyDialerWithCompletion:(CDUnknownBlockType)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)requestPasscodeUnlockUIForClient:(id)arg1 options:(id)arg2 description:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)initWithLockScreenManager:(id)arg1 workspace:(id)arg2 authenticationAssertionProvider:(id)arg3 remoteTransientOverlaySessionManager:(id)arg4;

@end

