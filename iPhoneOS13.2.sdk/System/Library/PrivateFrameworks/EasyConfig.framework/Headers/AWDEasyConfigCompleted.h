//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface AWDEasyConfigCompleted : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    unsigned int _channelOfDestinationAP;
    unsigned int _channelOfSWAP;
    NSString *_eaBundleSeedID;
    NSString *_eaFirmwareRevision;
    NSString *_eaHardwareRevision;
    NSString *_eaManufacturerName;
    NSString *_eaModelName;
    NSMutableArray *_eaProtocolStrings;
    int _easyConfigStoppedReasonError;
    unsigned int _enterSetupCodeMs;
    int _rssiOfDestinationAP;
    int _rssiOfSWAP;
    float _secondsToApplyConfig;
    float _secondsToCompleteFullConfig;
    float _secondsToCompleteMFiSAPAuth;
    float _secondsToCompletePostConfigCheck;
    float _secondsToFindPostConfigDevice;
    float _secondsToFindPreConfigDevice;
    float _secondsToGetLinkUpOnDestination;
    float _secondsToGetLinkUpOnSWAP;
    unsigned int _snrOfDestinationAP;
    unsigned int _snrOfSWAP;
    int _wifiJoinDestinationAPError;
    int _wifiJoinSWAPError;
    BOOL _adminPasswordSet;
    BOOL _destinationNetworkPSKInKeychain;
    BOOL _destinationNetworkRecommendationUsed;
    BOOL _hitJoiningDestinationAPTimeout;
    BOOL _hitJoiningTargetSWAPTimeout;
    BOOL _pauseAfterApply;
    BOOL _playPasswordSet;
    BOOL _userChangedFriendlyName;
   struct {
        unsigned int timestamp:1;
        unsigned int channelOfDestinationAP:1;
        unsigned int channelOfSWAP:1;
        unsigned int easyConfigStoppedReasonError:1;
        unsigned int enterSetupCodeMs:1;
        unsigned int rssiOfDestinationAP:1;
        unsigned int rssiOfSWAP:1;
        unsigned int secondsToApplyConfig:1;
        unsigned int secondsToCompleteFullConfig:1;
        unsigned int secondsToCompleteMFiSAPAuth:1;
        unsigned int secondsToCompletePostConfigCheck:1;
        unsigned int secondsToFindPostConfigDevice:1;
        unsigned int secondsToFindPreConfigDevice:1;
        unsigned int secondsToGetLinkUpOnDestination:1;
        unsigned int secondsToGetLinkUpOnSWAP:1;
        unsigned int snrOfDestinationAP:1;
        unsigned int snrOfSWAP:1;
        unsigned int wifiJoinDestinationAPError:1;
        unsigned int wifiJoinSWAPError:1;
        unsigned int adminPasswordSet:1;
        unsigned int destinationNetworkPSKInKeychain:1;
        unsigned int destinationNetworkRecommendationUsed:1;
        unsigned int hitJoiningDestinationAPTimeout:1;
        unsigned int hitJoiningTargetSWAPTimeout:1;
        unsigned int pauseAfterApply:1;
        unsigned int playPasswordSet:1;
        unsigned int userChangedFriendlyName:1;
    } _has;
}

