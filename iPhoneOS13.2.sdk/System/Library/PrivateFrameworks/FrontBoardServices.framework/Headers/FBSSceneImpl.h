//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSScene.h>

#import <FrontBoardServices/FBSSceneAgentProxy-Protocol.h>
#import <FrontBoardServices/FBSSceneHandle-Protocol.h>
#import <FrontBoardServices/FBSSceneSnapshotRequestDelegate-Protocol.h>

@class FBSSceneClientSettings, FBSSceneIdentityToken, FBSSceneSettings, FBSSceneSpecification, FBSSerialQueue, NSMutableArray, NSOrderedSet, NSString;
@protocol FBSSceneClientAgent, FBSSceneDelegate, FBSSceneUpdater;

@interface FBSSceneImpl : FBSScene <FBSSceneSnapshotRequestDelegate, FBSSceneHandle, FBSSceneAgentProxy>
{
    FBSSerialQueue *_callOutQueue;
    NSString *_identifier;
    FBSSceneSpecification *_specification;
    BOOL _hasAgent;
    id <FBSSceneClientAgent> _callOutQueue_agent;
    NSMutableArray *_callOutQueue_agentSessions;
    id /* CDUnknownBlockType */ _callOutQueue_agentMessageHandler;
    BOOL _callOutQueue_agentInvalidateCalled;
//     struct os_unfair_lock_s _lock;
    id <FBSSceneUpdater> _lock_updater;
    FBSSceneSettings *_lock_settings;
    FBSSceneClientSettings *_lock_clientSettings;
    NSOrderedSet *_lock_layers;
    id <FBSSceneDelegate> _lock_delegate;
    FBSSceneIdentityToken *_identityToken;
}

// - (void).cxx_destruct;
- (BOOL)snapshotRequest:(id)arg1 performWithContext:(id)arg2;
- (BOOL)snapshotRequestAllowSnapshot:(id)arg1;
- (void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)agent:(id)arg1 registerMessageHandler:(CDUnknownBlockType)arg2;
- (void)closeSession:(id)arg1;
- (id)sessionForIdentifier:(id)arg1;
- (id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;
- (id)clientProcess;
- (id)hostProcess;
- (id)counterpartAgent;
- (id)callOutQueue;
- (id)specification;
- (id)parameters;
- (void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)updater:(id)arg1 didReceiveActions:(id)arg2;
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_callOutQueue_invalidateAgent;
- (void)_callOutQueue_agent_willDestroyWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_callOutQueue_agent_didCreateWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_hasAgent;
- (void)_configureReceivedActions:(id)arg1;
- (void)_calloutQueue_comsumeLock_updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (id)identityToken;
- (BOOL)invalidateSnapshotWithContext:(id)arg1;
- (BOOL)performSnapshotWithContext:(id)arg1;
- (id)snapshotRequest;
- (void)detachSceneContext:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)updateClientSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (id)layers;
- (id)clientSettings;
- (id)settings;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)identifier;
- (void)_callOutQueue_invalidate;
- (id)_initWithUpdater:(id)arg1 identifier:(id)arg2 specification:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (id)initWithCallOutQueue:(id)arg1 identifier:(id)arg2 parameters:(id)arg3;
- (id)_initWithCallOutQueue:(id)arg1 identifier:(id)arg2 specification:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;

@end

