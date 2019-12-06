//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

@interface NTPBTocExposure : PBCodable <NSCopying>
{
    int _precedingLocation;
    NSData *_tocExposureId;
   struct {
        unsigned int precedingLocation:1;
    } _has;
}

@property(retain, nonatomic) NSData *tocExposureId; // @synthesize tocExposureId=_tocExposureId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasTocExposureId;
- (int)StringAsPrecedingLocation:(id)arg1;
- (id)precedingLocationAsString:(int)arg1;
@property(nonatomic) BOOL hasPrecedingLocation;
@property(nonatomic) int precedingLocation; // @synthesize precedingLocation=_precedingLocation;

@end

