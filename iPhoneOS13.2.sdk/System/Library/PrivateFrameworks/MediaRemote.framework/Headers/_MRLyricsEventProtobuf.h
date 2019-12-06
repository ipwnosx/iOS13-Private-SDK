//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class _MRLyricsTokenProtobuf;

@interface _MRLyricsEventProtobuf : PBCodable <NSCopying>
{
    double _endTime;
    double _startTime;
    _MRLyricsTokenProtobuf *_token;
   struct {
        unsigned int endTime:1;
        unsigned int startTime:1;
    } _has;
}

@property(retain, nonatomic) _MRLyricsTokenProtobuf *token; // @synthesize token=_token;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasToken;
@property(nonatomic) BOOL hasEndTime;
@property(nonatomic) BOOL hasStartTime;

@end

