//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SADonateSiriQueryToPortrait : SABaseClientBoundCommand
{
}

+ (id)donateSiriQueryToPortraitWithDictionary:(id)arg1 context:(id)arg2;
+ (id)donateSiriQueryToPortrait;
- (BOOL)requiresResponse;
@property(nonatomic) double rankerConfidence;
@property(nonatomic) long long rank;
@property(copy, nonatomic) NSString *qid;
@property(copy, nonatomic) NSString *originalQuery;
@property(copy, nonatomic) NSString *domain;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

