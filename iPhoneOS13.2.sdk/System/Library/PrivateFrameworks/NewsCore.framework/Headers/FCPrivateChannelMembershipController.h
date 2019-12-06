//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCPrivateDataController.h>

#import <NewsCore/FCAppActivityObserving-Protocol.h>

@class NSDictionary, NSMutableSet;

@interface FCPrivateChannelMembershipController : FCPrivateDataController <FCAppActivityObserving>
{
    NSDictionary *_membershipsByChannelID;
    NSMutableSet *_membershipReferences;
}

+ (id)desiredKeys;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (NSUInteger)localStoreVersion;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (BOOL)requiresHighPriorityFirstSync;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresPushNotificationSupport;
@property(retain, nonatomic) NSMutableSet *membershipReferences; // @synthesize membershipReferences=_membershipReferences;
@property(retain, nonatomic) NSDictionary *membershipsByChannelID; // @synthesize membershipsByChannelID=_membershipsByChannelID;
// - (void).cxx_destruct;
- (void)_fetchPrivateChannelMembershipsWithCompletion:(CDUnknownBlockType)arg1;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)changedMembershipsFrom:(id)arg1 toMemberships:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)referenceToMembershipForMembershipID:(id)arg1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (void)_refreshPublicMembershipsWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshPublicMemberships;
- (void)fetchMembershipsWithIDs:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeItemWithItemID:(id)arg1;
- (void)addItem:(id)arg1 toStore:(BOOL)arg2;
- (void)loadLocalCachesFromStore;
- (BOOL)shouldShowAllDraftContent;
- (id)membershipChannelIDs;
- (BOOL)hasMemberships;
- (void)isAllowedToSeeIssueID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)isAllowedToSeeArticleID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)feedDescriptorForDraftFeedForChannel:(id)arg1;
- (BOOL)isAllowedToSeeDraftsForChannelID:(id)arg1;
- (BOOL)isMemberOfChannelID:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;

@end

