//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLatLng, PBDataReader, PBUnknownFields;

@interface GEOLocation : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _courseAccuracy;
    double _course;
    double _heading;
    double _horizontalAccuracy;
    GEOLatLng *_latLng;
    GEOLatLng *_rawCoordinate;
    double _rawCourse;
    double _speedAccuracy;
    double _speed;
    double _timestamp;
    NSUInteger _transitID;
    double _verticalAccuracy;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _altitude;
    int _formOfWay;
    int _levelOrdinal;
    int _matchQuality;
    int _referenceFrame;
    int _roadClass;
    int _transportType;
    int _type;
    BOOL _isMatchedLocation;
    BOOL _isShifted;
    struct {
        unsigned int has_courseAccuracy:1;
        unsigned int has_course:1;
        unsigned int has_heading:1;
        unsigned int has_horizontalAccuracy:1;
        unsigned int has_rawCourse:1;
        unsigned int has_speedAccuracy:1;
        unsigned int has_speed:1;
        unsigned int has_timestamp:1;
        unsigned int has_transitID:1;
        unsigned int has_verticalAccuracy:1;
        unsigned int has_altitude:1;
        unsigned int has_formOfWay:1;
        unsigned int has_levelOrdinal:1;
        unsigned int has_matchQuality:1;
        unsigned int has_referenceFrame:1;
        unsigned int has_roadClass:1;
        unsigned int has_transportType:1;
        unsigned int has_type:1;
        unsigned int has_isMatchedLocation:1;
        unsigned int has_isShifted:1;
        unsigned int read_unknownFields:1;
        unsigned int read_latLng:1;
        unsigned int read_rawCoordinate:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_courseAccuracy:1;
        unsigned int wrote_course:1;
        unsigned int wrote_heading:1;
        unsigned int wrote_horizontalAccuracy:1;
        unsigned int wrote_latLng:1;
        unsigned int wrote_rawCoordinate:1;
        unsigned int wrote_rawCourse:1;
        unsigned int wrote_speedAccuracy:1;
        unsigned int wrote_speed:1;
        unsigned int wrote_timestamp:1;
        unsigned int wrote_transitID:1;
        unsigned int wrote_verticalAccuracy:1;
        unsigned int wrote_altitude:1;
        unsigned int wrote_formOfWay:1;
        unsigned int wrote_levelOrdinal:1;
        unsigned int wrote_matchQuality:1;
        unsigned int wrote_referenceFrame:1;
        unsigned int wrote_roadClass:1;
        unsigned int wrote_transportType:1;
        unsigned int wrote_type:1;
        unsigned int wrote_isMatchedLocation:1;
        unsigned int wrote_isShifted:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) int transportType;
- (int)StringAsRoadClass:(id)arg1;
- (id)roadClassAsString:(int)arg1;
@property(nonatomic) BOOL hasRoadClass;
@property(nonatomic) int roadClass;
- (int)StringAsFormOfWay:(id)arg1;
- (id)formOfWayAsString:(int)arg1;
@property(nonatomic) BOOL hasFormOfWay;
@property(nonatomic) int formOfWay;
- (int)StringAsMatchQuality:(id)arg1;
- (id)matchQualityAsString:(int)arg1;
@property(nonatomic) BOOL hasMatchQuality;
@property(nonatomic) int matchQuality;
@property(nonatomic) BOOL hasRawCourse;
@property(nonatomic) double rawCourse;
@property(retain, nonatomic) GEOLatLng *rawCoordinate;
@property(readonly, nonatomic) BOOL hasRawCoordinate;
- (void)_readRawCoordinate;
- (int)StringAsReferenceFrame:(id)arg1;
- (id)referenceFrameAsString:(int)arg1;
@property(nonatomic) BOOL hasReferenceFrame;
@property(nonatomic) int referenceFrame;
@property(nonatomic) BOOL hasTransitID;
@property(nonatomic) NSUInteger transitID;
@property(nonatomic) BOOL hasIsShifted;
@property(nonatomic) BOOL isShifted;
@property(nonatomic) BOOL hasIsMatchedLocation;
@property(nonatomic) BOOL isMatchedLocation;
@property(nonatomic) BOOL hasSpeedAccuracy;
@property(nonatomic) double speedAccuracy;
@property(nonatomic) BOOL hasCourseAccuracy;
@property(nonatomic) double courseAccuracy;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasLevelOrdinal;
@property(nonatomic) int levelOrdinal;
@property(nonatomic) BOOL hasCourse;
@property(nonatomic) double course;
@property(nonatomic) BOOL hasHeading;
@property(nonatomic) double heading;
@property(nonatomic) BOOL hasSpeed;
@property(nonatomic) double speed;
@property(nonatomic) BOOL hasVerticalAccuracy;
@property(nonatomic) double verticalAccuracy;
@property(nonatomic) BOOL hasHorizontalAccuracy;
@property(nonatomic) double horizontalAccuracy;
@property(nonatomic) BOOL hasAltitude;
@property(nonatomic) int altitude;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) double timestamp;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(retain, nonatomic) GEOLatLng *latLng;
- (void)_readLatLng;
- (id)initWithData:(id)arg1;
- (id)init;
@property(readonly, nonatomic) BOOL hasAccurateCourse;
// @property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
// - (id)initWithGEOCoordinate:(CDStruct_c3b9c2ee)arg1 isUserLocation:(BOOL)arg2 floorOrdinal:(int)arg3;
// - (id)initWithGEOCoordinate:(CDStruct_c3b9c2ee)arg1 floorOrdinal:(int)arg2;
// - (id)initWithGEOCoordinate:(CDStruct_c3b9c2ee)arg1 isUserLocation:(BOOL)arg2;
// - (id)initWithGEOCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 isUserLocation:(BOOL)arg3 floorOrdinal:(int)arg4;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 floorOrdinal:(int)arg3;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithLocation:(id)arg1 isUserLocation:(BOOL)arg2 floorOrdinal:(int)arg3;
- (id)initWithLocation:(id)arg1 floorOrdinal:(int)arg2;
- (id)initWithLocation:(id)arg1;

@end

