//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSString;

@interface SANoteSearch : SADomainCommand
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSDate *toDate;
@property(copy, nonatomic) NSDate *fromDate;
@property(copy, nonatomic) NSString *contentQuery;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

