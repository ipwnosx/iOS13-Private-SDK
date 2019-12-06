//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class GEOAdditionalEnabledMarkets, GEOAddress, GEOBusinessOptions, GEOClientCapabilities, GEOIndexQueryNode, GEOLatLng, GEOLocation, GEOMapRegion, GEOSearchSubstring, GEOSuggestionsOptions, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPlaceSearchRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
//     CDStruct_95bda58d _additionalPlaceTypes;
//     CDStruct_62a50c50 _businessIDs;
//     CDStruct_95bda58d _optionalSuppressionReasons;
//     struct GEOSessionID _sessionGUID;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOAddress *_address;
    GEOBusinessOptions *_businessOptions;
    GEOClientCapabilities *_clientCapabilities;
    NSString *_deviceCountryCode;
    GEOLatLng *_deviceLocation;
    NSString *_deviceTimeZone;
    NSString *_deviceLocationCountryCode;
    NSMutableArray *_filterByBusinessCategorys;
    long long _geoId;
    GEOIndexQueryNode *_indexFilter;
    NSString *_inputLanguage;
    NSUInteger _intersectingGeoId;
    GEOLatLng *_knownLocation;
    NSMutableArray *_limitToCountryCodeIso2s;
    GEOLocation *_location;
    GEOMapRegion *_mapRegion;
    NSString *_phoneticLocaleIdentifier;
    GEOAddress *_preserveFields;
    GEOSearchSubstring *_searchContextSubstring;
    NSString *_searchContext;
    GEOLatLng *_searchLocation;
    NSMutableArray *_searchSubstrings;
    NSString *_search;
    NSMutableArray *_serviceTags;
    GEOSuggestionsOptions *_suggestionsOptions;
    NSString *_suggestionsPrefix;
    double _timeSinceMapEnteredForeground;
    double _timeSinceMapViewportChanged;
    double _timestamp;
    NSString *_viewportCenterCountryCode;
    NSData *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _businessSortOrder;
    int _businessSortDirection;
    int _knownAccuracy;
    int _localSearchProviderID;
    int _mapMode;
    int _maxBusinessReviews;
    int _maxResults;
    int _placeTypeLimit;
    int _searchSource;
    int _sequenceNumber;
    int _transportTypeForTravelTimes;
    BOOL _excludeAddressInResults;
    BOOL _includeBusinessCategories;
    BOOL _includeBusinessRating;
    BOOL _includeEntryPoints;
    BOOL _includeFeatureSets;
    BOOL _includeGeoId;
    BOOL _includeMatchedToken;
    BOOL _includeNameForForwardGeocodingResults;
    BOOL _includePhonetics;
    BOOL _includeQuads;
    BOOL _includeRoadAccessPoints;
    BOOL _includeSpokenNames;
    BOOL _includeStatusCodeInfo;
    BOOL _includeSuggestionsOnly;
    BOOL _includeTravelDistance;
    BOOL _includeTravelTime;
    BOOL _includeUnmatchedStrings;
    BOOL _isCanonicalLocationSearch;
    BOOL _isFromAPI;
    BOOL _isStrictGeocoding;
    BOOL _isStrictMapRegion;
    BOOL _isPopularNearbyRequest;
    BOOL _structuredSearch;
    BOOL _suppressResultsRequiringAttribution;
    struct {
        unsigned int has_sessionGUID:1;
        unsigned int has_geoId:1;
        unsigned int has_intersectingGeoId:1;
        unsigned int has_timeSinceMapEnteredForeground:1;
        unsigned int has_timeSinceMapViewportChanged:1;
        unsigned int has_timestamp:1;
        unsigned int has_businessSortOrder:1;
        unsigned int has_businessSortDirection:1;
        unsigned int has_knownAccuracy:1;
        unsigned int has_localSearchProviderID:1;
        unsigned int has_mapMode:1;
        unsigned int has_maxBusinessReviews:1;
        unsigned int has_maxResults:1;
        unsigned int has_placeTypeLimit:1;
        unsigned int has_searchSource:1;
        unsigned int has_sequenceNumber:1;
        unsigned int has_transportTypeForTravelTimes:1;
        unsigned int has_excludeAddressInResults:1;
        unsigned int has_includeBusinessCategories:1;
        unsigned int has_includeBusinessRating:1;
        unsigned int has_includeEntryPoints:1;
        unsigned int has_includeFeatureSets:1;
        unsigned int has_includeGeoId:1;
        unsigned int has_includeMatchedToken:1;
        unsigned int has_includeNameForForwardGeocodingResults:1;
        unsigned int has_includePhonetics:1;
        unsigned int has_includeQuads:1;
        unsigned int has_includeRoadAccessPoints:1;
        unsigned int has_includeSpokenNames:1;
        unsigned int has_includeStatusCodeInfo:1;
        unsigned int has_includeSuggestionsOnly:1;
        unsigned int has_includeTravelDistance:1;
        unsigned int has_includeTravelTime:1;
        unsigned int has_includeUnmatchedStrings:1;
        unsigned int has_isCanonicalLocationSearch:1;
        unsigned int has_isFromAPI:1;
        unsigned int has_isStrictGeocoding:1;
        unsigned int has_isStrictMapRegion:1;
        unsigned int has_isPopularNearbyRequest:1;
        unsigned int has_structuredSearch:1;
        unsigned int has_suppressResultsRequiringAttribution:1;
        unsigned int read_unknownFields:1;
        unsigned int read_additionalPlaceTypes:1;
        unsigned int read_businessIDs:1;
        unsigned int read_optionalSuppressionReasons:1;
        unsigned int read_additionalEnabledMarkets:1;
        unsigned int read_address:1;
        unsigned int read_businessOptions:1;
        unsigned int read_clientCapabilities:1;
        unsigned int read_deviceCountryCode:1;
        unsigned int read_deviceLocation:1;
        unsigned int read_deviceTimeZone:1;
        unsigned int read_deviceLocationCountryCode:1;
        unsigned int read_filterByBusinessCategorys:1;
        unsigned int read_indexFilter:1;
        unsigned int read_inputLanguage:1;
        unsigned int read_knownLocation:1;
        unsigned int read_limitToCountryCodeIso2s:1;
        unsigned int read_location:1;
        unsigned int read_mapRegion:1;
        unsigned int read_phoneticLocaleIdentifier:1;
        unsigned int read_preserveFields:1;
        unsigned int read_searchContextSubstring:1;
        unsigned int read_searchContext:1;
        unsigned int read_searchLocation:1;
        unsigned int read_searchSubstrings:1;
        unsigned int read_search:1;
        unsigned int read_serviceTags:1;
        unsigned int read_suggestionsOptions:1;
        unsigned int read_suggestionsPrefix:1;
        unsigned int read_viewportCenterCountryCode:1;
        unsigned int read_zilchPoints:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_additionalPlaceTypes:1;
        unsigned int wrote_businessIDs:1;
        unsigned int wrote_optionalSuppressionReasons:1;
        unsigned int wrote_sessionGUID:1;
        unsigned int wrote_additionalEnabledMarkets:1;
        unsigned int wrote_address:1;
        unsigned int wrote_businessOptions:1;
        unsigned int wrote_clientCapabilities:1;
        unsigned int wrote_deviceCountryCode:1;
        unsigned int wrote_deviceLocation:1;
        unsigned int wrote_deviceTimeZone:1;
        unsigned int wrote_deviceLocationCountryCode:1;
        unsigned int wrote_filterByBusinessCategorys:1;
        unsigned int wrote_geoId:1;
        unsigned int wrote_indexFilter:1;
        unsigned int wrote_inputLanguage:1;
        unsigned int wrote_intersectingGeoId:1;
        unsigned int wrote_knownLocation:1;
        unsigned int wrote_limitToCountryCodeIso2s:1;
        unsigned int wrote_location:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_phoneticLocaleIdentifier:1;
        unsigned int wrote_preserveFields:1;
        unsigned int wrote_searchContextSubstring:1;
        unsigned int wrote_searchContext:1;
        unsigned int wrote_searchLocation:1;
        unsigned int wrote_searchSubstrings:1;
        unsigned int wrote_search:1;
        unsigned int wrote_serviceTags:1;
        unsigned int wrote_suggestionsOptions:1;
        unsigned int wrote_suggestionsPrefix:1;
        unsigned int wrote_timeSinceMapEnteredForeground:1;
        unsigned int wrote_timeSinceMapViewportChanged:1;
        unsigned int wrote_timestamp:1;
        unsigned int wrote_viewportCenterCountryCode:1;
        unsigned int wrote_zilchPoints:1;
        unsigned int wrote_businessSortOrder:1;
        unsigned int wrote_businessSortDirection:1;
        unsigned int wrote_knownAccuracy:1;
        unsigned int wrote_localSearchProviderID:1;
        unsigned int wrote_mapMode:1;
        unsigned int wrote_maxBusinessReviews:1;
        unsigned int wrote_maxResults:1;
        unsigned int wrote_placeTypeLimit:1;
        unsigned int wrote_searchSource:1;
        unsigned int wrote_sequenceNumber:1;
        unsigned int wrote_transportTypeForTravelTimes:1;
        unsigned int wrote_excludeAddressInResults:1;
        unsigned int wrote_includeBusinessCategories:1;
        unsigned int wrote_includeBusinessRating:1;
        unsigned int wrote_includeEntryPoints:1;
        unsigned int wrote_includeFeatureSets:1;
        unsigned int wrote_includeGeoId:1;
        unsigned int wrote_includeMatchedToken:1;
        unsigned int wrote_includeNameForForwardGeocodingResults:1;
        unsigned int wrote_includePhonetics:1;
        unsigned int wrote_includeQuads:1;
        unsigned int wrote_includeRoadAccessPoints:1;
        unsigned int wrote_includeSpokenNames:1;
        unsigned int wrote_includeStatusCodeInfo:1;
        unsigned int wrote_includeSuggestionsOnly:1;
        unsigned int wrote_includeTravelDistance:1;
        unsigned int wrote_includeTravelTime:1;
        unsigned int wrote_includeUnmatchedStrings:1;
        unsigned int wrote_isCanonicalLocationSearch:1;
        unsigned int wrote_isFromAPI:1;
        unsigned int wrote_isStrictGeocoding:1;
        unsigned int wrote_isStrictMapRegion:1;
        unsigned int wrote_isPopularNearbyRequest:1;
        unsigned int wrote_structuredSearch:1;
        unsigned int wrote_suppressResultsRequiringAttribution:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)serviceTagType;
