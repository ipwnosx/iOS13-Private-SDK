//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommunicationsSetupUI/AAAppleIDLoginPlugin-Protocol.h>
#import <CommunicationsSetupUI/AASetupAssistantDelegateService-Protocol.h>

@class CNFRegController, IDSAccountController, NSDictionary;

@interface FTRegAccountServiceDelegate : NSObject <AASetupAssistantDelegateService, AAAppleIDLoginPlugin>
{
    CNFRegController *_regController;
    NSDictionary *_responseDictionary;
    id /* CDUnknownBlockType */ _completionHandler;
    IDSAccountController *_accountController;
}

@property(retain, nonatomic) IDSAccountController *accountController; // @synthesize accountController=_accountController;
@property(copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) CNFRegController *regController; // @synthesize regController=_regController;
// - (void).cxx_destruct;
- (BOOL)serviceIsAvailable;
- (id)displayName;
- (id)name;
- (long long)serviceType;
- (void)setupOperationFailed;
- (void)completeSetupWithResponseParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)accountSetupRequestParameters;
- (id)delegateServiceIdentifier;
- (void)handleLoginResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)parametersForIdentityEstablishmentRequest;
- (id)_defaultSetupRequestParameters;
- (id)parametersForLoginRequest;
- (id)serviceIdentifier;
- (BOOL)_shouldSkipAccountSetup:(id)arg1;
- (id)_existingOperationalAccount;
- (id)_existingAccountForSetupParameters:(id)arg1;
- (BOOL)_account:(id)arg1 matchesSetupParameters:(id)arg2;
- (BOOL)_hasOperationalAccount;
- (BOOL)_hasAccount;
- (void)_handleFailureWithErrorCode:(long long)arg1;
- (void)_handleSuccess:(BOOL)arg1 error:(id)arg2;
- (void)_cleanup;
- (id)_logName;
- (id)init;
- (id)initWithRegController:(id)arg1;

@end

