//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSURLComponents (ParsecExtras)
+ (id)parsec_componentsWithString:(id)arg1;
+ (id)parsec_componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2;
- (id)parsec_componentsAfterRemovingSubdomains;
- (id)parsec_componentsForEmbeddedAMPURLFromRange:(NSRange *)arg1;
- (NSRange *)embeddedAMPURLRange;
- (id)parsec_normalizedURLStringForDeepLinkWhitelist;
- (id)parsec_normalizedURLStringForDeepLinkIngest;
- (id)parsec_normalizedURLStringForLDAModel;
- (id)parsec_normalizedURLStringForTLDFeatures;
- (id)parsec_normalizedURLStringWithOptions:(NSUInteger)arg1;
@end

