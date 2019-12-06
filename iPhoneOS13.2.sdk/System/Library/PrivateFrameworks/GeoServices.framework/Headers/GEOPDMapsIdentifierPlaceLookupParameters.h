//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsIdentifierPlaceLookupParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_mapsIds;
    int _resultProviderId;
    BOOL _enablePartialClientization;
    struct {
        unsigned int has_resultProviderId:1;
        unsigned int has_enablePartialClientization:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)mapsIdType;
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
@property(nonatomic) BOOL hasEnablePartialClientization;
@property(nonatomic) BOOL enablePartialClientization;
- (id)mapsIdAtIndex:(NSUInteger)arg1;
- (NSUInteger)mapsIdsCount;
- (void)addMapsId:(id)arg1;
- (void)clearMapsIds;
@property(retain, nonatomic) NSMutableArray *mapsIds;
@property(nonatomic) BOOL hasResultProviderId;
@property(nonatomic) int resultProviderId;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2;

@end

