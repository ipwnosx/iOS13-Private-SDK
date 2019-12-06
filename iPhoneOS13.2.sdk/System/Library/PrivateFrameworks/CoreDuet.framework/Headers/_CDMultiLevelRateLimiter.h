//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDRateLimiting-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface _CDMultiLevelRateLimiter : NSObject <_CDRateLimiting>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastRecorded;
    long long _numberOfRateLimitPolicies;
    NSArray *_periods;
    NSMutableArray *_periodStart;
    NSArray *_maxCounts;
    NSMutableArray *_balances;
}

@property(readonly, nonatomic) long long numOfRateLimitPolicies; // @synthesize numOfRateLimitPolicies=_numberOfRateLimitPolicies;
@property(readonly, retain, nonatomic) NSDate *lastRecorded; // @synthesize lastRecorded=_lastRecorded;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)recordTimeAndRefillIfNeededRaw;
- (BOOL)debited;
- (BOOL)credit;
- (id)initWithPeriodToCountMap:(id)arg1;
- (id)init;

@end

