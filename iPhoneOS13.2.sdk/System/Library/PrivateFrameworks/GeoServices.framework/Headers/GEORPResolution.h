//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOMapRegion, NSMutableArray, NSString, PBDataReader;

@interface GEORPResolution : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOMapRegion *_displayRegion;
    NSString *_localizedAlertText;
    NSMutableArray *_localizedChangeLists;
    NSString *_localizedDescription;
    double _resolutionDate;
    NSUInteger _transitLineMuid;
    NSMutableArray *_updatedPlaces;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _displayStyle;
    struct {
        unsigned int has_resolutionDate:1;
        unsigned int has_transitLineMuid:1;
        unsigned int has_displayStyle:1;
        unsigned int read_displayRegion:1;
        unsigned int read_localizedAlertText:1;
        unsigned int read_localizedChangeLists:1;
        unsigned int read_localizedDescription:1;
        unsigned int read_updatedPlaces:1;
        unsigned int wrote_displayRegion:1;
        unsigned int wrote_localizedAlertText:1;
        unsigned int wrote_localizedChangeLists:1;
        unsigned int wrote_localizedDescription:1;
        unsigned int wrote_resolutionDate:1;
        unsigned int wrote_transitLineMuid:1;
        unsigned int wrote_updatedPlaces:1;
        unsigned int wrote_displayStyle:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)updatedPlaceType;
+ (Class)localizedChangeListType;
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
- (int)StringAsDisplayStyle:(id)arg1;
- (id)displayStyleAsString:(int)arg1;
@property(nonatomic) BOOL hasDisplayStyle;
@property(nonatomic) int displayStyle;
@property(retain, nonatomic) NSString *localizedAlertText;
@property(readonly, nonatomic) BOOL hasLocalizedAlertText;
- (void)_readLocalizedAlertText;
@property(retain, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) BOOL hasLocalizedDescription;
- (void)_readLocalizedDescription;
@property(nonatomic) BOOL hasTransitLineMuid;
@property(nonatomic) NSUInteger transitLineMuid;
- (id)updatedPlaceAtIndex:(NSUInteger)arg1;
- (NSUInteger)updatedPlacesCount;
- (void)_addNoFlagsUpdatedPlace:(id)arg1;
- (void)addUpdatedPlace:(id)arg1;
- (void)clearUpdatedPlaces;
@property(retain, nonatomic) NSMutableArray *updatedPlaces;
- (void)_readUpdatedPlaces;
- (id)localizedChangeListAtIndex:(NSUInteger)arg1;
- (NSUInteger)localizedChangeListsCount;
- (void)_addNoFlagsLocalizedChangeList:(id)arg1;
- (void)addLocalizedChangeList:(id)arg1;
- (void)clearLocalizedChangeLists;
@property(retain, nonatomic) NSMutableArray *localizedChangeLists;
- (void)_readLocalizedChangeLists;
@property(retain, nonatomic) GEOMapRegion *displayRegion;
@property(readonly, nonatomic) BOOL hasDisplayRegion;
- (void)_readDisplayRegion;
@property(nonatomic) BOOL hasResolutionDate;
@property(nonatomic) double resolutionDate;
- (id)initWithData:(id)arg1;
- (id)init;

@end

