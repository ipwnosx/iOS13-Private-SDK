//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, PBDataReader, PBUnknownFields;

@interface GEORouteTrafficDetail : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_spokenRouteName;
    NSString *_unabbreviatedRouteName;
    NSString *_writtenRouteName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _routeTrafficCondition;
    struct {
        unsigned int has_routeTrafficCondition:1;
        unsigned int read_unknownFields:1;
        unsigned int read_spokenRouteName:1;
        unsigned int read_unabbreviatedRouteName:1;
        unsigned int read_writtenRouteName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_spokenRouteName:1;
        unsigned int wrote_unabbreviatedRouteName:1;
        unsigned int wrote_writtenRouteName:1;
        unsigned int wrote_routeTrafficCondition:1;
    } _flags;
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
@property(retain, nonatomic) NSString *unabbreviatedRouteName;
@property(readonly, nonatomic) BOOL hasUnabbreviatedRouteName;
- (void)_readUnabbreviatedRouteName;
@property(retain, nonatomic) NSString *spokenRouteName;
@property(readonly, nonatomic) BOOL hasSpokenRouteName;
- (void)_readSpokenRouteName;
@property(retain, nonatomic) NSString *writtenRouteName;
@property(readonly, nonatomic) BOOL hasWrittenRouteName;
- (void)_readWrittenRouteName;
- (int)StringAsRouteTrafficCondition:(id)arg1;
- (id)routeTrafficConditionAsString:(int)arg1;
@property(nonatomic) BOOL hasRouteTrafficCondition;
@property(nonatomic) int routeTrafficCondition;
- (id)initWithData:(id)arg1;
- (id)init;

@end

