//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL, UNSNotificationSourceSettingsDescription;

@interface UNSNotificationSourceDescription : NSObject
{
    BOOL _allowCriticalAlerts;
    BOOL _allowPrivateProperties;
    BOOL _allowUnlimitedContentBody;
    BOOL _hideSettings;
    BOOL _automaticallyShowSettings;
    BOOL _suppressDismissalSync;
    BOOL _suppressIconMask;
    BOOL _suppressUserAuthorizationPrompt;
    BOOL _useDefaultDataProvider;
    BOOL _usesCloudKit;
    BOOL _supportsContentAvailableRemoteNotifications;
    BOOL _restricted;
    BOOL _daemonShouldReceiveBackgroundResponses;
    BOOL _daemonShouldReceiveNotificationSettingsUpdates;
    BOOL _daemonShouldReceiveApplicationEvents;
    BOOL _allowUnlimitedPendingNotifications;
    NSString *_bundleIdentifier;
    NSString *_processBundleIdentifier;
    NSString *_universalApplicationIdentifier;
    NSString *_displayName;
    NSString *_pushEnvironment;
    NSString *_defaultIconFile;
    NSString *_settingsIconFile;
    NSString *_settingsSheetIconFile;
    NSString *_carPlayIconFile;
    NSString *_watchQuickLookSmallIconFile;
    NSString *_watchQuickLookLargeIconFile;
    NSString *_watchListSmallIconFile;
    NSString *_watchListLargeIconFile;
    NSString *_watchQuickLook394hIconFile;
    NSString *_watchQuickLook448hIconFile;
    NSString *_watchList394hIconFile;
    NSString *_watchList448hIconFile;
    NSURL *_bundleURL;
    NSURL *_dataContainerURL;
    NSDictionary *_groupContainerURLS;
    NSArray *_defaultCategories;
    UNSNotificationSourceSettingsDescription *_defaultSettings;
    NSArray *_defaultTopics;
}

