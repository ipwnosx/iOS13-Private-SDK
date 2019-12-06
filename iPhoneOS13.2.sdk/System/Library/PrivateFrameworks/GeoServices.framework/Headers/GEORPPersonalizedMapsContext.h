//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class PBUnknownFields;

@interface GEORPPersonalizedMapsContext : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _addressType;
    int _placeType;
//     CDStruct_2d9f5d20 _flags;
}

+ (BOOL)isValid:(id)arg1;
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
- (int)StringAsPlaceType:(id)arg1;
- (id)placeTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceType;
@property(nonatomic) int placeType;
- (int)StringAsAddressType:(id)arg1;
- (id)addressTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasAddressType;
@property(nonatomic) int addressType;

@end

