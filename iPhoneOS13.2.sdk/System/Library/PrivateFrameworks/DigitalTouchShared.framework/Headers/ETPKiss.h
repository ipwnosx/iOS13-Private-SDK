//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

@interface ETPKiss : PBCodable <NSCopying>
{
    NSData *_angles;
    NSData *_delays;
    NSData *_points;
}

@property(retain, nonatomic) NSData *angles; // @synthesize angles=_angles;
@property(retain, nonatomic) NSData *points; // @synthesize points=_points;
@property(retain, nonatomic) NSData *delays; // @synthesize delays=_delays;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasAngles;
@property(readonly, nonatomic) BOOL hasPoints;
@property(readonly, nonatomic) BOOL hasDelays;

@end

