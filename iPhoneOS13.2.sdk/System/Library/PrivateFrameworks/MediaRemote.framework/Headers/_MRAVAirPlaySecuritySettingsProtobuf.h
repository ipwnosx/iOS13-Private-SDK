//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface _MRAVAirPlaySecuritySettingsProtobuf : PBCodable <NSCopying>
{
    NSString *_password;
    int _securityType;
   struct {
        unsigned int securityType:1;
    } _has;
}

@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
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
- (int)StringAsSecurityType:(id)arg1;
- (id)securityTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSecurityType;
@property(nonatomic) int securityType; // @synthesize securityType=_securityType;
@property(readonly, nonatomic) BOOL hasPassword;

@end

