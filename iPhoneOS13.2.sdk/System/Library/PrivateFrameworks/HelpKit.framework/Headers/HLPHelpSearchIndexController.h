//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HelpKit/HLPRemoteDataController.h>

@class CSPrivateSearchableIndex, CSSearchQuery, HLPHelpBookController, NSArray, NSDictionary, NSMutableArray;

@interface HLPHelpSearchIndexController : HLPRemoteDataController
{
    CSSearchQuery *_spotlightSearchQuery;
    BOOL _useCSSearch;
    HLPHelpBookController *_helpBookController;
    NSDictionary *_searchIndex;
    CSPrivateSearchableIndex *_privateSearchableIndex;
    NSMutableArray *_spotlightSearchScores;
}

+ (id)_stopwordsForLanguage:(id)arg1;
@property(retain, nonatomic) NSMutableArray *spotlightSearchScores; // @synthesize spotlightSearchScores=_spotlightSearchScores;
@property(retain, nonatomic) CSPrivateSearchableIndex *privateSearchableIndex; // @synthesize privateSearchableIndex=_privateSearchableIndex;
@property(retain, nonatomic) NSDictionary *searchIndex; // @synthesize searchIndex=_searchIndex;
@property(retain, nonatomic) HLPHelpBookController *helpBookController; // @synthesize helpBookController=_helpBookController;
@property(nonatomic) BOOL useCSSearch; // @synthesize useCSSearch=_useCSSearch;
// - (void).cxx_destruct;
- (void)CSSearchForSearchText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelSpotlightSearch;
@property(readonly, nonatomic) NSArray *spotlightSearchResults; // @dynamic spotlightSearchResults;
- (void)_hpdResultsFromCSSearchableItems:(id)arg1 rankingQueries:(id)arg2;
- (double)_relevanceScore:(double)arg1 forRankingQueries:(id)arg2;
- (id)_fetchAttributesForCSSearchQuery;
- (id)_rankingQueriesForSearchTerm:(id)arg1;
- (id)_csQueryStringForSearchTerm:(id)arg1;
- (id)_tokenizeSearchTerm:(id)arg1;
- (id)_strippedSearchTermFromSearchTerm:(id)arg1;
- (id)mergeDictionary:(id)arg1 withDictionary:(id)arg2;
- (id)getAllIdentifiersFromTree:(id)arg1 withMaxDepth:(int)arg2;
- (id)searchTree:(id)arg1 forQueryWord:(id)arg2 withMaxDepth:(int)arg3;
- (id)resultsWithSearchText:(id)arg1 localeCode:(id)arg2 searchTerms:(id )arg3;
- (id)searchTermsForSearchText:(id)arg1 localeCode:(id)arg2;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

