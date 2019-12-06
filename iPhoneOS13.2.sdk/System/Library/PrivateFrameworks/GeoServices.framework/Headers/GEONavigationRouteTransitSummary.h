//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBDataReader;

@interface GEONavigationRouteTransitSummary : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_possibleStops;
    NSMutableArray *_scheduledLinks;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_possibleStops:1;
        unsigned int read_scheduledLinks:1;
        unsigned int wrote_possibleStops:1;
        unsigned int wrote_scheduledLinks:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)possibleStopType;
+ (Class)scheduledLinkType;
// - (void).cxx_destruct;
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
- (id)possibleStopAtIndex:(NSUInteger)arg1;
- (NSUInteger)possibleStopsCount;
- (void)_addNoFlagsPossibleStop:(id)arg1;
- (void)addPossibleStop:(id)arg1;
- (void)clearPossibleStops;
@property(retain, nonatomic) NSMutableArray *possibleStops;
- (void)_readPossibleStops;
- (id)scheduledLinkAtIndex:(NSUInteger)arg1;
- (NSUInteger)scheduledLinksCount;
- (void)_addNoFlagsScheduledLink:(id)arg1;
- (void)addScheduledLink:(id)arg1;
- (void)clearScheduledLinks;
@property(retain, nonatomic) NSMutableArray *scheduledLinks;
- (void)_readScheduledLinks;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithRoute:(id)arg1;

@end