+ (Class)searchSubstringType;
+ (Class)limitToCountryCodeIso2Type;
+ (Class)filterByBusinessCategoryType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsBusinessSortDirection:(id)arg1;
- (id)businessSortDirectionAsString:(int)arg1;
@property(nonatomic) BOOL hasBusinessSortDirection;
@property(nonatomic) int businessSortDirection;
@property(retain, nonatomic) NSString *viewportCenterCountryCode;
@property(readonly, nonatomic) BOOL hasViewportCenterCountryCode;
- (void)_readViewportCenterCountryCode;
@property(retain, nonatomic) NSString *deviceLocationCountryCode;
@property(readonly, nonatomic) BOOL hasDeviceLocationCountryCode;
- (void)_readDeviceLocationCountryCode;
@property(nonatomic) BOOL hasIsPopularNearbyRequest;
@property(nonatomic) BOOL isPopularNearbyRequest;
- (int)StringAsMapMode:(id)arg1;
- (id)mapModeAsString:(int)arg1;
@property(nonatomic) BOOL hasMapMode;
@property(nonatomic) int mapMode;
@property(retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property(readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
- (void)_readAdditionalEnabledMarkets;
@property(nonatomic) BOOL hasIncludeNameForForwardGeocodingResults;
@property(nonatomic) BOOL includeNameForForwardGeocodingResults;
@property(retain, nonatomic) GEOLatLng *searchLocation;
@property(readonly, nonatomic) BOOL hasSearchLocation;
- (void)_readSearchLocation;
- (int)StringAsOptionalSuppressionReasons:(id)arg1;
- (id)optionalSuppressionReasonsAsString:(int)arg1;
- (void)setOptionalSuppressionReasons:(int )arg1 count:(NSUInteger)arg2;
- (int)optionalSuppressionReasonAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsOptionalSuppressionReason:(int)arg1;
- (void)addOptionalSuppressionReason:(int)arg1;
- (void)clearOptionalSuppressionReasons;
@property(readonly, nonatomic) int optionalSuppressionReasons;
@property(readonly, nonatomic) NSUInteger optionalSuppressionReasonsCount;
- (void)_readOptionalSuppressionReasons;
- (int)StringAsSearchSource:(id)arg1;
- (id)searchSourceAsString:(int)arg1;
@property(nonatomic) BOOL hasSearchSource;
@property(nonatomic) int searchSource;
@property(nonatomic) BOOL hasIncludeMatchedToken;
@property(nonatomic) BOOL includeMatchedToken;
- (int)StringAsKnownAccuracy:(id)arg1;
- (id)knownAccuracyAsString:(int)arg1;
@property(nonatomic) BOOL hasKnownAccuracy;
@property(nonatomic) int knownAccuracy;
@property(retain, nonatomic) GEOLatLng *knownLocation;
@property(readonly, nonatomic) BOOL hasKnownLocation;
- (void)_readKnownLocation;
@property(nonatomic) BOOL hasIntersectingGeoId;
@property(nonatomic) NSUInteger intersectingGeoId;
- (id)serviceTagAtIndex:(NSUInteger)arg1;
- (NSUInteger)serviceTagsCount;
- (void)_addNoFlagsServiceTag:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(retain, nonatomic) NSMutableArray *serviceTags;
- (void)_readServiceTags;
@property(nonatomic) BOOL hasIncludeFeatureSets;
@property(nonatomic) BOOL includeFeatureSets;
@property(retain, nonatomic) GEOIndexQueryNode *indexFilter;
@property(readonly, nonatomic) BOOL hasIndexFilter;
- (void)_readIndexFilter;
@property(nonatomic) BOOL hasIncludeUnmatchedStrings;
@property(nonatomic) BOOL includeUnmatchedStrings;
@property(retain, nonatomic) GEOAddress *preserveFields;
@property(readonly, nonatomic) BOOL hasPreserveFields;
- (void)_readPreserveFields;
@property(nonatomic) BOOL hasIncludeStatusCodeInfo;
@property(nonatomic) BOOL includeStatusCodeInfo;
@property(retain, nonatomic) GEOSearchSubstring *searchContextSubstring;
@property(readonly, nonatomic) BOOL hasSearchContextSubstring;
- (void)_readSearchContextSubstring;
@property(retain, nonatomic) NSString *searchContext;
@property(readonly, nonatomic) BOOL hasSearchContext;
- (void)_readSearchContext;
@property(nonatomic) BOOL hasIncludeGeoId;
@property(nonatomic) BOOL includeGeoId;
- (id)searchSubstringAtIndex:(NSUInteger)arg1;
- (NSUInteger)searchSubstringsCount;
- (void)_addNoFlagsSearchSubstring:(id)arg1;
- (void)addSearchSubstring:(id)arg1;
- (void)clearSearchSubstrings;
@property(retain, nonatomic) NSMutableArray *searchSubstrings;
- (void)_readSearchSubstrings;
@property(nonatomic) BOOL hasExcludeAddressInResults;
@property(nonatomic) BOOL excludeAddressInResults;
@property(nonatomic) BOOL hasIncludeQuads;
@property(nonatomic) BOOL includeQuads;
@property(nonatomic) BOOL hasGeoId;
@property(nonatomic) long long geoId;
@property(nonatomic) BOOL hasIsCanonicalLocationSearch;
@property(nonatomic) BOOL isCanonicalLocationSearch;
- (id)limitToCountryCodeIso2AtIndex:(NSUInteger)arg1;
- (NSUInteger)limitToCountryCodeIso2sCount;
- (void)_addNoFlagsLimitToCountryCodeIso2:(id)arg1;
- (void)addLimitToCountryCodeIso2:(id)arg1;
- (void)clearLimitToCountryCodeIso2s;
@property(retain, nonatomic) NSMutableArray *limitToCountryCodeIso2s;
- (void)_readLimitToCountryCodeIso2s;
@property(nonatomic) BOOL hasIncludeRoadAccessPoints;
@property(nonatomic) BOOL includeRoadAccessPoints;
@property(nonatomic) BOOL hasIncludeTravelDistance;
@property(nonatomic) BOOL includeTravelDistance;
@property(nonatomic) BOOL hasIsStrictGeocoding;
@property(nonatomic) BOOL isStrictGeocoding;
- (int)StringAsPlaceTypeLimit:(id)arg1;
- (id)placeTypeLimitAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceTypeLimit;
@property(nonatomic) int placeTypeLimit;
@property(retain, nonatomic) GEOSuggestionsOptions *suggestionsOptions;
@property(readonly, nonatomic) BOOL hasSuggestionsOptions;
- (void)_readSuggestionsOptions;
- (int)StringAsTransportTypeForTravelTimes:(id)arg1;
- (id)transportTypeForTravelTimesAsString:(int)arg1;
@property(nonatomic) BOOL hasTransportTypeForTravelTimes;
@property(nonatomic) int transportTypeForTravelTimes;
@property(nonatomic) BOOL hasIncludeTravelTime;
@property(nonatomic) BOOL includeTravelTime;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities;
@property(readonly, nonatomic) BOOL hasClientCapabilities;
- (void)_readClientCapabilities;
@property(retain, nonatomic) NSString *deviceTimeZone;
@property(readonly, nonatomic) BOOL hasDeviceTimeZone;
- (void)_readDeviceTimeZone;
@property(nonatomic) BOOL hasIncludeSpokenNames;
@property(nonatomic) BOOL includeSpokenNames;
@property(nonatomic) BOOL hasTimeSinceMapViewportChanged;
@property(nonatomic) double timeSinceMapViewportChanged;
@property(nonatomic) BOOL hasTimeSinceMapEnteredForeground;
@property(nonatomic) double timeSinceMapEnteredForeground;
@property(nonatomic) BOOL hasIsFromAPI;
@property(nonatomic) BOOL isFromAPI;
@property(nonatomic) BOOL hasSuppressResultsRequiringAttribution;
@property(nonatomic) BOOL suppressResultsRequiringAttribution;
@property(nonatomic) BOOL hasSequenceNumber;
@property(nonatomic) int sequenceNumber;
@property(retain, nonatomic) NSString *phoneticLocaleIdentifier;
@property(readonly, nonatomic) BOOL hasPhoneticLocaleIdentifier;
- (void)_readPhoneticLocaleIdentifier;
@property(retain, nonatomic) NSString *inputLanguage;
@property(readonly, nonatomic) BOOL hasInputLanguage;
- (void)_readInputLanguage;
@property(retain, nonatomic) GEOLatLng *deviceLocation;
@property(readonly, nonatomic) BOOL hasDeviceLocation;
- (void)_readDeviceLocation;
@property(retain, nonatomic) NSString *deviceCountryCode;
@property(readonly, nonatomic) BOOL hasDeviceCountryCode;
- (void)_readDeviceCountryCode;
@property(retain, nonatomic) NSString *suggestionsPrefix;
@property(readonly, nonatomic) BOOL hasSuggestionsPrefix;
- (void)_readSuggestionsPrefix;
@property(nonatomic) BOOL hasStructuredSearch;
@property(nonatomic) BOOL structuredSearch;
@property(nonatomic) BOOL hasIncludeSuggestionsOnly;
@property(nonatomic) BOOL includeSuggestionsOnly;
@property(nonatomic) BOOL hasLocalSearchProviderID;
@property(nonatomic) int localSearchProviderID;
@property(retain, nonatomic) GEOBusinessOptions *businessOptions;
@property(readonly, nonatomic) BOOL hasBusinessOptions;
- (void)_readBusinessOptions;
@property(nonatomic) BOOL hasIncludeEntryPoints;
@property(nonatomic) BOOL includeEntryPoints;
@property(retain, nonatomic) NSData *zilchPoints;
@property(readonly, nonatomic) BOOL hasZilchPoints;
- (void)_readZilchPoints;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) double timestamp;
@property(nonatomic) BOOL hasIsStrictMapRegion;
@property(nonatomic) BOOL isStrictMapRegion;
- (id)filterByBusinessCategoryAtIndex:(NSUInteger)arg1;
- (NSUInteger)filterByBusinessCategorysCount;
- (void)_addNoFlagsFilterByBusinessCategory:(id)arg1;
- (void)addFilterByBusinessCategory:(id)arg1;
- (void)clearFilterByBusinessCategorys;
@property(retain, nonatomic) NSMutableArray *filterByBusinessCategorys;
- (void)_readFilterByBusinessCategorys;
@property(nonatomic) BOOL hasMaxBusinessReviews;
@property(nonatomic) int maxBusinessReviews;
@property(nonatomic) BOOL hasIncludeBusinessCategories;
@property(nonatomic) BOOL includeBusinessCategories;
@property(nonatomic) BOOL hasIncludeBusinessRating;
@property(nonatomic) BOOL includeBusinessRating;
- (int)StringAsBusinessSortOrder:(id)arg1;
- (id)businessSortOrderAsString:(int)arg1;
@property(nonatomic) BOOL hasBusinessSortOrder;
@property(nonatomic) int businessSortOrder;
@property(nonatomic) BOOL hasSessionGUID;
// @property(nonatomic) struct GEOSessionID sessionGUID;
@property(nonatomic) BOOL hasMaxResults;
@property(nonatomic) int maxResults;
@property(nonatomic) BOOL hasIncludePhonetics;
@property(nonatomic) BOOL includePhonetics;
- (int)StringAsAdditionalPlaceTypes:(id)arg1;
- (id)additionalPlaceTypesAsString:(int)arg1;
- (void)setAdditionalPlaceTypes:(int )arg1 count:(NSUInteger)arg2;
- (int)additionalPlaceTypeAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsAdditionalPlaceType:(int)arg1;
- (void)addAdditionalPlaceType:(int)arg1;
- (void)clearAdditionalPlaceTypes;
@property(readonly, nonatomic) int additionalPlaceTypes;
@property(readonly, nonatomic) NSUInteger additionalPlaceTypesCount;
- (void)_readAdditionalPlaceTypes;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) BOOL hasMapRegion;
- (void)_readMapRegion;
@property(retain, nonatomic) NSString *search;
@property(readonly, nonatomic) BOOL hasSearch;
- (void)_readSearch;
@property(retain, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) BOOL hasLocation;
- (void)_readLocation;
@property(retain, nonatomic) GEOAddress *address;
@property(readonly, nonatomic) BOOL hasAddress;
- (void)_readAddress;
- (void)setBusinessIDs:(NSUInteger )arg1 count:(NSUInteger)arg2;
- (NSUInteger)businessIDAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsBusinessID:(NSUInteger)arg1;
- (void)addBusinessID:(NSUInteger)arg1;
- (void)clearBusinessIDs;
@property(readonly, nonatomic) NSUInteger businessIDs;
@property(readonly, nonatomic) NSUInteger businessIDsCount;
- (void)_readBusinessIDs;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithTraits:(id)arg1;

@end

