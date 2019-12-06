//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSExtension, NSString, NSUUID, SORemoteExtensionViewController;
@protocol OS_dispatch_queue, SOExtensionDelegate;

@interface SOExtension : NSObject
{
    NSUUID *_sessionID;
    NSObject<OS_dispatch_queue> *_queue;
    SORemoteExtensionViewController *_remoteViewController;
    NSExtension *_extension;
    NSArray *_associatedDomains;
    id <SOExtensionDelegate> _extensionDelegate;
}

@property(nonatomic) __weak id <SOExtensionDelegate> extensionDelegate; // @synthesize extensionDelegate=_extensionDelegate;
@property(retain, nonatomic) NSArray *associatedDomains; // @synthesize associatedDomains=_associatedDomains;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToExtension:(id)arg1;
- (BOOL)hasURLApprovedAssociatedDomain:(id)arg1;
- (void)checkAssociatedDomains;
@property(readonly, nonatomic) NSString *extensionBundleIdentifier;
@property(readonly, nonatomic) NSString *containerAppBundleIdentifier;
@property(readonly, nonatomic) NSString *localizedExtensionDisplayName;
@property(readonly, nonatomic) NSString *containerAppPath;
- (void)unload;
// - (CDStruct_6ad76789)auditTokenForSession;
- (id)_contextForSession;
- (void)_beginAuthorizationWithServiceXPCEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_beginAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_connectContextToSessionWithRequestIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setupSessionHelperForIOSWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_finishedSettingUpSession:(id)arg1;
- (void)_setupSessionIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2;
- (void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginAuthorizationWithServiceXPCEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestAuthorizationViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupExtension;
- (id)initWithExtension:(id)arg1;

@end

