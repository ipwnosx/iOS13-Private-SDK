//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGroundViewLabelInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _endHeading;
    NSString *_localityName;
    NSString *_locationName;
    NSString *_secondaryLocationName;
    double _startHeading;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_endHeading:1;
        unsigned int has_startHeading:1;
        unsigned int read_unknownFields:1;
        unsigned int read_localityName:1;
        unsigned int read_locationName:1;
        unsigned int read_secondaryLocationName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_endHeading:1;
        unsigned int wrote_localityName:1;
        unsigned int wrote_locationName:1;
        unsigned int wrote_secondaryLocationName:1;
        unsigned int wrote_startHeading:1;
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
@property(nonatomic) BOOL hasEndHeading;
@property(nonatomic) double endHeading;
@property(nonatomic) BOOL hasStartHeading;
@property(nonatomic) double startHeading;
@property(retain, nonatomic) NSString *localityName;
@property(readonly, nonatomic) BOOL hasLocalityName;
- (void)_readLocalityName;
@property(retain, nonatomic) NSString *secondaryLocationName;
@property(readonly, nonatomic) BOOL hasSecondaryLocationName;
- (void)_readSecondaryLocationName;
@property(retain, nonatomic) NSString *locationName;
@property(readonly, nonatomic) BOOL hasLocationName;
- (void)_readLocationName;
- (id)initWithData:(id)arg1;
- (id)init;

@end

