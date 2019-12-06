//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings, CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo, NSArray, NSDate, NSNumber, NSString;

@interface CEMDeviceInformationCommand_StatusQueryResponses : CEMPayloadBase
{
    NSString *_statusUDID;
    CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo *_statusOrganizationInfo;
    NSString *_statusMDMOptions;
    NSDate *_statusLastCloudBackupDate;
    NSNumber *_statusAwaitingConfiguration;
    NSNumber *_statusITunesStoreAccountIsActive;
    NSString *_statusITunesStoreAccountHash;
    NSString *_statusDeviceName;
    NSString *_statusOSVersion;
    NSString *_statusBuildVersion;
    NSString *_statusModelName;
    NSString *_statusModel;
    NSString *_statusProductName;
    NSString *_statusMarketingName;
    NSString *_statusSerialNumber;
    NSNumber *_statusDeviceCapacity;
    NSNumber *_statusAvailableDeviceCapacity;
    NSString *_statusIMEI;
    NSString *_statusMEID;
    NSString *_statusModemFirmwareVersion;
    NSNumber *_statusCellularTechnology;
    NSNumber *_statusBatteryLevel;
    NSNumber *_statusIsSupervised;
    NSNumber *_statusIsMultiUser;
    NSNumber *_statusIsDeviceLocatorServiceEnabled;
    NSNumber *_statusIsActivationLockEnabled;
    NSNumber *_statusIsDoNotDisturbInEffect;
    NSString *_statusDeviceID;
    NSString *_statusEASDeviceIdentifier;
    NSNumber *_statusIsCloudBackupEnabled;
    NSArray *_statusActiveManagedUsers;
    CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings *_statusOSUpdateSettings;
    NSArray *_statusAutoSetupAdminAccounts;
    NSNumber *_statusSystemIntegrityProtectionEnabled;
    NSNumber *_statusIsMDMLostModeEnabled;
    NSNumber *_statusMaximumResidentUsers;
    NSString *_statusPushToken;
    NSNumber *_statusDiagnosticSubmissionEnabled;
    NSNumber *_statusAppAnalyticsEnabled;
    NSString *_statusICCID;
    NSString *_statusBluetoothMAC;
    NSString *_statusWiFiMAC;
    NSArray *_statusEthernetMACs;
    NSString *_statusCurrentCarrierNetwork;
    NSString *_statusSIMCarrierNetwork;
    NSString *_statusSubscriberCarrierNetwork;
    NSString *_statusCarrierSettingsVersion;
    NSString *_statusPhoneNumber;
    NSNumber *_statusDataRoamingEnabled;
    NSNumber *_statusVoiceRoamingEnabled;
    NSNumber *_statusPersonalHotspotEnabled;
    NSNumber *_statusIsNetworkTethered;
    NSNumber *_statusIsRoaming;
    NSString *_statusSIMMCC;
    NSString *_statusSIMMNC;
    NSString *_statusSubscriberMCC;
    NSString *_statusSubscriberMNC;
    NSString *_statusCurrentMCC;
    NSString *_statusCurrentMNC;
}

