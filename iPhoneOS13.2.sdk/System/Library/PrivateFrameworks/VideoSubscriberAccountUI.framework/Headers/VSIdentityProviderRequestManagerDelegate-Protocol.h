//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class VSAccount, VSApplicationController, VSFailable, VSIdentityProvider, VSIdentityProviderAlert, VSIdentityProviderRequest, VSIdentityProviderRequestManager;

@protocol VSIdentityProviderRequestManagerDelegate <NSObject>
- (void)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 finishedRequest:(VSIdentityProviderRequest *)arg2 withResult:(VSFailable *)arg3;

@optional
- (BOOL)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 requestsAlert:(VSIdentityProviderAlert *)arg2;
- (VSApplicationController *)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 applicationControllerWithIdentityProvider:(VSIdentityProvider *)arg2;
- (void)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 didAuthenticateAccount:(VSAccount *)arg2 forRequest:(VSIdentityProviderRequest *)arg3;
@end

