//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class SASportsMetadata, SAUIAppPunchOut;

@interface SASportsAthleteComparisonSnippetItemDetails : AceObject <SAAceSerializable>
{
}

+ (id)athleteComparisonSnippetItemDetailsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)athleteComparisonSnippetItemDetails;
@property(retain, nonatomic) SAUIAppPunchOut *providerPunchOut;
@property(retain, nonatomic) SASportsMetadata *metadata;
@property(retain, nonatomic) SAUIAppPunchOut *leagueAppPunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

