//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOTransitSegmentArtworkSet : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
//     CDStruct_9f2792e4 _artworkIndexs;
    NSMutableArray *_clusters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_artworkIndexs:1;
        unsigned int read_clusters:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_artworkIndexs:1;
        unsigned int wrote_clusters:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)clusterType;
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
- (id)clusterAtIndex:(NSUInteger)arg1;
- (NSUInteger)clustersCount;
- (void)_addNoFlagsCluster:(id)arg1;
- (void)addCluster:(id)arg1;
- (void)clearClusters;
@property(retain, nonatomic) NSMutableArray *clusters;
- (void)_readClusters;
- (void)setArtworkIndexs:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)artworkIndexAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsArtworkIndex:(unsigned int)arg1;
- (void)addArtworkIndex:(unsigned int)arg1;
- (void)clearArtworkIndexs;
@property(readonly, nonatomic) unsigned int artworkIndexs;
@property(readonly, nonatomic) NSUInteger artworkIndexsCount;
- (void)_readArtworkIndexs;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

