//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGAbstractSuggester.h>

#import <PhotosGraph/PGCoordinatableSuggester-Protocol.h>

@class NSArray, NSEnumerator, NSMutableSet, PGSuggestionOptions;

@interface PGRecentSocialGroupCentricSuggester : PGAbstractSuggester <PGCoordinatableSuggester>
{
    PGSuggestionOptions *_options;
    NSArray *_allPotentialSuggestions;
    NSMutableSet *_usedPotentialSuggestions;
    NSArray *_longTimeNoSeeSocialGroupPotentialSuggestions;
    NSArray *_socialGroupPotentialSuggestions;
    NSEnumerator *_longTimeNoSeeSocialGroupPotentialSuggestionEnumerator;
    NSEnumerator *_socialGroupPotentialSuggestionEnumerator;
    NSArray *_eligibleAssets;
}

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;
// - (void).cxx_destruct;
- (void)usePotentialSuggestions:(id)arg1;
- (id)assetsMatchingSocialGroup:(id)arg1 betweenStartDate:(id)arg2 andEndDate:(id)arg3;
- (id)assetsWithPersonsBetweenStartDate:(id)arg1 andEndDate:(id)arg2;
- (id)verifiedPersons;
- (id)potentialSuggestionsWithOptions:(id)arg1;
- (id)nextSocialGroupPotentialSuggestion;
- (id)nextLongTimeNoSeeSocialGroupPotentialSuggestion;
- (id)socialGroupPotentialSuggestionsWithOptions:(id)arg1;
- (id)longTimeNoSeeSocialGroupPotentialSuggestionsWithOptions:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (void)reset;
- (id)nextSuggestion;
- (void)startSuggestingWithOptions:(id)arg1;

@end

