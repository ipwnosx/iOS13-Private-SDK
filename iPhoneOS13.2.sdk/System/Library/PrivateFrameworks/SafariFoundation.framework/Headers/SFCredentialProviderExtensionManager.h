//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSMutableOrderedSet, NSSet;
@protocol OS_dispatch_queue;

@interface SFCredentialProviderExtensionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id _extensionMatchingToken;
    NSSet *_extensions;
    NSMutableOrderedSet *_observers;
    BOOL _errorEncounteredDuringLastExtensionDiscovery;
    NSSet *_extensionsSync;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSSet *extensionsSync; // @synthesize extensionsSync=_extensionsSync;
// - (void).cxx_destruct;
- (BOOL)shouldShowConfigurationUIForEnablingExtension:(id)arg1;
- (id)displayNameForExtension:(id)arg1;
- (void)setExtension:(id)arg1 isEnabled:(BOOL)arg2;
- (BOOL)extensionIsEnabled:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSExtension *primaryExtensionSync;
@property(readonly, nonatomic) NSExtension *primaryExtension;
- (id)_extensions;
@property(readonly, nonatomic) NSSet *extensions;
- (void)_notifyObservers:(id)arg1;
- (void)_updateExtensions:(id)arg1;
- (void)_endExtensionDiscovery;
- (void)_beginExtensionDiscovery;
- (void)getPrimaryExtensionWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

