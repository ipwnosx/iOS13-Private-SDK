//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEORPUserSearchInput, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPDirectionsFeedbackContext : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    NSMutableArray *_directionsWaypointPlaceInfos;
    GEORPUserSearchInput *_endWaypoint;
    GEORPUserSearchInput *_startWaypoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_directionsRequests:1;
        unsigned int read_directionsResponses:1;
        unsigned int read_directionsWaypointPlaceInfos:1;
        unsigned int read_endWaypoint:1;
        unsigned int read_startWaypoint:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_directionsRequests:1;
        unsigned int wrote_directionsResponses:1;
        unsigned int wrote_directionsWaypointPlaceInfos:1;
        unsigned int wrote_endWaypoint:1;
        unsigned int wrote_startWaypoint:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)directionsWaypointPlaceInfoType;
+ (Class)directionsResponseType;
+ (Class)directionsRequestType;
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
@property(retain, nonatomic) GEORPUserSearchInput *endWaypoint;
@property(readonly, nonatomic) BOOL hasEndWaypoint;
- (void)_readEndWaypoint;
@property(retain, nonatomic) GEORPUserSearchInput *startWaypoint;
@property(readonly, nonatomic) BOOL hasStartWaypoint;
- (void)_readStartWaypoint;
- (id)directionsWaypointPlaceInfoAtIndex:(NSUInteger)arg1;
- (NSUInteger)directionsWaypointPlaceInfosCount;
- (void)_addNoFlagsDirectionsWaypointPlaceInfo:(id)arg1;
- (void)addDirectionsWaypointPlaceInfo:(id)arg1;
- (void)clearDirectionsWaypointPlaceInfos;
@property(retain, nonatomic) NSMutableArray *directionsWaypointPlaceInfos;
- (void)_readDirectionsWaypointPlaceInfos;
- (id)directionsResponseAtIndex:(NSUInteger)arg1;
- (NSUInteger)directionsResponsesCount;
- (void)_addNoFlagsDirectionsResponse:(id)arg1;
- (void)addDirectionsResponse:(id)arg1;
- (void)clearDirectionsResponses;
@property(retain, nonatomic) NSMutableArray *directionsResponses;
- (void)_readDirectionsResponses;
- (id)directionsRequestAtIndex:(NSUInteger)arg1;
- (NSUInteger)directionsRequestsCount;
- (void)_addNoFlagsDirectionsRequest:(id)arg1;
- (void)addDirectionsRequest:(id)arg1;
- (void)clearDirectionsRequests;
@property(retain, nonatomic) NSMutableArray *directionsRequests;
- (void)_readDirectionsRequests;
- (id)initWithData:(id)arg1;
- (id)init;

@end

