//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLocalizedString, GEOPDMapsIdentifier, GEOTimezone, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiEvent : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_eventCategorys;
    NSMutableArray *_eventDateTimes;
    GEOPDMapsIdentifier *_eventId;
    GEOLocalizedString *_name;
    NSMutableArray *_performers;
    NSMutableArray *_poiIds;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _expectedAttendance;
    struct {
        unsigned int has_expectedAttendance:1;
        unsigned int read_unknownFields:1;
        unsigned int read_eventCategorys:1;
        unsigned int read_eventDateTimes:1;
        unsigned int read_eventId:1;
        unsigned int read_name:1;
        unsigned int read_performers:1;
        unsigned int read_poiIds:1;
        unsigned int read_timezone:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_eventCategorys:1;
        unsigned int wrote_eventDateTimes:1;
        unsigned int wrote_eventId:1;
        unsigned int wrote_name:1;
        unsigned int wrote_performers:1;
        unsigned int wrote_poiIds:1;
        unsigned int wrote_timezone:1;
        unsigned int wrote_expectedAttendance:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)performerType;
+ (Class)eventDateTimeType;
+ (Class)poiIdType;
+ (Class)eventCategoryType;
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
@property(nonatomic) BOOL hasExpectedAttendance;
@property(nonatomic) int expectedAttendance;
- (id)performerAtIndex:(NSUInteger)arg1;
- (NSUInteger)performersCount;
- (void)_addNoFlagsPerformer:(id)arg1;
- (void)addPerformer:(id)arg1;
- (void)clearPerformers;
@property(retain, nonatomic) NSMutableArray *performers;
- (void)_readPerformers;
@property(retain, nonatomic) GEOTimezone *timezone;
@property(readonly, nonatomic) BOOL hasTimezone;
- (void)_readTimezone;
- (id)eventDateTimeAtIndex:(NSUInteger)arg1;
- (NSUInteger)eventDateTimesCount;
- (void)_addNoFlagsEventDateTime:(id)arg1;
- (void)addEventDateTime:(id)arg1;
- (void)clearEventDateTimes;
@property(retain, nonatomic) NSMutableArray *eventDateTimes;
- (void)_readEventDateTimes;
- (id)poiIdAtIndex:(NSUInteger)arg1;
- (NSUInteger)poiIdsCount;
- (void)_addNoFlagsPoiId:(id)arg1;
- (void)addPoiId:(id)arg1;
- (void)clearPoiIds;
@property(retain, nonatomic) NSMutableArray *poiIds;
- (void)_readPoiIds;
- (id)eventCategoryAtIndex:(NSUInteger)arg1;
- (NSUInteger)eventCategorysCount;
- (void)_addNoFlagsEventCategory:(id)arg1;
- (void)addEventCategory:(id)arg1;
- (void)clearEventCategorys;
@property(retain, nonatomic) NSMutableArray *eventCategorys;
- (void)_readEventCategorys;
@property(retain, nonatomic) GEOLocalizedString *name;
@property(readonly, nonatomic) BOOL hasName;
- (void)_readName;
@property(retain, nonatomic) GEOPDMapsIdentifier *eventId;
@property(readonly, nonatomic) BOOL hasEventId;
- (void)_readEventId;
- (id)initWithData:(id)arg1;
- (id)init;

@end

