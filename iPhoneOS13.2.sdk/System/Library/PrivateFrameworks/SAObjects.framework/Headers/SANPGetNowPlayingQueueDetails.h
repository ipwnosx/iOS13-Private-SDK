//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber;

@interface SANPGetNowPlayingQueueDetails : SABaseClientBoundCommand
{
}

+ (id)getNowPlayingQueueDetailsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNowPlayingQueueDetails;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(nonatomic) long long previousItemCount;
@property(copy, nonatomic) NSNumber *preemptiveNowPlayingQueueDetailsTimeOut;
@property(nonatomic) long long nextItemCount;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

