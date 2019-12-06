//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

@interface NPKProtoBalanceReminderForBalanceAndPassResponse : PBCodable <NSCopying>
{
    NSData *_balanceReminderBytes;
    NSData *_errorData;
    BOOL _pending;
//     CDStruct_eab6c78c _has;
}

@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSData *balanceReminderBytes; // @synthesize balanceReminderBytes=_balanceReminderBytes;
@property(nonatomic) BOOL pending; // @synthesize pending=_pending;
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
@property(readonly, nonatomic) BOOL hasErrorData;
@property(readonly, nonatomic) BOOL hasBalanceReminderBytes;
@property(nonatomic) BOOL hasPending;

@end

