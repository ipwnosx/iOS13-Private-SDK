//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSAccountControllerDelegate-Protocol.h>
#import <IDS/IDSAccountRegistrationDelegate-Protocol.h>

@class IDSCTAdapter, NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue, _IDSPasswordManager;

@interface IDSSignInController : NSObject <IDSAccountRegistrationDelegate, IDSAccountControllerDelegate>
{
    NSMutableDictionary *_serviceNameAccountControllerMap;
    NSMutableDictionary *_accountIDDescriptionMap;
    NSMapTable *_delegateByServiceType;
    NSMutableDictionary *_initialStateByService;
    NSObject<OS_dispatch_queue> *_signInQueue;
    id _passwordManager;
    double _signInTimeout;
    double _signInFuzz;
    IDSCTAdapter *_CTAdapter;
}

@property(retain, nonatomic) IDSCTAdapter *CTAdapter; // @synthesize CTAdapter=_CTAdapter;
@property(retain, nonatomic) NSMutableDictionary *initialStateByService; // @synthesize initialStateByService=_initialStateByService;
@property(retain, nonatomic) NSMapTable *delegateByServiceType; // @synthesize delegateByServiceType=_delegateByServiceType;
@property(nonatomic) double signInFuzz; // @synthesize signInFuzz=_signInFuzz;
@property(nonatomic) double signInTimeout; // @synthesize signInTimeout=_signInTimeout;
@property(retain, nonatomic) id <_IDSPasswordManager> passwordManager; // @synthesize passwordManager=_passwordManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *signInQueue; // @synthesize signInQueue=_signInQueue;
@property(retain, nonatomic) NSMutableDictionary *accountIDDescriptionMap; // @synthesize accountIDDescriptionMap=_accountIDDescriptionMap;
@property(retain, nonatomic) NSMutableDictionary *serviceNameAccountControllerMap; // @synthesize serviceNameAccountControllerMap=_serviceNameAccountControllerMap;
// - (void).cxx_destruct;
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;
- (void)refreshRegistrationForAccount:(id)arg1;
- (void)_validateDelegateState;
- (NSUInteger)_serviceTypeForName:(id)arg1;
- (id)_serviceNameForType:(NSUInteger)arg1;
- (id)_accountWithUniqueID:(id)arg1;
- (id)_accountControllerForName:(id)arg1;
- (id)_createAccountControllerForService:(id)arg1;
- (BOOL)_actionOnAccountOfType:(NSUInteger)arg1 onService:(NSUInteger)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (NSUInteger)_statusOfAccount:(id)arg1;
- (id)_createAccountWithDictionary:(id)arg1 accountID:(id)arg2 serviceName:(id)arg3;
- (void)_validateStateForAccountID:(id)arg1 timeoutMode:(NSUInteger)arg2;
- (void)_cleanupStateForAccountID:(id)arg1;
- (void)_scheduleValidationAfter:(double)arg1 forAccountID:(id)arg2 allowFuzz:(BOOL)arg3;
- (void)_initializeStateMachineForAccountID:(id)arg1 service:(id)arg2 state:(NSUInteger)arg3 completion:(CDUnknownBlockType)arg4;
- (void)signOutService:(NSUInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signInUsername:(id)arg1 withProvidedCredential:(id)arg2 onService:(NSUInteger)arg3 waitUntilRegistered:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)signInUsername:(id)arg1 onService:(NSUInteger)arg2 waitUntilRegistered:(BOOL)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)provideCredential:(id)arg1 forUser:(id)arg2 onService:(NSUInteger)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)statusOfUsersOnService:(NSUInteger)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_statusOfUsersOnService:(NSUInteger)arg1;
- (void)disableUserType:(NSUInteger)arg1 onService:(NSUInteger)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enableUserType:(NSUInteger)arg1 onService:(NSUInteger)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeDelegateForService:(NSUInteger)arg1;
- (void)setDelegate:(id)arg1 forService:(NSUInteger)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)initWithPasswordManager:(id)arg1 CTAdapter:(id)arg2 signInTimeout:(double)arg3 signInFuzz:(double)arg4 queue:(id)arg5;
- (BOOL)_isServiceCurrentlyEnabled:(id)arg1;
- (BOOL)isiMessageEnabled;
- (BOOL)isFaceTimeEnabled;

@end