+ (id)buildRequiredOnly;
+ (id)buildWithUDID:(id)arg1 withOrganizationInfo:(id)arg2 withMDMOptions:(id)arg3 withLastCloudBackupDate:(id)arg4 withAwaitingConfiguration:(id)arg5 withITunesStoreAccountIsActive:(id)arg6 withITunesStoreAccountHash:(id)arg7 withDeviceName:(id)arg8 withOSVersion:(id)arg9 withBuildVersion:(id)arg10 withModelName:(id)arg11 withModel:(id)arg12 withProductName:(id)arg13 withMarketingName:(id)arg14 withSerialNumber:(id)arg15 withDeviceCapacity:(id)arg16 withAvailableDeviceCapacity:(id)arg17 withIMEI:(id)arg18 withMEID:(id)arg19 withModemFirmwareVersion:(id)arg20 withCellularTechnology:(id)arg21 withBatteryLevel:(id)arg22 withIsSupervised:(id)arg23 withIsMultiUser:(id)arg24 withIsDeviceLocatorServiceEnabled:(id)arg25 withIsActivationLockEnabled:(id)arg26 withIsDoNotDisturbInEffect:(id)arg27 withDeviceID:(id)arg28 withEASDeviceIdentifier:(id)arg29 withIsCloudBackupEnabled:(id)arg30 withActiveManagedUsers:(id)arg31 withOSUpdateSettings:(id)arg32 withAutoSetupAdminAccounts:(id)arg33 withSystemIntegrityProtectionEnabled:(id)arg34 withIsMDMLostModeEnabled:(id)arg35 withMaximumResidentUsers:(id)arg36 withPushToken:(id)arg37 withDiagnosticSubmissionEnabled:(id)arg38 withAppAnalyticsEnabled:(id)arg39 withICCID:(id)arg40 withBluetoothMAC:(id)arg41 withWiFiMAC:(id)arg42 withEthernetMACs:(id)arg43 withCurrentCarrierNetwork:(id)arg44 withSIMCarrierNetwork:(id)arg45 withSubscriberCarrierNetwork:(id)arg46 withCarrierSettingsVersion:(id)arg47 withPhoneNumber:(id)arg48 withDataRoamingEnabled:(id)arg49 withVoiceRoamingEnabled:(id)arg50 withPersonalHotspotEnabled:(id)arg51 withIsNetworkTethered:(id)arg52 withIsRoaming:(id)arg53 withSIMMCC:(id)arg54 withSIMMNC:(id)arg55 withSubscriberMCC:(id)arg56 withSubscriberMNC:(id)arg57 withCurrentMCC:(id)arg58 withCurrentMNC:(id)arg59;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSString *statusCurrentMNC; // @synthesize statusCurrentMNC=_statusCurrentMNC;
@property(copy, nonatomic) NSString *statusCurrentMCC; // @synthesize statusCurrentMCC=_statusCurrentMCC;
@property(copy, nonatomic) NSString *statusSubscriberMNC; // @synthesize statusSubscriberMNC=_statusSubscriberMNC;
@property(copy, nonatomic) NSString *statusSubscriberMCC; // @synthesize statusSubscriberMCC=_statusSubscriberMCC;
@property(copy, nonatomic) NSString *statusSIMMNC; // @synthesize statusSIMMNC=_statusSIMMNC;
@property(copy, nonatomic) NSString *statusSIMMCC; // @synthesize statusSIMMCC=_statusSIMMCC;
@property(copy, nonatomic) NSNumber *statusIsRoaming; // @synthesize statusIsRoaming=_statusIsRoaming;
@property(copy, nonatomic) NSNumber *statusIsNetworkTethered; // @synthesize statusIsNetworkTethered=_statusIsNetworkTethered;
@property(copy, nonatomic) NSNumber *statusPersonalHotspotEnabled; // @synthesize statusPersonalHotspotEnabled=_statusPersonalHotspotEnabled;
@property(copy, nonatomic) NSNumber *statusVoiceRoamingEnabled; // @synthesize statusVoiceRoamingEnabled=_statusVoiceRoamingEnabled;
@property(copy, nonatomic) NSNumber *statusDataRoamingEnabled; // @synthesize statusDataRoamingEnabled=_statusDataRoamingEnabled;
@property(copy, nonatomic) NSString *statusPhoneNumber; // @synthesize statusPhoneNumber=_statusPhoneNumber;
@property(copy, nonatomic) NSString *statusCarrierSettingsVersion; // @synthesize statusCarrierSettingsVersion=_statusCarrierSettingsVersion;
@property(copy, nonatomic) NSString *statusSubscriberCarrierNetwork; // @synthesize statusSubscriberCarrierNetwork=_statusSubscriberCarrierNetwork;
@property(copy, nonatomic) NSString *statusSIMCarrierNetwork; // @synthesize statusSIMCarrierNetwork=_statusSIMCarrierNetwork;
@property(copy, nonatomic) NSString *statusCurrentCarrierNetwork; // @synthesize statusCurrentCarrierNetwork=_statusCurrentCarrierNetwork;
@property(copy, nonatomic) NSArray *statusEthernetMACs; // @synthesize statusEthernetMACs=_statusEthernetMACs;
@property(copy, nonatomic) NSString *statusWiFiMAC; // @synthesize statusWiFiMAC=_statusWiFiMAC;
@property(copy, nonatomic) NSString *statusBluetoothMAC; // @synthesize statusBluetoothMAC=_statusBluetoothMAC;
@property(copy, nonatomic) NSString *statusICCID; // @synthesize statusICCID=_statusICCID;
@property(copy, nonatomic) NSNumber *statusAppAnalyticsEnabled; // @synthesize statusAppAnalyticsEnabled=_statusAppAnalyticsEnabled;
@property(copy, nonatomic) NSNumber *statusDiagnosticSubmissionEnabled; // @synthesize statusDiagnosticSubmissionEnabled=_statusDiagnosticSubmissionEnabled;
@property(copy, nonatomic) NSString *statusPushToken; // @synthesize statusPushToken=_statusPushToken;
@property(copy, nonatomic) NSNumber *statusMaximumResidentUsers; // @synthesize statusMaximumResidentUsers=_statusMaximumResidentUsers;
@property(copy, nonatomic) NSNumber *statusIsMDMLostModeEnabled; // @synthesize statusIsMDMLostModeEnabled=_statusIsMDMLostModeEnabled;
@property(copy, nonatomic) NSNumber *statusSystemIntegrityProtectionEnabled; // @synthesize statusSystemIntegrityProtectionEnabled=_statusSystemIntegrityProtectionEnabled;
@property(copy, nonatomic) NSArray *statusAutoSetupAdminAccounts; // @synthesize statusAutoSetupAdminAccounts=_statusAutoSetupAdminAccounts;
@property(copy, nonatomic) CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings *statusOSUpdateSettings; // @synthesize statusOSUpdateSettings=_statusOSUpdateSettings;
@property(copy, nonatomic) NSArray *statusActiveManagedUsers; // @synthesize statusActiveManagedUsers=_statusActiveManagedUsers;
@property(copy, nonatomic) NSNumber *statusIsCloudBackupEnabled; // @synthesize statusIsCloudBackupEnabled=_statusIsCloudBackupEnabled;
@property(copy, nonatomic) NSString *statusEASDeviceIdentifier; // @synthesize statusEASDeviceIdentifier=_statusEASDeviceIdentifier;
@property(copy, nonatomic) NSString *statusDeviceID; // @synthesize statusDeviceID=_statusDeviceID;
@property(copy, nonatomic) NSNumber *statusIsDoNotDisturbInEffect; // @synthesize statusIsDoNotDisturbInEffect=_statusIsDoNotDisturbInEffect;
@property(copy, nonatomic) NSNumber *statusIsActivationLockEnabled; // @synthesize statusIsActivationLockEnabled=_statusIsActivationLockEnabled;
@property(copy, nonatomic) NSNumber *statusIsDeviceLocatorServiceEnabled; // @synthesize statusIsDeviceLocatorServiceEnabled=_statusIsDeviceLocatorServiceEnabled;
@property(copy, nonatomic) NSNumber *statusIsMultiUser; // @synthesize statusIsMultiUser=_statusIsMultiUser;
@property(copy, nonatomic) NSNumber *statusIsSupervised; // @synthesize statusIsSupervised=_statusIsSupervised;
@property(copy, nonatomic) NSNumber *statusBatteryLevel; // @synthesize statusBatteryLevel=_statusBatteryLevel;
@property(copy, nonatomic) NSNumber *statusCellularTechnology; // @synthesize statusCellularTechnology=_statusCellularTechnology;
@property(copy, nonatomic) NSString *statusModemFirmwareVersion; // @synthesize statusModemFirmwareVersion=_statusModemFirmwareVersion;
@property(copy, nonatomic) NSString *statusMEID; // @synthesize statusMEID=_statusMEID;
@property(copy, nonatomic) NSString *statusIMEI; // @synthesize statusIMEI=_statusIMEI;
@property(copy, nonatomic) NSNumber *statusAvailableDeviceCapacity; // @synthesize statusAvailableDeviceCapacity=_statusAvailableDeviceCapacity;
@property(copy, nonatomic) NSNumber *statusDeviceCapacity; // @synthesize statusDeviceCapacity=_statusDeviceCapacity;
@property(copy, nonatomic) NSString *statusSerialNumber; // @synthesize statusSerialNumber=_statusSerialNumber;
@property(copy, nonatomic) NSString *statusMarketingName; // @synthesize statusMarketingName=_statusMarketingName;
@property(copy, nonatomic) NSString *statusProductName; // @synthesize statusProductName=_statusProductName;
@property(copy, nonatomic) NSString *statusModel; // @synthesize statusModel=_statusModel;
@property(copy, nonatomic) NSString *statusModelName; // @synthesize statusModelName=_statusModelName;
@property(copy, nonatomic) NSString *statusBuildVersion; // @synthesize statusBuildVersion=_statusBuildVersion;
@property(copy, nonatomic) NSString *statusOSVersion; // @synthesize statusOSVersion=_statusOSVersion;
@property(copy, nonatomic) NSString *statusDeviceName; // @synthesize statusDeviceName=_statusDeviceName;
@property(copy, nonatomic) NSString *statusITunesStoreAccountHash; // @synthesize statusITunesStoreAccountHash=_statusITunesStoreAccountHash;
@property(copy, nonatomic) NSNumber *statusITunesStoreAccountIsActive; // @synthesize statusITunesStoreAccountIsActive=_statusITunesStoreAccountIsActive;
@property(copy, nonatomic) NSNumber *statusAwaitingConfiguration; // @synthesize statusAwaitingConfiguration=_statusAwaitingConfiguration;
@property(copy, nonatomic) NSDate *statusLastCloudBackupDate; // @synthesize statusLastCloudBackupDate=_statusLastCloudBackupDate;
@property(copy, nonatomic) NSString *statusMDMOptions; // @synthesize statusMDMOptions=_statusMDMOptions;
@property(copy, nonatomic) CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo *statusOrganizationInfo; // @synthesize statusOrganizationInfo=_statusOrganizationInfo;
@property(copy, nonatomic) NSString *statusUDID; // @synthesize statusUDID=_statusUDID;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