+ (id)_validEnvironmentFromEnvironment:(id)arg1;
+ (id)systemSourceDescriptionWithBundleURL:(id)arg1;
+ (id)systemSourceDescriptionWithBundleIdentifier:(id)arg1;
+ (id)sourceDescriptionWithBundleIdentifier:(id)arg1;
+ (id)applicationSourceDescriptionWithApplication:(id)arg1;
+ (id)applicationSourceDescriptionWithBundleIdentifier:(id)arg1;
+ (id)systemSourceDirectoryURLs;
+ (id)systemSourcePathExtension;
+ (id)descriptionWithBundleIdentifier:(id)arg1 path:(id)arg2;
@property(nonatomic) BOOL allowUnlimitedPendingNotifications; // @synthesize allowUnlimitedPendingNotifications=_allowUnlimitedPendingNotifications;
@property(nonatomic) BOOL daemonShouldReceiveApplicationEvents; // @synthesize daemonShouldReceiveApplicationEvents=_daemonShouldReceiveApplicationEvents;
@property(nonatomic) BOOL daemonShouldReceiveNotificationSettingsUpdates; // @synthesize daemonShouldReceiveNotificationSettingsUpdates=_daemonShouldReceiveNotificationSettingsUpdates;
@property(nonatomic) BOOL daemonShouldReceiveBackgroundResponses; // @synthesize daemonShouldReceiveBackgroundResponses=_daemonShouldReceiveBackgroundResponses;
@property(nonatomic, getter=isRestricted) BOOL restricted; // @synthesize restricted=_restricted;
@property(nonatomic) BOOL supportsContentAvailableRemoteNotifications; // @synthesize supportsContentAvailableRemoteNotifications=_supportsContentAvailableRemoteNotifications;
@property(nonatomic) BOOL usesCloudKit; // @synthesize usesCloudKit=_usesCloudKit;
@property(nonatomic) BOOL useDefaultDataProvider; // @synthesize useDefaultDataProvider=_useDefaultDataProvider;
@property(nonatomic) BOOL suppressUserAuthorizationPrompt; // @synthesize suppressUserAuthorizationPrompt=_suppressUserAuthorizationPrompt;
@property(nonatomic) BOOL suppressIconMask; // @synthesize suppressIconMask=_suppressIconMask;
@property(nonatomic) BOOL suppressDismissalSync; // @synthesize suppressDismissalSync=_suppressDismissalSync;
@property(nonatomic) BOOL automaticallyShowSettings; // @synthesize automaticallyShowSettings=_automaticallyShowSettings;
@property(nonatomic) BOOL hideSettings; // @synthesize hideSettings=_hideSettings;
@property(nonatomic) BOOL allowUnlimitedContentBody; // @synthesize allowUnlimitedContentBody=_allowUnlimitedContentBody;
@property(nonatomic) BOOL allowPrivateProperties; // @synthesize allowPrivateProperties=_allowPrivateProperties;
@property(nonatomic) BOOL allowCriticalAlerts; // @synthesize allowCriticalAlerts=_allowCriticalAlerts;
@property(retain, nonatomic) NSArray *defaultTopics; // @synthesize defaultTopics=_defaultTopics;
@property(retain, nonatomic) UNSNotificationSourceSettingsDescription *defaultSettings; // @synthesize defaultSettings=_defaultSettings;
@property(retain, nonatomic) NSArray *defaultCategories; // @synthesize defaultCategories=_defaultCategories;
@property(copy, nonatomic) NSDictionary *groupContainerURLS; // @synthesize groupContainerURLS=_groupContainerURLS;
@property(copy, nonatomic) NSURL *dataContainerURL; // @synthesize dataContainerURL=_dataContainerURL;
@property(copy, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(copy, nonatomic) NSString *watchList448hIconFile; // @synthesize watchList448hIconFile=_watchList448hIconFile;
@property(copy, nonatomic) NSString *watchList394hIconFile; // @synthesize watchList394hIconFile=_watchList394hIconFile;
@property(copy, nonatomic) NSString *watchQuickLook448hIconFile; // @synthesize watchQuickLook448hIconFile=_watchQuickLook448hIconFile;
@property(copy, nonatomic) NSString *watchQuickLook394hIconFile; // @synthesize watchQuickLook394hIconFile=_watchQuickLook394hIconFile;
@property(copy, nonatomic) NSString *watchListLargeIconFile; // @synthesize watchListLargeIconFile=_watchListLargeIconFile;
@property(copy, nonatomic) NSString *watchListSmallIconFile; // @synthesize watchListSmallIconFile=_watchListSmallIconFile;
@property(copy, nonatomic) NSString *watchQuickLookLargeIconFile; // @synthesize watchQuickLookLargeIconFile=_watchQuickLookLargeIconFile;
@property(copy, nonatomic) NSString *watchQuickLookSmallIconFile; // @synthesize watchQuickLookSmallIconFile=_watchQuickLookSmallIconFile;
@property(copy, nonatomic) NSString *carPlayIconFile; // @synthesize carPlayIconFile=_carPlayIconFile;
@property(copy, nonatomic) NSString *settingsSheetIconFile; // @synthesize settingsSheetIconFile=_settingsSheetIconFile;
@property(copy, nonatomic) NSString *settingsIconFile; // @synthesize settingsIconFile=_settingsIconFile;
@property(copy, nonatomic) NSString *defaultIconFile; // @synthesize defaultIconFile=_defaultIconFile;
@property(copy, nonatomic) NSString *pushEnvironment; // @synthesize pushEnvironment=_pushEnvironment;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *universalApplicationIdentifier; // @synthesize universalApplicationIdentifier=_universalApplicationIdentifier;
@property(copy, nonatomic) NSString *processBundleIdentifier; // @synthesize processBundleIdentifier=_processBundleIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (void)setDefaultTopicsFromArray:(id)arg1 bundle:(id)arg2;
- (void)setDefaultCategoriesFromArray:(id)arg1 bundle:(id)arg2;
- (void)setIconFilesFromDictionary:(id)arg1;
- (void)setSystemPropertiesFromDictionary:(id)arg1 bundle:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

