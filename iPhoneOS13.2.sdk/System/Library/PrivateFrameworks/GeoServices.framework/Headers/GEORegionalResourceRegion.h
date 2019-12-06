//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORegionalResourceRegion : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
//     struct GEOTileSetRegion _tileRanges;
    NSUInteger _tileRangesCount;
    NSUInteger _tileRangesSpace;
    NSMutableArray *_attributions;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_tileRanges:1;
        unsigned int read_attributions:1;
        unsigned int read_iconChecksums:1;
        unsigned int read_icons:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_tileRanges:1;
        unsigned int wrote_attributions:1;
        unsigned int wrote_iconChecksums:1;
        unsigned int wrote_icons:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)iconChecksumType;
+ (Class)attributionType;
+ (Class)iconType;
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
- (id)iconChecksumAtIndex:(NSUInteger)arg1;
- (NSUInteger)iconChecksumsCount;
- (void)_addNoFlagsIconChecksum:(id)arg1;
- (void)addIconChecksum:(id)arg1;
- (void)clearIconChecksums;
@property(retain, nonatomic) NSMutableArray *iconChecksums;
- (void)_readIconChecksums;
- (id)attributionAtIndex:(NSUInteger)arg1;
- (NSUInteger)attributionsCount;
- (void)_addNoFlagsAttribution:(id)arg1;
- (void)addAttribution:(id)arg1;
- (void)clearAttributions;
@property(retain, nonatomic) NSMutableArray *attributions;
- (void)_readAttributions;
- (id)iconAtIndex:(NSUInteger)arg1;
- (NSUInteger)iconsCount;
- (void)_addNoFlagsIcon:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)clearIcons;
@property(retain, nonatomic) NSMutableArray *icons;
- (void)_readIcons;
// - (void)setTileRanges:(struct GEOTileSetRegion )arg1 count:(NSUInteger)arg2;
// - (struct GEOTileSetRegion)tileRangeAtIndex:(NSUInteger)arg1;
// - (void)_addNoFlagsTileRange:(struct GEOTileSetRegion)arg1;
// - (void)addTileRange:(struct GEOTileSetRegion)arg1;
- (void)clearTileRanges;
// @property(readonly, nonatomic) struct GEOTileSetRegion tileRanges;
@property(readonly, nonatomic) NSUInteger tileRangesCount;
- (void)_readTileRanges;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

