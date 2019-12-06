//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class BBSectionIcon, BBSectionInfoSettings, NSArray, NSData, NSDictionary, NSString;

@interface BBSectionInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_sectionID;
    NSString *_subsectionID;
    long long _sectionType;
    long long _sectionCategory;
    BBSectionInfoSettings *_sectionInfoSettings;
    BBSectionInfoSettings *_managedSectionInfoSettings;
    NSString *_pathToWeeAppPluginBundle;
    NSString *_displayName;
    BBSectionIcon *_icon;
    NSArray *_subsections;
    BBSectionInfo *_parentSection;
    NSString *_factorySectionID;
    NSArray *_dataProviderIDs;
    BOOL _suppressFromSettings;
    BOOL _hideWeeApp;
    NSString *_appName;
    long long _subsectionPriority;
    NSUInteger _suppressedSettings;
    NSUInteger _version;
}

+ (BOOL)supportsSecureCoding;
+ (id)defaultSectionInfoForType:(long long)arg1;
+ (id)defaultSectionInfoForSection:(id)arg1;
@property(nonatomic) NSUInteger version; // @synthesize version=_version;
@property(copy, nonatomic) NSArray *dataProviderIDs; // @synthesize dataProviderIDs=_dataProviderIDs;
@property(copy, nonatomic) NSString *factorySectionID; // @synthesize factorySectionID=_factorySectionID;
@property(nonatomic) BOOL hideWeeApp; // @synthesize hideWeeApp=_hideWeeApp;
@property(nonatomic) NSUInteger suppressedSettings; // @synthesize suppressedSettings=_suppressedSettings;
@property(nonatomic) long long subsectionPriority; // @synthesize subsectionPriority=_subsectionPriority;
@property(nonatomic) __weak BBSectionInfo *parentSection; // @synthesize parentSection=_parentSection;
@property(copy, nonatomic) NSArray *subsections; // @synthesize subsections=_subsections;
@property(copy, nonatomic) BBSectionIcon *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *pathToWeeAppPluginBundle; // @synthesize pathToWeeAppPluginBundle=_pathToWeeAppPluginBundle;
@property(copy, nonatomic) BBSectionInfoSettings *sectionInfoSettings; // @synthesize sectionInfoSettings=_sectionInfoSettings;
@property(nonatomic) BOOL suppressFromSettings; // @synthesize suppressFromSettings=_suppressFromSettings;
@property(nonatomic) long long sectionCategory; // @synthesize sectionCategory=_sectionCategory;
@property(nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property(copy, nonatomic) NSString *subsectionID; // @synthesize subsectionID=_subsectionID;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
// - (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
@property(nonatomic) NSUInteger notificationCenterLimit;
@property(readonly, copy, nonatomic) NSData *iconData;
@property(nonatomic) NSUInteger bulletinCount;
@property(nonatomic) BOOL enabled;
@property(readonly, copy, nonatomic) NSDictionary *stateCapture;
- (id)_suppressedSettingsList:(NSUInteger)arg1;
- (void)deliverQuietly:(BOOL)arg1;
- (void)_deliverQuietly:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isDeliveredQuietly;
- (BOOL)_isDeliveredQuietly;
@property(readonly, nonatomic) BOOL hasEnabledSettings;
- (void)_dissociateDataProviderSectionInfo:(id)arg1;
- (void)_associateDataProviderSectionInfo:(id)arg1;
- (id)_subsectionForID:(id)arg1;
- (void)_replaceSubsection:(id)arg1;
- (void)_addSubsection:(id)arg1;
- (void)_configureWithDefaultsForSectionType:(long long)arg1;
- (id)initWithDefaultsForSectionType:(long long)arg1;
- (id)init;
- (id)effectiveSectionInfoWithFactoryInfo:(id)arg1 defaultContentPreviewSetting:(long long)arg2 globalSpokenNotificationSetting:(long long)arg3;
- (long long)disabledSettingForSetting:(long long)arg1;
- (id)effectiveSectionInfoWithDefaultContentPreviewSetting:(long long)arg1 globalSpokenNotificationSetting:(long long)arg2;
- (void)updateWithDefaultSectionInfo:(id)arg1;
- (id)copyFromManagedSettings;
@property(readonly, nonatomic) BBSectionInfoSettings *writableSettings;
@property(readonly, nonatomic) BBSectionInfoSettings *readableSettings;
@property(readonly, nonatomic) BOOL usesManagedSettings;
@property(copy, nonatomic) BBSectionInfoSettings *managedSectionInfoSettings;
- (BOOL)queryAndUseManagedSettingsForSectionID:(id)arg1;
- (BOOL)queryAndUseManagedSettings;
- (void)setEmergencySetting:(long long)arg1;
- (long long)emergencySetting;
@property(nonatomic) BOOL showsCustomSettingsLink;
- (void)setShowsMessagePreview:(BOOL)arg1;
- (BOOL)showsMessagePreview;
@property(nonatomic) long long contentPreviewSetting;
@property(nonatomic) BOOL showsOnExternalDevices;
@property(nonatomic) long long bulletinGroupingSetting;
@property(nonatomic) long long criticalAlertSetting;
@property(nonatomic) long long spokenNotificationSetting;
@property(nonatomic) long long carPlaySetting;
@property(nonatomic) NSUInteger pushSettings;
@property(nonatomic) NSUInteger alertType;
- (void)setShowsInLockScreen:(BOOL)arg1;
- (BOOL)showsInLockScreen;
@property(nonatomic) long long lockScreenSetting;
- (void)setShowsInNotificationCenter:(BOOL)arg1;
- (BOOL)showsInNotificationCenter;
@property(nonatomic) long long notificationCenterSetting;
@property(nonatomic) long long authorizationStatus;
@property(nonatomic) BOOL allowsNotifications;

@end

