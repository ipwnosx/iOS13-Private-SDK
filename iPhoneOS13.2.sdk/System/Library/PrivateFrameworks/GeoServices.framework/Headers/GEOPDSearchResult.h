//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOMapRegion, GEOPDDirectionIntent, GEOPDRelatedSearchSuggestion, GEOPDResolvedItem, GEOPDSearchClientBehavior, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDResolvedItem *_clientResolvedResult;
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;
    GEOPDDirectionIntent *_directionIntent;
    NSMutableArray *_disambiguationLabels;
    NSMutableArray *_displayHeaderSubstitutes;
    GEOMapRegion *_displayMapRegion;
    NSMutableArray *_relatedSearchSuggestions;
    NSMutableArray *_resultDetourInfos;
    NSString *_resultDisplayHeader;
    NSMutableArray *_retainSearchs;
    GEOPDSearchClientBehavior *_searchClientBehavior;
    NSMutableArray *_searchResultSections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    unsigned int _dymSuggestionVisibleTime;
    unsigned int _retainSearchTime;
    int _searchResultType;
    BOOL _enablePartialClientization;
    BOOL _isChainResultSet;
    BOOL _showDymSuggestionCloseButton;
    struct {
        unsigned int has_dymSuggestionVisibleTime:1;
        unsigned int has_retainSearchTime:1;
        unsigned int has_searchResultType:1;
        unsigned int has_enablePartialClientization:1;
        unsigned int has_isChainResultSet:1;
        unsigned int has_showDymSuggestionCloseButton:1;
        unsigned int read_unknownFields:1;
        unsigned int read_clientResolvedResult:1;
        unsigned int read_defaultRelatedSearchSuggestion:1;
        unsigned int read_directionIntent:1;
        unsigned int read_disambiguationLabels:1;
        unsigned int read_displayHeaderSubstitutes:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_relatedSearchSuggestions:1;
        unsigned int read_resultDetourInfos:1;
        unsigned int read_resultDisplayHeader:1;
        unsigned int read_retainSearchs:1;
        unsigned int read_searchClientBehavior:1;
        unsigned int read_searchResultSections:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clientResolvedResult:1;
        unsigned int wrote_defaultRelatedSearchSuggestion:1;
        unsigned int wrote_directionIntent:1;
        unsigned int wrote_disambiguationLabels:1;
        unsigned int wrote_displayHeaderSubstitutes:1;
        unsigned int wrote_displayMapRegion:1;
        unsigned int wrote_relatedSearchSuggestions:1;
        unsigned int wrote_resultDetourInfos:1;
        unsigned int wrote_resultDisplayHeader:1;
        unsigned int wrote_retainSearchs:1;
        unsigned int wrote_searchClientBehavior:1;
        unsigned int wrote_searchResultSections:1;
        unsigned int wrote_dymSuggestionVisibleTime:1;
        unsigned int wrote_retainSearchTime:1;
        unsigned int wrote_searchResultType:1;
        unsigned int wrote_enablePartialClientization:1;
        unsigned int wrote_isChainResultSet:1;
        unsigned int wrote_showDymSuggestionCloseButton:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)searchResultSectionType;
