//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAGKDomainObject.h>

@class NSArray, NSString;

@interface SAGKWebSearchDomainObject : SAGKDomainObject
{
}

+ (id)webSearchDomainObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)webSearchDomainObject;
@property(copy, nonatomic) NSString *query;
@property(copy, nonatomic) NSArray *linkedAnswerGroups;
@property(copy, nonatomic) NSArray *image;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

