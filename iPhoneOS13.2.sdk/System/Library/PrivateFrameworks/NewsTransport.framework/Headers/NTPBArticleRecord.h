//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSData, NSMutableArray, NSString, NTPBDate, NTPBRecordBase;

@interface NTPBArticleRecord : PBCodable <NSCopying>
{
    long long _backendArticleVersion;
    long long _behaviorFlags;
    long long _bodyTextLength;
    NSUInteger _halfLifeMilliseconds;
    long long _minimumNewsVersion;
    long long _publisherArticleVersion;
    long long _thumbnailFocalFrame;
    long long _thumbnailHQMetadata;
    long long _thumbnailLQMetadata;
    long long _thumbnailMediumMetadata;
    long long _thumbnailMetadata;
    long long _thumbnailUltraHQMetadata;
    long long _thumbnailWidgetHQMetadata;
    long long _thumbnailWidgetLQMetadata;
    long long _thumbnailWidgetMetadata;
    NSString *_accessoryText;
    NSMutableArray *_allowedStorefrontIDs;
    NSData *_articleRecirculationConfiguration;
    NTPBRecordBase *_base;
    NSMutableArray *_blockedStorefrontIDs;
    NSString *_clusterID;
    int _contentType;
    NSString *_contentURL;
    NSString *_coverArt;
    NSString *_excerptURL;
    NSMutableArray *_experimentalTitles;
    NSString *_flintDocumentURL;
    NSMutableArray *_flintFontResourceIDs;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_globalCohorts;
    NSMutableArray *_iAdCategories;
    NSMutableArray *_iAdKeywords;
    NSMutableArray *_iAdSectionIDs;
    NSString *_language;
    NSMutableArray *_linkedArticleIDs;
    NSMutableArray *_linkedIssueIDs;
    NSMutableArray *_moreFromPublisherArticleIDs;
    NSString *_parentIssueID;
    NSString *_primaryAudience;
    NTPBDate *_publishDate;
    NSMutableArray *_publisherSpecifiedArticleIds;
    NSString *_referencedArticleID;
    NSMutableArray *_relatedArticleIDs;
    int _role;
    NSString *_shortExcerpt;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_sourceChannelCohorts;
    NSString *_sourceChannelTagID;
    NSString *_stocksClusterID;
    NSString *_stocksMetadata;
    NSString *_stocksScores;
    int _storyType;
    NSString *_subtitle;
    NSString *_thumbnailHQURL;
    NSString *_thumbnailLQURL;
    NSString *_thumbnailMediumURL;
    NSString *_thumbnailURL;
    NSString *_thumbnailUltraHQURL;
    NSString *_thumbnailWidgetHQTaggedURL;
    NSString *_thumbnailWidgetHQURL;
    NSString *_thumbnailWidgetLQTaggedURL;
    NSString *_thumbnailWidgetLQURL;
    NSString *_thumbnailWidgetTaggedURL;
    NSString *_thumbnailWidgetURL;
    NSString *_title;
    NSString *_titleCompact;
    NSMutableArray *_topics;
    NSString *_videoCallToActionTitle;
    NSString *_videoCallToActionURL;
    NSString *_videoURL;
    BOOL _isBundlePaid;
    BOOL _isDraft;
    BOOL _isFeatureCandidate;
    BOOL _isIssueOnly;
    BOOL _isPaid;
    BOOL _isSponsored;
   struct {
        unsigned int backendArticleVersion:1;
        unsigned int behaviorFlags:1;
        unsigned int bodyTextLength:1;
        unsigned int halfLifeMilliseconds:1;
        unsigned int minimumNewsVersion:1;
        unsigned int publisherArticleVersion:1;
        unsigned int thumbnailFocalFrame:1;
        unsigned int thumbnailHQMetadata:1;
        unsigned int thumbnailLQMetadata:1;
        unsigned int thumbnailMediumMetadata:1;
        unsigned int thumbnailMetadata:1;
        unsigned int thumbnailUltraHQMetadata:1;
        unsigned int thumbnailWidgetHQMetadata:1;
        unsigned int thumbnailWidgetLQMetadata:1;
        unsigned int thumbnailWidgetMetadata:1;
        unsigned int contentType:1;
        unsigned int role:1;
        unsigned int storyType:1;
        unsigned int isBundlePaid:1;
        unsigned int isDraft:1;
        unsigned int isFeatureCandidate:1;
        unsigned int isIssueOnly:1;
        unsigned int isPaid:1;
        unsigned int isSponsored:1;
    } _has;
}

