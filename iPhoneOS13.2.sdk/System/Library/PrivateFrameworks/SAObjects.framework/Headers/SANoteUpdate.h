//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString, NSURL;

@interface SANoteUpdate : SADomainCommand
{
}

+ (id)updateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)update;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSURL *identifier;
@property(copy, nonatomic) NSString *contentsToAppend;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

