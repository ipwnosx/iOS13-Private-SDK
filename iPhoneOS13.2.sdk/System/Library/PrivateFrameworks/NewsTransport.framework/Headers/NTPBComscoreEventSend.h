//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NTPBComscoreEventSend : PBCodable <NSCopying>
{
    int _comscoreEventType;
    NSString *_contentViewedId;
    NSString *_eventUdid;
    NSString *_failureReasonCode;
    int _resultType;
    NSString *_sourceChannelId;
   struct {
        unsigned int comscoreEventType:1;
        unsigned int resultType:1;
    } _has;
}

@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *contentViewedId; // @synthesize contentViewedId=_contentViewedId;
@property(retain, nonatomic) NSString *failureReasonCode; // @synthesize failureReasonCode=_failureReasonCode;
@property(retain, nonatomic) NSString *eventUdid; // @synthesize eventUdid=_eventUdid;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
@property(readonly, nonatomic) BOOL hasContentViewedId;
@property(readonly, nonatomic) BOOL hasFailureReasonCode;
@property(readonly, nonatomic) BOOL hasEventUdid;
@property(nonatomic) BOOL hasResultType;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(nonatomic) BOOL hasComscoreEventType;
@property(nonatomic) int comscoreEventType; // @synthesize comscoreEventType=_comscoreEventType;

@end

