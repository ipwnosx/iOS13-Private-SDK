//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSNumber, NSString;

@interface SAReminderSearch : SADomainCommand
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *timeZoneId;
@property(copy, nonatomic) NSString *subject;
@property(copy, nonatomic) NSString *listName;
@property(copy, nonatomic) NSDate *dueBefore;
@property(copy, nonatomic) NSDate *dueAfter;
@property(copy, nonatomic) NSNumber *completionStatus;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

