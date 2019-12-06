//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString;

@interface SAMPPlayPodcasts : SADomainCommand
{
}

+ (id)playPodcastsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)playPodcasts;
- (BOOL)requiresResponse;
@property(nonatomic) BOOL startPlaying;
@property(copy, nonatomic) NSString *sharedUserIdFromPlayableITunesAccount;
@property(copy, nonatomic) NSString *requesterSharedUserId;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(copy, nonatomic) NSString *episodePlaybackOrder;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

