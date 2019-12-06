//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOMapItemStorage, NSMutableArray, NSString, PBUnknownFields;

@interface MSPPinnedPlaceStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_contactStorages;
    NSString *_customName;
    NSString *_identifier;
    GEOMapItemStorage *_mapItemStorage;
    NSString *_originatingAddressString;
    int _type;
    BOOL _hidden;
   struct {
        unsigned int type:1;
        unsigned int hidden:1;
    } _has;
}

+ (Class)contactStorageType;
@property(retain, nonatomic) NSString *originatingAddressString; // @synthesize originatingAddressString=_originatingAddressString;
@property(nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSMutableArray *contactStorages; // @synthesize contactStorages=_contactStorages;
@property(retain, nonatomic) GEOMapItemStorage *mapItemStorage; // @synthesize mapItemStorage=_mapItemStorage;
@property(retain, nonatomic) NSString *customName; // @synthesize customName=_customName;
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
@property(readonly, nonatomic) BOOL hasOriginatingAddressString;
@property(nonatomic) BOOL hasHidden;
- (id)contactStorageAtIndex:(NSUInteger)arg1;
- (NSUInteger)contactStoragesCount;
- (void)addContactStorage:(id)arg1;
- (void)clearContactStorages;
@property(readonly, nonatomic) BOOL hasMapItemStorage;
@property(readonly, nonatomic) BOOL hasCustomName;
@property(readonly, nonatomic) BOOL hasIdentifier;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

