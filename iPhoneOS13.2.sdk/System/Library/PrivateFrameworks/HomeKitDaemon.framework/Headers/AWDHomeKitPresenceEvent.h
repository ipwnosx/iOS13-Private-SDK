//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@interface AWDHomeKitPresenceEvent : PBCodable <NSCopying>
{
    int _presenceEventGranularity;
    int _presenceEventType;
    struct {
        unsigned int presenceEventGranularity:1;
        unsigned int presenceEventType:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsPresenceEventGranularity:(id)arg1;
- (id)presenceEventGranularityAsString:(int)arg1;
@property(nonatomic) _Bool hasPresenceEventGranularity;
@property(nonatomic) int presenceEventGranularity; // @synthesize presenceEventGranularity=_presenceEventGranularity;
- (int)StringAsPresenceEventType:(id)arg1;
- (id)presenceEventTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPresenceEventType;
@property(nonatomic) int presenceEventType; // @synthesize presenceEventType=_presenceEventType;

@end
