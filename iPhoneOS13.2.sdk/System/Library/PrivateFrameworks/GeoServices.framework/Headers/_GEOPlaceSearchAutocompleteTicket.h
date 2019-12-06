//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOAbstractRequestResponseTicket.h>

#import <GeoServices/GEOMapServiceCompletionTicket-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchAutocompleteTicket : GEOAbstractRequestResponseTicket <GEOMapServiceCompletionTicket>
{
    NSString *_searchQuery;
}

@property(readonly, nonatomic, getter=_searchQuery) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
// - (void).cxx_destruct;
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
- (void)submitWithAutoCompletionHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithAutoCompletionHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 searchQuery:(id)arg3;

@end

