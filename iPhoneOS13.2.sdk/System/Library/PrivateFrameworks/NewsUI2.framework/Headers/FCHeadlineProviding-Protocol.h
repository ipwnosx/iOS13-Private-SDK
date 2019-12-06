//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI2/FCClassifiable-Protocol.h>
#import <NewsUI2/FCFeedElement-Protocol.h>
#import <NewsUI2/FCFeedTransformationItem-Protocol.h>
#import <NewsUI2/NFCopying-Protocol.h>

@class FCArticleContentManifest, FCCoverArt, FCFeedPersonalizedItemScoreProfile, FCHeadlineExperimentalTitleMetadata, FCHeadlineThumbnail, FCIssue, FCTopStoriesStyleConfiguration, NSArray, NSData, NSDate, NSSet, NSString, NSURL;
@protocol FCChannelProviding, FCContentContext, FCHeadlineStocksFields, FCNativeAdProviding;

@protocol FCHeadlineProviding <NSObject, NFCopying, FCFeedElement, FCClassifiable, FCFeedTransformationItem>
@property(nonatomic, readonly) NSArray *publisherSpecifiedArticleIDs;
@property(nonatomic, readonly) NSString *articleRecirculationConfigJSON;
@property(nonatomic, readonly) id <FCNativeAdProviding> associatedAd;
@property(nonatomic, readonly) BOOL showPublisherLogo;
@property(nonatomic, readonly) BOOL isBlockedExplicitContent;
@property(nonatomic, readonly) BOOL showSubscriptionRequiredText;
@property(nonatomic, readonly) NSDate *displayDate;
@property(nonatomic, readonly) FCTopStoriesStyleConfiguration *storyStyle;
@property(nonatomic, readonly) NSUInteger storyType;
@property(nonatomic, readonly) double globalUserFeedback;
@property(nonatomic, readonly) NSUInteger feedOrder;
@property(nonatomic, readonly) BOOL usesImageOnTopLayout;
@property(nonatomic, readonly) NSUInteger topStoryType;
@property(nonatomic, readonly) BOOL isTopStory;
@property(nonatomic, readonly) FCFeedPersonalizedItemScoreProfile *scoreProfile;
@property(nonatomic, readonly) double tileProminenceScore;
@property(nonatomic, readonly) NSSet *surfacedByTagIDs;
@property(nonatomic, readonly) NSString *surfacedByBinID;
@property(nonatomic, readonly) NSString *surfacedByTopicID;
@property(nonatomic, readonly) NSString *surfacedByChannelID;
@property(nonatomic, readonly) NSString *surfacedBySectionID;
- (BOOL)isHiddenFromFeeds;
- (BOOL)isBoundToContext;
- (BOOL)isHiddenFromAutoFavorites;
- (BOOL)isPressRelease;
@property(nonatomic, readonly) BOOL showMinimalChrome;
@property(nonatomic, readonly) BOOL needsRapidUpdates;
@property(nonatomic, readonly) NSString *language;
@property(nonatomic, readonly) NSURL *videoCallToActionURL;
@property(nonatomic, readonly) NSString *videoCallToActionTitle;
@property(nonatomic, readonly) FCCoverArt *coverArt;
- (BOOL)isPaid;
@property(nonatomic, readonly) long long minimumNewsVersion;
@property(nonatomic, readonly) NSArray *moreFromPublisherArticleIDs;
@property(nonatomic, readonly) NSArray *relatedArticleIDs;
@property(nonatomic, readonly) NSString *localDraftPath;
@property(nonatomic, readonly) BOOL isDraft;
- (BOOL)isDeleted;
@property(nonatomic, readonly) NSArray *allowedStorefrontIDs;
@property(nonatomic, readonly) NSArray *blockedStorefrontIDs;
@property(nonatomic, readonly) NSArray *iAdSectionIDs;
@property(nonatomic, readonly) NSArray *iAdKeywords;
@property(nonatomic, readonly) NSArray *iAdCategories;
@property(nonatomic, readonly) NSString *sponsoredBy;
- (BOOL)isDisplayingAsNativeAd;
- (BOOL)isSponsored;
- (BOOL)isFeatureCandidate;
@property(nonatomic, readonly) double videoDuration;
@property(nonatomic, readonly) NSURL *videoURL;
@property(nonatomic, readonly) NSArray *topicIDs;
@property(nonatomic, readonly) NSArray *topics;
@property(nonatomic, readonly) NSDate *lastFetchedDate;
@property(nonatomic, readonly) NSDate *lastModifiedDate;
@property(nonatomic, readonly) NSURL *contentURL;
@property(nonatomic, readonly) NSString *accessoryText;
@property(nonatomic, readonly) NSString *shortExcerpt;
@property(nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidgetHQ;
@property(nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidget;
@property(nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidgetLQ;
@property(nonatomic, readonly) FCHeadlineThumbnail *thumbnailUltraHQ;
@property(nonatomic, readonly) FCHeadlineThumbnail *thumbnailHQ;
@property(nonatomic, readonly) FCHeadlineThumbnail *thumbnailMedium;
@property(nonatomic, readonly) FCHeadlineThumbnail *thumbnail;
@property(nonatomic, readonly) FCHeadlineThumbnail *thumbnailLQ;
@property(nonatomic, readonly) BOOL hasThumbnail;
@property(nonatomic, readonly) CGRect thumbnailFocalFrame;
@property(nonatomic, readonly) NSString *sourceName;
@property(nonatomic, readonly) id <FCChannelProviding> sourceChannel;
@property(nonatomic, readonly) long long backendArticleVersion;
@property(nonatomic, readonly) NSDate *publishDate;
@property(nonatomic, readonly) NSString *titleCompact;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) NSString *primaryAudience;
@property(nonatomic, readonly) NSUInteger contentType;
@property(nonatomic, readonly) NSString *clusterID;
@property(nonatomic, readonly) NSString *referencedArticleID;
@property(nonatomic, readonly) NSString *articleID;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSString *versionIdentifier;

@optional
@property(nonatomic, readonly) BOOL useTransparentNavigationBar;
@property(nonatomic, readonly) BOOL isLocalDraft;
@property(nonatomic, readonly) NSString *callToActionText;
@property(nonatomic, readonly) NSArray *linkedIssueIDs;
@property(nonatomic, readonly) NSArray *linkedArticleIDs;
@property(nonatomic, readonly) BOOL showBundleSoftPaywall;
- (BOOL)isIssueOnly;
@property(nonatomic, readonly) FCIssue *masterIssue;
@property(nonatomic, readonly) BOOL webEmbedsEnabled;
@property(nonatomic, readonly) FCHeadlineExperimentalTitleMetadata *experimentalTitleMetadata;
@property(nonatomic, readonly) NSData *backingArticleRecordData;
@property(nonatomic, readonly) id <FCHeadlineStocksFields> stocksFields;
- (BOOL)isBundlePaid;
@property(nonatomic, readonly) NSUInteger role;
- (FCArticleContentManifest *)contentManifestWithContext:(id <FCContentContext>)arg1;
@end

