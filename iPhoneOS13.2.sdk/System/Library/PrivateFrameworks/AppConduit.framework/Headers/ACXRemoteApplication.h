//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppConduit/ACXSyncedApp-Protocol.h>

@class MIStoreMetadata, NSArray, NSDictionary, NSString, NSUUID;

@interface ACXRemoteApplication : NSObject <ACXSyncedApp, NSSecureCoding, NSCopying>
{
    BOOL _isDeletable;
    BOOL _isBetaApp;
    BOOL _isProfileValidated;
    BOOL _hasClockfaces;
    BOOL _isLocallyAvailable;
    NSString *_bundleIdentifier;
    NSString *_applicationName;
    NSUInteger _applicationType;
    NSUInteger _applicationMode;
    NSString *_bundleVersion;
    NSString *_bundleShortVersion;
    NSString *_minimumOSVersion;
    NSDictionary *_requiredCapabilities;
    NSString *_watchKitVersion;
    NSString *_companionAppBundleID;
    NSString *_watchKitAppExecutableHash;
    NSString *_watchKitAppExtensionBundleID;
    NSString *_teamID;
    NSString *_complicationPrincipalClass;
    NSArray *_supportedComplicationFamilies;
    NSArray *_intentsRestrictedWhileLocked;
    NSArray *_intentsSupported;
    NSArray *_userActivityTypes;
    NSUUID *_databaseUUID;
    NSUInteger _sequenceNumber;
    NSDictionary *_localizedInfoPlistStrings;
    MIStoreMetadata *_storeMetadata;
    NSArray *_counterpartIdentifiers;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *counterpartIdentifiers; // @synthesize counterpartIdentifiers=_counterpartIdentifiers;
@property(copy, nonatomic) MIStoreMetadata *storeMetadata; // @synthesize storeMetadata=_storeMetadata;
@property(nonatomic) BOOL isLocallyAvailable; // @synthesize isLocallyAvailable=_isLocallyAvailable;
@property(copy, nonatomic) NSDictionary *localizedInfoPlistStrings; // @synthesize localizedInfoPlistStrings=_localizedInfoPlistStrings;
@property(nonatomic) NSUInteger sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSUUID *databaseUUID; // @synthesize databaseUUID=_databaseUUID;
@property(copy, nonatomic) NSArray *userActivityTypes; // @synthesize userActivityTypes=_userActivityTypes;
@property(copy, nonatomic) NSArray *intentsSupported; // @synthesize intentsSupported=_intentsSupported;
@property(copy, nonatomic) NSArray *intentsRestrictedWhileLocked; // @synthesize intentsRestrictedWhileLocked=_intentsRestrictedWhileLocked;
@property(nonatomic) BOOL hasClockfaces; // @synthesize hasClockfaces=_hasClockfaces;
@property(copy, nonatomic) NSArray *supportedComplicationFamilies; // @synthesize supportedComplicationFamilies=_supportedComplicationFamilies;
@property(copy, nonatomic) NSString *complicationPrincipalClass; // @synthesize complicationPrincipalClass=_complicationPrincipalClass;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(nonatomic) BOOL isProfileValidated; // @synthesize isProfileValidated=_isProfileValidated;
@property(nonatomic) BOOL isBetaApp; // @synthesize isBetaApp=_isBetaApp;
@property(copy, nonatomic) NSString *watchKitAppExtensionBundleID; // @synthesize watchKitAppExtensionBundleID=_watchKitAppExtensionBundleID;
@property(copy, nonatomic) NSString *watchKitAppExecutableHash; // @synthesize watchKitAppExecutableHash=_watchKitAppExecutableHash;
@property(copy, nonatomic) NSString *companionAppBundleID; // @synthesize companionAppBundleID=_companionAppBundleID;
@property(copy, nonatomic) NSString *watchKitVersion; // @synthesize watchKitVersion=_watchKitVersion;
@property(copy, nonatomic) NSDictionary *requiredCapabilities; // @synthesize requiredCapabilities=_requiredCapabilities;
@property(copy, nonatomic) NSString *minimumOSVersion; // @synthesize minimumOSVersion=_minimumOSVersion;
@property(copy, nonatomic) NSString *bundleShortVersion; // @synthesize bundleShortVersion=_bundleShortVersion;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(nonatomic) BOOL isDeletable; // @synthesize isDeletable=_isDeletable;
@property(nonatomic) NSUInteger applicationMode; // @synthesize applicationMode=_applicationMode;
@property(nonatomic) NSUInteger applicationType; // @synthesize applicationType=_applicationType;
@property(copy, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
// - (void).cxx_destruct;
- (BOOL)isTheSameAppAs:(id)arg1;
- (id)localizedInfoPlistStringsForKeys:(id)arg1 fetchingFirstMatchingLocalizationInList:(id)arg2;
- (BOOL)isCompatibleWithCPUType:(int)arg1 subtype:(int)arg2;
- (BOOL)isRuntimeCompatibleWithOSVersion:(id)arg1;
- (BOOL)isCompatibleWithOSVersion:(id)arg1;
@property(readonly, nonatomic) BOOL hasComplication;
@property(readonly, nonatomic) BOOL isSystemApp;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializeAsRemoteApplication;
- (id)serialize;
- (id)initWithSerializedDictionary:(id)arg1;
- (id)initWithBundleID:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(NSUInteger)arg3;
- (id)initWithApplicationProxy:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(NSUInteger)arg3;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

