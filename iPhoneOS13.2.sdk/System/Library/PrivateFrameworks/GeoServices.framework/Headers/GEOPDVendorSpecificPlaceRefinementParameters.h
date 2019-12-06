//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLatLng, GEOStructuredAddress, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVendorSpecificPlaceRefinementParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOStructuredAddress *_addressHint;
    NSData *_addressObjectHint;
    NSString *_externalItemId;
    NSMutableArray *_formattedAddressLineHints;
    GEOLatLng *_locationHint;
    NSUInteger _muid;
    NSString *_placeNameHint;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _addressGeocodeAccuracyHint;
    int _placeTypeHint;
    int _resultProviderId;
    struct {
        unsigned int has_muid:1;
        unsigned int has_addressGeocodeAccuracyHint:1;
        unsigned int has_placeTypeHint:1;
        unsigned int has_resultProviderId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_addressHint:1;
        unsigned int read_addressObjectHint:1;
        unsigned int read_externalItemId:1;
        unsigned int read_formattedAddressLineHints:1;
        unsigned int read_locationHint:1;
        unsigned int read_placeNameHint:1;
        unsigned int read_vendorId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressHint:1;
        unsigned int wrote_addressObjectHint:1;
        unsigned int wrote_externalItemId:1;
        unsigned int wrote_formattedAddressLineHints:1;
        unsigned int wrote_locationHint:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_placeNameHint:1;
        unsigned int wrote_vendorId:1;
        unsigned int wrote_addressGeocodeAccuracyHint:1;
        unsigned int wrote_placeTypeHint:1;
        unsigned int wrote_resultProviderId:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)formattedAddressLineHintType;
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
@property(retain, nonatomic) NSData *addressObjectHint;
@property(readonly, nonatomic) BOOL hasAddressObjectHint;
- (void)_readAddressObjectHint;
- (int)StringAsAddressGeocodeAccuracyHint:(id)arg1;
- (id)addressGeocodeAccuracyHintAsString:(int)arg1;
@property(nonatomic) BOOL hasAddressGeocodeAccuracyHint;
@property(nonatomic) int addressGeocodeAccuracyHint;
- (int)StringAsPlaceTypeHint:(id)arg1;
- (id)placeTypeHintAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceTypeHint;
@property(nonatomic) int placeTypeHint;
- (id)formattedAddressLineHintAtIndex:(NSUInteger)arg1;
- (NSUInteger)formattedAddressLineHintsCount;
- (void)_addNoFlagsFormattedAddressLineHint:(id)arg1;
- (void)addFormattedAddressLineHint:(id)arg1;
- (void)clearFormattedAddressLineHints;
@property(retain, nonatomic) NSMutableArray *formattedAddressLineHints;
- (void)_readFormattedAddressLineHints;
@property(retain, nonatomic) NSString *placeNameHint;
@property(readonly, nonatomic) BOOL hasPlaceNameHint;
- (void)_readPlaceNameHint;
@property(retain, nonatomic) GEOStructuredAddress *addressHint;
@property(readonly, nonatomic) BOOL hasAddressHint;
- (void)_readAddressHint;
@property(retain, nonatomic) GEOLatLng *locationHint;
@property(readonly, nonatomic) BOOL hasLocationHint;
- (void)_readLocationHint;
@property(retain, nonatomic) NSString *externalItemId;
@property(readonly, nonatomic) BOOL hasExternalItemId;
- (void)_readExternalItemId;
@property(retain, nonatomic) NSString *vendorId;
@property(readonly, nonatomic) BOOL hasVendorId;
- (void)_readVendorId;
@property(nonatomic) BOOL hasMuid;
@property(nonatomic) NSUInteger muid;
@property(nonatomic) BOOL hasResultProviderId;
@property(nonatomic) int resultProviderId;
- (id)initWithData:(id)arg1;
- (id)init;
// - (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 muid:(NSUInteger)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;
// - (id)initWithMapItemToRefine:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 contentProvider:(id)arg3;
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2;
// - (id)initWithMuid:(NSUInteger)arg1 locationHint:(CDStruct_c3b9c2ee)arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;

@end

