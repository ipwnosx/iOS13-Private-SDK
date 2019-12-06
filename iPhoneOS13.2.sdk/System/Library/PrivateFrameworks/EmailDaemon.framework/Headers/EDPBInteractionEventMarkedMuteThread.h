//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/EDPBDataSetters-Protocol.h>

@interface EDPBInteractionEventMarkedMuteThread : PBCodable <EDPBDataSetters, NSCopying>
{
    long long _conversationId;
    BOOL _value;
   struct {
        unsigned int conversationId:1;
        unsigned int value:1;
    } _has;
}

@property(nonatomic) BOOL value; // @synthesize value=_value;
@property(nonatomic) long long conversationId; // @synthesize conversationId=_conversationId;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasValue;
@property(nonatomic) BOOL hasConversationId;
- (void)withHasher:(id)arg1 setConversationID:(long long)arg2 data:(id)arg3;

@end

