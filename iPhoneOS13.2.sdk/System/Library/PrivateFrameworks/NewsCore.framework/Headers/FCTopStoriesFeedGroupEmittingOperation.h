//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCTopStoriesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
{
}

- (BOOL)hasSeenAllPreviousArticleIDs:(id)arg1;
- (id)headlinesLogFromHeadlines:(id)arg1 includeScore:(BOOL)arg2;
- (id)_filterHeadlines:(id)arg1 withArticleMetadata:(id)arg2;
- (void)_headlinesFromMandatory:(id)arg1 optional:(id)arg2 articleIDs:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchHeadlinesForArticleIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_personalizedFeedTransformationWithLimit:(NSUInteger)arg1 otherArticleIDs:(id)arg2 preselectedArticles:(id)arg3;
- (id)_feedTransformationWithOtherArticleIDs:(id)arg1;
- (void)_selectHeadlinesFromMandatory:(id)arg1 optional:(id)arg2 publishDate:(id)arg3 articleMetadataByArticleID:(id)arg4 cursor:(id)arg5 isAllowedToCollapse:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_performOperation;
- (void)performOperation;
- (void)_buildGroupWithCatchUpOperation:(id)arg1;

@end

