//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOURLSerializable-Protocol.h>

@class GEOStructuredAddress, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOAddress : PBCodable <GEOURLSerializable, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_formattedAddressLines;
    GEOStructuredAddress *_structuredAddress;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _formattedAddressType;
    struct {
        unsigned int has_formattedAddressType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_formattedAddressLines:1;
        unsigned int read_structuredAddress:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_formattedAddressLines:1;
        unsigned int wrote_structuredAddress:1;
        unsigned int wrote_formattedAddressType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)formattedAddressLineType;
+ (id)geoAddressForPlaceData:(id)arg1;
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
- (int)StringAsFormattedAddressType:(id)arg1;
- (id)formattedAddressTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFormattedAddressType;
@property(nonatomic) int formattedAddressType;
@property(retain, nonatomic) GEOStructuredAddress *structuredAddress;
@property(readonly, nonatomic) BOOL hasStructuredAddress;
- (void)_readStructuredAddress;
- (id)formattedAddressLineAtIndex:(NSUInteger)arg1;
- (NSUInteger)formattedAddressLinesCount;
- (void)_addNoFlagsFormattedAddressLine:(id)arg1;
- (void)addFormattedAddressLine:(id)arg1;
- (void)clearFormattedAddressLines;
@property(retain, nonatomic) NSMutableArray *formattedAddressLines;
- (void)_readFormattedAddressLines;
- (id)initWithData:(id)arg1;
- (id)init;
- (BOOL)_isEquivalentURLRepresentationTo:(id)arg1;
- (id)urlRepresentation;
- (id)initWithUrlRepresentation:(id)arg1;
- (id)bestName;
- (id)postalAddress;
- (id)initWithPostalAddress:(id)arg1;
- (id)addressDictionary;
- (id)initWithAddressDictionary:(id)arg1;

@end

