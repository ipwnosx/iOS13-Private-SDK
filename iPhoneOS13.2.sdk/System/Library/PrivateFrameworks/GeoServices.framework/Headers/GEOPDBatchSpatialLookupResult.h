//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchSpatialLookupResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_spatialEventLookupResults;
    NSMutableArray *_spatialPlaceLookupResults;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _statusCode;
    struct {
        unsigned int has_statusCode:1;
        unsigned int read_unknownFields:1;
        unsigned int read_spatialEventLookupResults:1;
        unsigned int read_spatialPlaceLookupResults:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_spatialEventLookupResults:1;
        unsigned int wrote_spatialPlaceLookupResults:1;
        unsigned int wrote_statusCode:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)spatialEventLookupResultType;
+ (Class)spatialPlaceLookupResultType;
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
- (id)spatialEventLookupResultAtIndex:(NSUInteger)arg1;
- (NSUInteger)spatialEventLookupResultsCount;
- (void)_addNoFlagsSpatialEventLookupResult:(id)arg1;
- (void)addSpatialEventLookupResult:(id)arg1;
- (void)clearSpatialEventLookupResults;
@property(retain, nonatomic) NSMutableArray *spatialEventLookupResults;
- (void)_readSpatialEventLookupResults;
- (id)spatialPlaceLookupResultAtIndex:(NSUInteger)arg1;
- (NSUInteger)spatialPlaceLookupResultsCount;
- (void)_addNoFlagsSpatialPlaceLookupResult:(id)arg1;
- (void)addSpatialPlaceLookupResult:(id)arg1;
- (void)clearSpatialPlaceLookupResults;
@property(retain, nonatomic) NSMutableArray *spatialPlaceLookupResults;
- (void)_readSpatialPlaceLookupResults;
- (int)StringAsStatusCode:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
@property(nonatomic) BOOL hasStatusCode;
@property(nonatomic) int statusCode;
- (id)initWithData:(id)arg1;
- (id)init;

@end

