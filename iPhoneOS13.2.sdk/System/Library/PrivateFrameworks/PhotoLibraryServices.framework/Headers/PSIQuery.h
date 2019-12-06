//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, PSIParse, PSITokenizer;
@protocol PSIQueryDelegate;

@interface PSIQuery : NSObject
{
    id <PSIQueryDelegate> _delegate;
    PSIParse *_baseParse;
    BOOL _baseParseCouldHaveResults;
    NSArray *_implicitelyTokenizedParses;
    BOOL _implicitlyTokenizedParsesCouldHaveResults;
    NSArray *_datedParses;
    NSArray *_implicitlyTokenizedDatedParses;
    NSArray *_wordEmbeddingParses;
    NSArray *_identifierTokens;
    NSMutableDictionary *_groupIdsByTokenKey;
    NSDictionary *_substitutionsByStringToken;
    NSArray *_socialGroupPersonIdentifiers;
    _Atomic BOOL _didStart;
    _Atomic BOOL _isCanceled;
    NSMutableSet *_socialGroupExtendedAssetIds;
    NSMutableSet *_socialGroupExtendedCollectionIds;
    BOOL _usesPrefixBasedWordEmbedding;
    BOOL _calculateTokenCounts;
    BOOL _enableImplicitTokenization;
    BOOL _implicitTokenizationUsePrefixMatch;
    BOOL _implicitTokenizationLastTokenUsesPrefixMatch;
    BOOL _preventUnnecessaryImplicitTokenization;
    BOOL _exactMatchIgnoreUntokenizedCharacters;
    BOOL _lastImplicitTokenAllowsWordEmbeddings;
    BOOL _useWildcardText;
    NSArray *_queryTokens;
    NSString *_searchText;
    NSUInteger _wordEmbeddingMode;
    NSDictionary *_substitutions;
    NSUInteger _numberOfNextKeywordSuggestionToProcess;
    NSArray *_nextKeywordSuggestions;
    NSArray *_dedupedGroupResults;
}

+ (void)bootstrap;
+ (NSRange *)searchTextExtendedRangeForParse:(id)arg1;
+ (id)datedParsesWithParses:(id)arg1;
+ (BOOL)enumerateDatedParsesWithParse:(id)arg1 currentTokenIndex:(NSUInteger)arg2 potentialComboAttributes:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (BOOL)tokenIsEligibleForDateParsing:(id)arg1;
+ (id)dateAttributesFromToken:(id)arg1;
+ (id)parsedDatesFromText:(id)arg1;
+ (id)dateFilterWithAttributes:(id)arg1 andAttributes:(id)arg2;
+ (id)dateFilterByCombiningDateFilter:(id)arg1 withDateFilter:(id)arg2;
+ (id)dateFilterWithAttributes:(id)arg1;
@property(readonly, nonatomic) BOOL useWildcardText; // @synthesize useWildcardText=_useWildcardText;
@property(copy, nonatomic) NSSet *socialGroupExtendedCollectionIds; // @synthesize socialGroupExtendedCollectionIds=_socialGroupExtendedCollectionIds;
@property(copy, nonatomic) NSSet *socialGroupExtendedAssetIds; // @synthesize socialGroupExtendedAssetIds=_socialGroupExtendedAssetIds;
@property(copy, nonatomic) NSArray *dedupedGroupResults; // @synthesize dedupedGroupResults=_dedupedGroupResults;
@property(nonatomic) BOOL lastImplicitTokenAllowsWordEmbeddings; // @synthesize lastImplicitTokenAllowsWordEmbeddings=_lastImplicitTokenAllowsWordEmbeddings;
@property(nonatomic) BOOL exactMatchIgnoreUntokenizedCharacters; // @synthesize exactMatchIgnoreUntokenizedCharacters=_exactMatchIgnoreUntokenizedCharacters;
@property(nonatomic) BOOL preventUnnecessaryImplicitTokenization; // @synthesize preventUnnecessaryImplicitTokenization=_preventUnnecessaryImplicitTokenization;
@property(nonatomic) BOOL implicitTokenizationLastTokenUsesPrefixMatch; // @synthesize implicitTokenizationLastTokenUsesPrefixMatch=_implicitTokenizationLastTokenUsesPrefixMatch;
@property(nonatomic) BOOL implicitTokenizationUsePrefixMatch; // @synthesize implicitTokenizationUsePrefixMatch=_implicitTokenizationUsePrefixMatch;
@property(nonatomic) BOOL enableImplicitTokenization; // @synthesize enableImplicitTokenization=_enableImplicitTokenization;
@property(nonatomic) BOOL calculateTokenCounts; // @synthesize calculateTokenCounts=_calculateTokenCounts;
@property(retain, nonatomic) NSArray *nextKeywordSuggestions; // @synthesize nextKeywordSuggestions=_nextKeywordSuggestions;
@property(nonatomic) NSUInteger numberOfNextKeywordSuggestionToProcess; // @synthesize numberOfNextKeywordSuggestionToProcess=_numberOfNextKeywordSuggestionToProcess;
@property(retain, nonatomic) NSDictionary *substitutions; // @synthesize substitutions=_substitutions;
@property(nonatomic) BOOL usesPrefixBasedWordEmbedding; // @synthesize usesPrefixBasedWordEmbedding=_usesPrefixBasedWordEmbedding;
@property(nonatomic) NSUInteger wordEmbeddingMode; // @synthesize wordEmbeddingMode=_wordEmbeddingMode;
@property(readonly, copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(readonly, copy, nonatomic) NSArray *queryTokens; // @synthesize queryTokens=_queryTokens;
// - (void).cxx_destruct;
- (id)description;
- (void)_postProcessPersonGroupsInGroupArrays:(id)arg1;
- (id)suggestionWhitelistedScenes;
- (void)enumerateParsesWithMode:(NSUInteger)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)computeSuggestions;
- (id)processParse:(id)arg1;
- (BOOL)recursiveAddToGroupResults:(id)arg1 aggregate:(id)arg2 atIndex:(NSUInteger)arg3 outOf:(NSUInteger)arg4 inGroupArrays:(id)arg5 dateFilter:(id)arg6 datedTokens:(id)arg7;
- (void)processWordEmbeddings;
- (void)processDates;
- (void)processImplicitTokenization;
- (void)bootstrap;
@property(readonly, nonatomic) PSITokenizer *tokenizer;
//  (struct __CFSet )_idsOfGroupsMatchingToken:(id)arg1;
//  (struct __CFSet )_idsOfGroupsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(BOOL)arg3;
@property(readonly, getter=isCanceled) BOOL canceled;
- (void)cancel;
- (void)runWithResultsHandler:(CDUnknownBlockType)arg1;
- (id)initWithQueryTokens:(id)arg1 searchText:(id)arg2 useWildcardText:(BOOL)arg3 delegate:(id)arg4;
@property(readonly, nonatomic) BOOL implicitTokenizationIncludeBaseParseResults;
- (id)implicitlyTokenizedParsesWithBaseParse:(id)arg1;
- (BOOL)_enumerateImplicitlyTokenizedParsesWithBaseParse:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end

