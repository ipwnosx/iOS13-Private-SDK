//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCache;
@protocol NSCacheDelegate;

@interface GEOMapService : NSObject
{
//     struct os_unfair_lock_s _preferredLanguagesLock;
    NSArray *_preferredLanguages;
    int _overriddenResultProviderID;
    int _additionalEnabledMarketsChangedToken;
    int _experimentsChangedToken;
    NSCache *_handleCache;
    id <NSCacheDelegate> _handleCacheDelegate;
}

+ (void)_attributedGeoMapItemsForPlaceDatasWithType:(int)arg1 placeDatas:(id)arg2 disambiguationLabels:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)sharedService;
// - (void).cxx_destruct;
- (id)_geoMapItemsForPlacesInDetails:(id)arg1;
- (id)_geoMapItemForData:(id)arg1 withSource:(NSUInteger)arg2;
- (id)_geoMapItemForData:(id)arg1;
- (void)_geoMapItemsForResponseData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)resolveMapItemLocallyFromHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveMapItemFromHandle:(id)arg1 traits:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resolveMapItemFromHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveMapItemFromHandle:(id)arg1 withTraits:(id)arg2 useCache:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)resolveMapItemFromHandle:(id)arg1 withTraits:(id)arg2 useCache:(BOOL)arg3 coordinateOnlyRefinement:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_resolveMapItemFromHandle:(id)arg1 withTraits:(id)arg2 cachePolicy:(NSUInteger)arg3 coordinateOnlyRefinement:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_resolveMapItemFromHandle:(id)arg1 withTraits:(id)arg2 cachePolicy:(NSUInteger)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)handleForMapItem:(id)arg1;
- (void)trackMapItem:(id)arg1;
- (void)trackSerializedPlaceData:(id)arg1;
- (id)_ticketForRefreshingHandle:(id)arg1 traits:(id)arg2;
- (id)ticketForGeoIpLookupForIpAddr:(id)arg1;
- (id)ticketForWifiFingerprintWithLocations:(id)arg1 wifiAccessPoints:(id)arg2 maxLabels:(unsigned int)arg3 entryTime:(NSUInteger)arg4 exitTime:(NSUInteger)arg5 traits:(id)arg6;
- (id)ticketForWifiFingerprintWithLocations:(id)arg1 wifiAccessPoints:(id)arg2 maxLabels:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForBrandLookupWithIMessageUid:(id)arg1 traits:(id)arg2;
- (id)ticketForBatchPopularNearbyForSearchCategories:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForPopularNearbyForSearchCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForSearchCategory:(id)arg1 venueIdentifier:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForSearchQuery:(id)arg1 filters:(id)arg2 maxResults:(unsigned int)arg3 suppressResultsRequiringAttribution:(BOOL)arg4 traits:(id)arg5;
- (id)ticketForSearchQuery:(id)arg1 filters:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForSearchAlongRouteWithCategory:(id)arg1 zilchData:(id)arg2 sessionState:(id)arg3 routeId:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)ticketforCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForDatasetCheckWithTraits:(id)arg1;
// - (id)ticketForNearestTransitStation:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 traits:(id)arg3;
- (id)ticketForTransitLines:(id)arg1 withTraits:(id)arg2;
- (id)ticketForSearchFieldPlaceholderWithTraits:(id)arg1;
- (id)ticketForSpotlightCategoryListWithTraits:(id)arg1;
- (id)ticketForDFRCategoryListWithTraits:(id)arg1;
- (id)ticketForCategoryListWithTraits:(id)arg1 isFromNoQueryState:(BOOL)arg2;
- (id)ticketForSectionedLocalitiesAndLandmarksSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForSectionedAutoCompleteSearchFragment:(id)arg1 filters:(id)arg2 traits:(id)arg3;
- (id)ticketForSectionedInstantSearchFragment:(id)arg1 filters:(id)arg2 traits:(id)arg3;
- (id)ticketForInterleavedAutoCompletePoiAddressOnly:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedAutoCompleteWithBrowseSearchFragment:(id)arg1 filters:(id)arg2 retainedSearch:(id)arg3 tappedQuerySuggestion:(id)arg4 traits:(id)arg5;
- (id)ticketForInterleavedLocalitiesAndLandmarksSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedAutoCompleteSearchFragment:(id)arg1 filters:(id)arg2 traits:(id)arg3;
- (id)ticketForInterleavedInstantSearchFragment:(id)arg1 filters:(id)arg2 traits:(id)arg3;
- (id)_ticketForAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 filters:(id)arg4 retainedSearch:(id)arg5 tappedQuerySuggestion:(id)arg6;
- (id)ticketForURLQuery:(id)arg1 identifier:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)ticketForVendorSpecificPlaceRefinementRequestParameters:(id)arg1 traits:(id)arg2;
- (id)ticketForPlaceRefinementRequestParameters:(id)arg1 traits:(id)arg2;
// - (id)ticketForPlaceRefinementRequestWithCoordinate:(CDStruct_c3b9c2ee )arg1 addressLine:(id)arg2 placeName:(id)arg3 traits:(id)arg4;
- (id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)ticketForSearchQuery:(id)arg1 filters:(id)arg2 completionItem:(id)arg3 retainedSearch:(id)arg4 maxResults:(unsigned int)arg5 suppressResultsRequiringAttribution:(BOOL)arg6 traits:(id)arg7;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 retainedSearch:(id)arg3 maxResults:(unsigned int)arg4 suppressResultsRequiringAttribution:(BOOL)arg5 traits:(id)arg6;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 relatedSearchSuggestion:(id)arg3 retainedSearch:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 includeETA:(BOOL)arg4 traits:(id)arg5;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 retainedSearch:(id)arg3 maxResults:(unsigned int)arg4 traits:(id)arg5;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForTransitTripIdentifiers:(id)arg1 traits:(id)arg2;
- (id)ticketForTransitTripDetailsAtStation:(NSUInteger)arg1 line:(NSUInteger)arg2 referenceTripID:(NSUInteger)arg3 traits:(id)arg4;
- (id)ticketForTransitDeparturesAtStation:(NSUInteger)arg1 line:(NSUInteger)arg2 referenceTripID:(NSUInteger)arg3 traits:(id)arg4;
- (id)ticketForUpdatedTransitScheduleDetailsAtStation:(NSUInteger)arg1 line:(NSUInteger)arg2 referenceTripID:(NSUInteger)arg3 traits:(id)arg4;
- (id)ticketForTransitScheduleAtStation:(NSUInteger)arg1 line:(NSUInteger)arg2 referenceTripID:(NSUInteger)arg3 traits:(id)arg4;
- (id)ticketForSearchPoisForCollectionMUID:(NSUInteger)arg1 traits:(id)arg2;
- (id)ticketForSearchPoisForBrandMUID:(NSUInteger)arg1 traits:(id)arg2;
- (id)ticketForFeedbackRequest:(id)arg1 traits:(id)arg2;
- (id)ticketForFeedbackRequestData:(id)arg1 traits:(id)arg2;
- (id)ticketForFeedbackRequestParameters:(id)arg1 placeForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6;
- (id)ticketForProblemResubmission:(id)arg1 traits:(id)arg2;
- (id)ticketForProblem:(id)arg1 placeForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6;
- (id)ticketForSpatialEventLookupParameters:(id)arg1 traits:(id)arg2;
- (NSUInteger)maxParametersCountForSpatialEventLookup;
- (id)ticketForSpatialPlaceLookupParameters:(id)arg1 traits:(id)arg2;
- (NSUInteger)maxParametersCountForSpatialPlaceLookup;
- (id)ticketForSpatialLookupParameters:(id)arg1 traits:(id)arg2;
- (id)ticketForExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5;
- (id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 terminalId:(id)arg8 transactionCurrencyCode:(id)arg9 transactionType:(int)arg10 transactionId:(id)arg11 warsawMerchantDomain:(id)arg12 warsawMerchantName:(id)arg13 warsawMerchantId:(id)arg14 adamId:(id)arg15 merchantId:(id)arg16 merchantDoingBizAsName:(id)arg17 merchantEnhancedName:(id)arg18 merchantCity:(id)arg19 merchantRawCity:(id)arg20 merchantState:(id)arg21 merchantRawState:(id)arg22 merchantZip:(id)arg23 merchantAddress:(id)arg24 merchantRawAddress:(id)arg25 merchantCountryCode:(id)arg26 merchantType:(id)arg27 merchantCleanConfidenceLevel:(id)arg28 merchantAdditionalData:(id)arg29 merchantCanl:(id)arg30 fuzzyMatched:(id)arg31 traits:(id)arg32;
- (id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 traits:(id)arg8;
- (id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 additionalPlaceTypes:(int )arg3 additionalPlaceTypesCount:(unsigned int)arg4 traits:(id)arg5;
- (id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3;
- (id)_cl_ticketForReverseGeocodeLocation:(id)arg1 traits:(id)arg2;
// - (id)_searchable_ticketForReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 floor:(int)arg2 includeEntryPoints:(BOOL)arg3 shiftLocationsIfNeeded:(BOOL)arg4 preserveOriginalLocation:(BOOL)arg5 traits:(id)arg6;
// - (id)ticketForReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 floor:(int)arg2 includeEntryPoints:(BOOL)arg3 shiftLocationsIfNeeded:(BOOL)arg4 preserveOriginalLocation:(BOOL)arg5 traits:(id)arg6;
// - (id)ticketForReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 includeEntryPoints:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 preserveOriginalLocation:(BOOL)arg4 traits:(id)arg5;
// - (id)ticketForReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 includeEntryPoints:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 traits:(id)arg4;
// - (id)_searchable_ticketForReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 includeEntryPoints:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 preserveOriginalLocation:(BOOL)arg4 traits:(id)arg5;
// - (id)ticketForReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 includeETA:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 traits:(id)arg4;
// - (id)ticketForReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 shiftLocationsIfNeeded:(BOOL)arg2 preserveOriginalLocation:(BOOL)arg3 traits:(id)arg4;
// - (id)ticketForReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3;
- (id)_cl_ticketForForwardGeocodePostalAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)_cl_ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)_cl_ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForForwardGeocodePostalAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3;
- (id)ticketForTransitIdentifiers:(id)arg1 endDateForPlacecardSchedulesForThisBatch:(id)arg2 traits:(id)arg3;
- (id)ticketForExternalBusinessID:(id)arg1 contentProvider:(id)arg2 traits:(id)arg3;
- (id)ticketForFreshBusinessClaimComponentWithIdentifier:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3;
- (id)ticketForFreshComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5;
- (id)ticketForNonExpiredIdentifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4;
- (id)ticketForFreshIdentifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4;
- (id)ticketForMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4;
- (id)ticketForIdentifiers:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4;
- (id)ticketForIdentifiers:(id)arg1 includeETA:(BOOL)arg2 traits:(id)arg3;
- (id)ticketForIdentifiers:(id)arg1 traits:(id)arg2;
- (id)ticketForMUIDs:(id)arg1 includeETA:(BOOL)arg2 traits:(id)arg3;
- (id)ticketForMUIDs:(id)arg1 traits:(id)arg2;
- (id)defaultBackgroundTraits;
- (id)defaultTraits;
- (id)_preferredLanguages;
- (void)_countryCodeChanged:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (int)localSearchProviderID;
- (int)_loadOverriddenResultProviderID;
- (void)dealloc;
- (void)_sendInvalidateDataToSiriAndParSec;
- (id)init;
- (id)_ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 additionalPlaceTypes:(int )arg3 additionalPlaceTypesCount:(unsigned int)arg4 traits:(id)arg5;
- (id)serializedClientMetadataForSiri;
- (id)serializedClientMetadataForParsec;
- (id)serializedClientMetadataForTraits:(id)arg1;
- (double)wiFiQualitySmallSearchRadiusMeters;
- (long long)wiFiQualitySearchZoomLevel;
- (double)wiFiQualitySearchRadiusMeters;
- (id)ticketForWiFiQualityTileLoadForKey:(id)arg1 eTag:(id)arg2;
- (id)ticketForWiFiQualityLocationServiceRequest:(id)arg1;
- (id)ticketForWiFiQualityNetworkServiceRequest:(id)arg1;

@end

