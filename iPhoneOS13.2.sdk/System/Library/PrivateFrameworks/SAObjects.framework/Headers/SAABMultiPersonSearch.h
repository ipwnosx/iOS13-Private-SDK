//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAABMultiPersonSearch : SADomainCommand
{
}

+ (id)multiPersonSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)multiPersonSearch;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSNumber *resultsLimit;
@property(copy, nonatomic) NSArray *personSearches;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

