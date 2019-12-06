//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSAuthenticateRequest;

@interface VUIAuthenticationManager : NSObject
{
    BOOL __isObservingAccountStoreChange;
    SSAuthenticateRequest *__authRequest;
}

+ (void)_performAuthenticationWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_userAccount;
+ (void)signOutUserWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)signInUserWithAppleID:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)requestAuthenticationAlwaysPrompt:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (BOOL)allowsAccountModification;
+ (id)userFullName;
+ (id)userLastName;
+ (id)userFirstName;
+ (id)userAccountName;
+ (BOOL)userHasActiveAccount;
+ (id)sharedInstance;
@property(nonatomic) BOOL _isObservingAccountStoreChange; // @synthesize _isObservingAccountStoreChange=__isObservingAccountStoreChange;
@property(retain, nonatomic) SSAuthenticateRequest *_authRequest; // @synthesize _authRequest=__authRequest;
// - (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;

@end

