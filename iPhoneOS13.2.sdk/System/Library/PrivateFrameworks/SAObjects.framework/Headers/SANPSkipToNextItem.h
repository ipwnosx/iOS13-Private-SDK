//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SANPSkipToNextItem : SADomainCommand
{
}

+ (id)skipToNextItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)skipToNextItem;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

