//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface VSViewControllerFactory : NSObject
{
    NSOperationQueue *_privateQueue;
}

+ (id)sharedFactory;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
// - (void).cxx_destruct;
- (id)viewControllerForPlaybackActivityReportingFromAppsWithBundleIDs:(id)arg1 grantingVouchers:(BOOL)arg2 appleAccount:(id)arg3 identityProvider:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)viewControllerForAppsSupportedByIdentityProvider:(id)arg1 delegate:(id)arg2;
- (id)viewControllerForUnsupportedProvider:(id)arg1 withRequestingAppDisplayName:(id)arg2 storage:(id)arg3 acknowledgementHandler:(CDUnknownBlockType)arg4;
- (id)viewControllerToConfirmDeveloperIdentityProviderDeletionWithConfirmationHandler:(CDUnknownBlockType)arg1;
- (id)viewControllerToConfirmAccountDeletionForIdentityProviderDisplayName:(id)arg1 preferredStyle:(long long)arg2 confirmationHandler:(CDUnknownBlockType)arg3;
- (id)loadingViewController;
- (id)authenticationViewControllerForViewModel:(id)arg1;
- (id)identityProviderPickerViewControllerWithIdentityProviders:(id)arg1;
- (void)viewServiceRemoteViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

