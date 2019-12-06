//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserManagement/UMUserSwitchManagement-Protocol.h>
#import <UserManagement/UMUserSwitchManagement_Private-Protocol.h>

@class NSData, NSDictionary, NSMutableArray, NSString, NSXPCConnection, NSXPCListener;

__attribute__((visibility("hidden")))
@interface UMXPCServer : NSObject <NSXPCListenerDelegate, UMUserSwitchManagement, UMUserSwitchManagement_Private>
{
    BOOL _currentlyBroadcastingWillSwitchToUser;
    BOOL _didRegisterStakeholder;
    BOOL _didBroadcastWillSwitchToUser;
    BOOL _didSendTasks;
    BOOL _didBroadcastUploadContent;
    BOOL _didRegisterPersonaCalbackStakeholder;
    unsigned int _interruptionRetryCount;
    id _stakeholder;
    NSUInteger _stakeholderType;
    NSString *_machServiceName;
    NSUInteger _unregistrationStatus;
    NSString *_unregistrationReason;
    NSDictionary *_personaSpec;
    NSData *_passcodeData;
    NSData *_contextData;
    NSDictionary *_preferencesDict;
    NSDictionary *_personaProfileDict;
    id /* CDUnknownBlockType */ _registrationCompletionHandler;
    id /* CDUnknownBlockType */ _switchCompletionHandler;
    id /* CDUnknownBlockType */ _suspendQuotasCompletionHandler;
    id /* CDUnknownBlockType */ _directSwitchCompletionHandler;
    id /* CDUnknownBlockType */ _logoutToLoginSessionCompletionHandler;
    id /* CDUnknownBlockType */ _loginUICheckinSessionCompletionHandler;
    id /* CDUnknownBlockType */ _uploadContentCompletionHandler;
    id /* CDUnknownBlockType */ _willSwitchCompletionHandler;
    NSMutableArray *_switchBlockingTasks;
    NSMutableArray *_syncTasks;
    id /* CDUnknownBlockType */ _bubblePopHandler;
    NSUInteger _willSwitchToUserAddedTaskCount;
    NSXPCConnection *_xpcConnection;
    NSXPCListener *_xpcListener;
    id _personaStakeholder;
    id /* CDUnknownBlockType */ _personaRegistrationCompletionHandler;
    id _personaUpdateCallbackStakeholder;
}

