//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString;

@interface ETPHeader : PBCodable <NSCopying>
{
    long long _sendDate;
    double _startDelay;
    unsigned int _baseColor;
    NSString *_identifier;
    NSData *_messageData;
    int _messageType;
    BOOL _supportsPlaybackTimeOffsets;
   struct {
        unsigned int sendDate:1;
        unsigned int startDelay:1;
        unsigned int baseColor:1;
        unsigned int messageType:1;
        unsigned int supportsPlaybackTimeOffsets:1;
    } _has;
}

@property(nonatomic) double startDelay; // @synthesize startDelay=_startDelay;
@property(nonatomic) BOOL supportsPlaybackTimeOffsets; // @synthesize supportsPlaybackTimeOffsets=_supportsPlaybackTimeOffsets;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int baseColor; // @synthesize baseColor=_baseColor;
@property(retain, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
@property(nonatomic) long long sendDate; // @synthesize sendDate=_sendDate;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasStartDelay;
@property(nonatomic) BOOL hasSupportsPlaybackTimeOffsets;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(nonatomic) BOOL hasBaseColor;
@property(readonly, nonatomic) BOOL hasMessageData;
@property(nonatomic) BOOL hasSendDate;
- (int)StringAsMessageType:(id)arg1;
- (id)messageTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMessageType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;

@end

