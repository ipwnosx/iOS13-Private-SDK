//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, SAMPPodcast;

@interface SAMPPlayPodcastEpisode : SADomainCommand
{
}

+ (id)playPodcastEpisodeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)playPodcastEpisode;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(nonatomic) BOOL startPlaying;
@property(copy, nonatomic) NSString *sharedUserIdFromPlayableITunesAccount;
@property(copy, nonatomic) NSString *requesterSharedUserId;
@property(retain, nonatomic) SAMPPodcast *podcastEpisode;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(copy, nonatomic) NSString *assetInfo;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