+ (id)sharedServer;
@property(nonatomic) BOOL didRegisterPersonaCalbackStakeholder; // @synthesize didRegisterPersonaCalbackStakeholder=_didRegisterPersonaCalbackStakeholder;
@property(nonatomic) __weak id personaUpdateCallbackStakeholder; // @synthesize personaUpdateCallbackStakeholder=_personaUpdateCallbackStakeholder;
@property(copy, nonatomic) id /* CDUnknownBlockType */ personaRegistrationCompletionHandler; // @synthesize personaRegistrationCompletionHandler=_personaRegistrationCompletionHandler;
@property(nonatomic) __weak id personaStakeholder; // @synthesize personaStakeholder=_personaStakeholder;
@property(nonatomic) unsigned int interruptionRetryCount; // @synthesize interruptionRetryCount=_interruptionRetryCount;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) BOOL didBroadcastUploadContent; // @synthesize didBroadcastUploadContent=_didBroadcastUploadContent;
@property(nonatomic) BOOL didSendTasks; // @synthesize didSendTasks=_didSendTasks;
@property(nonatomic) BOOL didBroadcastWillSwitchToUser; // @synthesize didBroadcastWillSwitchToUser=_didBroadcastWillSwitchToUser;
@property(nonatomic) BOOL didRegisterStakeholder; // @synthesize didRegisterStakeholder=_didRegisterStakeholder;
@property(nonatomic) NSUInteger willSwitchToUserAddedTaskCount; // @synthesize willSwitchToUserAddedTaskCount=_willSwitchToUserAddedTaskCount;
@property(nonatomic) BOOL currentlyBroadcastingWillSwitchToUser; // @synthesize currentlyBroadcastingWillSwitchToUser=_currentlyBroadcastingWillSwitchToUser;
@property(copy, nonatomic) id /* CDUnknownBlockType */ bubblePopHandler; // @synthesize bubblePopHandler=_bubblePopHandler;
@property(retain, nonatomic) NSMutableArray *syncTasks; // @synthesize syncTasks=_syncTasks;
@property(retain, nonatomic) NSMutableArray *switchBlockingTasks; // @synthesize switchBlockingTasks=_switchBlockingTasks;
@property(copy, nonatomic) id /* CDUnknownBlockType */ willSwitchCompletionHandler; // @synthesize willSwitchCompletionHandler=_willSwitchCompletionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ uploadContentCompletionHandler; // @synthesize uploadContentCompletionHandler=_uploadContentCompletionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ loginUICheckinSessionCompletionHandler; // @synthesize loginUICheckinSessionCompletionHandler=_loginUICheckinSessionCompletionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ logoutToLoginSessionCompletionHandler; // @synthesize logoutToLoginSessionCompletionHandler=_logoutToLoginSessionCompletionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ directSwitchCompletionHandler; // @synthesize directSwitchCompletionHandler=_directSwitchCompletionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ suspendQuotasCompletionHandler; // @synthesize suspendQuotasCompletionHandler=_suspendQuotasCompletionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ switchCompletionHandler; // @synthesize switchCompletionHandler=_switchCompletionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ registrationCompletionHandler; // @synthesize registrationCompletionHandler=_registrationCompletionHandler;
@property(retain, nonatomic) NSDictionary *personaProfileDict; // @synthesize personaProfileDict=_personaProfileDict;
@property(retain, nonatomic) NSDictionary *preferencesDict; // @synthesize preferencesDict=_preferencesDict;
@property(retain, nonatomic) NSData *contextData; // @synthesize contextData=_contextData;
@property(retain, nonatomic) NSData *passcodeData; // @synthesize passcodeData=_passcodeData;
@property(retain, nonatomic) NSDictionary *personaSpec; // @synthesize personaSpec=_personaSpec;
@property(retain, nonatomic) NSString *unregistrationReason; // @synthesize unregistrationReason=_unregistrationReason;
@property(nonatomic) NSUInteger unregistrationStatus; // @synthesize unregistrationStatus=_unregistrationStatus;
@property(retain, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property(nonatomic) NSUInteger stakeholderType; // @synthesize stakeholderType=_stakeholderType;
@property(nonatomic) __weak id stakeholder; // @synthesize stakeholder=_stakeholder;
// - (void).cxx_destruct;
- (void)registerPersonaListUpdateObserver:(id)arg1 withMachService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerPersonaListUpdateObserver:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_registerPersonaListObserver:(id)arg1 withMachService:(id)arg2;
- (void)launchPersonaCallback;
- (id)registerPersonaUpdateCallbackWithMachService:(id)arg1;
- (void)personaLogoutWithUserODuuid:(id)arg1 withUid:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)personaLoginWithUserODuuid:(id)arg1 withUid:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(CDUnknownBlockType)arg1;
- (void)setMultiPersonaBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchBundleIdentifierForPersona:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setBundlesIdentifiers:(id)arg1 forUniquePersona:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchAsidMapwithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchPersonaSynchronous:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchPersona:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchListOfPersonasSynchronousWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchListOfAllUsersPersonasWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchListOfPersonasWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)disableUserPersona:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteUserPersona:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createUserPersona:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(CDUnknownBlockType)arg1;
- (void)personaListDidUpdateCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_broadcastpersonaListDidUpdate;
- (void)bubbleDidPop;
- (void)uploadContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deviceLoginSessionStateDidUpdate;
- (void)userSwitchTaskListDidUpdate;
- (void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)willSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_broadcastReadyToSwitchToLoginSession:(id)arg1;
- (void)_broadcastReadyToSwitchToUser:(id)arg1;
- (void)_broadcastWillSwitchToUser:(id)arg1;
- (void)_resendXPCMessages;
- (void)_sendXPCMessageToServerOfType:(NSUInteger)arg1 backingObject:(id)arg2;
- (void)_sendXPCMessageToServerOfType:(NSUInteger)arg1;
- (void)_tearDownConnectionToUMServer;
- (void)_setUpXPCConnectionToUMServerIfNeeded;
- (void)_setUpUMServerXPCConnectionIfNeeded:(id)arg1;
- (id)_syncServer;
- (id)_server;
- (int)_pid;
- (void)_registerStakeholder:(id)arg1;
- (void)userInteractionIsEnabled;
- (void)removeTask:(id)arg1;
- (void)addTask:(id)arg1;
- (void)resumeSync;
- (void)terminateSyncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resumeQuotas;
- (void)suspendQuotasWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loginUICheckInWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)logoutToLoginSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)switchToLoginUserWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)switchToLoginUserWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unregisterStakeHolder:(id)arg1 status:(NSUInteger)arg2 reason:(id)arg3;
- (void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;
- (void)registerCriticalUserSwitchStakeHolder:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerUserSwitchStakeHolder:(id)arg1;
- (void)_abortIfWeDoNotHaveASyncStakeholder;
- (void)_abortIfWeDoNotHaveAStakeholder;
- (id)init;

@end

