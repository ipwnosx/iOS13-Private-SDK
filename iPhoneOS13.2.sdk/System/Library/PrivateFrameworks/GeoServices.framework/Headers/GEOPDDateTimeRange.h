//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDateTimeRange : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
//     struct GEOPDLocalTimeRange _timeRanges;
    NSUInteger _timeRangesCount;
    NSUInteger _timeRangesSpace;
    NSUInteger _endDate;
    NSUInteger _startDate;
    struct {
        unsigned int has_endDate:1;
        unsigned int has_startDate:1;
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
// - (void)setTimeRanges:(struct GEOPDLocalTimeRange )arg1 count:(NSUInteger)arg2;
// - (struct GEOPDLocalTimeRange)timeRangeAtIndex:(NSUInteger)arg1;
// - (void)addTimeRange:(struct GEOPDLocalTimeRange)arg1;
- (void)clearTimeRanges;
// @property(readonly, nonatomic) struct GEOPDLocalTimeRange timeRanges;
@property(readonly, nonatomic) NSUInteger timeRangesCount;
@property(nonatomic) BOOL hasEndDate;
@property(nonatomic) NSUInteger endDate;
@property(nonatomic) BOOL hasStartDate;
@property(nonatomic) NSUInteger startDate;
- (void)dealloc;
@property(readonly, nonatomic) BOOL hasValidStartAndEndDates;

@end

