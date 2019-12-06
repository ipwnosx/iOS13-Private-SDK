//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class PBDataReader, PBUnknownFields;

@interface GEOTileGroup : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
//     CDStruct_9f2792e4 _attributionIndexs;
//     CDStruct_9f2792e4 _fontIndexs;
//     struct GEOTileSetRegion _hybridUnavailableRegions;
    NSUInteger _hybridUnavailableRegionsCount;
    NSUInteger _hybridUnavailableRegionsSpace;
//     CDStruct_9f2792e4 _iconIndexs;
//     struct GEORegionalResourceIndex _regionalResourceIndexs;
    NSUInteger _regionalResourceIndexsCount;
    NSUInteger _regionalResourceIndexsSpace;
//     CDStruct_9f2792e4 _resourceIndexs;
//     CDStruct_9f2792e4 _styleSheetIndexs;
//     CDStruct_9f2792e4 _textureIndexs;
//     struct GEOVersionedTileSet _tileSets;
    NSUInteger _tileSetsCount;
    NSUInteger _tileSetsSpace;
//     CDStruct_9f2792e4 _xmlIndexs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    unsigned int _identifier;
    unsigned int _muninVersionIndex;
    struct {
        unsigned int has_muninVersionIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_attributionIndexs:1;
        unsigned int read_fontIndexs:1;
        unsigned int read_hybridUnavailableRegions:1;
        unsigned int read_iconIndexs:1;
        unsigned int read_regionalResourceIndexs:1;
        unsigned int read_resourceIndexs:1;
        unsigned int read_styleSheetIndexs:1;
        unsigned int read_textureIndexs:1;
        unsigned int read_tileSets:1;
        unsigned int read_xmlIndexs:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_attributionIndexs:1;
        unsigned int wrote_fontIndexs:1;
        unsigned int wrote_hybridUnavailableRegions:1;
        unsigned int wrote_iconIndexs:1;
        unsigned int wrote_regionalResourceIndexs:1;
        unsigned int wrote_resourceIndexs:1;
        unsigned int wrote_styleSheetIndexs:1;
        unsigned int wrote_textureIndexs:1;
        unsigned int wrote_tileSets:1;
        unsigned int wrote_xmlIndexs:1;
        unsigned int wrote_identifier:1;
        unsigned int wrote_muninVersionIndex:1;
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
@property(nonatomic) BOOL hasMuninVersionIndex;
@property(nonatomic) unsigned int muninVersionIndex;
- (void)setResourceIndexs:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)resourceIndexAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsResourceIndex:(unsigned int)arg1;
- (void)addResourceIndex:(unsigned int)arg1;
- (void)clearResourceIndexs;
@property(readonly, nonatomic) unsigned int resourceIndexs;
@property(readonly, nonatomic) NSUInteger resourceIndexsCount;
- (void)_readResourceIndexs;
// - (void)setHybridUnavailableRegions:(struct GEOTileSetRegion )arg1 count:(NSUInteger)arg2;
// - (struct GEOTileSetRegion)hybridUnavailableRegionAtIndex:(NSUInteger)arg1;
// - (void)_addNoFlagsHybridUnavailableRegion:(struct GEOTileSetRegion)arg1;
// - (void)addHybridUnavailableRegion:(struct GEOTileSetRegion)arg1;
- (void)clearHybridUnavailableRegions;
// @property(readonly, nonatomic) struct GEOTileSetRegion hybridUnavailableRegions;
@property(readonly, nonatomic) NSUInteger hybridUnavailableRegionsCount;
- (void)_readHybridUnavailableRegions;
- (void)setAttributionIndexs:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)attributionIndexAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsAttributionIndex:(unsigned int)arg1;
- (void)addAttributionIndex:(unsigned int)arg1;
- (void)clearAttributionIndexs;
@property(readonly, nonatomic) unsigned int attributionIndexs;
@property(readonly, nonatomic) NSUInteger attributionIndexsCount;
- (void)_readAttributionIndexs;
- (void)setXmlIndexs:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)xmlIndexAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsXmlIndex:(unsigned int)arg1;
- (void)addXmlIndex:(unsigned int)arg1;
- (void)clearXmlIndexs;
@property(readonly, nonatomic) unsigned int xmlIndexs;
@property(readonly, nonatomic) NSUInteger xmlIndexsCount;
- (void)_readXmlIndexs;
// - (void)setRegionalResourceIndexs:(struct GEORegionalResourceIndex )arg1 count:(NSUInteger)arg2;
// - (struct GEORegionalResourceIndex)regionalResourceIndexAtIndex:(NSUInteger)arg1;
// - (void)_addNoFlagsRegionalResourceIndex:(struct GEORegionalResourceIndex)arg1;
// - (void)addRegionalResourceIndex:(struct GEORegionalResourceIndex)arg1;
- (void)clearRegionalResourceIndexs;
// @property(readonly, nonatomic) struct GEORegionalResourceIndex regionalResourceIndexs;
@property(readonly, nonatomic) NSUInteger regionalResourceIndexsCount;
- (void)_readRegionalResourceIndexs;
- (void)setIconIndexs:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)iconIndexAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsIconIndex:(unsigned int)arg1;
- (void)addIconIndex:(unsigned int)arg1;
- (void)clearIconIndexs;
@property(readonly, nonatomic) unsigned int iconIndexs;
@property(readonly, nonatomic) NSUInteger iconIndexsCount;
- (void)_readIconIndexs;
- (void)setFontIndexs:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)fontIndexAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsFontIndex:(unsigned int)arg1;
- (void)addFontIndex:(unsigned int)arg1;
- (void)clearFontIndexs;
@property(readonly, nonatomic) unsigned int fontIndexs;
@property(readonly, nonatomic) NSUInteger fontIndexsCount;
- (void)_readFontIndexs;
- (void)setTextureIndexs:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)textureIndexAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsTextureIndex:(unsigned int)arg1;
- (void)addTextureIndex:(unsigned int)arg1;
- (void)clearTextureIndexs;
@property(readonly, nonatomic) unsigned int textureIndexs;
@property(readonly, nonatomic) NSUInteger textureIndexsCount;
- (void)_readTextureIndexs;
- (void)setStyleSheetIndexs:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)styleSheetIndexAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsStyleSheetIndex:(unsigned int)arg1;
- (void)addStyleSheetIndex:(unsigned int)arg1;
- (void)clearStyleSheetIndexs;
@property(readonly, nonatomic) unsigned int styleSheetIndexs;
@property(readonly, nonatomic) NSUInteger styleSheetIndexsCount;
- (void)_readStyleSheetIndexs;
// - (void)setTileSets:(struct GEOVersionedTileSet )arg1 count:(NSUInteger)arg2;
// - (struct GEOVersionedTileSet)tileSetAtIndex:(NSUInteger)arg1;
// - (void)_addNoFlagsTileSet:(struct GEOVersionedTileSet)arg1;
// - (void)addTileSet:(struct GEOVersionedTileSet)arg1;
- (void)clearTileSets;
// @property(readonly, nonatomic) struct GEOVersionedTileSet tileSets;
@property(readonly, nonatomic) NSUInteger tileSetsCount;
- (void)_readTileSets;
@property(nonatomic) unsigned int identifier;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

