//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

@class NSArray, NSDateInterval, NSMutableArray, WDProfile;

__attribute__((visibility("hidden")))
@interface WDHeartRateSessionListViewController : HKTableViewController
{
    long long _sessionType;
    NSArray *_sessions;
    NSMutableArray *_activeDataQueries;
    NSDateInterval *_dateInterval;
    WDProfile *_profile;
}

@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(retain, nonatomic) NSMutableArray *activeDataQueries; // @synthesize activeDataQueries=_activeDataQueries;
@property(retain, nonatomic) NSArray *sessions; // @synthesize sessions=_sessions;
@property(nonatomic) long long sessionType; // @synthesize sessionType=_sessionType;
// - (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_pushControllerForSession:(id)arg1;
- (void)_startHeartRateRangeQueryForSession:(id)arg1 index:(NSUInteger)arg2;
- (void)_startHeartRateRangeQueries;
- (void)_startSessionQuery;
- (id)_queryPredicateForDateInterval:(id)arg1;
- (id)_sampleType;
- (void)dealloc;
- (id)initWithSessionType:(long long)arg1 dateInterval:(id)arg2 profile:(id)arg3;

@end

