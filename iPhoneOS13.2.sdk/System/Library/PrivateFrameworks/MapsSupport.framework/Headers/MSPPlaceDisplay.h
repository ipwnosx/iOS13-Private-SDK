//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOMapItemStorage, NSString, PBUnknownFields;

@interface MSPPlaceDisplay : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOMapItemStorage *_placeMapItemStorage;
    NSString *_supersededSearchIdentifier;
}

@property(retain, nonatomic) NSString *supersededSearchIdentifier; // @synthesize supersededSearchIdentifier=_supersededSearchIdentifier;
@property(retain, nonatomic) GEOMapItemStorage *placeMapItemStorage; // @synthesize placeMapItemStorage=_placeMapItemStorage;
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
@property(readonly, nonatomic) BOOL hasSupersededSearchIdentifier;
@property(readonly, nonatomic) BOOL hasPlaceMapItemStorage;

@end

