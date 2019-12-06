//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

@interface NPKProtoSecureElementSetNewAuthRandomResponse : PBCodable <NSCopying>
{
    NSData *_challengeResponse;
    NSData *_cryptogram;
    BOOL _pending;
    BOOL _success;
//     CDStruct_5ee4970e _has;
}

@property(retain, nonatomic) NSData *challengeResponse; // @synthesize challengeResponse=_challengeResponse;
@property(retain, nonatomic) NSData *cryptogram; // @synthesize cryptogram=_cryptogram;
@property(nonatomic) BOOL success; // @synthesize success=_success;
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
@property(readonly, nonatomic) BOOL hasChallengeResponse;
@property(readonly, nonatomic) BOOL hasCryptogram;
@property(nonatomic) BOOL hasSuccess;
@property(nonatomic) BOOL hasPending;

@end

