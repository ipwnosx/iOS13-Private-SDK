//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString, SAReminderTrigger;

@interface SAReminderListSearch : SADomainCommand
{
}

+ (id)listSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)listSearch;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAReminderTrigger *trigger;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *accountName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