+ (Class)retainSearchType;
+ (Class)displayHeaderSubstituteType;
+ (Class)resultDetourInfoType;
+ (Class)relatedSearchSuggestionType;
+ (Class)disambiguationLabelType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)searchResultSectionAtIndex:(NSUInteger)arg1;
- (NSUInteger)searchResultSectionsCount;
- (void)_addNoFlagsSearchResultSection:(id)arg1;
- (void)addSearchResultSection:(id)arg1;
- (void)clearSearchResultSections;
@property(retain, nonatomic) NSMutableArray *searchResultSections;
- (void)_readSearchResultSections;
- (id)retainSearchAtIndex:(NSUInteger)arg1;
- (NSUInteger)retainSearchsCount;
- (void)_addNoFlagsRetainSearch:(id)arg1;
- (void)addRetainSearch:(id)arg1;
- (void)clearRetainSearchs;
@property(retain, nonatomic) NSMutableArray *retainSearchs;
- (void)_readRetainSearchs;
@property(nonatomic) BOOL hasRetainSearchTime;
@property(nonatomic) unsigned int retainSearchTime;
@property(nonatomic) BOOL hasShowDymSuggestionCloseButton;
@property(nonatomic) BOOL showDymSuggestionCloseButton;
@property(nonatomic) BOOL hasDymSuggestionVisibleTime;
@property(nonatomic) unsigned int dymSuggestionVisibleTime;
@property(nonatomic) BOOL hasEnablePartialClientization;
@property(nonatomic) BOOL enablePartialClientization;
- (id)displayHeaderSubstituteAtIndex:(NSUInteger)arg1;
- (NSUInteger)displayHeaderSubstitutesCount;
- (void)_addNoFlagsDisplayHeaderSubstitute:(id)arg1;
- (void)addDisplayHeaderSubstitute:(id)arg1;
- (void)clearDisplayHeaderSubstitutes;
@property(retain, nonatomic) NSMutableArray *displayHeaderSubstitutes;
- (void)_readDisplayHeaderSubstitutes;
@property(retain, nonatomic) GEOPDResolvedItem *clientResolvedResult;
@property(readonly, nonatomic) BOOL hasClientResolvedResult;
- (void)_readClientResolvedResult;
@property(retain, nonatomic) GEOPDDirectionIntent *directionIntent;
@property(readonly, nonatomic) BOOL hasDirectionIntent;
- (void)_readDirectionIntent;
- (id)resultDetourInfoAtIndex:(NSUInteger)arg1;
- (NSUInteger)resultDetourInfosCount;
- (void)_addNoFlagsResultDetourInfo:(id)arg1;
- (void)addResultDetourInfo:(id)arg1;
- (void)clearResultDetourInfos;
@property(retain, nonatomic) NSMutableArray *resultDetourInfos;
- (void)_readResultDetourInfos;
@property(retain, nonatomic) GEOPDSearchClientBehavior *searchClientBehavior;
@property(readonly, nonatomic) BOOL hasSearchClientBehavior;
- (void)_readSearchClientBehavior;
@property(retain, nonatomic) GEOPDRelatedSearchSuggestion *defaultRelatedSearchSuggestion;
@property(readonly, nonatomic) BOOL hasDefaultRelatedSearchSuggestion;
- (void)_readDefaultRelatedSearchSuggestion;
@property(retain, nonatomic) NSString *resultDisplayHeader;
@property(readonly, nonatomic) BOOL hasResultDisplayHeader;
- (void)_readResultDisplayHeader;
- (int)StringAsSearchResultType:(id)arg1;
- (id)searchResultTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSearchResultType;
@property(nonatomic) int searchResultType;
- (id)relatedSearchSuggestionAtIndex:(NSUInteger)arg1;
- (NSUInteger)relatedSearchSuggestionsCount;
- (void)_addNoFlagsRelatedSearchSuggestion:(id)arg1;
- (void)addRelatedSearchSuggestion:(id)arg1;
- (void)clearRelatedSearchSuggestions;
@property(retain, nonatomic) NSMutableArray *relatedSearchSuggestions;
- (void)_readRelatedSearchSuggestions;
@property(nonatomic) BOOL hasIsChainResultSet;
@property(nonatomic) BOOL isChainResultSet;
- (id)disambiguationLabelAtIndex:(NSUInteger)arg1;
- (NSUInteger)disambiguationLabelsCount;
- (void)_addNoFlagsDisambiguationLabel:(id)arg1;
- (void)addDisambiguationLabel:(id)arg1;
- (void)clearDisambiguationLabels;
@property(retain, nonatomic) NSMutableArray *disambiguationLabels;
- (void)_readDisambiguationLabels;
@property(retain, nonatomic) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic) BOOL hasDisplayMapRegion;
- (void)_readDisplayMapRegion;
- (id)initWithData:(id)arg1;
- (id)init;

@end

