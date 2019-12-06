//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOStorageRouteRequestStorage, PBUnknownFields;

@interface MSPDirectionsSearch : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOStorageRouteRequestStorage *_routeRequestStorage;
    BOOL _navigationInterrupted;
   struct {
        unsigned int navigationInterrupted:1;
    } _has;
}

@property(nonatomic) BOOL navigationInterrupted; // @synthesize navigationInterrupted=_navigationInterrupted;
@property(retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage; // @synthesize routeRequestStorage=_routeRequestStorage;
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
@property(nonatomic) BOOL hasNavigationInterrupted;
@property(readonly, nonatomic) BOOL hasRouteRequestStorage;

@end

