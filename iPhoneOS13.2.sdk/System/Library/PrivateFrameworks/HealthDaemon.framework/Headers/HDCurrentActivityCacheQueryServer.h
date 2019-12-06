//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

#import <HealthDaemon/HDActivityCacheManagerObserver-Protocol.h>

@class HDActivityCacheManager, HKActivityCache, NSCalendar, NSDateComponents;

@interface HDCurrentActivityCacheQueryServer : HDQueryServer <HDActivityCacheManagerObserver>
{
    NSDateComponents *_statisticsIntervalComponents;
    NSCalendar *_calendar;
    HKActivityCache *_lastActivityCache;
    HDActivityCacheManager *_activityCacheManager;
}

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id )arg5;
+ (Class)queryClass;
@property(nonatomic) __weak HDActivityCacheManager *activityCacheManager; // @synthesize activityCacheManager=_activityCacheManager;
// - (void).cxx_destruct;
- (void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void)_queue_stop;
- (void)_queue_start;
- (BOOL)shouldObserveActivityCache;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end

