//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, NSNumber, STManagementState;
@protocol OS_dispatch_queue;

@interface WBUFeatureManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    ACAccountStore *_accountStore;
    ACAccount *_account;
    NSNumber *_cachedShouldRequestMoreTime;
    STManagementState *_managementState;
    BOOL _autoFillAvailable;
    BOOL _bookmarksAvailable;
    BOOL _readingListAvailable;
    BOOL _offlineReadingListAvailable;
    BOOL _cloudSyncAvailable;
    BOOL _inMemoryBookmarkChangeTrackingAvailable;
}

+ (BOOL)shouldOfferVirtualCards;
+ (id)webui_sharedFeatureManager;
+ (long long)accessLevel;
@property(readonly, nonatomic, getter=isInMemoryBookmarkChangeTrackingAvailable) BOOL inMemoryBookmarkChangeTrackingAvailable; // @synthesize inMemoryBookmarkChangeTrackingAvailable=_inMemoryBookmarkChangeTrackingAvailable;
@property(readonly, nonatomic, getter=isCloudSyncAvailable) BOOL cloudSyncAvailable; // @synthesize cloudSyncAvailable=_cloudSyncAvailable;
@property(readonly, nonatomic, getter=isOfflineReadingListAvailable) BOOL offlineReadingListAvailable; // @synthesize offlineReadingListAvailable=_offlineReadingListAvailable;
@property(readonly, nonatomic, getter=isReadingListAvailable) BOOL readingListAvailable; // @synthesize readingListAvailable=_readingListAvailable;
@property(readonly, nonatomic, getter=isBookmarksAvailable) BOOL bookmarksAvailable; // @synthesize bookmarksAvailable=_bookmarksAvailable;
@property(readonly, nonatomic, getter=isAutoFillAvailable) BOOL autoFillAvailable; // @synthesize autoFillAvailable=_autoFillAvailable;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isAirDropPasswordsAvailable) BOOL airDropPasswordsAvailable;
- (void)determineIfUserIsRestrictedByScreenTimeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)determineIfPrivateBrowsingIsAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isUserRemotelyManagedAndLocallyRestricted) BOOL userRemotelyManagedAndLocallyRestricted;
@property(readonly, nonatomic, getter=isPrivateBrowsingAvailable) BOOL privateBrowsingAvailable;
@property(readonly, nonatomic, getter=isCloudTabsAvailable) BOOL cloudTabsAvailable;
@property(readonly, nonatomic, getter=isCloudHistorySyncAvailable) BOOL cloudHistorySyncAvailable;
@property(readonly, nonatomic, getter=isCloudKitBookmarksAvailable) BOOL cloudKitBookmarksAvailable;
@property(readonly, nonatomic, getter=isCreditCardStorageAvailable) BOOL creditCardStorageAvailable;
- (BOOL)_isUsingManagedAppleID;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_updateAppleAccount;
- (void)_setupAccountStore;
- (void)_updateFeatureAvailabilityByAccessLevel;
- (void)dealloc;
- (id)init;

@end

