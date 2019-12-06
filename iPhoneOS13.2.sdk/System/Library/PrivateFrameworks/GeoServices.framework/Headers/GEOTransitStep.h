//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOCompanionCompatibility-Protocol.h>

@class GEOInstructionSet, GEOLatLng, GEOTransitArrivalInfo, GEOTransitBaseFare, GEOTransitScheduleInfo, GEOTransitSurcharge, GEOTransitVehiclePositionInfo, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;
@protocol GEOTransitVehicleEntries;

@interface GEOTransitStep : PBCodable <GEOCompanionCompatibility, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
//     CDStruct_9f2792e4 _routeDetailsPrimaryArtworkIndexs;
//     CDStruct_9f2792e4 _steppingArtworkIndexs;
    GEOTransitArrivalInfo *_arrivalInfo;
    GEOTransitBaseFare *_baseFare;
    NSMutableArray *_enterExitInfos;
    GEOInstructionSet *_instructions;
    GEOLatLng *_location;
    GEOTransitScheduleInfo *_scheduleInfo;
    GEOTransitSurcharge *_surcharge;
    NSMutableArray *_transferInfos;
    NSData *_updateIdentifier;
    NSMutableArray *_vehicleInfos;
    GEOTransitVehiclePositionInfo *_vehiclePositionInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    unsigned int _accessPointZilchIndex;
    unsigned int _defaultVehicleInfoIndex;
    unsigned int _departureFrequency;
    unsigned int _distanceInMeters;
    unsigned int _endingStopIndex;
    unsigned int _listTransitIncidentMessageIndex;
    int _maneuverType;
    unsigned int _routeDetailsSecondaryArtworkIndex;
    int _significanceForEndNode;
    unsigned int _startingStopIndex;
    unsigned int _startingTime;
    unsigned int _steppingTransitIncidentMessageIndex;
    unsigned int _walkingIndex;
    unsigned int _zilchIndex;
    BOOL _prioritizeTilesPreloading;
    struct {
        unsigned int has_accessPointZilchIndex:1;
        unsigned int has_defaultVehicleInfoIndex:1;
        unsigned int has_departureFrequency:1;
        unsigned int has_distanceInMeters:1;
        unsigned int has_endingStopIndex:1;
        unsigned int has_listTransitIncidentMessageIndex:1;
        unsigned int has_maneuverType:1;
        unsigned int has_routeDetailsSecondaryArtworkIndex:1;
        unsigned int has_significanceForEndNode:1;
        unsigned int has_startingStopIndex:1;
        unsigned int has_startingTime:1;
        unsigned int has_steppingTransitIncidentMessageIndex:1;
        unsigned int has_walkingIndex:1;
        unsigned int has_zilchIndex:1;
        unsigned int has_prioritizeTilesPreloading:1;
        unsigned int read_unknownFields:1;
        unsigned int read_routeDetailsPrimaryArtworkIndexs:1;
        unsigned int read_steppingArtworkIndexs:1;
        unsigned int read_arrivalInfo:1;
        unsigned int read_baseFare:1;
        unsigned int read_enterExitInfos:1;
        unsigned int read_instructions:1;
        unsigned int read_location:1;
        unsigned int read_scheduleInfo:1;
        unsigned int read_surcharge:1;
        unsigned int read_transferInfos:1;
        unsigned int read_updateIdentifier:1;
        unsigned int read_vehicleInfos:1;
        unsigned int read_vehiclePositionInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_routeDetailsPrimaryArtworkIndexs:1;
        unsigned int wrote_steppingArtworkIndexs:1;
        unsigned int wrote_arrivalInfo:1;
        unsigned int wrote_baseFare:1;
        unsigned int wrote_enterExitInfos:1;
        unsigned int wrote_instructions:1;
        unsigned int wrote_location:1;
        unsigned int wrote_scheduleInfo:1;
        unsigned int wrote_surcharge:1;
        unsigned int wrote_transferInfos:1;
        unsigned int wrote_updateIdentifier:1;
        unsigned int wrote_vehicleInfos:1;
        unsigned int wrote_vehiclePositionInfo:1;
        unsigned int wrote_accessPointZilchIndex:1;
        unsigned int wrote_defaultVehicleInfoIndex:1;
        unsigned int wrote_departureFrequency:1;
        unsigned int wrote_distanceInMeters:1;
        unsigned int wrote_endingStopIndex:1;
        unsigned int wrote_listTransitIncidentMessageIndex:1;
        unsigned int wrote_maneuverType:1;
        unsigned int wrote_routeDetailsSecondaryArtworkIndex:1;
        unsigned int wrote_significanceForEndNode:1;
        unsigned int wrote_startingStopIndex:1;
        unsigned int wrote_startingTime:1;
        unsigned int wrote_steppingTransitIncidentMessageIndex:1;
        unsigned int wrote_walkingIndex:1;
        unsigned int wrote_zilchIndex:1;
        unsigned int wrote_prioritizeTilesPreloading:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)transferInfoType;
