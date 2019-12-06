//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NPKProtoStandaloneVerificationChannel : PBCodable <NSCopying>
{
    NSString *_contactPoint;
    NSString *_identifier;
    NSString *_organizationName;
    NSString *_sourceAddress;
    int _type;
    NSString *_typeDescription;
    NSString *_typeDescriptionUnlocalized;
    BOOL _requiresUserInteraction;
   struct {
        unsigned int type:1;
        unsigned int requiresUserInteraction:1;
    } _has;
}

@property(retain, nonatomic) NSString *sourceAddress; // @synthesize sourceAddress=_sourceAddress;
@property(retain, nonatomic) NSString *contactPoint; // @synthesize contactPoint=_contactPoint;
@property(nonatomic) BOOL requiresUserInteraction; // @synthesize requiresUserInteraction=_requiresUserInteraction;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSString *typeDescription; // @synthesize typeDescription=_typeDescription;
@property(retain, nonatomic) NSString *typeDescriptionUnlocalized; // @synthesize typeDescriptionUnlocalized=_typeDescriptionUnlocalized;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
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
@property(readonly, nonatomic) BOOL hasSourceAddress;
@property(readonly, nonatomic) BOOL hasContactPoint;
@property(nonatomic) BOOL hasRequiresUserInteraction;
@property(readonly, nonatomic) BOOL hasOrganizationName;
@property(readonly, nonatomic) BOOL hasTypeDescription;
@property(readonly, nonatomic) BOOL hasTypeDescriptionUnlocalized;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL hasIdentifier;

@end

