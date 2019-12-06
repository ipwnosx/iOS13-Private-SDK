//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLocation, NSMutableArray, NSString, PBDataReader;

@interface GEOWiFiConnectionQuality : PBCodable <NSCopying>
{
    PBDataReader *_reader;
//     CDStruct_95bda58d _authTraits;
//     CDStruct_95bda58d _traits;
    NSUInteger _bytesInActive;
    NSUInteger _bytesInTotal;
    NSUInteger _bytesOutActive;
    NSUInteger _bytesOutTotal;
    NSUInteger _dataStalls;
    NSMutableArray *_essMembers;
    NSUInteger _failedConnections;
    NSUInteger _faultyStay;
    NSMutableArray *_feedbacks;
    NSString *_identifier;
    GEOLocation *_location;
    NSUInteger _lowLQMStay;
    NSUInteger _lowqStay;
    NSUInteger _lqmTranCount;
    NSMutableArray *_nearbyBSSs;
    NSUInteger _overAllStay;
    NSUInteger _packetsIn;
    NSUInteger _packetsOut;
    NSUInteger _reTxBytes;
    NSUInteger _receivedDupes;
    NSMutableArray *_roamStates;
    NSUInteger _rxOutOfOrderBytes;
    NSMutableArray *_speedTests;
    NSUInteger _successfulConnections;
    NSUInteger _timeOfDay;
    NSUInteger _timestamp;
    NSString *_uniqueID;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _apMode;
    int _associationLength;
    int _associationReason;
    unsigned int _band;
    int _captiveDetermination;
    int _cca;
    unsigned int _channelWidth;
    unsigned int _channel;
    int _disassociationReason;
    int _networkOrigin;
    int _networkType;
    unsigned int _phyMode;
    float _roundTripTimeAvgActive;
    float _roundTripTimeAvg;
    float _roundTripTimeMinActive;
    float _roundTripTimeMin;
    float _roundTripTimeVarActive;
    float _roundTripTimeVar;
    int _rssi;
    int _snr;
    unsigned int _sslConnectionCount;
    unsigned int _sslErrorCount;
    float _topDLRate;
    unsigned int _wasCaptiveFlag;
    BOOL _hotspot20;
    BOOL _isEdgeBSS;
    BOOL _isKnownGood;
    BOOL _lowInternetDL;
    BOOL _lowInternetUL;
    struct {
        unsigned int has_bytesInActive:1;
        unsigned int has_bytesInTotal:1;
        unsigned int has_bytesOutActive:1;
        unsigned int has_bytesOutTotal:1;
        unsigned int has_dataStalls:1;
        unsigned int has_failedConnections:1;
        unsigned int has_faultyStay:1;
        unsigned int has_lowLQMStay:1;
        unsigned int has_lowqStay:1;
        unsigned int has_lqmTranCount:1;
        unsigned int has_overAllStay:1;
        unsigned int has_packetsIn:1;
        unsigned int has_packetsOut:1;
        unsigned int has_reTxBytes:1;
        unsigned int has_receivedDupes:1;
        unsigned int has_rxOutOfOrderBytes:1;
        unsigned int has_successfulConnections:1;
        unsigned int has_timeOfDay:1;
        unsigned int has_timestamp:1;
        unsigned int has_apMode:1;
        unsigned int has_associationLength:1;
        unsigned int has_associationReason:1;
        unsigned int has_band:1;
        unsigned int has_captiveDetermination:1;
        unsigned int has_cca:1;
        unsigned int has_channelWidth:1;
        unsigned int has_channel:1;
        unsigned int has_disassociationReason:1;
        unsigned int has_networkOrigin:1;
        unsigned int has_networkType:1;
        unsigned int has_phyMode:1;
        unsigned int has_roundTripTimeAvgActive:1;
        unsigned int has_roundTripTimeAvg:1;
        unsigned int has_roundTripTimeMinActive:1;
        unsigned int has_roundTripTimeMin:1;
        unsigned int has_roundTripTimeVarActive:1;
        unsigned int has_roundTripTimeVar:1;
        unsigned int has_rssi:1;
        unsigned int has_snr:1;
        unsigned int has_sslConnectionCount:1;
        unsigned int has_sslErrorCount:1;
        unsigned int has_topDLRate:1;
        unsigned int has_wasCaptiveFlag:1;
        unsigned int has_hotspot20:1;
        unsigned int has_isEdgeBSS:1;
        unsigned int has_isKnownGood:1;
        unsigned int has_lowInternetDL:1;
        unsigned int has_lowInternetUL:1;
        unsigned int read_authTraits:1;
        unsigned int read_traits:1;
        unsigned int read_essMembers:1;
        unsigned int read_feedbacks:1;
        unsigned int read_identifier:1;
        unsigned int read_location:1;
        unsigned int read_nearbyBSSs:1;
        unsigned int read_roamStates:1;
        unsigned int read_speedTests:1;
        unsigned int read_uniqueID:1;
        unsigned int wrote_authTraits:1;
        unsigned int wrote_traits:1;
        unsigned int wrote_bytesInActive:1;
        unsigned int wrote_bytesInTotal:1;
        unsigned int wrote_bytesOutActive:1;
        unsigned int wrote_bytesOutTotal:1;
        unsigned int wrote_dataStalls:1;
        unsigned int wrote_essMembers:1;
        unsigned int wrote_failedConnections:1;
        unsigned int wrote_faultyStay:1;
        unsigned int wrote_feedbacks:1;
        unsigned int wrote_identifier:1;
        unsigned int wrote_location:1;
        unsigned int wrote_lowLQMStay:1;
        unsigned int wrote_lowqStay:1;
        unsigned int wrote_lqmTranCount:1;
        unsigned int wrote_nearbyBSSs:1;
        unsigned int wrote_overAllStay:1;
        unsigned int wrote_packetsIn:1;
        unsigned int wrote_packetsOut:1;
        unsigned int wrote_reTxBytes:1;
        unsigned int wrote_receivedDupes:1;
        unsigned int wrote_roamStates:1;
        unsigned int wrote_rxOutOfOrderBytes:1;
        unsigned int wrote_speedTests:1;
        unsigned int wrote_successfulConnections:1;
        unsigned int wrote_timeOfDay:1;
        unsigned int wrote_timestamp:1;
        unsigned int wrote_uniqueID:1;
        unsigned int wrote_apMode:1;
        unsigned int wrote_associationLength:1;
        unsigned int wrote_associationReason:1;
        unsigned int wrote_band:1;
        unsigned int wrote_captiveDetermination:1;
        unsigned int wrote_cca:1;
        unsigned int wrote_channelWidth:1;
        unsigned int wrote_channel:1;
        unsigned int wrote_disassociationReason:1;
        unsigned int wrote_networkOrigin:1;
        unsigned int wrote_networkType:1;
        unsigned int wrote_phyMode:1;
        unsigned int wrote_roundTripTimeAvgActive:1;
        unsigned int wrote_roundTripTimeAvg:1;
        unsigned int wrote_roundTripTimeMinActive:1;
        unsigned int wrote_roundTripTimeMin:1;
        unsigned int wrote_roundTripTimeVarActive:1;
        unsigned int wrote_roundTripTimeVar:1;
        unsigned int wrote_rssi:1;
        unsigned int wrote_snr:1;
        unsigned int wrote_sslConnectionCount:1;
        unsigned int wrote_sslErrorCount:1;
        unsigned int wrote_topDLRate:1;
        unsigned int wrote_wasCaptiveFlag:1;
        unsigned int wrote_hotspot20:1;
        unsigned int wrote_isEdgeBSS:1;
        unsigned int wrote_isKnownGood:1;
        unsigned int wrote_lowInternetDL:1;
        unsigned int wrote_lowInternetUL:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)speedTestType;
+ (Class)roamStatesType;
+ (Class)feedbackType;
+ (Class)nearbyBSSType;
+ (Class)essMembersType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsApMode:(id)arg1;
- (id)apModeAsString:(int)arg1;
@property(nonatomic) BOOL hasApMode;
@property(nonatomic) int apMode;
@property(nonatomic) BOOL hasSslErrorCount;
@property(nonatomic) unsigned int sslErrorCount;
@property(nonatomic) BOOL hasSslConnectionCount;
@property(nonatomic) unsigned int sslConnectionCount;
- (id)speedTestAtIndex:(NSUInteger)arg1;
- (NSUInteger)speedTestsCount;
- (void)_addNoFlagsSpeedTest:(id)arg1;
- (void)addSpeedTest:(id)arg1;
- (void)clearSpeedTests;
@property(retain, nonatomic) NSMutableArray *speedTests;
- (void)_readSpeedTests;
- (id)roamStatesAtIndex:(NSUInteger)arg1;
- (NSUInteger)roamStatesCount;
- (void)_addNoFlagsRoamStates:(id)arg1;
- (void)addRoamStates:(id)arg1;
- (void)clearRoamStates;
@property(retain, nonatomic) NSMutableArray *roamStates;
- (void)_readRoamStates;
@property(retain, nonatomic) NSString *identifier;
@property(readonly, nonatomic) BOOL hasIdentifier;
- (void)_readIdentifier;
- (id)feedbackAtIndex:(NSUInteger)arg1;
- (NSUInteger)feedbacksCount;
- (void)_addNoFlagsFeedback:(id)arg1;
- (void)addFeedback:(id)arg1;
- (void)clearFeedbacks;
@property(retain, nonatomic) NSMutableArray *feedbacks;
- (void)_readFeedbacks;
- (id)nearbyBSSAtIndex:(NSUInteger)arg1;
- (NSUInteger)nearbyBSSsCount;
- (void)_addNoFlagsNearbyBSS:(id)arg1;
- (void)addNearbyBSS:(id)arg1;
- (void)clearNearbyBSSs;
@property(retain, nonatomic) NSMutableArray *nearbyBSSs;
- (void)_readNearbyBSSs;
- (id)essMembersAtIndex:(NSUInteger)arg1;
- (NSUInteger)essMembersCount;
- (void)_addNoFlagsEssMembers:(id)arg1;
- (void)addEssMembers:(id)arg1;
- (void)clearEssMembers;
@property(retain, nonatomic) NSMutableArray *essMembers;
- (void)_readEssMembers;
- (int)StringAsDisassociationReason:(id)arg1;
- (id)disassociationReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasDisassociationReason;
@property(nonatomic) int disassociationReason;
- (int)StringAsAssociationReason:(id)arg1;
- (id)associationReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasAssociationReason;
@property(nonatomic) int associationReason;
@property(nonatomic) BOOL hasIsEdgeBSS;
@property(nonatomic) BOOL isEdgeBSS;
@property(nonatomic) BOOL hasIsKnownGood;
@property(nonatomic) BOOL isKnownGood;
@property(nonatomic) BOOL hasLowInternetDL;
@property(nonatomic) BOOL lowInternetDL;
@property(nonatomic) BOOL hasLowInternetUL;
@property(nonatomic) BOOL lowInternetUL;
@property(nonatomic) BOOL hasTopDLRate;
@property(nonatomic) float topDLRate;
- (int)StringAsNetworkOrigin:(id)arg1;
- (id)networkOriginAsString:(int)arg1;
@property(nonatomic) BOOL hasNetworkOrigin;
@property(nonatomic) int networkOrigin;
- (int)StringAsAuthTraits:(id)arg1;
- (id)authTraitsAsString:(int)arg1;
- (void)setAuthTraits:(int )arg1 count:(NSUInteger)arg2;
- (int)authTraitsAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsAuthTraits:(int)arg1;
- (void)addAuthTraits:(int)arg1;
- (void)clearAuthTraits;
@property(readonly, nonatomic) int authTraits;
@property(readonly, nonatomic) NSUInteger authTraitsCount;
- (void)_readAuthTraits;
- (int)StringAsAssociationLength:(id)arg1;
- (id)associationLengthAsString:(int)arg1;
@property(nonatomic) BOOL hasAssociationLength;
@property(nonatomic) int associationLength;
- (int)StringAsCaptiveDetermination:(id)arg1;
- (id)captiveDeterminationAsString:(int)arg1;
@property(nonatomic) BOOL hasCaptiveDetermination;
@property(nonatomic) int captiveDetermination;
- (int)StringAsTraits:(id)arg1;
- (id)traitsAsString:(int)arg1;
- (void)setTraits:(int )arg1 count:(NSUInteger)arg2;
- (int)traitsAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsTraits:(int)arg1;
- (void)addTraits:(int)arg1;
- (void)clearTraits;
@property(readonly, nonatomic) int traits;
@property(readonly, nonatomic) NSUInteger traitsCount;
- (void)_readTraits;
- (int)StringAsNetworkType:(id)arg1;
- (id)networkTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasNetworkType;
@property(nonatomic) int networkType;
@property(nonatomic) BOOL hasWasCaptiveFlag;
@property(nonatomic) unsigned int wasCaptiveFlag;
@property(retain, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) BOOL hasLocation;
- (void)_readLocation;
@property(nonatomic) BOOL hasTimeOfDay;
@property(nonatomic) NSUInteger timeOfDay;
@property(nonatomic) BOOL hasPhyMode;
@property(nonatomic) unsigned int phyMode;
@property(nonatomic) BOOL hasCca;
@property(nonatomic) int cca;
@property(nonatomic) BOOL hasSnr;
@property(nonatomic) int snr;
@property(nonatomic) BOOL hasRssi;
@property(nonatomic) int rssi;
@property(nonatomic) BOOL hasChannelWidth;
@property(nonatomic) unsigned int channelWidth;
@property(nonatomic) BOOL hasChannel;
@property(nonatomic) unsigned int channel;
@property(nonatomic) BOOL hasBand;
@property(nonatomic) unsigned int band;
@property(nonatomic) BOOL hasHotspot20;
@property(nonatomic) BOOL hotspot20;
@property(nonatomic) BOOL hasRoundTripTimeVarActive;
@property(nonatomic) float roundTripTimeVarActive;
@property(nonatomic) BOOL hasRoundTripTimeAvgActive;
@property(nonatomic) float roundTripTimeAvgActive;
@property(nonatomic) BOOL hasRoundTripTimeMinActive;
@property(nonatomic) float roundTripTimeMinActive;
@property(nonatomic) BOOL hasRoundTripTimeVar;
@property(nonatomic) float roundTripTimeVar;
@property(nonatomic) BOOL hasRoundTripTimeAvg;
@property(nonatomic) float roundTripTimeAvg;
@property(nonatomic) BOOL hasRoundTripTimeMin;
@property(nonatomic) float roundTripTimeMin;
@property(nonatomic) BOOL hasRxOutOfOrderBytes;
@property(nonatomic) NSUInteger rxOutOfOrderBytes;
@property(nonatomic) BOOL hasReceivedDupes;
@property(nonatomic) NSUInteger receivedDupes;
@property(nonatomic) BOOL hasDataStalls;
@property(nonatomic) NSUInteger dataStalls;
@property(nonatomic) BOOL hasReTxBytes;
@property(nonatomic) NSUInteger reTxBytes;
@property(nonatomic) BOOL hasBytesOutActive;
@property(nonatomic) NSUInteger bytesOutActive;
@property(nonatomic) BOOL hasBytesInActive;
@property(nonatomic) NSUInteger bytesInActive;
@property(nonatomic) BOOL hasBytesOutTotal;
@property(nonatomic) NSUInteger bytesOutTotal;
@property(nonatomic) BOOL hasBytesInTotal;
@property(nonatomic) NSUInteger bytesInTotal;
@property(nonatomic) BOOL hasPacketsOut;
@property(nonatomic) NSUInteger packetsOut;
@property(nonatomic) BOOL hasPacketsIn;
@property(nonatomic) NSUInteger packetsIn;
@property(nonatomic) BOOL hasFailedConnections;
@property(nonatomic) NSUInteger failedConnections;
@property(nonatomic) BOOL hasSuccessfulConnections;
@property(nonatomic) NSUInteger successfulConnections;
@property(nonatomic) BOOL hasLqmTranCount;
@property(nonatomic) NSUInteger lqmTranCount;
@property(nonatomic) BOOL hasLowqStay;
@property(nonatomic) NSUInteger lowqStay;
@property(nonatomic) BOOL hasLowLQMStay;
@property(nonatomic) NSUInteger lowLQMStay;
@property(nonatomic) BOOL hasFaultyStay;
@property(nonatomic) NSUInteger faultyStay;
@property(nonatomic) BOOL hasOverAllStay;
@property(nonatomic) NSUInteger overAllStay;
@property(retain, nonatomic) NSString *uniqueID;
@property(readonly, nonatomic) BOOL hasUniqueID;
- (void)_readUniqueID;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) NSUInteger timestamp;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

