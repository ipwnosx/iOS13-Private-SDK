//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKFriendPlayerInternal.h>

@class NSArray, NSNumber, NSString;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal
{
    NSString *_accountName;
    NSArray *_emailAddresses;
    NSString *_facebookUserID;
    NSNumber *_iCloudUserID;
    unsigned short _numberOfRequests;
    unsigned short _numberOfTurns;
    unsigned short _numberOfChallenges;
    NSUInteger _loginStatus;
}

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;
@property NSUInteger loginStatus; // @synthesize loginStatus=_loginStatus;
- (void)setNumberOfChallenges:(unsigned short)arg1;
- (unsigned short)numberOfChallenges;
- (void)setNumberOfTurns:(unsigned short)arg1;
- (unsigned short)numberOfTurns;
- (void)setNumberOfRequests:(unsigned short)arg1;
- (unsigned short)numberOfRequests;
- (id)iCloudUserID;
- (void)setFacebookUserID:(id)arg1;
- (id)facebookUserID;
- (void)setEmailAddresses:(id)arg1;
- (id)emailAddresses;
- (void)setAccountName:(id)arg1;
- (id)accountName;
- (int)defaultFamiliarity;
- (void)setICloudUserID:(id)arg1;
- (BOOL)isFriend;
- (BOOL)isLocalPlayer;
- (void)setPhotoPending:(BOOL)arg1;
- (BOOL)isPhotoPending;
- (void)setFindable:(BOOL)arg1;
- (BOOL)isFindable;
- (void)setUnderage:(BOOL)arg1;
- (BOOL)isUnderage;
- (void)setDefaultNickname:(BOOL)arg1;
- (BOOL)isDefaultNickname;
- (void)setPurpleBuddyAccount:(BOOL)arg1;
- (BOOL)isPurpleBuddyAccount;
- (id)minimalInternal;
- (void)dealloc;

@end

