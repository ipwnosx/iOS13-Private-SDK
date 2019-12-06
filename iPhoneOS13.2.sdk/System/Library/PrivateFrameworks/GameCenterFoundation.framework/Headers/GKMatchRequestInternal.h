//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKTournamentInternal, NSArray, NSData, NSDictionary, NSString;

@interface GKMatchRequestInternal : GKInternalRepresentation
{
    NSUInteger _matchType;
    NSArray *_recipients;
    NSArray *_recipientPlayerIDs;
    NSString *_inviteMessage;
    NSDictionary *_localizableInviteMessage;
    NSData *_sessionToken;
    NSString *_rid;
    unsigned int _version;
    BOOL _preloadedMatch;
    NSUInteger _playerGroup;
    unsigned int _playerAttributes;
    unsigned char _minPlayers;
    unsigned char _maxPlayers;
    unsigned char _defaultNumberOfPlayers;
    BOOL _restrictToAutomatch;
    GKTournamentInternal *_tournamentForInvitePool;
}

+ (id)secureCodedPropertyKeys;
@property(retain, nonatomic) GKTournamentInternal *tournamentForInvitePool; // @synthesize tournamentForInvitePool=_tournamentForInvitePool;
@property(nonatomic) BOOL restrictToAutomatch; // @synthesize restrictToAutomatch=_restrictToAutomatch;
@property(nonatomic) unsigned char defaultNumberOfPlayers; // @synthesize defaultNumberOfPlayers=_defaultNumberOfPlayers;
@property(nonatomic, getter=isPreloadedMatch) BOOL preloadedMatch; // @synthesize preloadedMatch=_preloadedMatch;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(retain, nonatomic) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(nonatomic) NSUInteger matchType; // @synthesize matchType=_matchType;
@property(retain, nonatomic) NSDictionary *localizableInviteMessage; // @synthesize localizableInviteMessage=_localizableInviteMessage;
@property(copy, nonatomic) NSString *inviteMessage; // @synthesize inviteMessage=_inviteMessage;
@property(retain, nonatomic) NSArray *recipientPlayerIDs; // @synthesize recipientPlayerIDs=_recipientPlayerIDs;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) unsigned int playerAttributes; // @synthesize playerAttributes=_playerAttributes;
@property(nonatomic) NSUInteger playerGroup; // @synthesize playerGroup=_playerGroup;
@property(nonatomic) unsigned char maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property(nonatomic) unsigned char minPlayers; // @synthesize minPlayers=_minPlayers;
- (BOOL)hasGuestPlayers;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

