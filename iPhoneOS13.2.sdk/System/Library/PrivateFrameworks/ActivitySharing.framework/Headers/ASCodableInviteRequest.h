//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class ASCodableActivityDataPreview, NSString;

@interface ASCodableInviteRequest : PBRequest <NSCopying>
{
    ASCodableActivityDataPreview *_activityDataPreview;
    NSString *_handshakeToken;
    NSString *_inviterBuildNumber;
    NSString *_inviterCallerID;
    NSString *_inviterCloudKitAddress;
    unsigned int _inviterVersion;
   struct {
        unsigned int inviterVersion:1;
    } _has;
}

@property(retain, nonatomic) ASCodableActivityDataPreview *activityDataPreview; // @synthesize activityDataPreview=_activityDataPreview;
@property(nonatomic) unsigned int inviterVersion; // @synthesize inviterVersion=_inviterVersion;
@property(retain, nonatomic) NSString *inviterBuildNumber; // @synthesize inviterBuildNumber=_inviterBuildNumber;
@property(retain, nonatomic) NSString *inviterCallerID; // @synthesize inviterCallerID=_inviterCallerID;
@property(retain, nonatomic) NSString *inviterCloudKitAddress; // @synthesize inviterCloudKitAddress=_inviterCloudKitAddress;
@property(retain, nonatomic) NSString *handshakeToken; // @synthesize handshakeToken=_handshakeToken;
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
@property(readonly, nonatomic) BOOL hasActivityDataPreview;
@property(nonatomic) BOOL hasInviterVersion;
@property(readonly, nonatomic) BOOL hasInviterBuildNumber;
@property(readonly, nonatomic) BOOL hasInviterCallerID;
@property(readonly, nonatomic) BOOL hasInviterCloudKitAddress;
@property(readonly, nonatomic) BOOL hasHandshakeToken;

@end

