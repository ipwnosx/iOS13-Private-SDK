//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>
#import <RunningBoard/RBBundleProperties-Protocol.h>

@class NSDictionary, NSString, NSURL, RBBundlePropertiesBSXPCProvider, RBBundlePropertiesBackgroundRefreshProvider, RBBundlePropertiesLSProvider, RBLSBundleProperties, RBSProcessIdentifier, RBSProcessIdentity, RBXPCBundleProperties;

@interface RBBundleProperties : NSObject <RBBundleProperties, BSDescriptionProviding>
{
    RBBundlePropertiesLSProvider *_lsProvider;
    RBBundlePropertiesBSXPCProvider *_xpcProvider;
    RBBundlePropertiesBackgroundRefreshProvider *_bgRefreshProvider;
    RBSProcessIdentifier *_processIdentifier;
    RBSProcessIdentity *_processIdentity;
    RBLSBundleProperties *_lsBundleProperties;
    RBXPCBundleProperties *_xpcBundleProperties;
    BOOL _hasFetchedBackgroundRefreshEnabled;
    BOOL _backgroundRefreshEnabled;
}

// - (void).cxx_destruct;
- (id)_xpcBundleProperties;
- (id)_lsBundleProperties;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
- (id)bundleInfoValuesForKeys:(id)arg1;
@property(readonly, nonatomic) NSDictionary *environmentVariables;
@property(readonly, nonatomic) NSURL *dataContainerURL;
@property(readonly, nonatomic) int preferredJetsamBand;
@property(readonly, nonatomic) BOOL isExtension;
@property(readonly, nonatomic) BOOL hasPreferredJetsamBand;
@property(readonly, nonatomic, getter=isBackgroundRefreshEnabled) BOOL backgroundRefreshEnabled;
@property(readonly, nonatomic) BOOL usesSocketMonitoring;
@property(readonly, nonatomic) BOOL supportsUnboundedTaskCompletion;
@property(readonly, nonatomic) BOOL supportsBackgroundAudio;
@property(readonly, nonatomic) BOOL supportsBackgroundNetworkAuthentication;
@property(readonly, nonatomic) BOOL supportsBackgroundContentFetching;
@property(readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property(readonly, copy, nonatomic) NSString *executablePath;
@property(readonly, copy, nonatomic) NSString *bundlePath;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (id)_bundleProperties;
- (id)initWithLSProvider:(id)arg1 xpcProvider:(id)arg2 backgroundRefreshProvider:(id)arg3 processIdentity:(id)arg4 processIdentifier:(id)arg5;

@end

