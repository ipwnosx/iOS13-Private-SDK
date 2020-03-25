//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitVehiclePosition-Protocol.h>

@class GEOLatLng, GEOPBTransitArtwork, GEOPBTransitShield, GEOStyleAttributes, NSDate, NSString, PBDataReader, PBUnknownFields;
@protocol GEOTransitArtworkDataSource;

@interface GEOPBTransitVehiclePosition : PBCodable <GEOTransitVehiclePosition, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_artwork;
    NSString *_color;
    NSString *_directionName;
    NSString *_headsign;
    GEOLatLng *_latLng;
    GEOPBTransitShield *_modeShield;
    GEOStyleAttributes *_styleAttributes;
    NSUInteger _time;
    NSUInteger _tripId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    float _bearing;
    float _speed;
    struct {
        unsigned int has_time:1;
        unsigned int has_tripId:1;
        unsigned int has_bearing:1;
        unsigned int has_speed:1;
        unsigned int read_unknownFields:1;
        unsigned int read_artwork:1;
        unsigned int read_color:1;
        unsigned int read_directionName:1;
        unsigned int read_headsign:1;
        unsigned int read_latLng:1;
        unsigned int read_modeShield:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_artwork:1;
        unsigned int wrote_color:1;
        unsigned int wrote_directionName:1;
        unsigned int wrote_headsign:1;
        unsigned int wrote_latLng:1;
        unsigned int wrote_modeShield:1;
        unsigned int wrote_styleAttributes:1;
        unsigned int wrote_time:1;
        unsigned int wrote_tripId:1;
        unsigned int wrote_bearing:1;
        unsigned int wrote_speed:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (id)transitVehiclePositionForPlaceData:(id)arg1;
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
@property(retain, nonatomic) GEOPBTransitArtwork *artwork;
@property(readonly, nonatomic) BOOL hasArtwork;
- (void)_readArtwork;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) BOOL hasStyleAttributes;
- (void)_readStyleAttributes;
@property(retain, nonatomic) NSString *color;
@property(readonly, nonatomic) BOOL hasColor;
- (void)_readColor;
@property(retain, nonatomic) GEOPBTransitShield *modeShield;
@property(readonly, nonatomic) BOOL hasModeShield;
- (void)_readModeShield;
@property(retain, nonatomic) NSString *headsign;
@property(readonly, nonatomic) BOOL hasHeadsign;
- (void)_readHeadsign;
@property(retain, nonatomic) NSString *directionName;
@property(readonly, nonatomic) BOOL hasDirectionName;
- (void)_readDirectionName;
@property(nonatomic) BOOL hasSpeed;
@property(nonatomic) float speed;
@property(nonatomic) BOOL hasBearing;
@property(nonatomic) float bearing;
@property(nonatomic) BOOL hasTime;
@property(nonatomic) NSUInteger time;
@property(retain, nonatomic) GEOLatLng *latLng;
@property(readonly, nonatomic) BOOL hasLatLng;
- (void)_readLatLng;
@property(nonatomic) BOOL hasTripId;
@property(nonatomic) NSUInteger tripId;
- (id)initWithData:(id)arg1;
- (id)init;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> artworkDataSource;
@property(readonly, copy, nonatomic) NSString *colorHexString;
@property(readonly, nonatomic) NSDate *timestamp;
@property(readonly, copy, nonatomic) NSString *direction;
@property(readonly, nonatomic) double heading;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) NSUInteger tripID;

@end
