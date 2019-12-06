//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FKFriendsManager;

@interface SOSLegacyContactsManager : NSObject
{
    FKFriendsManager *_friendsManager;
}

+ (BOOL)authorizedToUseContactStore;
+ (id)contactStore;
+ (void)preloadContactStoreIfNecessary;
@property(retain, nonatomic) FKFriendsManager *friendsManager; // @synthesize friendsManager=_friendsManager;
// - (void).cxx_destruct;
- (void)contactStoreDidChange;
- (id)_contactFromFriend:(id)arg1;
- (id)_SOSFormattedDestinationForFriend:(id)arg1 withDestinationNumber:(id)arg2;
- (id)_SOSDestinationsForFriend:(id)arg1;
- (id)SOSLegacyContactsDestinations;
- (id)_SOSFriends;
@property(readonly, nonatomic) BOOL SOSLegacyContactsExist;
- (id)SOSLegacyContacts;
- (void)dealloc;
- (id)init;

@end

