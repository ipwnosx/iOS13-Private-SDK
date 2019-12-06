//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString, NWPBAgentClass;

@interface NWPBAgent : PBCodable <NSCopying>
{
    NWPBAgentClass *_agentClass;
    NSData *_agentData;
    NSString *_agentDescription;
    NSString *_agentIdentifier;
    BOOL _active;
    BOOL _networkProvider;
    BOOL _nexusProvider;
    BOOL _userActivated;
    BOOL _voluntary;
    struct {
        unsigned int active:1;
        unsigned int networkProvider:1;
        unsigned int nexusProvider:1;
        unsigned int userActivated:1;
        unsigned int voluntary:1;
    } _has;
}

@property(retain, nonatomic) NSData *agentData; // @synthesize agentData=_agentData;
@property(nonatomic) BOOL nexusProvider; // @synthesize nexusProvider=_nexusProvider;
@property(nonatomic) BOOL networkProvider; // @synthesize networkProvider=_networkProvider;
@property(nonatomic) BOOL voluntary; // @synthesize voluntary=_voluntary;
@property(nonatomic) BOOL userActivated; // @synthesize userActivated=_userActivated;
@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(retain, nonatomic) NSString *agentDescription; // @synthesize agentDescription=_agentDescription;
@property(retain, nonatomic) NSString *agentIdentifier; // @synthesize agentIdentifier=_agentIdentifier;
@property(retain, nonatomic) NWPBAgentClass *agentClass; // @synthesize agentClass=_agentClass;
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
@property(readonly, nonatomic) BOOL hasAgentData;
@property(nonatomic) BOOL hasNexusProvider;
@property(nonatomic) BOOL hasNetworkProvider;
@property(nonatomic) BOOL hasVoluntary;
@property(nonatomic) BOOL hasUserActivated;
@property(nonatomic) BOOL hasActive;
@property(readonly, nonatomic) BOOL hasAgentDescription;
@property(readonly, nonatomic) BOOL hasAgentIdentifier;
@property(readonly, nonatomic) BOOL hasAgentClass;

@end

