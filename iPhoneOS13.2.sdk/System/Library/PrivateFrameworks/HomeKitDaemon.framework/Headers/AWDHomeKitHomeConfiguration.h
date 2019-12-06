//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface AWDHomeKitHomeConfiguration : PBCodable <NSCopying>
{
    NSMutableArray *_eventTriggers;
    NSMutableArray *_homeKitMultiUserSettings;
    int _networkProtectionStatus;
    unsigned int _numAccessories;
    unsigned int _numAccessoriesNetworkProtectionAutoFullAccess;
    unsigned int _numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;
    unsigned int _numAccessoriesNetworkProtectionAutoProtectedMainLAN;
    unsigned int _numAccessoriesNetworkProtectionFullAccess;
    unsigned int _numAccessoriesNetworkProtectionHomeKitOnly;
    unsigned int _numAccessoriesNetworkProtectionUnprotected;
    unsigned int _numAccessoriesWiFiPPSKCredential;
    unsigned int _numAccessoryServiceGroups;
    unsigned int _numAdmins;
    unsigned int _numAppleAudioAccessories;
    unsigned int _numAppleMediaAccessories;
    unsigned int _numAppleTVAccessories;
    unsigned int _numBridgedAccessories;
    unsigned int _numBridgedTargetControllers;
    unsigned int _numCameraAccessories;
    unsigned int _numCertifiedAccessories;
    unsigned int _numCertifiedBridgedTargetControllers;
    unsigned int _numCertifiedTargetControllers;
    unsigned int _numConfiguredScenes;
    unsigned int _numEventTriggers;
    unsigned int _numHAPAccessories;
    unsigned int _numMediaSystems;
    unsigned int _numNotCertifiedAccessories;
    unsigned int _numResidentsEnabled;
    unsigned int _numRooms;
    unsigned int _numScenes;
    unsigned int _numServices;
    unsigned int _numShortcuts;
    unsigned int _numTargetControllers;
    unsigned int _numTelevisionAccessories;
    unsigned int _numTimerTriggers;
    unsigned int _numTriggers;
    unsigned int _numUsers;
    unsigned int _numWholeHouseAudioAccessories;
    unsigned int _numZones;
    BOOL _isOwner;
    BOOL _isPrimaryResident;
    BOOL _isResidentAvailable;
    BOOL _primaryReportingDevice;
   struct {
        unsigned int networkProtectionStatus:1;
        unsigned int numAccessories:1;
        unsigned int numAccessoriesNetworkProtectionAutoFullAccess:1;
        unsigned int numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN:1;
        unsigned int numAccessoriesNetworkProtectionAutoProtectedMainLAN:1;
        unsigned int numAccessoriesNetworkProtectionFullAccess:1;
        unsigned int numAccessoriesNetworkProtectionHomeKitOnly:1;
        unsigned int numAccessoriesNetworkProtectionUnprotected:1;
        unsigned int numAccessoriesWiFiPPSKCredential:1;
        unsigned int numAccessoryServiceGroups:1;
        unsigned int numAdmins:1;
        unsigned int numAppleAudioAccessories:1;
        unsigned int numAppleMediaAccessories:1;
        unsigned int numAppleTVAccessories:1;
        unsigned int numBridgedAccessories:1;
        unsigned int numBridgedTargetControllers:1;
        unsigned int numCameraAccessories:1;
        unsigned int numCertifiedAccessories:1;
        unsigned int numCertifiedBridgedTargetControllers:1;
        unsigned int numCertifiedTargetControllers:1;
        unsigned int numConfiguredScenes:1;
        unsigned int numEventTriggers:1;
        unsigned int numHAPAccessories:1;
        unsigned int numMediaSystems:1;
        unsigned int numNotCertifiedAccessories:1;
        unsigned int numResidentsEnabled:1;
        unsigned int numRooms:1;
        unsigned int numScenes:1;
        unsigned int numServices:1;
        unsigned int numShortcuts:1;
        unsigned int numTargetControllers:1;
        unsigned int numTelevisionAccessories:1;
        unsigned int numTimerTriggers:1;
        unsigned int numTriggers:1;
        unsigned int numUsers:1;
        unsigned int numWholeHouseAudioAccessories:1;
        unsigned int numZones:1;
        unsigned int isOwner:1;
        unsigned int isPrimaryResident:1;
        unsigned int isResidentAvailable:1;
        unsigned int primaryReportingDevice:1;
    } _has;
}

