//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDBulletinIdentifiers-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMAccessoryCategory, HMDAccessoryNetworkAccessViolation, HMDAccessoryVersion, HMDApplicationData, HMDHome, HMDRoom, HMDVendorModelEntry, HMFMessageDispatcher, HMFVersion, NSArray, NSData, NSMutableSet, NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDAccessory : HMFObject <HMDBulletinIdentifiers, NSSecureCoding, HMDHomeMessageReceiver, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging>
{
    id <HMFLocking> _lock;
    BOOL _primary;
    BOOL _reachable;
    BOOL _remotelyReachable;
    NSMutableSet *_accessoryProfiles;
    BOOL _suspended;
    BOOL _suspendCapable;
    BOOL _remoteAccessEnabled;
    BOOL _custom1WoBLE;
    BOOL _custom1WoWLAN;
    NSString *_identifier;
    HMDRoom *_room;
    NSString *_model;
    NSString *_initialModel;
    NSString *_manufacturer;
    NSString *_initialManufacturer;
    HMDAccessoryVersion *_firmwareVersion;
    NSString *_serialNumber;
    HMDApplicationData *_appData;
    NSString *_productData;
    NSUInteger _configNumber;
    NSNumber *_networkClientIdentifier;
    NSUUID *_networkRouterUUID;
    long long _deprecatedTargetNetworkProtectionMode;
    long long _currentNetworkProtectionMode;
    long long _networkClientLAN;
    long long _wiFiCredentialType;
    NSArray *_allowedHosts;
    NSData *_wiFiUniquePreSharedKey;
    NSUUID *_configuredNetworkProtectionGroupUUID;
    NSUUID *_defaultNetworkProtectionGroupUUID;
    HMFVersion *_primaryProfileVersion;
    NSNumber *_initialCategoryIdentifier;
    NSUUID *_uuid;
    HMAccessoryCategory *_category;
    HMDHome *_home;
    NSString *_providedName;
    NSString *_configurationAppIdentifier;
    HMDAccessoryNetworkAccessViolation *_networkAccessViolation;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSNumber *_categoryIdentifier;
    NSString *_configuredName;
    NSUInteger _accessoryReprovisionState;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
+ (BOOL)splitProductDataIntoProductGroupAndProductNumber:(id)arg1 productGroup:(id )arg2 productNumber:(id )arg3;
+ (BOOL)validateProductData:(id)arg1;
@property(nonatomic) BOOL custom1WoWLAN; // @synthesize custom1WoWLAN=_custom1WoWLAN;
@property(nonatomic) BOOL custom1WoBLE; // @synthesize custom1WoBLE=_custom1WoBLE;
@property(nonatomic) NSUInteger accessoryReprovisionState; // @synthesize accessoryReprovisionState=_accessoryReprovisionState;
@property(retain, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(retain, nonatomic) NSNumber *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic, getter=isRemoteAccessEnabled) BOOL remoteAccessEnabled; // @synthesize remoteAccessEnabled=_remoteAccessEnabled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMDAccessoryNetworkAccessViolation *networkAccessViolation; // @synthesize networkAccessViolation=_networkAccessViolation;
@property(nonatomic, getter=isSuspendCapable) BOOL suspendCapable; // @synthesize suspendCapable=_suspendCapable;
@property(nonatomic, getter=isPrimary) BOOL primary; // @synthesize primary=_primary;
@property(copy, nonatomic) NSString *configurationAppIdentifier; // @synthesize configurationAppIdentifier=_configurationAppIdentifier;
@property(nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property(copy, nonatomic) NSString *providedName; // @synthesize providedName=_providedName;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSArray *allowedHosts; // @synthesize allowedHosts=_allowedHosts;
@property(nonatomic) long long wiFiCredentialType; // @synthesize wiFiCredentialType=_wiFiCredentialType;
// - (void).cxx_destruct;
- (void)__handlePairingIdentityRequest:(id)arg1;
- (BOOL)supportsMinimumUserPrivilege;
- (id)hashRouteID;
- (BOOL)providesHashRouteID;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_shouldFilterAccessoryProfile:(id)arg1;
@property(readonly, nonatomic) BOOL supportsCompanionInitiatedRestart;
@property(readonly, nonatomic) BOOL supportsMultiUser;
@property(readonly, nonatomic) BOOL supportsTargetControl;
@property(readonly, nonatomic) BOOL supportsTargetController;
- (void)autoConfigureTargetControllers;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)didUpdateCurrentNetworkProtection;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
@property(readonly) BOOL supportsUserManagement;
- (void)__handleListPairings:(id)arg1;
- (BOOL)shouldEnableDaemonRelaunch;
- (void)logDuetRoomEvent;
- (void)didEncounterError:(id)arg1;
@property(retain, nonatomic) NSUUID *configuredNetworkProtectionGroupUUID; // @synthesize configuredNetworkProtectionGroupUUID=_configuredNetworkProtectionGroupUUID;
@property(readonly, nonatomic) NSUUID *defaultNetworkProtectionGroupUUID; // @synthesize defaultNetworkProtectionGroupUUID=_defaultNetworkProtectionGroupUUID;
- (id)networkProtectionGroupUUID;
- (void)saveNetworkAccessViolation:(id)arg1;
- (void)saveWiFiUniquePreSharedKey:(id)arg1 credentialType:(long long)arg2;
@property(retain, nonatomic) NSData *wiFiUniquePreSharedKey; // @synthesize wiFiUniquePreSharedKey=_wiFiUniquePreSharedKey;
- (void)setWifiCredentialType:(long long)arg1;
- (BOOL)supportsWiFiReconfiguration;
- (void)_handleUpdateNetworkProtection:(id)arg1;
- (void)saveCurrentNetworkProtectionMode:(long long)arg1 assignedLAN:(long long)arg2 appliedFirewallWANRules:(id)arg3;
@property(nonatomic) long long networkClientLAN; // @synthesize networkClientLAN=_networkClientLAN;
@property(nonatomic) long long currentNetworkProtectionMode; // @synthesize currentNetworkProtectionMode=_currentNetworkProtectionMode;
- (long long)targetNetworkProtectionMode;
@property(nonatomic) long long deprecatedTargetNetworkProtectionMode; // @synthesize deprecatedTargetNetworkProtectionMode=_deprecatedTargetNetworkProtectionMode;
- (void)saveNetworkClientIdentifier:(id)arg1 networkRouterUUID:(id)arg2;
@property(retain, nonatomic) NSUUID *networkRouterUUID; // @synthesize networkRouterUUID=_networkRouterUUID;
@property(retain, nonatomic) NSNumber *networkClientIdentifier; // @synthesize networkClientIdentifier=_networkClientIdentifier;
- (BOOL)supportsNetworkProtection;
@property(retain, nonatomic) HMFVersion *primaryProfileVersion; // @synthesize primaryProfileVersion=_primaryProfileVersion;
- (void)removeAccessoryProfile:(id)arg1;
- (void)addAccessoryProfile:(id)arg1;
@property(readonly, copy) NSArray *accessoryProfiles;
- (void)takeOwnershipOfAppData:(id)arg1;
- (void)appDataRemoved:(id)arg1 message:(id)arg2;
- (void)appDataUpdated:(id)arg1 message:(id)arg2;
- (void)__handleSetAppData:(id)arg1;
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(nonatomic) NSUInteger configNumber; // @synthesize configNumber=_configNumber;
- (id)runtimeState;
- (void)_remoteAccessEnabled:(BOOL)arg1;
- (void)remoteAccessEnabled:(BOOL)arg1;
- (void)_notifyConnectivityChangedWithReachabilityState:(BOOL)arg1 remoteAccessChanged:(BOOL)arg2;
@property(readonly, nonatomic) long long reachableTransports;
- (BOOL)isReachableForXPCClients;
@property(nonatomic, getter=isRemotelyReachable) BOOL remotelyReachable; // @synthesize remotelyReachable=_remotelyReachable;
@property(nonatomic, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
- (void)setSuspendedCapable:(BOOL)arg1;
@property(readonly, nonatomic) BOOL supportsPersonalRequests;
@property(readonly, nonatomic) BOOL supportsMediaContentProfile;
@property(readonly) BOOL requiresHomeAppForManagement;
- (void)removeAdvertisement:(id)arg1;
- (void)addAdvertisement:(id)arg1;
- (void)notifyAccessoryNameChanged:(BOOL)arg1;
- (void)updateMediaSession:(id)arg1;
- (void)updateManufacturer:(id)arg1 model:(id)arg2 firmwareVersion:(id)arg3 serialNumber:(id)arg4;
@property(readonly, copy, nonatomic) HMDVendorModelEntry *vendorInfo;
@property(readonly, nonatomic) NSString *productGroup;
@property(readonly, nonatomic) NSString *productData; // @synthesize productData=_productData;
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, copy, nonatomic) HMDAccessoryVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly, copy, nonatomic) NSString *initialManufacturer; // @synthesize initialManufacturer=_initialManufacturer;
@property(readonly, copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, copy, nonatomic) NSString *initialModel; // @synthesize initialModel=_initialModel;
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
- (void)__handleRename:(id)arg1;
- (void)updateProvidedName:(id)arg1;
- (id)getConfiguredName;
- (void)_handleUpdatedName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name;
- (void)__handleGetAccessoryAdvertisingParams:(id)arg1;
@property(readonly, nonatomic) NSNumber *initialCategoryIdentifier; // @synthesize initialCategoryIdentifier=_initialCategoryIdentifier;
- (id)_updateCategory:(id)arg1 notifyClients:(BOOL)arg2;
- (void)updateCategory:(id)arg1;
- (BOOL)_updateRoom:(id)arg1;
- (void)__handleUpdateRoom:(id)arg1;
- (id)modelWithUpdatedRoom:(id)arg1;
- (void)updateRoom:(id)arg1;
@property(retain, nonatomic) HMDRoom *room; // @synthesize room=_room;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)removeCloudData;
- (void)unconfigure;
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3;
- (void)registerForMessagesWithNewUUID:(id)arg1;
- (void)_relayIdentifyAccessorytoResidentForMessage:(id)arg1;
- (void)__handleIdentify:(id)arg1;
- (void)_registerForMessages;
- (id)backingStoreObjects:(long long)arg1;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (id)transactionWithObjectChangeType:(NSUInteger)arg1;
@property(readonly, getter=isCurrentAccessory) BOOL currentAccessory;
@property(readonly, copy) NSString *description;
- (id)privateDescription;
- (void)dealloc;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)init;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;
- (id)vendorDetailsForAWD;
- (id)assistantObject;
- (id)url;
- (id)assistantUniqueIdentifier;
- (id)networkProtectionReportForAWD;
- (int)networkProtectionStatusForAWD;

@end

