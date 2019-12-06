//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/STTelephonyStateObserver-Protocol.h>

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSSet, SBApplicationDefaults;
@protocol SBApplicationRestrictionDataSource;

@interface SBApplicationRestrictionController : NSObject <STTelephonyStateObserver>
{
    id <SBApplicationRestrictionDataSource> _dataSource;
    NSHashTable *_observers;
    NSMutableDictionary *_tagValidityMap;
    NSMutableDictionary *_validTagsByIdentifier;
//    struct MGNotificationTokenStruct _tagsNotificationToken;
    NSMutableSet *_enabledTags;
    NSMutableDictionary *_ratingRanksByIdentifier;
    NSSet *_restrictedIdentifiers;
    SBApplicationDefaults *_applicationDefaults;
    BOOL _showInternalApps;
    BOOL _hasHideNonDefaultSystemAppsCapability;
    BOOL _showAllSystemApps;
    BOOL _canPostRestrictionState;
}

// - (void).cxx_destruct;
- (void)_postRestrictionStateToObservers:(id)arg1;
- (void)_postRestrictionState;
- (void)_updateVisibilityPreferences;
- (void)_updateRestrictionsAndForcePost:(BOOL)arg1;
- (void)beginPostingChanges;
- (void)carrierBundleInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;
- (void)noteRestrictionsMayHaveChanged;
- (void)noteVisibilityOverridesDidChange;
- (void)noteApplicationIdentifiersDidChangeWithAdded:(id)arg1 replaced:(id)arg2 removed:(id)arg3;
- (BOOL)isApplicationIdentifierRestricted:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)arg1;

@end