+ (Class)enterExitInfoType;
+ (Class)vehicleInfoType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOTransitScheduleInfo *scheduleInfo;
@property(readonly, nonatomic) BOOL hasScheduleInfo;
- (void)_readScheduleInfo;
@property(retain, nonatomic) GEOTransitVehiclePositionInfo *vehiclePositionInfo;
@property(readonly, nonatomic) BOOL hasVehiclePositionInfo;
- (void)_readVehiclePositionInfo;
@property(retain, nonatomic) NSData *updateIdentifier;
@property(readonly, nonatomic) BOOL hasUpdateIdentifier;
- (void)_readUpdateIdentifier;
@property(retain, nonatomic) GEOTransitSurcharge *surcharge;
@property(readonly, nonatomic) BOOL hasSurcharge;
- (void)_readSurcharge;
@property(retain, nonatomic) GEOTransitBaseFare *baseFare;
@property(readonly, nonatomic) BOOL hasBaseFare;
- (void)_readBaseFare;
@property(nonatomic) BOOL hasListTransitIncidentMessageIndex;
@property(nonatomic) unsigned int listTransitIncidentMessageIndex;
@property(nonatomic) BOOL hasSteppingTransitIncidentMessageIndex;
@property(nonatomic) unsigned int steppingTransitIncidentMessageIndex;
@property(nonatomic) BOOL hasDepartureFrequency;
@property(nonatomic) unsigned int departureFrequency;
@property(nonatomic) BOOL hasDefaultVehicleInfoIndex;
@property(nonatomic) unsigned int defaultVehicleInfoIndex;
@property(nonatomic) BOOL hasAccessPointZilchIndex;
@property(nonatomic) unsigned int accessPointZilchIndex;
@property(nonatomic) BOOL hasRouteDetailsSecondaryArtworkIndex;
@property(nonatomic) unsigned int routeDetailsSecondaryArtworkIndex;
- (void)setSteppingArtworkIndexs:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)steppingArtworkIndexAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsSteppingArtworkIndex:(unsigned int)arg1;
- (void)addSteppingArtworkIndex:(unsigned int)arg1;
- (void)clearSteppingArtworkIndexs;
@property(readonly, nonatomic) unsigned int steppingArtworkIndexs;
@property(readonly, nonatomic) NSUInteger steppingArtworkIndexsCount;
- (void)_readSteppingArtworkIndexs;
- (void)setRouteDetailsPrimaryArtworkIndexs:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)routeDetailsPrimaryArtworkIndexAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsRouteDetailsPrimaryArtworkIndex:(unsigned int)arg1;
- (void)addRouteDetailsPrimaryArtworkIndex:(unsigned int)arg1;
- (void)clearRouteDetailsPrimaryArtworkIndexs;
@property(readonly, nonatomic) unsigned int routeDetailsPrimaryArtworkIndexs;
@property(readonly, nonatomic) NSUInteger routeDetailsPrimaryArtworkIndexsCount;
- (void)_readRouteDetailsPrimaryArtworkIndexs;
@property(nonatomic) BOOL hasDistanceInMeters;
@property(nonatomic) unsigned int distanceInMeters;
@property(nonatomic) BOOL hasZilchIndex;
@property(nonatomic) unsigned int zilchIndex;
@property(retain, nonatomic) GEOInstructionSet *instructions;
@property(readonly, nonatomic) BOOL hasInstructions;
- (void)_readInstructions;
- (int)StringAsSignificanceForEndNode:(id)arg1;
- (id)significanceForEndNodeAsString:(int)arg1;
@property(nonatomic) BOOL hasSignificanceForEndNode;
@property(nonatomic) int significanceForEndNode;
@property(retain, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) BOOL hasLocation;
- (void)_readLocation;
@property(retain, nonatomic) GEOTransitArrivalInfo *arrivalInfo;
@property(readonly, nonatomic) BOOL hasArrivalInfo;
- (void)_readArrivalInfo;
@property(nonatomic) BOOL hasStartingTime;
@property(nonatomic) unsigned int startingTime;
- (id)transferInfoAtIndex:(NSUInteger)arg1;
- (NSUInteger)transferInfosCount;
- (void)_addNoFlagsTransferInfo:(id)arg1;
- (void)addTransferInfo:(id)arg1;
- (void)clearTransferInfos;
@property(retain, nonatomic) NSMutableArray *transferInfos;
- (void)_readTransferInfos;
@property(nonatomic) BOOL hasWalkingIndex;
@property(nonatomic) unsigned int walkingIndex;
@property(nonatomic) BOOL hasPrioritizeTilesPreloading;
@property(nonatomic) BOOL prioritizeTilesPreloading;
- (id)enterExitInfoAtIndex:(NSUInteger)arg1;
- (NSUInteger)enterExitInfosCount;
- (void)_addNoFlagsEnterExitInfo:(id)arg1;
- (void)addEnterExitInfo:(id)arg1;
- (void)clearEnterExitInfos;
@property(retain, nonatomic) NSMutableArray *enterExitInfos;
- (void)_readEnterExitInfos;
- (id)vehicleInfoAtIndex:(NSUInteger)arg1;
- (NSUInteger)vehicleInfosCount;
- (void)_addNoFlagsVehicleInfo:(id)arg1;
- (void)addVehicleInfo:(id)arg1;
- (void)clearVehicleInfos;
@property(retain, nonatomic) NSMutableArray *vehicleInfos;
- (void)_readVehicleInfos;
@property(nonatomic) BOOL hasEndingStopIndex;
@property(nonatomic) unsigned int endingStopIndex;
@property(nonatomic) BOOL hasStartingStopIndex;
@property(nonatomic) unsigned int startingStopIndex;
- (int)StringAsManeuverType:(id)arg1;
- (id)maneuverTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasManeuverType;
@property(nonatomic) int maneuverType;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)instanceCompatibleWithProtocolVersion:(NSUInteger)arg1;
@property(readonly, nonatomic) id <GEOTransitVehicleEntries> vehicleEntries;
- (long long)legTypeForManeuver;
- (void)updateTransitStep:(id)arg1;

@end

