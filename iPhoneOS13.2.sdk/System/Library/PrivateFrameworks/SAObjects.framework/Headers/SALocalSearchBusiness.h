//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL, SALocalSearchRating;

@interface SALocalSearchBusiness : AceObject <SAAceSerializable>
{
}

+ (id)businessWithDictionary:(id)arg1 context:(id)arg2;
+ (id)business;
@property(nonatomic) long long totalNumberOfReviews;
@property(copy, nonatomic) NSArray *reviews;
@property(retain, nonatomic) SALocalSearchRating *rating;
@property(copy, nonatomic) NSURL *photo;
@property(copy, nonatomic) NSArray *phoneNumbers;
@property(copy, nonatomic) NSString *openingHours;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property(copy, nonatomic) NSString *extSessionGuid;
@property(copy, nonatomic) NSArray *categories;
@property(copy, nonatomic) NSURL *businessUrl;
@property(copy, nonatomic) NSDictionary *businessIds;
@property(copy, nonatomic) NSNumber *businessId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

