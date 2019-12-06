//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface ADUserTargetingProperties : PBCodable <NSCopying>
{
//     CDStruct_95bda58d _accountStates;
//     CDStruct_95bda58d _accountTypes;
//     CDStruct_95bda58d _deviceModes;
    double _clientClockTime;
    NSString *_administrativeArea;
    int _advertisingIdentifierMonthResetCount;
    NSString *_algoId;
    NSString *_appID;
    NSString *_appVersion;
    int _appsRank;
    NSString *_carrierMCC;
    NSString *_carrierMNC;
    int _connectionType;
    NSString *_currentCarrierMCC;
    NSString *_currentCarrierMNC;
    NSString *_dPIDString;
    NSString *_deviceModel;
    NSString *_deviceRequestID;
    float _horizontalAccuracy;
    NSString *_iAdIDString;
    NSString *_iTunesStore;
    NSString *_isoCountryCode;
    float _latitude;
    NSString *_localeIdentifier;
    NSString *_locality;
    float _longitude;
    NSString *_osVersionAndBuild;
    NSString *_postalCode;
    int _runState;
    NSString *_storeFrontLanguageLocaleIdentifier;
    NSString *_subAdministrativeArea;
    NSMutableArray *_targetings;
    float _timezone;
    NSString *_toroIDString;
    NSMutableArray *_userKeyboards;
    BOOL _isOnInternationalDataRoaming;
    BOOL _limitAdTracking;
    struct {
        unsigned int clientClockTime:1;
        unsigned int advertisingIdentifierMonthResetCount:1;
        unsigned int appsRank:1;
        unsigned int connectionType:1;
        unsigned int horizontalAccuracy:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int runState:1;
        unsigned int timezone:1;
        unsigned int isOnInternationalDataRoaming:1;
        unsigned int limitAdTracking:1;
    } _has;
}

