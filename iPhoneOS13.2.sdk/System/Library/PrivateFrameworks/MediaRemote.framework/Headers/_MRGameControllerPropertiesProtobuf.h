//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface _MRGameControllerPropertiesProtobuf : PBCodable <NSCopying>
{
    int _buttonAUpDelay;
    unsigned int _playerIndex;
    int _profile;
    NSString *_vendorName;
    BOOL _supportsExtendedMotion;
   struct {
        unsigned int buttonAUpDelay:1;
        unsigned int playerIndex:1;
        unsigned int profile:1;
        unsigned int supportsExtendedMotion:1;
    } _has;
}

@property(nonatomic) BOOL supportsExtendedMotion; // @synthesize supportsExtendedMotion=_supportsExtendedMotion;
@property(nonatomic) int buttonAUpDelay; // @synthesize buttonAUpDelay=_buttonAUpDelay;
@property(retain, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(nonatomic) unsigned int playerIndex; // @synthesize playerIndex=_playerIndex;
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
@property(nonatomic) BOOL hasSupportsExtendedMotion;
- (int)StringAsProfile:(id)arg1;
- (id)profileAsString:(int)arg1;
@property(nonatomic) BOOL hasProfile;
@property(nonatomic) int profile; // @synthesize profile=_profile;
@property(nonatomic) BOOL hasButtonAUpDelay;
@property(readonly, nonatomic) BOOL hasVendorName;
@property(nonatomic) BOOL hasPlayerIndex;

@end

