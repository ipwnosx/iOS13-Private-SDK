//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ASCredentialProviderExtensionContext;

@interface ASCredentialProviderViewController : UIViewController
{
}

- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceToProvideCredentialForIdentity:(id)arg1;
- (void)provideCredentialWithoutUserInteractionForIdentity:(id)arg1;
- (void)prepareCredentialListForServiceIdentifiers:(id)arg1;
@property(readonly, nonatomic) ASCredentialProviderExtensionContext *extensionContext;

@end