+ (Class)targetingType;
+ (Class)userKeyboardType;
@property(retain, nonatomic) NSString *storeFrontLanguageLocaleIdentifier; // @synthesize storeFrontLanguageLocaleIdentifier=_storeFrontLanguageLocaleIdentifier;
@property(nonatomic) BOOL isOnInternationalDataRoaming; // @synthesize isOnInternationalDataRoaming=_isOnInternationalDataRoaming;
@property(retain, nonatomic) NSString *currentCarrierMCC; // @synthesize currentCarrierMCC=_currentCarrierMCC;
@property(retain, nonatomic) NSString *currentCarrierMNC; // @synthesize currentCarrierMNC=_currentCarrierMNC;
@property(retain, nonatomic) NSString *carrierMCC; // @synthesize carrierMCC=_carrierMCC;
@property(retain, nonatomic) NSString *carrierMNC; // @synthesize carrierMNC=_carrierMNC;
@property(retain, nonatomic) NSString *deviceRequestID; // @synthesize deviceRequestID=_deviceRequestID;
@property(nonatomic) int advertisingIdentifierMonthResetCount; // @synthesize advertisingIdentifierMonthResetCount=_advertisingIdentifierMonthResetCount;
@property(retain, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(retain, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(retain, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(retain, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(retain, nonatomic) NSString *dPIDString; // @synthesize dPIDString=_dPIDString;
@property(retain, nonatomic) NSString *algoId; // @synthesize algoId=_algoId;
@property(retain, nonatomic) NSString *iAdIDString; // @synthesize iAdIDString=_iAdIDString;
@property(retain, nonatomic) NSString *toroIDString; // @synthesize toroIDString=_toroIDString;
@property(nonatomic) BOOL limitAdTracking; // @synthesize limitAdTracking=_limitAdTracking;
@property(retain, nonatomic) NSMutableArray *targetings; // @synthesize targetings=_targetings;
@property(retain, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(nonatomic) float horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(nonatomic) int appsRank; // @synthesize appsRank=_appsRank;
@property(retain, nonatomic) NSMutableArray *userKeyboards; // @synthesize userKeyboards=_userKeyboards;
@property(retain, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(retain, nonatomic) NSString *iTunesStore; // @synthesize iTunesStore=_iTunesStore;
@property(retain, nonatomic) NSString *osVersionAndBuild; // @synthesize osVersionAndBuild=_osVersionAndBuild;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) float timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) double clientClockTime; // @synthesize clientClockTime=_clientClockTime;
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
- (int)StringAsAccountStates:(id)arg1;
- (id)accountStatesAsString:(int)arg1;
- (void)setAccountStates:(int )arg1 count:(NSUInteger)arg2;
- (int)accountStateAtIndex:(NSUInteger)arg1;
- (void)addAccountState:(int)arg1;
- (void)clearAccountStates;
@property(readonly, nonatomic) int accountStates;
@property(readonly, nonatomic) NSUInteger accountStatesCount;
@property(readonly, nonatomic) BOOL hasStoreFrontLanguageLocaleIdentifier;
- (int)StringAsConnectionType:(id)arg1;
- (id)connectionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasConnectionType;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) BOOL hasIsOnInternationalDataRoaming;
@property(readonly, nonatomic) BOOL hasCurrentCarrierMCC;
@property(readonly, nonatomic) BOOL hasCurrentCarrierMNC;
@property(readonly, nonatomic) BOOL hasCarrierMCC;
@property(readonly, nonatomic) BOOL hasCarrierMNC;
@property(readonly, nonatomic) BOOL hasDeviceRequestID;
@property(nonatomic) BOOL hasAdvertisingIdentifierMonthResetCount;
@property(readonly, nonatomic) BOOL hasSubAdministrativeArea;
@property(readonly, nonatomic) BOOL hasLocality;
@property(readonly, nonatomic) BOOL hasAdministrativeArea;
@property(readonly, nonatomic) BOOL hasPostalCode;
@property(readonly, nonatomic) BOOL hasDPIDString;
@property(readonly, nonatomic) BOOL hasAlgoId;
@property(readonly, nonatomic) BOOL hasIAdIDString;
@property(readonly, nonatomic) BOOL hasToroIDString;
@property(nonatomic) BOOL hasLimitAdTracking;
- (id)targetingAtIndex:(NSUInteger)arg1;
- (NSUInteger)targetingsCount;
- (void)addTargeting:(id)arg1;
- (void)clearTargetings;
@property(readonly, nonatomic) BOOL hasIsoCountryCode;
@property(nonatomic) BOOL hasHorizontalAccuracy;
@property(nonatomic) BOOL hasLongitude;
@property(nonatomic) BOOL hasLatitude;
- (int)StringAsAccountTypes:(id)arg1;
- (id)accountTypesAsString:(int)arg1;
- (void)setAccountTypes:(int )arg1 count:(NSUInteger)arg2;
- (int)accountTypeAtIndex:(NSUInteger)arg1;
- (void)addAccountType:(int)arg1;
- (void)clearAccountTypes;
@property(readonly, nonatomic) int accountTypes;
@property(readonly, nonatomic) NSUInteger accountTypesCount;
- (int)StringAsDeviceModes:(id)arg1;
- (id)deviceModesAsString:(int)arg1;
- (void)setDeviceModes:(int )arg1 count:(NSUInteger)arg2;
- (int)deviceModeAtIndex:(NSUInteger)arg1;
- (void)addDeviceMode:(int)arg1;
- (void)clearDeviceModes;
@property(readonly, nonatomic) int deviceModes;
@property(readonly, nonatomic) NSUInteger deviceModesCount;
@property(nonatomic) BOOL hasAppsRank;
- (id)userKeyboardAtIndex:(NSUInteger)arg1;
- (NSUInteger)userKeyboardsCount;
- (void)addUserKeyboard:(id)arg1;
- (void)clearUserKeyboards;
@property(readonly, nonatomic) BOOL hasLocaleIdentifier;
@property(readonly, nonatomic) BOOL hasITunesStore;
@property(readonly, nonatomic) BOOL hasOsVersionAndBuild;
@property(readonly, nonatomic) BOOL hasAppVersion;
- (int)StringAsRunState:(id)arg1;
- (id)runStateAsString:(int)arg1;
@property(nonatomic) BOOL hasRunState;
@property(nonatomic) int runState; // @synthesize runState=_runState;
@property(nonatomic) BOOL hasTimezone;
@property(readonly, nonatomic) BOOL hasDeviceModel;
@property(readonly, nonatomic) BOOL hasAppID;
@property(nonatomic) BOOL hasClientClockTime;
- (void)dealloc;

@end

