//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOUserPreferences, PBUnknownFields;

@interface GEOAutomobileOptions : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOUserPreferences *_userPreferences;
    int _trafficType;
    BOOL _includeHistoricTravelTime;
    BOOL _includeStaticTravelTime;
    struct {
        unsigned int has_trafficType:1;
        unsigned int has_includeHistoricTravelTime:1;
        unsigned int has_includeStaticTravelTime:1;
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
@property(retain, nonatomic) GEOUserPreferences *userPreferences;
@property(readonly, nonatomic) BOOL hasUserPreferences;
@property(nonatomic) BOOL hasIncludeStaticTravelTime;
@property(nonatomic) BOOL includeStaticTravelTime;
- (int)StringAsTrafficType:(id)arg1;
- (id)trafficTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTrafficType;
@property(nonatomic) int trafficType;
@property(nonatomic) BOOL hasIncludeHistoricTravelTime;
@property(nonatomic) BOOL includeHistoricTravelTime;

@end

