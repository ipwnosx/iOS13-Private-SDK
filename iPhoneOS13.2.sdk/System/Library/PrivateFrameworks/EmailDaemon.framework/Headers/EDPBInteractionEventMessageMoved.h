//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/EDPBDataSetters-Protocol.h>

@interface EDPBInteractionEventMessageMoved : PBCodable <EDPBDataSetters, NSCopying>
{
    long long _accountId;
    long long _conversationId;
    long long _fromMailboxId;
    long long _messageId;
    long long _toMailboxId;
    int _fromMailboxType;
    int _toMailboxType;
//     CDStruct_b83e950b _has;
}

@property(nonatomic) long long toMailboxId; // @synthesize toMailboxId=_toMailboxId;
@property(nonatomic) long long fromMailboxId; // @synthesize fromMailboxId=_fromMailboxId;
@property(nonatomic) long long messageId; // @synthesize messageId=_messageId;
@property(nonatomic) long long conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) long long accountId; // @synthesize accountId=_accountId;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsToMailboxType:(id)arg1;
- (id)toMailboxTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasToMailboxType;
@property(nonatomic) int toMailboxType; // @synthesize toMailboxType=_toMailboxType;
@property(nonatomic) BOOL hasToMailboxId;
- (int)StringAsFromMailboxType:(id)arg1;
- (id)fromMailboxTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFromMailboxType;
@property(nonatomic) int fromMailboxType; // @synthesize fromMailboxType=_fromMailboxType;
@property(nonatomic) BOOL hasFromMailboxId;
@property(nonatomic) BOOL hasMessageId;
@property(nonatomic) BOOL hasConversationId;
@property(nonatomic) BOOL hasAccountId;
- (void)withHasher:(id)arg1 setMessage:(id)arg2 mailbox:(id)arg3;

@end