+ (Class)eaProtocolStringsType;
@property(nonatomic) unsigned int enterSetupCodeMs; // @synthesize enterSetupCodeMs=_enterSetupCodeMs;
@property(retain, nonatomic) NSString *eaHardwareRevision; // @synthesize eaHardwareRevision=_eaHardwareRevision;
@property(retain, nonatomic) NSString *eaFirmwareRevision; // @synthesize eaFirmwareRevision=_eaFirmwareRevision;
@property(retain, nonatomic) NSString *eaModelName; // @synthesize eaModelName=_eaModelName;
@property(retain, nonatomic) NSString *eaManufacturerName; // @synthesize eaManufacturerName=_eaManufacturerName;
@property(retain, nonatomic) NSMutableArray *eaProtocolStrings; // @synthesize eaProtocolStrings=_eaProtocolStrings;
@property(retain, nonatomic) NSString *eaBundleSeedID; // @synthesize eaBundleSeedID=_eaBundleSeedID;
@property(nonatomic) int easyConfigStoppedReasonError; // @synthesize easyConfigStoppedReasonError=_easyConfigStoppedReasonError;
@property(nonatomic) BOOL pauseAfterApply; // @synthesize pauseAfterApply=_pauseAfterApply;
@property(nonatomic) float secondsToCompletePostConfigCheck; // @synthesize secondsToCompletePostConfigCheck=_secondsToCompletePostConfigCheck;
@property(nonatomic) float secondsToFindPostConfigDevice; // @synthesize secondsToFindPostConfigDevice=_secondsToFindPostConfigDevice;
@property(nonatomic) float secondsToApplyConfig; // @synthesize secondsToApplyConfig=_secondsToApplyConfig;
@property(nonatomic) float secondsToCompleteMFiSAPAuth; // @synthesize secondsToCompleteMFiSAPAuth=_secondsToCompleteMFiSAPAuth;
@property(nonatomic) float secondsToFindPreConfigDevice; // @synthesize secondsToFindPreConfigDevice=_secondsToFindPreConfigDevice;
@property(nonatomic) unsigned int channelOfDestinationAP; // @synthesize channelOfDestinationAP=_channelOfDestinationAP;
@property(nonatomic) unsigned int snrOfDestinationAP; // @synthesize snrOfDestinationAP=_snrOfDestinationAP;
@property(nonatomic) int rssiOfDestinationAP; // @synthesize rssiOfDestinationAP=_rssiOfDestinationAP;
@property(nonatomic) BOOL hitJoiningDestinationAPTimeout; // @synthesize hitJoiningDestinationAPTimeout=_hitJoiningDestinationAPTimeout;
@property(nonatomic) BOOL destinationNetworkPSKInKeychain; // @synthesize destinationNetworkPSKInKeychain=_destinationNetworkPSKInKeychain;
@property(nonatomic) int wifiJoinDestinationAPError; // @synthesize wifiJoinDestinationAPError=_wifiJoinDestinationAPError;
@property(nonatomic) float secondsToGetLinkUpOnDestination; // @synthesize secondsToGetLinkUpOnDestination=_secondsToGetLinkUpOnDestination;
@property(nonatomic) unsigned int channelOfSWAP; // @synthesize channelOfSWAP=_channelOfSWAP;
@property(nonatomic) unsigned int snrOfSWAP; // @synthesize snrOfSWAP=_snrOfSWAP;
@property(nonatomic) int rssiOfSWAP; // @synthesize rssiOfSWAP=_rssiOfSWAP;
@property(nonatomic) BOOL hitJoiningTargetSWAPTimeout; // @synthesize hitJoiningTargetSWAPTimeout=_hitJoiningTargetSWAPTimeout;
@property(nonatomic) int wifiJoinSWAPError; // @synthesize wifiJoinSWAPError=_wifiJoinSWAPError;
@property(nonatomic) float secondsToGetLinkUpOnSWAP; // @synthesize secondsToGetLinkUpOnSWAP=_secondsToGetLinkUpOnSWAP;
@property(nonatomic) float secondsToCompleteFullConfig; // @synthesize secondsToCompleteFullConfig=_secondsToCompleteFullConfig;
@property(nonatomic) BOOL destinationNetworkRecommendationUsed; // @synthesize destinationNetworkRecommendationUsed=_destinationNetworkRecommendationUsed;
@property(nonatomic) BOOL adminPasswordSet; // @synthesize adminPasswordSet=_adminPasswordSet;
@property(nonatomic) BOOL playPasswordSet; // @synthesize playPasswordSet=_playPasswordSet;
@property(nonatomic) BOOL userChangedFriendlyName; // @synthesize userChangedFriendlyName=_userChangedFriendlyName;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) BOOL hasEnterSetupCodeMs;
@property(readonly, nonatomic) BOOL hasEaHardwareRevision;
@property(readonly, nonatomic) BOOL hasEaFirmwareRevision;
@property(readonly, nonatomic) BOOL hasEaModelName;
@property(readonly, nonatomic) BOOL hasEaManufacturerName;
- (id)eaProtocolStringsAtIndex:(NSUInteger)arg1;
- (NSUInteger)eaProtocolStringsCount;
- (void)addEaProtocolStrings:(id)arg1;
- (void)clearEaProtocolStrings;
@property(readonly, nonatomic) BOOL hasEaBundleSeedID;
@property(nonatomic) BOOL hasEasyConfigStoppedReasonError;
@property(nonatomic) BOOL hasPauseAfterApply;
@property(nonatomic) BOOL hasSecondsToCompletePostConfigCheck;
@property(nonatomic) BOOL hasSecondsToFindPostConfigDevice;
@property(nonatomic) BOOL hasSecondsToApplyConfig;
@property(nonatomic) BOOL hasSecondsToCompleteMFiSAPAuth;
@property(nonatomic) BOOL hasSecondsToFindPreConfigDevice;
@property(nonatomic) BOOL hasChannelOfDestinationAP;
@property(nonatomic) BOOL hasSnrOfDestinationAP;
@property(nonatomic) BOOL hasRssiOfDestinationAP;
@property(nonatomic) BOOL hasHitJoiningDestinationAPTimeout;
@property(nonatomic) BOOL hasDestinationNetworkPSKInKeychain;
@property(nonatomic) BOOL hasWifiJoinDestinationAPError;
@property(nonatomic) BOOL hasSecondsToGetLinkUpOnDestination;
@property(nonatomic) BOOL hasChannelOfSWAP;
@property(nonatomic) BOOL hasSnrOfSWAP;
@property(nonatomic) BOOL hasRssiOfSWAP;
@property(nonatomic) BOOL hasHitJoiningTargetSWAPTimeout;
@property(nonatomic) BOOL hasWifiJoinSWAPError;
@property(nonatomic) BOOL hasSecondsToGetLinkUpOnSWAP;
@property(nonatomic) BOOL hasSecondsToCompleteFullConfig;
@property(nonatomic) BOOL hasDestinationNetworkRecommendationUsed;
@property(nonatomic) BOOL hasAdminPasswordSet;
@property(nonatomic) BOOL hasPlayPasswordSet;
@property(nonatomic) BOOL hasUserChangedFriendlyName;
@property(nonatomic) BOOL hasTimestamp;

@end

