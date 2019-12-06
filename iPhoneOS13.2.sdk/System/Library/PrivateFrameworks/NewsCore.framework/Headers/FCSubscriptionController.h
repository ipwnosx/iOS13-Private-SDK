//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAppActivityObserving-Protocol.h>
#import <NewsCore/FCSubscriptionListObserving-Protocol.h>

@class FCNotificationController, FCSubscriptionList, FCTagController, FCThreadSafeMutableDictionary, FCThreadSafeMutableSet, NSHashTable;
@protocol FCCoreConfigurationManager, FCPurchaseProviderType;

@interface FCSubscriptionController : NSObject <FCSubscriptionListObserving, FCAppActivityObserving>
{
    FCSubscriptionList *_subscriptionList;
    FCTagController *_tagController;
    FCThreadSafeMutableDictionary *_subscribedTagsByTagID;
    FCThreadSafeMutableSet *_newlyAddedSubscriptions;
    NSHashTable *_observers;
    FCNotificationController *_notificationController;
    id <FCPurchaseProviderType> _purchaseProvider;
    id <FCCoreConfigurationManager> _configurationManager;
}

@property(retain, nonatomic) id <FCCoreConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
@property(retain, nonatomic) id <FCPurchaseProviderType> purchaseProvider; // @synthesize purchaseProvider=_purchaseProvider;
@property(retain, nonatomic) FCNotificationController *notificationController; // @synthesize notificationController=_notificationController;
@property(copy, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) FCThreadSafeMutableSet *newlyAddedSubscriptions; // @synthesize newlyAddedSubscriptions=_newlyAddedSubscriptions;
@property(retain, nonatomic) FCThreadSafeMutableDictionary *subscribedTagsByTagID; // @synthesize subscribedTagsByTagID=_subscribedTagsByTagID;
@property(retain, nonatomic) FCTagController *tagController; // @synthesize tagController=_tagController;
@property(retain, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
// - (void).cxx_destruct;
- (void)_handleNonTagSubscriptionType:(NSUInteger)arg1 addedSubscriptionsByType:(id)arg2 removedSubscriptionsByType:(id)arg3 changedSubscriptionsByType:(id)arg4 eventInitiationLevel:(long long)arg5;
- (void)_handleTagSubscriptionsAdded:(id)arg1 tagSubscriptionsChanged:(id)arg2 tagSubscriptionsMoved:(id)arg3 tagSubscriptionsRemoved:(id)arg4 eventInitiationLevel:(long long)arg5;
- (void)_notifyOfTagsWithNotificationSupport:(id)arg1;
- (void)_notifyOfTagsAdded:(id)arg1 tagsChanged:(id)arg2 tagsMoved:(id)arg3 tagsRemoved:(id)arg4 subscriptionType:(NSUInteger)arg5 eventInitiationLevel:(long long)arg6;
- (void)_prewarmFeedNavAssetsInOrderedSubscribedTags:(id)arg1 limit:(NSUInteger)arg2;
- (void)_fetchTagsForIDs:(id)arg1 maxCachedAge:(double)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_integrateTags:(id)arg1 eventInitiationLevel:(long long)arg2;
- (void)_fetchMissingTagsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_refreshNotificationRegistrations;
- (void)_updateNotificationsForPurchaseTagIDs:(id)arg1 isPaid:(BOOL)arg2;
- (void)_purchaseListDidRemoveTagIDs:(id)arg1;
- (void)_purchaseListDidAddTagIDs:(id)arg1;
- (void)activityObservingApplicationDidEnterBackground;
- (void)subscriptionListDidResetToEmpty:(id)arg1;
- (void)subscriptionList:(id)arg1 didAddSubscriptions:(id)arg2 changeSubscriptions:(id)arg3 moveSubscriptions:(id)arg4 removeSubscriptions:(id)arg5 eventInitiationLevel:(long long)arg6;
- (BOOL)addGroupableSubscriptionForTagID:(id)arg1 origin:(NSUInteger)arg2 eventInitiationLevel:(long long)arg3;
- (void)addAutoFavoriteSubscriptionForTagIDs:(id)arg1 groupableSubscriptionForTagIDs:(id)arg2 originProvider:(CDUnknownBlockType)arg3 eventInitiationLevelProvider:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeAllAutoFavoriteSubscriptions:(CDUnknownBlockType)arg1;
- (id)externalSignalDrivenAutoFavorites;
- (BOOL)addIgnoredSubscriptionForTagID:(id)arg1 groupID:(id)arg2 eventInitiationLevel:(long long)arg3;
- (BOOL)addIgnoredSubscriptionForTagID:(id)arg1 eventInitiationLevel:(long long)arg2;
- (BOOL)hasIgnoredSubscriptionForTagID:(id)arg1;
- (BOOL)addMutedSubscriptionForTagID:(id)arg1 groupID:(id)arg2 eventInitiationLevel:(long long)arg3;
- (BOOL)addMutedSubscriptionForTagID:(id)arg1 eventInitiationLevel:(long long)arg2;
- (BOOL)hasMutedSubscriptionForTagID:(id)arg1;
- (BOOL)hasAutoFavoriteSubscriptionForTagID:(id)arg1;
- (BOOL)moveSubscriptionForTagID:(id)arg1 toIndex:(NSUInteger)arg2;
- (id)newlySubscribedTagIDsInDateRange:(id)arg1;
- (void)fetchSubscribedTagsWithCallbackQueue:(id)arg1 preferCache:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAllTagsWithCallbackQueue:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)refreshSubscriptionTags;
- (id)subscriptionSurfacingHeadline:(id)arg1;
- (BOOL)hasNotificationsEnabledForTag:(id)arg1;
- (BOOL)setNotificationsEnabled:(BOOL)arg1 forTagID:(id)arg2 error:(id )arg3;
- (BOOL)setNotificationsEnabled:(BOOL)arg1 forTag:(id)arg2 error:(id )arg3;
- (void)removeSubscriptionForTagID:(id)arg1 type:(NSUInteger)arg2 eventInitiationLevel:(long long)arg3;
- (void)removeAutoFavoriteSubscriptionToTag:(id)arg1 eventInitiationLevel:(long long)arg2;
- (void)removeSubscriptionToTag:(id)arg1 eventInitiationLevel:(long long)arg2;
- (BOOL)addSubscriptionToTag:(id)arg1 eventInitiationLevel:(long long)arg2 options:(long long)arg3 error:(id )arg4;
- (BOOL)addSubscriptionToTag:(id)arg1 notificationsEnabled:(BOOL)arg2 error:(id )arg3 eventInitiationLevel:(long long)arg4;
- (BOOL)addSubscriptionToTag:(id)arg1 error:(id )arg2 eventInitiationLevel:(long long)arg3;
- (id)subscriptionForTagID:(id)arg1;
- (id)subscriptionForTag:(id)arg1 type:(NSUInteger)arg2;
- (id)subscriptionForTag:(id)arg1;
- (BOOL)hasSubscriptionToTagID:(id)arg1;
- (BOOL)hasSubscriptionToTag:(id)arg1;
- (BOOL)canAddSubscriptionWithError:(id )arg1;
- (BOOL)canAddSubscription;
- (id)subscriptionsWithType:(NSUInteger)arg1;
- (id)tagIDsWithType:(NSUInteger)arg1;
- (id)groupableTagIDs;
- (id)ignoredTagIDs;
- (id)demoAutoFavoriteChannelIDs;
- (id)autoFavoriteTagIDs;
- (id)mutedTagIDs;
- (id)subscribedTagIDs;
- (id)cachedSubscribedTags;
- (id)orderedCachedSubscribedTags;
- (id)subscribedTagIDsWithNotificationsEnabled;
- (id)subscriptions;
- (id)subscribedTagForTagID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithSubscriptionList:(id)arg1 tagController:(id)arg2 notificationController:(id)arg3 purchaseProvider:(id)arg4 configurationManager:(id)arg5 appActivityMonitor:(id)arg6;
- (id)init;

@end