+ (Class)linkedIssueIDsType;
+ (Class)linkedArticleIDsType;
+ (Class)experimentalTitlesType;
+ (Class)publisherSpecifiedArticleIdsType;
+ (Class)topicsType;
+ (Class)moreFromPublisherArticleIDsType;
+ (Class)relatedArticleIDsType;
+ (Class)allowedStorefrontIDsType;
+ (Class)blockedStorefrontIDsType;
+ (Class)iAdSectionIDsType;
+ (Class)iAdKeywordsType;
+ (Class)iAdCategoriesType;
+ (Class)flintFontResourceIDsType;
@property(nonatomic) long long bodyTextLength; // @synthesize bodyTextLength=_bodyTextLength;
@property(nonatomic) BOOL isIssueOnly; // @synthesize isIssueOnly=_isIssueOnly;
@property(retain, nonatomic) NSMutableArray *linkedIssueIDs; // @synthesize linkedIssueIDs=_linkedIssueIDs;
@property(retain, nonatomic) NSMutableArray *linkedArticleIDs; // @synthesize linkedArticleIDs=_linkedArticleIDs;
@property(nonatomic) NSUInteger halfLifeMilliseconds; // @synthesize halfLifeMilliseconds=_halfLifeMilliseconds;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *parentIssueID; // @synthesize parentIssueID=_parentIssueID;
@property(retain, nonatomic) NSMutableArray *experimentalTitles; // @synthesize experimentalTitles=_experimentalTitles;
@property(retain, nonatomic) NSString *stocksScores; // @synthesize stocksScores=_stocksScores;
@property(retain, nonatomic) NSString *stocksMetadata; // @synthesize stocksMetadata=_stocksMetadata;
@property(retain, nonatomic) NSString *stocksClusterID; // @synthesize stocksClusterID=_stocksClusterID;
@property(retain, nonatomic) NSMutableArray *publisherSpecifiedArticleIds; // @synthesize publisherSpecifiedArticleIds=_publisherSpecifiedArticleIds;
@property(retain, nonatomic) NSData *articleRecirculationConfiguration; // @synthesize articleRecirculationConfiguration=_articleRecirculationConfiguration;
@property(retain, nonatomic) NSString *videoCallToActionURL; // @synthesize videoCallToActionURL=_videoCallToActionURL;
@property(retain, nonatomic) NSString *videoCallToActionTitle; // @synthesize videoCallToActionTitle=_videoCallToActionTitle;
@property(retain, nonatomic) NSString *titleCompact; // @synthesize titleCompact=_titleCompact;
@property(retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts; // @synthesize globalCohorts=_globalCohorts;
@property(retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *sourceChannelCohorts; // @synthesize sourceChannelCohorts=_sourceChannelCohorts;
@property(retain, nonatomic) NSMutableArray *topics; // @synthesize topics=_topics;
@property(nonatomic) long long thumbnailWidgetHQMetadata; // @synthesize thumbnailWidgetHQMetadata=_thumbnailWidgetHQMetadata;
@property(retain, nonatomic) NSString *thumbnailWidgetHQTaggedURL; // @synthesize thumbnailWidgetHQTaggedURL=_thumbnailWidgetHQTaggedURL;
@property(retain, nonatomic) NSString *thumbnailWidgetHQURL; // @synthesize thumbnailWidgetHQURL=_thumbnailWidgetHQURL;
@property(nonatomic) long long thumbnailWidgetMetadata; // @synthesize thumbnailWidgetMetadata=_thumbnailWidgetMetadata;
@property(retain, nonatomic) NSString *thumbnailWidgetTaggedURL; // @synthesize thumbnailWidgetTaggedURL=_thumbnailWidgetTaggedURL;
@property(retain, nonatomic) NSString *thumbnailWidgetURL; // @synthesize thumbnailWidgetURL=_thumbnailWidgetURL;
@property(nonatomic) long long thumbnailWidgetLQMetadata; // @synthesize thumbnailWidgetLQMetadata=_thumbnailWidgetLQMetadata;
@property(retain, nonatomic) NSString *thumbnailWidgetLQTaggedURL; // @synthesize thumbnailWidgetLQTaggedURL=_thumbnailWidgetLQTaggedURL;
@property(retain, nonatomic) NSString *thumbnailWidgetLQURL; // @synthesize thumbnailWidgetLQURL=_thumbnailWidgetLQURL;
@property(nonatomic) BOOL isPaid; // @synthesize isPaid=_isPaid;
@property(retain, nonatomic) NSString *coverArt; // @synthesize coverArt=_coverArt;
@property(nonatomic) long long minimumNewsVersion; // @synthesize minimumNewsVersion=_minimumNewsVersion;
@property(nonatomic) long long behaviorFlags; // @synthesize behaviorFlags=_behaviorFlags;
@property(nonatomic) long long thumbnailUltraHQMetadata; // @synthesize thumbnailUltraHQMetadata=_thumbnailUltraHQMetadata;
@property(retain, nonatomic) NSString *thumbnailUltraHQURL; // @synthesize thumbnailUltraHQURL=_thumbnailUltraHQURL;
@property(nonatomic) long long thumbnailHQMetadata; // @synthesize thumbnailHQMetadata=_thumbnailHQMetadata;
@property(retain, nonatomic) NSString *thumbnailHQURL; // @synthesize thumbnailHQURL=_thumbnailHQURL;
@property(nonatomic) long long thumbnailMediumMetadata; // @synthesize thumbnailMediumMetadata=_thumbnailMediumMetadata;
@property(retain, nonatomic) NSString *thumbnailMediumURL; // @synthesize thumbnailMediumURL=_thumbnailMediumURL;
@property(nonatomic) long long thumbnailFocalFrame; // @synthesize thumbnailFocalFrame=_thumbnailFocalFrame;
@property(nonatomic) long long thumbnailMetadata; // @synthesize thumbnailMetadata=_thumbnailMetadata;
@property(retain, nonatomic) NSString *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(retain, nonatomic) NSMutableArray *moreFromPublisherArticleIDs; // @synthesize moreFromPublisherArticleIDs=_moreFromPublisherArticleIDs;
@property(retain, nonatomic) NSMutableArray *relatedArticleIDs; // @synthesize relatedArticleIDs=_relatedArticleIDs;
@property(nonatomic) BOOL isDraft; // @synthesize isDraft=_isDraft;
@property(retain, nonatomic) NSMutableArray *allowedStorefrontIDs; // @synthesize allowedStorefrontIDs=_allowedStorefrontIDs;
@property(retain, nonatomic) NSMutableArray *blockedStorefrontIDs; // @synthesize blockedStorefrontIDs=_blockedStorefrontIDs;
@property(retain, nonatomic) NSMutableArray *iAdSectionIDs; // @synthesize iAdSectionIDs=_iAdSectionIDs;
@property(retain, nonatomic) NSMutableArray *iAdKeywords; // @synthesize iAdKeywords=_iAdKeywords;
@property(retain, nonatomic) NSMutableArray *iAdCategories; // @synthesize iAdCategories=_iAdCategories;
@property(nonatomic) BOOL isSponsored; // @synthesize isSponsored=_isSponsored;
@property(nonatomic) BOOL isFeatureCandidate; // @synthesize isFeatureCandidate=_isFeatureCandidate;
@property(nonatomic) BOOL isBundlePaid; // @synthesize isBundlePaid=_isBundlePaid;
@property(retain, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) NSMutableArray *flintFontResourceIDs; // @synthesize flintFontResourceIDs=_flintFontResourceIDs;
@property(retain, nonatomic) NSString *flintDocumentURL; // @synthesize flintDocumentURL=_flintDocumentURL;
@property(retain, nonatomic) NSString *clusterID; // @synthesize clusterID=_clusterID;
@property(retain, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property(retain, nonatomic) NSString *accessoryText; // @synthesize accessoryText=_accessoryText;
@property(retain, nonatomic) NSString *shortExcerpt; // @synthesize shortExcerpt=_shortExcerpt;
@property(retain, nonatomic) NSString *excerptURL; // @synthesize excerptURL=_excerptURL;
@property(retain, nonatomic) NSString *primaryAudience; // @synthesize primaryAudience=_primaryAudience;
@property(nonatomic) long long thumbnailLQMetadata; // @synthesize thumbnailLQMetadata=_thumbnailLQMetadata;
@property(retain, nonatomic) NSString *thumbnailLQURL; // @synthesize thumbnailLQURL=_thumbnailLQURL;
@property(nonatomic) long long backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(nonatomic) long long publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(retain, nonatomic) NTPBDate *publishDate; // @synthesize publishDate=_publishDate;
@property(retain, nonatomic) NSString *sourceChannelTagID; // @synthesize sourceChannelTagID=_sourceChannelTagID;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *referencedArticleID; // @synthesize referencedArticleID=_referencedArticleID;
@property(retain, nonatomic) NTPBRecordBase *base; // @synthesize base=_base;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasBodyTextLength;
@property(nonatomic) BOOL hasIsIssueOnly;
- (id)linkedIssueIDsAtIndex:(NSUInteger)arg1;
- (NSUInteger)linkedIssueIDsCount;
- (void)addLinkedIssueIDs:(id)arg1;
- (void)clearLinkedIssueIDs;
- (id)linkedArticleIDsAtIndex:(NSUInteger)arg1;
- (NSUInteger)linkedArticleIDsCount;
- (void)addLinkedArticleIDs:(id)arg1;
- (void)clearLinkedArticleIDs;
@property(nonatomic) BOOL hasHalfLifeMilliseconds;
@property(nonatomic) BOOL hasRole;
@property(nonatomic) int role; // @synthesize role=_role;
@property(readonly, nonatomic) BOOL hasLanguage;
@property(readonly, nonatomic) BOOL hasParentIssueID;
- (id)experimentalTitlesAtIndex:(NSUInteger)arg1;
- (NSUInteger)experimentalTitlesCount;
- (void)addExperimentalTitles:(id)arg1;
- (void)clearExperimentalTitles;
@property(readonly, nonatomic) BOOL hasStocksScores;
@property(readonly, nonatomic) BOOL hasStocksMetadata;
@property(readonly, nonatomic) BOOL hasStocksClusterID;
- (id)publisherSpecifiedArticleIdsAtIndex:(NSUInteger)arg1;
- (NSUInteger)publisherSpecifiedArticleIdsCount;
- (void)addPublisherSpecifiedArticleIds:(id)arg1;
- (void)clearPublisherSpecifiedArticleIds;
@property(readonly, nonatomic) BOOL hasArticleRecirculationConfiguration;
@property(readonly, nonatomic) BOOL hasVideoCallToActionURL;
@property(readonly, nonatomic) BOOL hasVideoCallToActionTitle;
@property(readonly, nonatomic) BOOL hasTitleCompact;
@property(readonly, nonatomic) BOOL hasGlobalCohorts;
@property(readonly, nonatomic) BOOL hasSourceChannelCohorts;
- (id)topicsAtIndex:(NSUInteger)arg1;
- (NSUInteger)topicsCount;
- (void)addTopics:(id)arg1;
- (void)clearTopics;
@property(nonatomic) BOOL hasThumbnailWidgetHQMetadata;
@property(readonly, nonatomic) BOOL hasThumbnailWidgetHQTaggedURL;
@property(readonly, nonatomic) BOOL hasThumbnailWidgetHQURL;
@property(nonatomic) BOOL hasThumbnailWidgetMetadata;
@property(readonly, nonatomic) BOOL hasThumbnailWidgetTaggedURL;
@property(readonly, nonatomic) BOOL hasThumbnailWidgetURL;
@property(nonatomic) BOOL hasThumbnailWidgetLQMetadata;
@property(readonly, nonatomic) BOOL hasThumbnailWidgetLQTaggedURL;
@property(readonly, nonatomic) BOOL hasThumbnailWidgetLQURL;
@property(nonatomic) BOOL hasIsPaid;
@property(readonly, nonatomic) BOOL hasCoverArt;
@property(nonatomic) BOOL hasMinimumNewsVersion;
@property(nonatomic) BOOL hasBehaviorFlags;
@property(nonatomic) BOOL hasStoryType;
@property(nonatomic) int storyType; // @synthesize storyType=_storyType;
@property(nonatomic) BOOL hasThumbnailUltraHQMetadata;
@property(readonly, nonatomic) BOOL hasThumbnailUltraHQURL;
@property(nonatomic) BOOL hasThumbnailHQMetadata;
@property(readonly, nonatomic) BOOL hasThumbnailHQURL;
@property(nonatomic) BOOL hasThumbnailMediumMetadata;
@property(readonly, nonatomic) BOOL hasThumbnailMediumURL;
@property(nonatomic) BOOL hasThumbnailFocalFrame;
@property(nonatomic) BOOL hasThumbnailMetadata;
@property(readonly, nonatomic) BOOL hasThumbnailURL;
- (id)moreFromPublisherArticleIDsAtIndex:(NSUInteger)arg1;
- (NSUInteger)moreFromPublisherArticleIDsCount;
- (void)addMoreFromPublisherArticleIDs:(id)arg1;
- (void)clearMoreFromPublisherArticleIDs;
- (id)relatedArticleIDsAtIndex:(NSUInteger)arg1;
- (NSUInteger)relatedArticleIDsCount;
- (void)addRelatedArticleIDs:(id)arg1;
- (void)clearRelatedArticleIDs;
@property(nonatomic) BOOL hasIsDraft;
- (id)allowedStorefrontIDsAtIndex:(NSUInteger)arg1;
- (NSUInteger)allowedStorefrontIDsCount;
- (void)addAllowedStorefrontIDs:(id)arg1;
- (void)clearAllowedStorefrontIDs;
- (id)blockedStorefrontIDsAtIndex:(NSUInteger)arg1;
- (NSUInteger)blockedStorefrontIDsCount;
- (void)addBlockedStorefrontIDs:(id)arg1;
- (void)clearBlockedStorefrontIDs;
- (id)iAdSectionIDsAtIndex:(NSUInteger)arg1;
- (NSUInteger)iAdSectionIDsCount;
- (void)addIAdSectionIDs:(id)arg1;
- (void)clearIAdSectionIDs;
- (id)iAdKeywordsAtIndex:(NSUInteger)arg1;
- (NSUInteger)iAdKeywordsCount;
- (void)addIAdKeywords:(id)arg1;
- (void)clearIAdKeywords;
- (id)iAdCategoriesAtIndex:(NSUInteger)arg1;
- (NSUInteger)iAdCategoriesCount;
- (void)addIAdCategories:(id)arg1;
- (void)clearIAdCategories;
@property(nonatomic) BOOL hasIsSponsored;
@property(nonatomic) BOOL hasIsFeatureCandidate;
@property(nonatomic) BOOL hasIsBundlePaid;
@property(readonly, nonatomic) BOOL hasVideoURL;
- (id)flintFontResourceIDsAtIndex:(NSUInteger)arg1;
- (NSUInteger)flintFontResourceIDsCount;
- (void)addFlintFontResourceIDs:(id)arg1;
- (void)clearFlintFontResourceIDs;
@property(readonly, nonatomic) BOOL hasFlintDocumentURL;
@property(readonly, nonatomic) BOOL hasClusterID;
@property(nonatomic) BOOL hasContentType;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) BOOL hasContentURL;
@property(readonly, nonatomic) BOOL hasAccessoryText;
@property(readonly, nonatomic) BOOL hasShortExcerpt;
@property(readonly, nonatomic) BOOL hasExcerptURL;
@property(readonly, nonatomic) BOOL hasPrimaryAudience;
@property(nonatomic) BOOL hasThumbnailLQMetadata;
@property(readonly, nonatomic) BOOL hasThumbnailLQURL;
@property(nonatomic) BOOL hasBackendArticleVersion;
@property(nonatomic) BOOL hasPublisherArticleVersion;
@property(readonly, nonatomic) BOOL hasPublishDate;
@property(readonly, nonatomic) BOOL hasSourceChannelTagID;
@property(readonly, nonatomic) BOOL hasSubtitle;
@property(readonly, nonatomic) BOOL hasTitle;
@property(readonly, nonatomic) BOOL hasReferencedArticleID;
@property(readonly, nonatomic) BOOL hasBase;
- (void)dealloc;

@end