+ (Class)homeKitMultiUserSettingsType;
+ (Class)eventTriggersType;
@property(retain, nonatomic) NSMutableArray *homeKitMultiUserSettings; // @synthesize homeKitMultiUserSettings=_homeKitMultiUserSettings;
@property(nonatomic) unsigned int numShortcuts; // @synthesize numShortcuts=_numShortcuts;
@property(nonatomic) unsigned int numAccessoriesNetworkProtectionUnprotected; // @synthesize numAccessoriesNetworkProtectionUnprotected=_numAccessoriesNetworkProtectionUnprotected;
@property(nonatomic) unsigned int numAccessoriesNetworkProtectionHomeKitOnly; // @synthesize numAccessoriesNetworkProtectionHomeKitOnly=_numAccessoriesNetworkProtectionHomeKitOnly;
@property(nonatomic) unsigned int numAccessoriesNetworkProtectionFullAccess; // @synthesize numAccessoriesNetworkProtectionFullAccess=_numAccessoriesNetworkProtectionFullAccess;
@property(nonatomic) unsigned int numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN; // @synthesize numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN=_numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;
@property(nonatomic) unsigned int numAccessoriesNetworkProtectionAutoProtectedMainLAN; // @synthesize numAccessoriesNetworkProtectionAutoProtectedMainLAN=_numAccessoriesNetworkProtectionAutoProtectedMainLAN;
@property(nonatomic) unsigned int numAccessoriesNetworkProtectionAutoFullAccess; // @synthesize numAccessoriesNetworkProtectionAutoFullAccess=_numAccessoriesNetworkProtectionAutoFullAccess;
@property(nonatomic) unsigned int numAccessoriesWiFiPPSKCredential; // @synthesize numAccessoriesWiFiPPSKCredential=_numAccessoriesWiFiPPSKCredential;
@property(nonatomic) unsigned int numTelevisionAccessories; // @synthesize numTelevisionAccessories=_numTelevisionAccessories;
@property(nonatomic) BOOL primaryReportingDevice; // @synthesize primaryReportingDevice=_primaryReportingDevice;
@property(nonatomic) unsigned int numResidentsEnabled; // @synthesize numResidentsEnabled=_numResidentsEnabled;
@property(nonatomic) BOOL isOwner; // @synthesize isOwner=_isOwner;
@property(nonatomic) unsigned int numConfiguredScenes; // @synthesize numConfiguredScenes=_numConfiguredScenes;
@property(nonatomic) unsigned int numCertifiedBridgedTargetControllers; // @synthesize numCertifiedBridgedTargetControllers=_numCertifiedBridgedTargetControllers;
@property(nonatomic) unsigned int numBridgedTargetControllers; // @synthesize numBridgedTargetControllers=_numBridgedTargetControllers;
@property(nonatomic) unsigned int numCertifiedTargetControllers; // @synthesize numCertifiedTargetControllers=_numCertifiedTargetControllers;
@property(nonatomic) unsigned int numTargetControllers; // @synthesize numTargetControllers=_numTargetControllers;
@property(nonatomic) unsigned int numMediaSystems; // @synthesize numMediaSystems=_numMediaSystems;
@property(nonatomic) unsigned int numCameraAccessories; // @synthesize numCameraAccessories=_numCameraAccessories;
@property(nonatomic) unsigned int numAppleTVAccessories; // @synthesize numAppleTVAccessories=_numAppleTVAccessories;
@property(nonatomic) unsigned int numAppleAudioAccessories; // @synthesize numAppleAudioAccessories=_numAppleAudioAccessories;
@property(nonatomic) unsigned int numWholeHouseAudioAccessories; // @synthesize numWholeHouseAudioAccessories=_numWholeHouseAudioAccessories;
@property(nonatomic) unsigned int numAppleMediaAccessories; // @synthesize numAppleMediaAccessories=_numAppleMediaAccessories;
@property(nonatomic) unsigned int numHAPAccessories; // @synthesize numHAPAccessories=_numHAPAccessories;
@property(retain, nonatomic) NSMutableArray *eventTriggers; // @synthesize eventTriggers=_eventTriggers;
@property(nonatomic) unsigned int numCertifiedAccessories; // @synthesize numCertifiedAccessories=_numCertifiedAccessories;
@property(nonatomic) unsigned int numNotCertifiedAccessories; // @synthesize numNotCertifiedAccessories=_numNotCertifiedAccessories;
@property(nonatomic) unsigned int numBridgedAccessories; // @synthesize numBridgedAccessories=_numBridgedAccessories;
@property(nonatomic) BOOL isPrimaryResident; // @synthesize isPrimaryResident=_isPrimaryResident;
@property(nonatomic) BOOL isResidentAvailable; // @synthesize isResidentAvailable=_isResidentAvailable;
@property(nonatomic) unsigned int numZones; // @synthesize numZones=_numZones;
@property(nonatomic) unsigned int numRooms; // @synthesize numRooms=_numRooms;
@property(nonatomic) unsigned int numAccessoryServiceGroups; // @synthesize numAccessoryServiceGroups=_numAccessoryServiceGroups;
@property(nonatomic) unsigned int numTimerTriggers; // @synthesize numTimerTriggers=_numTimerTriggers;
@property(nonatomic) unsigned int numEventTriggers; // @synthesize numEventTriggers=_numEventTriggers;
@property(nonatomic) unsigned int numTriggers; // @synthesize numTriggers=_numTriggers;
@property(nonatomic) unsigned int numScenes; // @synthesize numScenes=_numScenes;
@property(nonatomic) unsigned int numAdmins; // @synthesize numAdmins=_numAdmins;
@property(nonatomic) unsigned int numUsers; // @synthesize numUsers=_numUsers;
@property(nonatomic) unsigned int numServices; // @synthesize numServices=_numServices;
@property(nonatomic) unsigned int numAccessories; // @synthesize numAccessories=_numAccessories;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)homeKitMultiUserSettingsAtIndex:(NSUInteger)arg1;
- (NSUInteger)homeKitMultiUserSettingsCount;
- (void)addHomeKitMultiUserSettings:(id)arg1;
- (void)clearHomeKitMultiUserSettings;
@property(nonatomic) BOOL hasNumShortcuts;
@property(nonatomic) BOOL hasNumAccessoriesNetworkProtectionUnprotected;
@property(nonatomic) BOOL hasNumAccessoriesNetworkProtectionHomeKitOnly;
@property(nonatomic) BOOL hasNumAccessoriesNetworkProtectionFullAccess;
@property(nonatomic) BOOL hasNumAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;
@property(nonatomic) BOOL hasNumAccessoriesNetworkProtectionAutoProtectedMainLAN;
@property(nonatomic) BOOL hasNumAccessoriesNetworkProtectionAutoFullAccess;
@property(nonatomic) BOOL hasNumAccessoriesWiFiPPSKCredential;
- (int)StringAsNetworkProtectionStatus:(id)arg1;
- (id)networkProtectionStatusAsString:(int)arg1;
@property(nonatomic) BOOL hasNetworkProtectionStatus;
@property(nonatomic) int networkProtectionStatus; // @synthesize networkProtectionStatus=_networkProtectionStatus;
@property(nonatomic) BOOL hasNumTelevisionAccessories;
@property(nonatomic) BOOL hasPrimaryReportingDevice;
@property(nonatomic) BOOL hasNumResidentsEnabled;
@property(nonatomic) BOOL hasIsOwner;
@property(nonatomic) BOOL hasNumConfiguredScenes;
@property(nonatomic) BOOL hasNumCertifiedBridgedTargetControllers;
@property(nonatomic) BOOL hasNumBridgedTargetControllers;
@property(nonatomic) BOOL hasNumCertifiedTargetControllers;
@property(nonatomic) BOOL hasNumTargetControllers;
@property(nonatomic) BOOL hasNumMediaSystems;
@property(nonatomic) BOOL hasNumCameraAccessories;
@property(nonatomic) BOOL hasNumAppleTVAccessories;
@property(nonatomic) BOOL hasNumAppleAudioAccessories;
@property(nonatomic) BOOL hasNumWholeHouseAudioAccessories;
@property(nonatomic) BOOL hasNumAppleMediaAccessories;
@property(nonatomic) BOOL hasNumHAPAccessories;
- (id)eventTriggersAtIndex:(NSUInteger)arg1;
- (NSUInteger)eventTriggersCount;
- (void)addEventTriggers:(id)arg1;
- (void)clearEventTriggers;
@property(nonatomic) BOOL hasNumCertifiedAccessories;
@property(nonatomic) BOOL hasNumNotCertifiedAccessories;
@property(nonatomic) BOOL hasNumBridgedAccessories;
@property(nonatomic) BOOL hasIsPrimaryResident;
@property(nonatomic) BOOL hasIsResidentAvailable;
@property(nonatomic) BOOL hasNumZones;
@property(nonatomic) BOOL hasNumRooms;
@property(nonatomic) BOOL hasNumAccessoryServiceGroups;
@property(nonatomic) BOOL hasNumTimerTriggers;
@property(nonatomic) BOOL hasNumEventTriggers;
@property(nonatomic) BOOL hasNumTriggers;
@property(nonatomic) BOOL hasNumScenes;
@property(nonatomic) BOOL hasNumAdmins;
@property(nonatomic) BOOL hasNumUsers;
@property(nonatomic) BOOL hasNumServices;
@property(nonatomic) BOOL hasNumAccessories;

@end

