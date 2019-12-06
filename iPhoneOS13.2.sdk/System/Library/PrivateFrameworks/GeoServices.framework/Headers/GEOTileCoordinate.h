//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class PBUnknownFields;

@interface GEOTileCoordinate : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _x;
    int _y;
    int _zoom;
    struct {
        unsigned int has_x:1;
        unsigned int has_y:1;
        unsigned int has_zoom:1;
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
@property(nonatomic) BOOL hasZoom;
@property(nonatomic) int zoom;
@property(nonatomic) BOOL hasY;
@property(nonatomic) int y;
@property(nonatomic) BOOL hasX;
@property(nonatomic) int x;

@end

