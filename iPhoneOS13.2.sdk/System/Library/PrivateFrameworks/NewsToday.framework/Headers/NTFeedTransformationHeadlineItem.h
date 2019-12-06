//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTFeedTransformationItem-Protocol.h>

@class NSDate, NSString, NTPBFeedItem, SFSearchResult;
@protocol FCFeedTransformationItem, FCHeadlineProviding;

@interface NTFeedTransformationHeadlineItem : NSObject <NTFeedTransformationItem>
{
    NSDate *_cacheExpirationDate;
    SFSearchResult *_searchResult;
    id <FCHeadlineProviding> _headline;
}

@property(copy, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, copy, nonatomic) NSDate *cacheExpirationDate; // @synthesize cacheExpirationDate=_cacheExpirationDate;
// - (void).cxx_destruct;
- (id)protoitemWithFetchedFeedItemHeadline:(id)arg1;
@property(readonly, copy, nonatomic) NTPBFeedItem *feedItemForHeadlineFetch;
@property(readonly, nonatomic) BOOL needsFeedItemHeadlinesFetch;
@property(readonly, nonatomic) id <FCFeedTransformationItem> feedTransformationItem;
@property(readonly, nonatomic) BOOL usesDynamicSlotAllocation;
@property(readonly, nonatomic, getter=isEligibleForLeadingCellAppearance) BOOL eligibleForLeadingCellAppearance;
@property(readonly, copy, nonatomic) NSDate *cacheCutoffTimeRelativeDate;
@property(readonly, copy, nonatomic) NSString *clusterID;
@property(readonly, nonatomic) NSUInteger todayItemType;
@property(readonly, copy, nonatomic) NSString *identifier;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithCacheExpirationDate:(id)arg1 searchResult:(id)arg2;
- (id)initWithHeadline:(id)arg1 cacheExpirationDate:(id)arg2 searchResult:(id)arg3;
- (id)init;

@end

