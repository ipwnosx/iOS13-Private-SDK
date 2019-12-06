//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDatabaseTransactionContext, HDProfile, _HKFilter;

@interface HDActivitySummaryBuilder : NSObject
{
    HDProfile *_profile;
    _HKFilter *_filter;
    BOOL _shouldIncludePrivateProperties;
    BOOL _shouldIncludeStatistics;
    BOOL _orderByDateAscending;
    NSUInteger _limit;
    HDDatabaseTransactionContext *_databaseTransactionContext;
    long long _enumeratedSummaryCount;
}

@property(readonly, nonatomic) long long enumeratedSummaryCount; // @synthesize enumeratedSummaryCount=_enumeratedSummaryCount;
@property(copy, nonatomic) HDDatabaseTransactionContext *databaseTransactionContext; // @synthesize databaseTransactionContext=_databaseTransactionContext;
@property(nonatomic) NSUInteger limit; // @synthesize limit=_limit;
@property(nonatomic) BOOL orderByDateAscending; // @synthesize orderByDateAscending=_orderByDateAscending;
@property(nonatomic) BOOL shouldIncludeStatistics; // @synthesize shouldIncludeStatistics=_shouldIncludeStatistics;
@property(nonatomic) BOOL shouldIncludePrivateProperties; // @synthesize shouldIncludePrivateProperties=_shouldIncludePrivateProperties;
// - (void).cxx_destruct;
- (BOOL)_enumerateActivitySummariesAndCachesWithPredicate:(id)arg1 largestAnchor:(long long )arg2 error:(id )arg3 handler:(CDUnknownBlockType)arg4;
- (void)batchedActivitySummariesWithPredicate:(id)arg1 maxBatchSize:(NSUInteger)arg2 handler:(CDUnknownBlockType)arg3;
- (void)activitySummariesWithPredicate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)enumerateActivitySummariesWithPredicate:(id)arg1 error:(id )arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithProfile:(id)arg1 filter:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (id)init;

@end

