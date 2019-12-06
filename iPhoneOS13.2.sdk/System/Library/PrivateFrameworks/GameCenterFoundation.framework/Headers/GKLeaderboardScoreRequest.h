//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GKPlayerInternal, NSString;

@interface GKLeaderboardScoreRequest : NSObject <NSSecureCoding>
{
    GKPlayerInternal *_playerInternal;
    NSString *_gameBundleID;
    NSString *_identifier;
    NSString *_groupIdentifier;
    BOOL _friendsOnly;
    long long _timeScope;
    BOOL _prefetch;
}

+ (BOOL)supportsSecureCoding;
+ (id)requestForPlayerInternals:(id)arg1;
+ (id)requestForRankRange:(NSRange *)arg1;
@property(nonatomic, getter=isPrefetch) BOOL prefetch; // @synthesize prefetch=_prefetch;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(nonatomic) BOOL friendsOnly; // @synthesize friendsOnly=_friendsOnly;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *gameBundleID; // @synthesize gameBundleID=_gameBundleID;
@property(copy, nonatomic) GKPlayerInternal *playerInternal; // @synthesize playerInternal=_playerInternal;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

