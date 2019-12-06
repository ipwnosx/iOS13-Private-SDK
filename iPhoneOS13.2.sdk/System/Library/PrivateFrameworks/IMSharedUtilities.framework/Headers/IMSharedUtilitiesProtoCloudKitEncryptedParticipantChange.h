//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString;

@interface IMSharedUtilitiesProtoCloudKitEncryptedParticipantChange : PBCodable <NSCopying>
{
    long long _participantChangeType;
    NSString *_otherHandle;
    NSData *_padding;
    unsigned int _version;
   struct {
        unsigned int participantChangeType:1;
        unsigned int version:1;
    } _has;
}

@property(retain, nonatomic) NSData *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) NSString *otherHandle; // @synthesize otherHandle=_otherHandle;
@property(nonatomic) long long participantChangeType; // @synthesize participantChangeType=_participantChangeType;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPadding;
@property(readonly, nonatomic) BOOL hasOtherHandle;
@property(nonatomic) BOOL hasParticipantChangeType;
@property(nonatomic) BOOL hasVersion;
- (void)dealloc;

@end

