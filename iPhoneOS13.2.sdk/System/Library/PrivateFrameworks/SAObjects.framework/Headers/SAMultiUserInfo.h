//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray;

@interface SAMultiUserInfo : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)multiUserInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)multiUserInfo;
- (BOOL)requiresResponse;
@property(nonatomic) BOOL voiceProfilesAreInFlight;
@property(copy, nonatomic) NSArray *multiUserPitchComposition;
@property(copy, nonatomic) NSArray *homeMembers;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

