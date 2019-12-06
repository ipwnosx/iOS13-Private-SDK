//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface AWDHomeKitActionSetTriggered : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    unsigned int _duration;
    int _errorCode;
    unsigned int _numAccessories;
    NSString *_transaction;
    int _triggerSource;
   struct {
        unsigned int timestamp:1;
        unsigned int duration:1;
        unsigned int errorCode:1;
        unsigned int numAccessories:1;
        unsigned int triggerSource:1;
    } _has;
}

@property(nonatomic) unsigned int numAccessories; // @synthesize numAccessories=_numAccessories;
@property(retain, nonatomic) NSString *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) BOOL hasNumAccessories;
- (int)StringAsTriggerSource:(id)arg1;
- (id)triggerSourceAsString:(int)arg1;
@property(nonatomic) BOOL hasTriggerSource;
@property(nonatomic) int triggerSource; // @synthesize triggerSource=_triggerSource;
@property(readonly, nonatomic) BOOL hasTransaction;
@property(nonatomic) BOOL hasErrorCode;
@property(nonatomic) BOOL hasDuration;
@property(nonatomic) BOOL hasTimestamp;

@end

