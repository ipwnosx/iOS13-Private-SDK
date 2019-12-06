//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedElement-Protocol.h>
#import <NewsCore/FCHeadlineProviding-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, FCCoverArt, FCFeedPersonalizedItemScoreProfile, FCHeadlineExperimentalTitleMetadata, FCHeadlineThumbnail, FCIssue, FCTopStoriesStyleConfiguration, NSArray, NSData, NSDate, NSSet, NSString, NSURL;
@protocol FCChannelProviding, FCHeadlineStocksFields, FCNativeAdProviding;

@interface FCHeadline : NSObject <FCHeadlineProviding, FCFeedElement>
{
    BOOL _hasThumbnail;
    BOOL _featureCandidate;
    BOOL _sponsored;
    BOOL _deleted;
    BOOL _isDraft;
    BOOL _isLocalDraft;
    BOOL _usesImageOnTopLayout;
    BOOL _needsRapidUpdates;
    BOOL _showMinimalChrome;
    BOOL _boundToContext;
    BOOL _hiddenFromFeeds;
    BOOL _pressRelease;
    BOOL _hiddenFromAutoFavorites;
    BOOL _paid;
    BOOL _showSubscriptionRequiredText;
    BOOL _canBePurchased;
    BOOL _webEmbedsEnabled;
    BOOL _displayAsNativeAd;
    BOOL _issueOnly;
    BOOL _showBundleSoftPaywall;
    BOOL _useTransparentNavigationBar;
    BOOL _bundlePaid;
    FCHeadlineThumbnail *_thumbnailLQ;
    FCHeadlineThumbnail *_thumbnail;
    FCHeadlineThumbnail *_thumbnailMedium;
    FCHeadlineThumbnail *_thumbnailHQ;
    FCHeadlineThumbnail *_thumbnailUltraHQ;
    FCHeadlineThumbnail *_thumbnailWidgetLQ;
    FCHeadlineThumbnail *_thumbnailWidget;
    FCHeadlineThumbnail *_thumbnailWidgetHQ;
    NSString *_title;
    FCHeadlineExperimentalTitleMetadata *_experimentalTitleMetadata;
    NSString *_articleID;
    NSString *_referencedArticleID;
    NSString *_clusterID;
    NSString *_primaryAudience;
    NSString *_shortExcerpt;
    NSArray *_topics;
    NSArray *_topicIDs;
    NSDate *_publishDate;
    long long _publisherArticleVersion;
    long long _backendArticleVersion;
    id <FCChannelProviding> _sourceChannel;
    NSString *_sourceName;
    NSURL *_contentURL;
    NSDate *_lastModifiedDate;
    NSDate *_lastFetchedDate;
    NSUInteger _contentType;
    NSURL *_videoURL;
    double _videoDuration;
    NSArray *_iAdCategories;
    NSArray *_iAdKeywords;
    NSArray *_iAdSectionIDs;
    NSArray *_blockedStorefrontIDs;
    NSArray *_allowedStorefrontIDs;
    NSString *_surfacedBySectionID;
    NSString *_surfacedByChannelID;
    NSString *_surfacedByTopicID;
    NSString *_surfacedByBinID;
    NSSet *_surfacedByTagIDs;
    NSString *_accessoryText;
    NSString *_callToActionText;
    NSString *_localDraftPath;
    FCFeedPersonalizedItemScoreProfile *_scoreProfile;
    double _personalizedScore;
    NSUInteger _topStoryType;
    NSArray *_relatedArticleIDs;
    NSArray *_moreFromPublisherArticleIDs;
    NSUInteger _storyType;
    FCTopStoriesStyleConfiguration *_storyStyle;
    long long _minimumNewsVersion;
    FCCoverArt *_coverArt;
    NSString *_videoCallToActionTitle;
    NSURL *_videoCallToActionURL;
    NSUInteger _feedOrder;
    double _globalUserFeedback;
    NSUInteger _halfLife;
    NSDate *_displayDate;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_globalCohorts;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_publisherCohorts;
    NSString *_articleRecirculationConfigJSON;
    NSArray *_publisherSpecifiedArticleIDs;
    NSString *_language;
    NSString *_sponsoredBy;
    id <FCNativeAdProviding> _associatedAd;
    NSUInteger _role;
    id <FCHeadlineStocksFields> _stocksFields;
    NSData *_backingArticleRecordData;
    FCIssue *_masterIssue;
    long long _bodyTextLength;
    NSString *_identifier;
    NSURL *_headlineURL;
    NSString *_titleCompact;
    NSString *_excerpt;
    CGRect _thumbnailFocalFrame;
}

