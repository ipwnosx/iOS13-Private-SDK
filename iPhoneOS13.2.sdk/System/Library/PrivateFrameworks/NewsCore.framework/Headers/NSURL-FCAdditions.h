//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSURL (FCAdditions)
+ (id)fc_fileURLForWidgetReferralItemWithName:(id)arg1;
+ (id)fc_safeURLWithString:(id)arg1;
+ (id)fc_URLWithResourceID:(id)arg1;
- (id)fc_URLByAddingQueryItem:(id)arg1;
- (id)fc_URLByDeletingFragment;
- (id)fc_URLByDeletingQuery;
- (BOOL)_isFeldsparOldChannelURL;
- (BOOL)_isFeldsparOldTopicURL;
- (BOOL)fc_isEqualToURL:(id)arg1;
- (id)fc_feldsparTagID;
- (BOOL)fc_isNewsTagURL;
- (BOOL)fc_isFeldsparInterstitialPreviewURL;
- (BOOL)_isFeldsparOldArticleURL;
- (BOOL)fc_isNewsURL;
- (id)fc_NewsIssueID;
- (id)fc_NewsArticleID;
- (BOOL)fc_isHardPaywallNewsArticleURL:(out id )arg1;
- (BOOL)fc_isNewsIssueURL;
- (BOOL)fc_isNewsArticleURL;
- (id)fc_resourceID;
- (BOOL)fc_isResourceURL;
@end

