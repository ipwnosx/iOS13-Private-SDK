//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/_GEOFailedTicket.h>

#import <GeoServices/GEOMapServiceCompletionTicket-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOFailedCompletionTicket : _GEOFailedTicket <GEOMapServiceCompletionTicket>
{
    NSString *searchQuery;
    NSString *_searchQuery;
}

@property(readonly, nonatomic, getter=_searchQuery) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
// - (void).cxx_destruct;
- (void)applyToPlaceInfo:(id)arg1;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)submitWithAutoCompletionHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (BOOL)showAutocompleteClientSource;
- (BOOL)autocompleteTopSectionIsQuerySuggestions;
- (id)sortPriorityMapping;
- (id)clientRankingModel;
- (BOOL)shouldDisplayNoResults;
- (BOOL)hasShouldDisplayNoResults;
- (double)retainSearchTime;
- (BOOL)isRapEnabled;
- (void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultIdentifier:(id)arg2;
- (void)applyToSuggestionList:(id)arg1;
- (BOOL)matchesFragment:(id)arg1;
- (id)initWithError:(id)arg1 searchQuery:(id)arg2 traits:(id)arg3;

@end

