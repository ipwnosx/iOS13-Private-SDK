//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSData, NSString;

@interface NPKProtoCommutePlanReminderForCommutePlanAndPassRequest : PBRequest <NSCopying>
{
    NSData *_commutePlanBytes;
    NSString *_uniqueID;
}

@property(retain, nonatomic) NSData *commutePlanBytes; // @synthesize commutePlanBytes=_commutePlanBytes;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
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
@property(readonly, nonatomic) BOOL hasCommutePlanBytes;
@property(readonly, nonatomic) BOOL hasUniqueID;

@end

