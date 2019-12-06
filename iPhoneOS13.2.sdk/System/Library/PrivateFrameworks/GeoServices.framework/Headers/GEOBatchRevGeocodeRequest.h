//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
//     CDStruct_95bda58d _additionalPlaceTypes;
    NSString *_deviceCountryCode;
    NSString *_deviceSku;
    NSString *_displayRegion;
    NSMutableArray *_locations;
    NSMutableArray *_serviceTags;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_additionalPlaceTypes:1;
        unsigned int read_deviceCountryCode:1;
        unsigned int read_deviceSku:1;
        unsigned int read_displayRegion:1;
        unsigned int read_locations:1;
        unsigned int read_serviceTags:1;
        unsigned int wrote_additionalPlaceTypes:1;
        unsigned int wrote_deviceCountryCode:1;
        unsigned int wrote_deviceSku:1;
        unsigned int wrote_displayRegion:1;
        unsigned int wrote_locations:1;
        unsigned int wrote_serviceTags:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)serviceTagType;
+ (Class)locationType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)serviceTagAtIndex:(NSUInteger)arg1;
- (NSUInteger)serviceTagsCount;
- (void)_addNoFlagsServiceTag:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(retain, nonatomic) NSMutableArray *serviceTags;
- (void)_readServiceTags;
@property(retain, nonatomic) NSString *deviceSku;
@property(readonly, nonatomic) BOOL hasDeviceSku;
- (void)_readDeviceSku;
@property(retain, nonatomic) NSString *displayRegion;
@property(readonly, nonatomic) BOOL hasDisplayRegion;
- (void)_readDisplayRegion;
@property(retain, nonatomic) NSString *deviceCountryCode;
@property(readonly, nonatomic) BOOL hasDeviceCountryCode;
- (void)_readDeviceCountryCode;
- (int)StringAsAdditionalPlaceTypes:(id)arg1;
- (id)additionalPlaceTypesAsString:(int)arg1;
- (void)setAdditionalPlaceTypes:(int )arg1 count:(NSUInteger)arg2;
- (int)additionalPlaceTypeAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsAdditionalPlaceType:(int)arg1;
- (void)addAdditionalPlaceType:(int)arg1;
- (void)clearAdditionalPlaceTypes;
@property(readonly, nonatomic) int additionalPlaceTypes;
@property(readonly, nonatomic) NSUInteger additionalPlaceTypesCount;
- (void)_readAdditionalPlaceTypes;
- (id)locationAtIndex:(NSUInteger)arg1;
- (NSUInteger)locationsCount;
- (void)_addNoFlagsLocation:(id)arg1;
- (void)addLocation:(id)arg1;
- (void)clearLocations;
@property(retain, nonatomic) NSMutableArray *locations;
- (void)_readLocations;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

