//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSDate, NSString;

@interface GKScoreInternal : GKInternalRepresentation
{
    GKPlayerInternal *_player;
    NSString *_leaderboardIdentifier;
    NSString *_groupLeaderboardIdentifier;
    NSString *_formattedValue;
    NSDate *_date;
    long long _value;
    NSUInteger _context;
    unsigned int _rank;
    BOOL _valueSet;
}

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL valueSet; // @synthesize valueSet=_valueSet;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(nonatomic) NSUInteger context; // @synthesize context=_context;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *formattedValue; // @synthesize formattedValue=_formattedValue;
@property(retain, nonatomic) NSString *groupLeaderboardIdentifier; // @synthesize groupLeaderboardIdentifier=_groupLeaderboardIdentifier;
@property(retain, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)serverRepresentation;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSString *groupCategory;
@property(retain, nonatomic) NSString *category;
@property(readonly, nonatomic) NSString *playerID;

@end

