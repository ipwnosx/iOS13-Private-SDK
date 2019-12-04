//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NSArray;
@protocol FCContentContext, FCFeedTransforming;

@interface FCCurrentFeaturedHeadlinesFetchOperation : FCOperation
{
    _Bool _useFallbackArticleSource;
    id /* block */ _fetchCompletionHandler;
    id <FCContentContext> _context;
    id <FCFeedTransforming> _transformation;
    NSArray *_resultHeadlines;
}

@property(retain, nonatomic) NSArray *resultHeadlines; // @synthesize resultHeadlines=_resultHeadlines;
@property(nonatomic) _Bool useFallbackArticleSource; // @synthesize useFallbackArticleSource=_useFallbackArticleSource;
@property(retain, nonatomic) id <FCFeedTransforming> transformation; // @synthesize transformation=_transformation;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) id /* block */ fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
- (id)_promiseTemporaryFallbackHeadlinesForFeedItems:(id)arg1;
- (id)_promiseTemporaryFallbackFeedItemsWithConfiguration:(id)arg1;
- (id)_promiseHeadlinesForArticleIDs:(id)arg1;
- (id)_promiseFilteredArticleIDsFromArticleRecords:(id)arg1;
- (id)_promiseArticleRecordsWithConfiguration:(id)arg1;
- (id)_promiseConfiguration;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)initWithContext:(id)arg1 transformation:(id)arg2 useFallbackArticleSource:(_Bool)arg3;
- (id)initWithContext:(id)arg1 transformation:(id)arg2;
- (id)init;

@end
