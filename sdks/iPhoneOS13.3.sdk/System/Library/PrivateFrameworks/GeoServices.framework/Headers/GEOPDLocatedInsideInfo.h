//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocatedInsideInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSUInteger _muid;
    int _featureType;
    struct {
        unsigned int has_muid:1;
        unsigned int has_featureType:1;
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
- (int)StringAsFeatureType:(id)arg1;
- (id)featureTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeatureType;
@property(nonatomic) int featureType;
@property(nonatomic) BOOL hasMuid;
@property(nonatomic) NSUInteger muid;

@end
