//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NNMKProtoMessageStatusUpdate : PBCodable <NSCopying>
{
    NSString *_messageId;
    unsigned int _statusVersion;
    unsigned int _updatedStatus;
   struct {
        unsigned int statusVersion:1;
        unsigned int updatedStatus:1;
    } _has;
}

@property(nonatomic) unsigned int statusVersion; // @synthesize statusVersion=_statusVersion;
@property(nonatomic) unsigned int updatedStatus; // @synthesize updatedStatus=_updatedStatus;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
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
@property(nonatomic) BOOL hasStatusVersion;
@property(nonatomic) BOOL hasUpdatedStatus;
@property(readonly, nonatomic) BOOL hasMessageId;

@end

