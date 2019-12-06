//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeed/FCCacheFlushing-Protocol.h>

@class FCArticleController, FCAssetManager, FCFlintResourceManager, FCJSONRecordSourceSchema, FCNetworkBehaviorMonitor, FCTagController, NSArray, NSString, NSURL;
@protocol FCBackgroundTaskable, FCCoreConfigurationManager, FCCoreConfigurationManager><FCNewsAppConfigurationManager, FCJSONRecordSourceType, FCJSONRecordTreeSourceType, FCMagazinesConfigurationManager, FCNewsAppConfigurationManager, FCPPTContext, FCWebArchiveSource;

@protocol FCContentContext <NSObject, FCCacheFlushing>
- (id <FCJSONRecordTreeSourceType>)recordTreeSourceWithRecordSources:(NSArray *)arg1;
- (id <FCJSONRecordSourceType>)recordSourceWithSchema:(FCJSONRecordSourceSchema *)arg1;
@property(nonatomic, readonly) NSString *contentEnvironmentToken;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
@property(nonatomic, readonly) id <FCPPTContext> pptContext;
@property(nonatomic, readonly) long long preferredMediaQuality;
@property(nonatomic, readonly) id <FCBackgroundTaskable> backgroundTaskable;
@property(nonatomic, readonly) NSURL *webArchiveCacheDirectoryURL;
@property(nonatomic, readonly) NSURL *assetCacheDirectoryURL;
@property(nonatomic, readonly) NSString *contentDirectory;
@property(nonatomic, retain) id <FCWebArchiveSource> webArchiveSource;
@property(nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property(nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property(nonatomic, readonly) FCTagController *tagController;
@property(nonatomic, readonly) FCArticleController *articleController;
@property(nonatomic, readonly) FCAssetManager *assetManager;
- (id <FCMagazinesConfigurationManager>)magazinesConfigurationManager;
- (id <FCCoreConfigurationManager><FCNewsAppConfigurationManager>)news_core_ConfigurationManager;
@property(nonatomic, readonly) id <FCNewsAppConfigurationManager> appConfigurationManager;
@property(nonatomic, readonly) id <FCCoreConfigurationManager> configurationManager;
@property(nonatomic, readonly) NSString *supportedContentStoreFrontID;
@property(nonatomic, readonly) NSString *contentStoreFrontID;
@end

