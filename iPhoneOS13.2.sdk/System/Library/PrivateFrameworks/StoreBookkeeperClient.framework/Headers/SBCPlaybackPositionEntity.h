//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, SBCPlaybackPositionDomain;

@interface SBCPlaybackPositionEntity : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _hasBeenPlayed;
    SBCPlaybackPositionDomain *_playbackPositionDomain;
    NSString *_ubiquitousIdentifier;
    long long _foreignDatabaseEntityID;
    double _bookmarkTimestamp;
    double _bookmarkTime;
    NSUInteger _userPlayCount;
}

+ (BOOL)supportsSecureCoding;
+ (id)ubiquitousIdentifierWithiTunesUFeedURL:(id)arg1 feedGUID:(id)arg2;
+ (id)ubiquitousIdentifierWithPodcastFeedURL:(id)arg1 feedGUID:(id)arg2;
+ (id)ubiquitousIdentifierWithItemTitle:(id)arg1 albumName:(id)arg2 itemArtistName:(id)arg3;
+ (id)ubiquitousIdentifierWithUniqueStoreID:(long long)arg1;
@property(nonatomic) BOOL hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property(nonatomic) NSUInteger userPlayCount; // @synthesize userPlayCount=_userPlayCount;
@property(nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property(nonatomic) double bookmarkTimestamp; // @synthesize bookmarkTimestamp=_bookmarkTimestamp;
@property(readonly, nonatomic) long long foreignDatabaseEntityID; // @synthesize foreignDatabaseEntityID=_foreignDatabaseEntityID;
@property(readonly, nonatomic) NSString *ubiquitousIdentifier; // @synthesize ubiquitousIdentifier=_ubiquitousIdentifier;
@property(readonly, nonatomic) SBCPlaybackPositionDomain *playbackPositionDomain; // @synthesize playbackPositionDomain=_playbackPositionDomain;
// - (void).cxx_destruct;
- (BOOL)bookmarkTimestampModified;
- (BOOL)bookmarkTimeModified;
- (BOOL)userPlayCountModified;
- (BOOL)hasBeenPlayedModified;
- (id)copyWithValuesFromSBKUniversalPlaybackPositionMetadata:(id)arg1;
- (id)SBKUniversalPlaybackPositionMetadata;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPlaybackPositionDomain:(id)arg1 ubiquitousIdentifier:(id)arg2 foreignDatabaseEntityID:(long long)arg3;

@end

