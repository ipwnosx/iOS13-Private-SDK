//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@interface SATimerGet : SADomainCommand
{
}

+ (id)getWithDictionary:(id)arg1 context:(id)arg2;
+ (id)get;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

