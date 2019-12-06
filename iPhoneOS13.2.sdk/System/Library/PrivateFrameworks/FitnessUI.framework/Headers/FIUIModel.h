//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FIUIWeeklyGoalModel, HKActivityCache, HKActivitySummary, HKCurrentActivityCacheQuery, HKHealthStore, NSDictionary, NSHashTable, NSMutableDictionary, NSPredicate, _HKCurrentActivitySummaryQuery;
@protocol OS_dispatch_queue;

@interface FIUIModel : NSObject
{
    FIUIWeeklyGoalModel *_weeklyGoalModel;
    NSHashTable *_observers;
    NSMutableDictionary *_currentActivitySummaryQueryClients;
    NSMutableDictionary *_currentActivityCacheQueryClients;
    _HKCurrentActivitySummaryQuery *_queue_currentActivitySummaryQuery;
    HKCurrentActivityCacheQuery *_queue_currentActivityCacheQuery;
    long long _queue_activitySummaryQueryRetries;
    long long _queue_activityCacheQueryRetries;
    HKActivitySummary *_queue_currentActivitySummaryForClients;
    HKActivityCache *_queue_currentActivityCacheForClients;
    NSObject<OS_dispatch_queue> *_activityQueryClientQueue;
    NSPredicate *_sourcesPredicate;
    NSObject<OS_dispatch_queue> *_sourcesQueue;
    HKHealthStore *_healthStore;
    NSDictionary *_currentActivitySummaryQueryCollectionIntervalOverrides;
}

+ (BOOL)isWheelchairUser;
+ (id)_dailyTotalsQueryFromDate:(id)arg1 toDate:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(BOOL)arg5 handler:(CDUnknownBlockType)arg6;
+ (id)dailyTotalQueryForDate:(id)arg1 dataType:(id)arg2 predicate:(id)arg3 sendUpdates:(BOOL)arg4 handler:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) NSDictionary *currentActivitySummaryQueryCollectionIntervalOverrides; // @synthesize currentActivitySummaryQueryCollectionIntervalOverrides=_currentActivitySummaryQueryCollectionIntervalOverrides;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
// - (void).cxx_destruct;
- (id)_createCurrentActivitySummaryQuery;
- (void)_queue_restartCurrentActivitySummaryQueryAfterError;
- (void)stopCurrentActivitySummaryQueryForClientToken:(id)arg1;
- (id)startCurrentActivitySummaryQueryWithHandler:(CDUnknownBlockType)arg1;
- (void)stopQuery:(id)arg1;
- (void)executeQuery:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_printUpdatedStatistics:(id)arg1;
- (void)_printStatisticsCollection:(id)arg1;
@property(readonly, nonatomic) FIUIWeeklyGoalModel *weeklyGoalModel;
@property(readonly, nonatomic) NSPredicate *sourcesPredicate;
- (void)_setKnownSources:(id)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)init;

@end

