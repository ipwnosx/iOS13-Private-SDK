//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSSQLitePredicate.h>


@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteCompoundPredicate : AMSSQLitePredicate <NSCopying>
{
    NSString *_combinationOperation;
    NSArray *_predicates;
}

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;
+ (id)predicateMatchingAnyPredicates:(id)arg1;
+ (id)predicateMatchingAllPredicates:(id)arg1;
@property(readonly, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
// - (void).cxx_destruct;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)applyBinding:(id)arg1 atIndex:(inout int )arg2;
// - (id)copyWithZone:(_NSZone )arg1;

@end

