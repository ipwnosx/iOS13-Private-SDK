//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SACreateVOXList : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)createVOXListWithDictionary:(id)arg1 context:(id)arg2;
+ (id)createVOXList;
- (BOOL)requiresResponse;
@property(nonatomic) long long pageSize;
@property(copy, nonatomic) NSArray *items;
@property(copy, nonatomic) NSArray *introductions;
@property(copy, nonatomic) NSString *domainName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