+ (id)emptyHeadlineWithIdentifier:(id)arg1;
+ (id)emptyHeadline;
@property(copy, nonatomic) NSString *excerpt; // @synthesize excerpt=_excerpt;
@property(nonatomic, getter=isBundlePaid) BOOL bundlePaid; // @synthesize bundlePaid=_bundlePaid;
@property(copy, nonatomic) NSString *titleCompact; // @synthesize titleCompact=_titleCompact;
@property(copy, nonatomic) NSURL *headlineURL; // @synthesize headlineURL=_headlineURL;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) BOOL useTransparentNavigationBar; // @synthesize useTransparentNavigationBar=_useTransparentNavigationBar;
@property(readonly, nonatomic) long long bodyTextLength; // @synthesize bodyTextLength=_bodyTextLength;
@property(readonly, nonatomic) BOOL showBundleSoftPaywall; // @synthesize showBundleSoftPaywall=_showBundleSoftPaywall;
@property(readonly, nonatomic, getter=isIssueOnly) BOOL issueOnly; // @synthesize issueOnly=_issueOnly;
@property(readonly, copy, nonatomic) FCIssue *masterIssue; // @synthesize masterIssue=_masterIssue;
@property(readonly, nonatomic) NSData *backingArticleRecordData; // @synthesize backingArticleRecordData=_backingArticleRecordData;
@property(readonly, nonatomic) id <FCHeadlineStocksFields> stocksFields; // @synthesize stocksFields=_stocksFields;
@property(nonatomic) NSUInteger role; // @synthesize role=_role;
@property(retain, nonatomic) id <FCNativeAdProviding> associatedAd; // @synthesize associatedAd=_associatedAd;
@property(copy, nonatomic) NSString *sponsoredBy; // @synthesize sponsoredBy=_sponsoredBy;
@property(nonatomic, getter=isDisplayingAsNativeAd) BOOL displayAsNativeAd; // @synthesize displayAsNativeAd=_displayAsNativeAd;
@property(nonatomic) CGRect thumbnailFocalFrame; // @synthesize thumbnailFocalFrame=_thumbnailFocalFrame;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) BOOL webEmbedsEnabled; // @synthesize webEmbedsEnabled=_webEmbedsEnabled;
@property(readonly, nonatomic) NSArray *publisherSpecifiedArticleIDs; // @synthesize publisherSpecifiedArticleIDs=_publisherSpecifiedArticleIDs;
@property(readonly, nonatomic) NSString *articleRecirculationConfigJSON; // @synthesize articleRecirculationConfigJSON=_articleRecirculationConfigJSON;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts; // @synthesize publisherCohorts=_publisherCohorts;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts; // @synthesize globalCohorts=_globalCohorts;
@property(copy, nonatomic) NSDate *displayDate; // @synthesize displayDate=_displayDate;
@property(readonly, nonatomic) BOOL canBePurchased; // @synthesize canBePurchased=_canBePurchased;
@property(nonatomic) NSUInteger halfLife; // @synthesize halfLife=_halfLife;
@property(nonatomic) double globalUserFeedback; // @synthesize globalUserFeedback=_globalUserFeedback;
@property(nonatomic) NSUInteger feedOrder; // @synthesize feedOrder=_feedOrder;
@property(nonatomic) BOOL showSubscriptionRequiredText; // @synthesize showSubscriptionRequiredText=_showSubscriptionRequiredText;
@property(readonly, copy, nonatomic) NSURL *videoCallToActionURL; // @synthesize videoCallToActionURL=_videoCallToActionURL;
@property(readonly, copy, nonatomic) NSString *videoCallToActionTitle; // @synthesize videoCallToActionTitle=_videoCallToActionTitle;
@property(readonly, nonatomic) FCCoverArt *coverArt; // @synthesize coverArt=_coverArt;
@property(nonatomic, getter=isPaid) BOOL paid; // @synthesize paid=_paid;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites;
@property(readonly, nonatomic, getter=isPressRelease) BOOL pressRelease; // @synthesize pressRelease=_pressRelease;
@property(readonly, nonatomic, getter=isHiddenFromFeeds) BOOL hiddenFromFeeds; // @synthesize hiddenFromFeeds=_hiddenFromFeeds;
@property(readonly, nonatomic, getter=isBoundToContext) BOOL boundToContext; // @synthesize boundToContext=_boundToContext;
@property(readonly, nonatomic) BOOL showMinimalChrome; // @synthesize showMinimalChrome=_showMinimalChrome;
@property(readonly, nonatomic) BOOL needsRapidUpdates; // @synthesize needsRapidUpdates=_needsRapidUpdates;
@property(retain, nonatomic) FCTopStoriesStyleConfiguration *storyStyle; // @synthesize storyStyle=_storyStyle;
@property(nonatomic) NSUInteger storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) NSArray *moreFromPublisherArticleIDs; // @synthesize moreFromPublisherArticleIDs=_moreFromPublisherArticleIDs;
@property(readonly, copy, nonatomic) NSArray *relatedArticleIDs; // @synthesize relatedArticleIDs=_relatedArticleIDs;
@property(nonatomic) NSUInteger topStoryType; // @synthesize topStoryType=_topStoryType;
@property(nonatomic) BOOL usesImageOnTopLayout; // @synthesize usesImageOnTopLayout=_usesImageOnTopLayout;
@property(nonatomic) double tileProminenceScore; // @synthesize tileProminenceScore=_personalizedScore;
@property(retain, nonatomic) FCFeedPersonalizedItemScoreProfile *scoreProfile; // @synthesize scoreProfile=_scoreProfile;
@property(readonly, copy, nonatomic) NSString *localDraftPath; // @synthesize localDraftPath=_localDraftPath;
@property(copy, nonatomic) NSString *callToActionText; // @synthesize callToActionText=_callToActionText;
@property(copy, nonatomic) NSString *accessoryText; // @synthesize accessoryText=_accessoryText;
@property(copy, nonatomic) NSSet *surfacedByTagIDs; // @synthesize surfacedByTagIDs=_surfacedByTagIDs;
@property(copy, nonatomic) NSString *surfacedByBinID; // @synthesize surfacedByBinID=_surfacedByBinID;
@property(copy, nonatomic) NSString *surfacedByTopicID; // @synthesize surfacedByTopicID=_surfacedByTopicID;
@property(copy, nonatomic) NSString *surfacedByChannelID; // @synthesize surfacedByChannelID=_surfacedByChannelID;
@property(copy, nonatomic) NSString *surfacedBySectionID; // @synthesize surfacedBySectionID=_surfacedBySectionID;
@property(readonly, nonatomic) BOOL isLocalDraft; // @synthesize isLocalDraft=_isLocalDraft;
@property(readonly, nonatomic) BOOL isDraft; // @synthesize isDraft=_isDraft;
@property(nonatomic, getter=isDeleted) BOOL deleted; // @synthesize deleted=_deleted;
@property(readonly, copy, nonatomic) NSArray *allowedStorefrontIDs; // @synthesize allowedStorefrontIDs=_allowedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *blockedStorefrontIDs; // @synthesize blockedStorefrontIDs=_blockedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *iAdSectionIDs; // @synthesize iAdSectionIDs=_iAdSectionIDs;
@property(readonly, copy, nonatomic) NSArray *iAdKeywords; // @synthesize iAdKeywords=_iAdKeywords;
@property(readonly, copy, nonatomic) NSArray *iAdCategories; // @synthesize iAdCategories=_iAdCategories;
@property(nonatomic, getter=isSponsored) BOOL sponsored; // @synthesize sponsored=_sponsored;
@property(readonly, nonatomic, getter=isFeatureCandidate) BOOL featureCandidate; // @synthesize featureCandidate=_featureCandidate;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) NSUInteger contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSDate *lastFetchedDate; // @synthesize lastFetchedDate=_lastFetchedDate;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) id <FCChannelProviding> sourceChannel; // @synthesize sourceChannel=_sourceChannel;
@property(readonly, nonatomic) long long backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(readonly, nonatomic) long long publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(copy, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(copy, nonatomic) NSArray *topicIDs; // @synthesize topicIDs=_topicIDs;
@property(readonly, copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(copy, nonatomic) NSString *shortExcerpt; // @synthesize shortExcerpt=_shortExcerpt;
@property(readonly, copy, nonatomic) NSString *primaryAudience; // @synthesize primaryAudience=_primaryAudience;
@property(copy, nonatomic) NSString *clusterID; // @synthesize clusterID=_clusterID;
@property(readonly, copy, nonatomic) NSString *referencedArticleID; // @synthesize referencedArticleID=_referencedArticleID;
@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(readonly, copy, nonatomic) FCHeadlineExperimentalTitleMetadata *experimentalTitleMetadata; // @synthesize experimentalTitleMetadata=_experimentalTitleMetadata;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetHQ; // @synthesize thumbnailWidgetHQ=_thumbnailWidgetHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidget; // @synthesize thumbnailWidget=_thumbnailWidget;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetLQ; // @synthesize thumbnailWidgetLQ=_thumbnailWidgetLQ;
@property(retain, nonatomic) FCHeadlineThumbnail *thumbnailUltraHQ; // @synthesize thumbnailUltraHQ=_thumbnailUltraHQ;
@property(retain, nonatomic) FCHeadlineThumbnail *thumbnailHQ; // @synthesize thumbnailHQ=_thumbnailHQ;
@property(retain, nonatomic) FCHeadlineThumbnail *thumbnailMedium; // @synthesize thumbnailMedium=_thumbnailMedium;
@property(retain, nonatomic) FCHeadlineThumbnail *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) FCHeadlineThumbnail *thumbnailLQ; // @synthesize thumbnailLQ=_thumbnailLQ;
@property(nonatomic) BOOL hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
// - (void).cxx_destruct;
- (void)enumerateTopicCohortsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property(readonly, nonatomic, getter=isFromBlockedStorefront) BOOL fromBlockedStorefront;
@property(readonly, nonatomic) NSUInteger feedHalfLifeMilliseconds;
@property(readonly, nonatomic) NSUInteger publishDateMilliseconds;
@property(readonly, copy, nonatomic) NSString *sourceChannelID;
@property(readonly, copy, nonatomic) NSString *feedID;
@property(readonly, nonatomic) NSUInteger order;
- (NSUInteger)articleContentType;
@property(readonly, nonatomic) BOOL hasGlobalUserFeedback;
@property(readonly, copy, nonatomic) NSString *publisherID;
@property(readonly, copy, nonatomic) NSString *sourceFeedID;
@property(readonly, nonatomic) BOOL isTopStory;
- (void)applyHeadlineMetadata:(id)arg1 configuration:(id)arg2;
- (void)assignStoryType:(NSUInteger)arg1 withConfiguration:(id)arg2;
- (void)overrideDisplayDate:(id)arg1;
- (void)overrideTitle:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasVideo;
@property(readonly, nonatomic) BOOL showPublisherLogo;
@property(readonly, nonatomic) BOOL isBlockedExplicitContent;
- (BOOL)isGap;
@property(readonly, nonatomic, getter=isANF) BOOL anf;
@property(readonly, nonatomic) long long feedElementType;
@property(readonly, copy, nonatomic) NSString *versionIdentifier;
@property(readonly, copy, nonatomic) NSString *itemID;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)contentManifestWithContext:(id)arg1;
- (id)init;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;

@end

