//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface IKRestrictionsUtilities : NSObject <NSCacheDelegate>
{
}

+ (id)_ratingDictionaryForDomain:(id)arg1 countryCode:(id)arg2;
+ (id)rankingForRestrictionRating:(id)arg1 inDomain:(id)arg2 countryCode:(id)arg3;
+ (id)orderedRankingsInDomain:(id)arg1 countryCode:(id)arg2;
+ (id)ratingForRestrictionRanking:(id)arg1 inDomain:(id)arg2 countryCode:(id)arg3;
+ (id)_purgableRatingsDictionary;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;

@end

