//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSMutableArray, NSNumber, NSString, SUScriptColor, SUScriptDictionary;

@interface SUScriptDevice : SUScriptObject
{
    NSMutableArray *_scriptFunctions;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_removeScriptFunction:(id)arg1;
- (long long)_deviceCapabilityForString:(id)arg1;
- (void)_addScriptFunction:(id)arg1;
- (void)_autoDownloadKindsChangedNotification:(id)arg1;
- (void)_accessibilitySettingsChangedNotification:(id)arg1;
@property(readonly) NSString *UTIText;
@property(readonly) NSString *UTIMovie;
@property(readonly) NSString *UTIImage;
@property(readonly) NSString *restrictionYouTubeAllowed;
@property(readonly) NSString *restrictionVideoConferencingAllowed;
@property(readonly) NSString *restrictionTypeTelevision;
@property(readonly) NSString *restrictionTypeMovies;
@property(readonly) NSString *restrictionTypeApplications;
@property(readonly) NSString *restrictionScreenShotAllowed;
@property(readonly) NSString *restrictionSafariAllowed;
@property(readonly) NSString *restrictionMultiplayerGamingAllowed;
@property(readonly) NSString *restrictionITunesSocialAllowed;
@property(readonly) NSString *restrictionITunesAllowed;
- (id)restrictionExplicitMedia;
@property(readonly) NSString *restrictionCellularHDUploadsAllowed;
@property(readonly) NSString *restrictionCameraAllowed;
@property(readonly) NSString *restrictionBookStoreEroticaAllowed;
@property(readonly) NSString *restrictionBookStoreAllowed;
@property(readonly) NSString *restrictionAppRemovalAllowed;
@property(readonly) NSString *restrictionAppInstallationAllowed;
@property(readonly) NSString *restrictionAllowVoiceDialing;
@property(readonly) NSString *restrictionAllowGlobalBackgroundFetchWhenRoaming;
@property(readonly) NSString *restrictionAccountModificationAllowed;
@property(readonly) long long restrictionBoolYes;
@property(readonly) long long restrictionBoolNoData;
@property(readonly) long long restrictionBoolNo;
@property(readonly) NSString *freeSpaceOptionEffortLevel;
@property(readonly) long long freeSpaceEffortLevelPromptUser;
@property(readonly) long long freeSpaceEffortLevelManualSpaceManagement;
@property(readonly) long long freeSpaceEffortLevelAutomaticOnly;
@property(readonly) long long freeSpaceEffortLevelDoNothing;
@property(readonly) NSString *orientationStringPortraitUpsideDown;
@property(readonly) NSString *orientationStringPortrait;
@property(readonly) NSString *orientationStringLandscapeRight;
@property(readonly) NSString *orientationStringLandscapeLeft;
@property(readonly) long long networkTypeWiFi;
@property(readonly) long long networkType9G;
@property(readonly) long long networkType8G;
@property(readonly) long long networkType7G;
@property(readonly) long long networkType6G;
@property(readonly) long long networkType5G;
@property(readonly) long long networkType4G;
@property(readonly) long long networkType3G;
@property(readonly) long long networkType2G;
@property(readonly) long long networkTypeNone;
@property(readonly) long long hardwareTypeWildcatK48;
@property(readonly) long long hardwareTypeUnknown;
@property(readonly) long long hardwareTypeIPodTouchN81a;
@property(readonly) long long hardwareTypeIPodTouchN81;
@property(readonly) long long hardwareTypeIPodTouchN18;
@property(readonly) long long hardwareTypeIPodTouchN72;
@property(readonly) long long hardwareTypeIPodTouchN45;
@property(readonly) long long hardwareTypeIPhoneN94;
@property(readonly) long long hardwareTypeIPhoneN92;
@property(readonly) long long hardwareTypeIPhoneN90;
@property(readonly) long long hardwareTypeIPhoneN88;
@property(readonly) long long hardwareTypeIPhoneN82;
@property(readonly) long long hardwareTypeIPhoneM68;
@property(readonly) long long hardwareTypeIPadK95;
@property(readonly) long long hardwareTypeIPadK94;
@property(readonly) long long hardwareTypeIPadK93a;
@property(readonly) long long hardwareTypeIPadK93;
@property(readonly) long long hardwareTypeIPadJ2a;
@property(readonly) long long hardwareTypeIPadJ2;
@property(readonly) long long hardwareTypeIPadJ1;
@property(readonly) long long hardwareTypeAppleTVK66;
@property(readonly) long long hardwareTypeAppleTVJ33;
@property(readonly) NSString *capabilityNameWiFi;
@property(readonly) NSString *capabilityNamePodcasts;
@property(readonly) NSString *capabilityNameHDVideo720p;
@property(readonly) NSString *capabilityNameHDVideo1080p;
@property(readonly) NSString *capabilityNameHDVideo;
@property(readonly) NSString *capabilityNameExplicitMedia;
@property(readonly) NSString *capabilityNameEmail;
@property(readonly) id needsToneRegrantOption;
@property(readonly) NSNumber *metricsPostFrequencyOverride;
@property(readonly) NSNumber *mainScreenScale;
@property(readonly) long long hardwareType;
@property(readonly) SUScriptDictionary *diskUsageDictionary;
@property(readonly) NSNumber *diskSpaceAvailable;
@property(readonly) unsigned int deviceTypeIdentifier;
- (id)_className;
@property(readonly) NSArray *automaticDownloadMediaTypes;
@property(readonly) long long activeNetworkType;
@property(readonly) id accessibilityUseDarkerKeyboard;
@property(readonly) SUScriptColor *accessibilitySingleColor;
@property(readonly) id accessibilitySingleColorSelected;
@property(readonly) id accessibilityMotionAutoPlayVideo;
@property(readonly) id accessibilityEnhanceBackgroundContrast;
@property(readonly) id accessibilityDarkenSystemColors;
@property(readonly) id accessibilityButtonShapesEnabled;
@property(readonly) id accessibilityBoldTextEnabled;
- (id)valueForRestriction:(id)arg1;
- (id)UTIForURL:(id)arg1;
- (void)setValueForRestriction:(id)arg1 enabled:(id)arg2;
- (void)setAutomaticDownloadKinds:(id)arg1 withCompletionHandler:(id)arg2;
- (id)restrictionLevelForType:(id)arg1;
- (void)requestFreeSpaceWithBytes:(id)arg1 options:(id)arg2 completionHandler:(id)arg3;
- (id)isRestrictionLockedDown:(id)arg1;
- (id)hasCapability:(id)arg1;
- (id)getMachineIdentifierForAccountIdentifier:(id)arg1;
- (id)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(BOOL)arg2;
- (long long)boolValueForRestriction:(id)arg1;
- (void)dealloc;
- (id)init;

@end

