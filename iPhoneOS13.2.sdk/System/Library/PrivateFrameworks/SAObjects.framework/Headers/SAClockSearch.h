//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSString, NSURL;

@interface SAClockSearch : SADomainCommand
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *unlocalizedCountryName;
@property(copy, nonatomic) NSString *unlocalizedCityName;
@property(copy, nonatomic) NSURL *identifier;
@property(copy, nonatomic) NSString *countryCode;
@property(copy, nonatomic) NSNumber *alCityId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

