//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMoreMessages : PBCodable <NSCopying>
{
    NSMutableArray *_addedMessages;
    NSData *_dateForRequestingMoreMessages;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSString *_mailboxId;
    unsigned int _mailboxSyncVersion;
//     CDStruct_8d07e858 _has;
}

+ (Class)addedMessageType;
@property(nonatomic) unsigned int mailboxSyncVersion; // @synthesize mailboxSyncVersion=_mailboxSyncVersion;
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(retain, nonatomic) NSData *dateForRequestingMoreMessages; // @synthesize dateForRequestingMoreMessages=_dateForRequestingMoreMessages;
@property(retain, nonatomic) NSMutableArray *addedMessages; // @synthesize addedMessages=_addedMessages;
@property(retain, nonatomic) NSData *dateSynced; // @synthesize dateSynced=_dateSynced;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
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
@property(nonatomic) BOOL hasMailboxSyncVersion;
@property(readonly, nonatomic) BOOL hasMailboxId;
@property(readonly, nonatomic) BOOL hasDateForRequestingMoreMessages;
- (id)addedMessageAtIndex:(NSUInteger)arg1;
- (NSUInteger)addedMessagesCount;
- (void)addAddedMessage:(id)arg1;
- (void)clearAddedMessages;
@property(readonly, nonatomic) BOOL hasDateSynced;
@property(nonatomic) BOOL hasFullSyncVersion;

@end

