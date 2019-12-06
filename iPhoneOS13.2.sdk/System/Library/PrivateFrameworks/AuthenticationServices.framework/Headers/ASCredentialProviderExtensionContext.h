//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <AuthenticationServices/_ASCredentialProviderExtensionContextProtocol-Protocol.h>

@interface ASCredentialProviderExtensionContext : NSExtensionContext <_ASCredentialProviderExtensionContextProtocol>
{
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceToProvideCredentialForIdentity:(id)arg1;
- (void)provideCredentialWithoutUserInteractionForIdentity:(id)arg1;
- (void)prepareCredentialListForServiceIdentifiers:(id)arg1;
- (void)completeExtensionConfigurationRequest;
- (void)cancelRequestWithError:(id)arg1;
- (void)completeRequestWithSelectedCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

