//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSURL (dd_private)
+ (id)dd_URLWithPotentiallyInvalidURLString:(id)arg1;
- (BOOL)dd_previewActionSupported;
- (id)dd_productIdentifierFromAppleStoreScheme;
- (id)dd_emailFromValidSchemes:(id)arg1;
- (id)dd_phoneNumberFromValidSchemes:(id)arg1;
- (id)dd_rdarLinkFromTelScheme;
- (id)dd_emailFromFacetimeScheme;
- (id)dd_phoneNumberFromFacetimeScheme;
- (id)dd_handleFromFacetimeSchemeFilteringForEmail:(BOOL)arg1;
- (id)dd_emailFromMailtoScheme;
- (id)dd_phoneNumberFromTelSchemeAndExtractBody:(id )arg1;
- (id)dd_phoneNumberFromTelScheme;
- (BOOL)dd_isCloudLink;
- (BOOL)dd_isAppleStore;
- (BOOL)dd_isAppleTV;
- (BOOL)dd_isApplePodcasts;
- (BOOL)dd_isAppleMusic;
- (BOOL)dd_isAppleBooks;
- (BOOL)dd_isAppleApps;
- (BOOL)dd_isAppleiTunesStore;
- (id)dd_AppleOtherSchemes;
- (id)dd_AppleiTunesSchemes;
- (BOOL)dd_hasHosts:(id)arg1 filterKey:(id)arg2 filterValue:(id)arg3;
- (BOOL)dd_isAnySimpleTelephonyScheme;
- (BOOL)dd_isMaps:(BOOL)arg1 isDirections:(BOOL )arg2;
- (BOOL)dd_isMaps:(BOOL)arg1;
- (id)dd_formattedPhoneNumber;
@end

