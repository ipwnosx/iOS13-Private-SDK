//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOTransitDecoderData : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_accessPoints;
    NSMutableArray *_artworks;
    NSMutableArray *_halls;
    NSMutableArray *_lines;
    NSMutableArray *_stations;
    NSMutableArray *_steps;
    NSMutableArray *_stops;
    NSMutableArray *_systems;
    NSMutableArray *_transitIncidentMessages;
    NSMutableArray *_transitIncidents;
    NSMutableArray *_walkings;
    NSMutableArray *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_accessPoints:1;
        unsigned int read_artworks:1;
        unsigned int read_halls:1;
        unsigned int read_lines:1;
        unsigned int read_stations:1;
        unsigned int read_steps:1;
        unsigned int read_stops:1;
        unsigned int read_systems:1;
        unsigned int read_transitIncidentMessages:1;
        unsigned int read_transitIncidents:1;
        unsigned int read_walkings:1;
        unsigned int read_zilchPoints:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_accessPoints:1;
        unsigned int wrote_artworks:1;
        unsigned int wrote_halls:1;
        unsigned int wrote_lines:1;
        unsigned int wrote_stations:1;
        unsigned int wrote_steps:1;
        unsigned int wrote_stops:1;
        unsigned int wrote_systems:1;
        unsigned int wrote_transitIncidentMessages:1;
        unsigned int wrote_transitIncidents:1;
        unsigned int wrote_walkings:1;
        unsigned int wrote_zilchPoints:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)stepType;
+ (Class)transitIncidentMessageType;
+ (Class)artworkType;
+ (Class)hallType;
+ (Class)transitIncidentType;
+ (Class)systemType;
+ (Class)zilchPointsType;
+ (Class)stopType;
+ (Class)walkingType;
+ (Class)accessPointType;
+ (Class)lineType;
+ (Class)stationType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
- (id)stepAtIndex:(NSUInteger)arg1;
- (NSUInteger)stepsCount;
- (void)_addNoFlagsStep:(id)arg1;
- (void)addStep:(id)arg1;
- (void)clearSteps;
@property(retain, nonatomic) NSMutableArray *steps;
- (void)_readSteps;
- (id)transitIncidentMessageAtIndex:(NSUInteger)arg1;
- (NSUInteger)transitIncidentMessagesCount;
- (void)_addNoFlagsTransitIncidentMessage:(id)arg1;
- (void)addTransitIncidentMessage:(id)arg1;
- (void)clearTransitIncidentMessages;
@property(retain, nonatomic) NSMutableArray *transitIncidentMessages;
- (void)_readTransitIncidentMessages;
- (id)artworkAtIndex:(NSUInteger)arg1;
- (NSUInteger)artworksCount;
- (void)_addNoFlagsArtwork:(id)arg1;
- (void)addArtwork:(id)arg1;
- (void)clearArtworks;
@property(retain, nonatomic) NSMutableArray *artworks;
- (void)_readArtworks;
- (id)hallAtIndex:(NSUInteger)arg1;
- (NSUInteger)hallsCount;
- (void)_addNoFlagsHall:(id)arg1;
- (void)addHall:(id)arg1;
- (void)clearHalls;
@property(retain, nonatomic) NSMutableArray *halls;
- (void)_readHalls;
- (id)transitIncidentAtIndex:(NSUInteger)arg1;
- (NSUInteger)transitIncidentsCount;
- (void)_addNoFlagsTransitIncident:(id)arg1;
- (void)addTransitIncident:(id)arg1;
- (void)clearTransitIncidents;
@property(retain, nonatomic) NSMutableArray *transitIncidents;
- (void)_readTransitIncidents;
- (id)systemAtIndex:(NSUInteger)arg1;
- (NSUInteger)systemsCount;
- (void)_addNoFlagsSystem:(id)arg1;
- (void)addSystem:(id)arg1;
- (void)clearSystems;
@property(retain, nonatomic) NSMutableArray *systems;
- (void)_readSystems;
- (id)zilchPointsAtIndex:(NSUInteger)arg1;
- (NSUInteger)zilchPointsCount;
- (void)_addNoFlagsZilchPoints:(id)arg1;
- (void)addZilchPoints:(id)arg1;
- (void)clearZilchPoints;
@property(retain, nonatomic) NSMutableArray *zilchPoints;
- (void)_readZilchPoints;
- (id)stopAtIndex:(NSUInteger)arg1;
- (NSUInteger)stopsCount;
- (void)_addNoFlagsStop:(id)arg1;
- (void)addStop:(id)arg1;
- (void)clearStops;
@property(retain, nonatomic) NSMutableArray *stops;
- (void)_readStops;
- (id)walkingAtIndex:(NSUInteger)arg1;
- (NSUInteger)walkingsCount;
- (void)_addNoFlagsWalking:(id)arg1;
- (void)addWalking:(id)arg1;
- (void)clearWalkings;
@property(retain, nonatomic) NSMutableArray *walkings;
- (void)_readWalkings;
- (id)accessPointAtIndex:(NSUInteger)arg1;
- (NSUInteger)accessPointsCount;
- (void)_addNoFlagsAccessPoint:(id)arg1;
- (void)addAccessPoint:(id)arg1;
- (void)clearAccessPoints;
@property(retain, nonatomic) NSMutableArray *accessPoints;
- (void)_readAccessPoints;
- (id)lineAtIndex:(NSUInteger)arg1;
- (NSUInteger)linesCount;
- (void)_addNoFlagsLine:(id)arg1;
- (void)addLine:(id)arg1;
- (void)clearLines;
@property(retain, nonatomic) NSMutableArray *lines;
- (void)_readLines;
- (id)stationAtIndex:(NSUInteger)arg1;
- (NSUInteger)stationsCount;
- (void)_addNoFlagsStation:(id)arg1;
- (void)addStation:(id)arg1;
- (void)clearStations;
@property(retain, nonatomic) NSMutableArray *stations;
- (void)_readStations;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)artworkFromIndices:(unsigned int )arg1 count:(NSUInteger)arg2;

@end

