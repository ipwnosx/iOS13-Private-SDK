//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class MSPPlaceBookmark, MSPRegionBookmark, MSPRouteBookmark, MSPTransitLineBookmark, NSString, PBUnknownFields;

@interface MSPBookmarkStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _position;
    double _timestamp;
    NSString *_identifier;
    MSPPlaceBookmark *_placeBookmark;
    MSPRegionBookmark *_regionBookmark;
    MSPRouteBookmark *_routeBookmark;
    MSPTransitLineBookmark *_transitLineBookmark;
    int _type;
//     CDStruct_dd13975a _has;
}

@property(retain, nonatomic) MSPTransitLineBookmark *transitLineBookmark; // @synthesize transitLineBookmark=_transitLineBookmark;
@property(retain, nonatomic) MSPRegionBookmark *regionBookmark; // @synthesize regionBookmark=_regionBookmark;
@property(retain, nonatomic) MSPRouteBookmark *routeBookmark; // @synthesize routeBookmark=_routeBookmark;
@property(retain, nonatomic) MSPPlaceBookmark *placeBookmark; // @synthesize placeBookmark=_placeBookmark;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasTransitLineBookmark;
@property(readonly, nonatomic) BOOL hasRegionBookmark;
@property(readonly, nonatomic) BOOL hasRouteBookmark;
@property(readonly, nonatomic) BOOL hasPlaceBookmark;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) BOOL hasPosition;
@property(readonly, nonatomic) BOOL hasIdentifier;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

