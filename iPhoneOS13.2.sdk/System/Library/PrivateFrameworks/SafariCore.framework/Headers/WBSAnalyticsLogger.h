//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWDServerConnection, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WBSAnalyticsLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_analyticsSynchronizationQueue;
    NSMutableDictionary *_pageLoadStartTimes;
    AWDServerConnection *_awdServer;
}

+ (id)sharedLogger;
@property(readonly, nonatomic) AWDServerConnection *awdServer; // @synthesize awdServer=_awdServer;
// - (void).cxx_destruct;
- (void)_sendEvent:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)didRetrieveNumberOfFrequentlyVisitedSites:(NSUInteger)arg1;
- (void)didRetrieveNumberOfFavorites:(NSUInteger)arg1;
- (void)didToggleShowLessButtonForSection:(long long)arg1;
- (void)didToggleShowMoreButtonForSection:(long long)arg1;
- (void)didOpenRecommendationWithMetadata:(id)arg1 withPosition:(long long)arg2;
- (void)didRetrieveNumberOfRecommendations:(NSUInteger)arg1 numberOfTopics:(NSUInteger)arg2;
- (void)didBanWebsiteWithMetadata:(id)arg1;
- (void)didDownvoteDataSourceWithMetadata:(id)arg1;
- (void)didSetDownloadFolderToProviderWithIdentifier:(id)arg1 isDefaultFolder:(BOOL)arg2;
- (void)didMoveToBackgroundWithNumberOfOnGoingDownloads:(NSUInteger)arg1;
- (void)didRevealDownloadWithMIMEType:(id)arg1 uti:(id)arg2 result:(long long)arg3;
- (void)didModifyPerSitePreferenceWithIdentifier:(id)arg1 modificationLevel:(long long)arg2 type:(long long)arg3 method:(long long)arg4;
- (void)reportWeakPasswordWarningEvent:(long long)arg1;
- (void)recordSearchResultPageImpressionWithDefaultSearchProviderIdentifier:(id)arg1 searchProviderIdentifier:(id)arg2 isReferredByUnifiedField:(BOOL)arg3;
- (void)userDidReceiveSharedPasswordWithOutcome:(int)arg1;
- (void)userDidSharePasswordWithOutcome:(int)arg1;
- (void)submitVersioningMetricWithVersion:(id)arg1 variant:(int)arg2;
- (void)ckBookmarkSyncFinishedWithResult:(long long)arg1 error:(id)arg2;
- (void)didFailToMigrateToCKBookmarksAsPrimaryMigrator:(BOOL)arg1 error:(id)arg2;
- (void)didSuccessfullyMigrateToCKBookmarksAsPrimaryMigrator:(BOOL)arg1;
- (void)didStartMigratingToCKBookmarksAsPrimaryMigrator:(BOOL)arg1 localState:(long long)arg2 remoteState:(long long)arg3;
- (void)unableToSilentlyMigrateToCKBookmarksWithReason:(int)arg1;
- (void)submitAutomaticReaderActivation:(int)arg1;
- (void)didToggleDomainSpecificAutomaticReader:(BOOL)arg1;
- (void)didToggleGloballyUseAutomaticReader:(BOOL)arg1;
- (void)_didSelectFavoritesGridItemOfSection:(int)arg1 type:(int)arg2 atIndex:(NSUInteger)arg3 itemsPerRow:(NSUInteger)arg4 isNewTabPage:(BOOL)arg5;
- (void)didSelectFavoritesGridFrequentlyVisitedItemAtIndex:(NSUInteger)arg1 itemsPerRow:(NSUInteger)arg2 isNewTabPage:(BOOL)arg3;
- (void)didSelectFavoritesGridItemOfType:(int)arg1 atIndex:(NSUInteger)arg2 itemsPerRow:(NSUInteger)arg3 isNewTabPage:(BOOL)arg4;
- (void)userInteractedWithGeneratedPasswordWithInteractionType:(int)arg1;
- (void)userDidParticipateInPasswordAutoFillWithInteraction:(int)arg1;
- (void)userTappedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;
- (void)showedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;
- (void)didSelectContactAutoFillSet:(int)arg1 hasPreviouslyCustomizedSet:(BOOL)arg2;
- (void)didShowContactAutoFillSetsWithMeCardSets:(BOOL)arg1 showingPreviouslyCustomizedSet:(BOOL)arg2;
- (void)didAutoFillCustomContactSetShowingMeCard:(BOOL)arg1;
- (void)didReceiveInvalidMessageFromWebProcess:(id)arg1;
- (void)pageLoadCompleted:(NSUInteger)arg1 withErrorCode:(long long)arg2;
- (void)pageLoadStarted:(NSUInteger)arg1;
- (void)pageLoadCompleted:(NSUInteger)arg1;
- (void)performOnAnalyticsQueueWithDelay:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)registerQueriableMetric:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithQueue:(id)arg1;

@end

