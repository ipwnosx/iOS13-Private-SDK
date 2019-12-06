//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSString;

@interface FCPaidBundleConfiguration : NSObject <NSCopying>
{
    NSDictionary *_configDict;
    NSString *_storefrontID;
    NSString *_localizedStorefrontID;
    NSArray *_defaultSupportedStoreFronts;
    NSDictionary *_paywallConfigurationsByType;
    NSDictionary *_magazineGenresByGenre;
    NSDictionary *_subscriptionButtonConfigurationsByType;
}

+ (id)defaultPaidFeedIDByLocalizedStorefrontID;
+ (id)defaultVanityURLMappingResourceIDByLocalizedStorefrontID;
+ (id)defaultTagListIDByLocalizedStorefrontID;
+ (id)defaultEndOfPurchaseNoFamilySharingSetupArticleIDByLocalizedStorefrontID;
+ (id)defaultEndOfPurchaseFamilySharingSetupArticleIDByLocalizedStorefrontID;
+ (id)defaultFamilySharingLandingPageByLocalizedStorefrontID;
+ (id)defaultLandingPageByLocalizedStorefrontID;
+ (id)renewalLandingPageByLocalizedStorefrontID;
+ (id)defaultConfigurationForStorefrontID:(id)arg1;
@property(retain, nonatomic) NSDictionary *subscriptionButtonConfigurationsByType; // @synthesize subscriptionButtonConfigurationsByType=_subscriptionButtonConfigurationsByType;
@property(retain, nonatomic) NSDictionary *magazineGenresByGenre; // @synthesize magazineGenresByGenre=_magazineGenresByGenre;
@property(retain, nonatomic) NSDictionary *paywallConfigurationsByType; // @synthesize paywallConfigurationsByType=_paywallConfigurationsByType;
@property(readonly, copy, nonatomic) NSArray *defaultSupportedStoreFronts; // @synthesize defaultSupportedStoreFronts=_defaultSupportedStoreFronts;
@property(readonly, copy, nonatomic) NSString *localizedStorefrontID; // @synthesize localizedStorefrontID=_localizedStorefrontID;
@property(readonly, copy, nonatomic) NSString *storefrontID; // @synthesize storefrontID=_storefrontID;
@property(retain, nonatomic) NSDictionary *configDict; // @synthesize configDict=_configDict;
// - (void).cxx_destruct;
- (id)defaultMagazineGenres;
- (id)defaultSubscriptionButtonConfigs;
- (id)defaultPaywallConfigs;
@property(readonly, nonatomic) long long appLaunchUpsellNewSessionBackgroundTimeInterval;
@property(readonly, nonatomic) long long appLaunchUpsellRequiredAppLaunchCount;
@property(readonly, nonatomic) NSString *appLaunchUpsellArticleID;
@property(readonly, nonatomic) NSString *appLaunchUpsellInstanceID;
@property(readonly, nonatomic) NSUInteger appLaunchUpsellPaidVisibility;
@property(readonly, nonatomic) long long minFollowedMagazinesToHideSuggestionsRegular;
@property(readonly, nonatomic) long long minFollowedMagazinesToHideSuggestionsCompact;
@property(readonly, nonatomic) long long minimumPagesInPDFIssueBeforeRead;
@property(readonly, nonatomic) long long minimumArticlesInANFIssueBeforeRead;
@property(readonly, nonatomic) long long minimumReadIssuesInMyMagazines;
@property(readonly, nonatomic) long long recentIssuesMaxAge;
@property(readonly, nonatomic, getter=isCategoriesDownloadButtonEnabled) BOOL categoriesDownloadButtonEnabled;
@property(readonly, nonatomic) long long entitlementsCacheExpiredGracePeriodInSeconds;
@property(readonly, nonatomic) long long entitlementsGracePeriodInSeconds;
@property(readonly, nonatomic) NSArray *groupWhitelistedTagIds;
@property(readonly, nonatomic) long long criticalStorageAutomaticIssueDownloadTTL;
@property(readonly, nonatomic) long long criticalStorageManualIssueDownloadTTL;
@property(readonly, nonatomic) long long lowStorageAutomaticIssueDownloadTTL;
@property(readonly, nonatomic) long long lowStorageManualIssueDownloadTTL;
@property(readonly, nonatomic) long long normalStorageAutomaticIssueDownloadTTL;
@property(readonly, nonatomic) long long normalStorageManualIssueDownloadTTL;
@property(readonly, nonatomic) long long feedAutoRefreshMinimumInterval;
@property(readonly, nonatomic) NSString *paidBadgeTitle;
@property(readonly, nonatomic) NSString *freeBadgeTitle;
@property(readonly, nonatomic, getter=isPaidBadgeEnabledForSubscribers) BOOL paidBadgeEnabledForSubscribers;
@property(readonly, nonatomic, getter=isFreeBadgeEnabledForSubscribers) BOOL freeBadgeEnabledForSubscribers;
@property(readonly, nonatomic, getter=isPaidBadgeEnabledForNonSubscribers) BOOL paidBadgeEnabledForNonSubscribers;
@property(readonly, nonatomic, getter=isFreeBadgeEnabledForNonSubscribers) BOOL freeBadgeEnabledForNonSubscribers;
@property(readonly, nonatomic) long long bundleSubscriptionsGlobalMeteredCount;
@property(readonly, nonatomic) long long forYouMaxMagazineGroupsForPaidUsers;
@property(readonly, nonatomic) long long forYouMaxMagazineGroupsForTrialUsers;
@property(readonly, nonatomic) long long forYouMaxMagazineGroupsForFreeUsers;
@property(readonly, nonatomic) long long forYouMaxDailyPaidArticlesForFreeUsers;
@property(readonly, nonatomic) NSString *expirationAlertDescription;
@property(readonly, nonatomic) NSString *paidFeedID;
@property(readonly, nonatomic) long long vanityURLMappingRefreshRate;
@property(readonly, nonatomic) NSString *vanityURLMappingResourceID;
@property(readonly, nonatomic) NSString *recommendableIssuesTagList;
@property(readonly, nonatomic) long long featuredArticlesFetchLimit;
@property(readonly, nonatomic) NSString *featuredArticlesTagList;
@property(readonly, nonatomic) long long newIssuesNotificationDeliveryLocalTime;
@property(readonly, nonatomic) long long newIssuesCheckLocalTime;
@property(readonly, nonatomic) NSArray *offeredBundlePurchaseIDs;
@property(readonly, nonatomic) NSArray *restorableBundlePurchaseIDs;
@property(readonly, nonatomic) NSString *renewalLandingPageArticleID;
@property(readonly, nonatomic) NSString *endOfPurchaseNoFamilySharingSetupArticleID;
@property(readonly, nonatomic) NSString *endOfPurchaseFamilySharingSetupArticleID;
@property(readonly, nonatomic) NSString *familySharingLandingPageArticleID;
@property(readonly, nonatomic) NSString *defaultLandingPageArticleID;
@property(readonly, nonatomic, getter=isFamilySharingSetupEnabled) BOOL familySharingSetupEnabled;
@property(readonly, nonatomic, getter=isSharingIssuesEnabled) BOOL sharingIssuesEnabled;
@property(readonly, nonatomic, getter=isTemporaryAccessEnabled) BOOL temporaryAccessEnabled;
@property(readonly, nonatomic, getter=isPaidBundleVisible) BOOL paidBundleVisible;
@property(readonly, nonatomic, getter=areMagazinesEnabled) BOOL magazinesEnabled;
@property(readonly, nonatomic) long long deferredHardPaywallMinimumBodyTextLength;
@property(readonly, nonatomic) NSUInteger articleHardPaywallType;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2 localizedStorefrontID:(id)arg3 defaultSupportedStoreFronts:(id)arg4;
- (id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2;
- (id)initWithConfigDictionary:(id)arg1;
- (id)init;
@property(readonly, nonatomic, getter=isPaidBadgeEnabled) BOOL paidBadgeEnabled;
@property(readonly, nonatomic, getter=isFreeBadgeEnabled) BOOL freeBadgeEnabled;

@end

