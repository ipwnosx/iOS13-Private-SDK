//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>
#import <AppleMediaServices/AMSBagConsumer_Project-Protocol.h>

@class AMSMetricsDatabaseDataSource, NSString;
@protocol AMSBagProtocol, AMSMetricsBagContract, AMSMetricsFlushStrategy, OS_dispatch_queue;

@interface AMSMetrics : NSObject <AMSBagConsumer_Project, AMSBagConsumer>
{
    BOOL _flushTimerEnabled;
    BOOL _flushingDisabled;
    BOOL _monitorsLifecycleEvents;
    BOOL _flushOnForeground;
    id <AMSBagProtocol> _bag;
    NSString *_containerId;
    long long _maxBatchSize;
    long long _maxRequestCount;
    NSObject<OS_dispatch_queue> *_completionQueue;
    id <AMSMetricsFlushStrategy> _currentFlushStrategy;
    AMSMetricsDatabaseDataSource *_databaseSource;
    id /* CDUnknownBlockType */ _flushIntervalBlock;
    long long _destination;
    NSObject<OS_dispatch_queue> *_flushQueue;
}

+ (id)sharedTimerQueue;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (double)timeIntervalFromServerTime:(id)arg1;
+ (id)serverTimeFromTimeInterval:(double)arg1;
+ (id)serverTimeFromDate:(id)arg1;
+ (void)setFlushTimerEnabled:(BOOL)arg1;
+ (void)setFlushDelayEnabled:(BOOL)arg1;
+ (void)setDisableBackgroundMetrics:(BOOL)arg1;
+ (BOOL)flushTimerEnabled;
+ (BOOL)flushDelayEnabled;
+ (BOOL)disableBackgroundMetrics;
+ (id)_sharedInstanceUsingBag:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *flushQueue; // @synthesize flushQueue=_flushQueue;
@property(nonatomic) long long destination; // @synthesize destination=_destination;
@property(copy, nonatomic) id /* CDUnknownBlockType */ flushIntervalBlock; // @synthesize flushIntervalBlock=_flushIntervalBlock;
@property(nonatomic) BOOL flushOnForeground; // @synthesize flushOnForeground=_flushOnForeground;
@property(retain, nonatomic) AMSMetricsDatabaseDataSource *databaseSource; // @synthesize databaseSource=_databaseSource;
@property(retain, nonatomic) id <AMSMetricsFlushStrategy> currentFlushStrategy; // @synthesize currentFlushStrategy=_currentFlushStrategy;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(nonatomic) BOOL monitorsLifecycleEvents; // @synthesize monitorsLifecycleEvents=_monitorsLifecycleEvents;
@property(nonatomic) long long maxRequestCount; // @synthesize maxRequestCount=_maxRequestCount;
@property(nonatomic) long long maxBatchSize; // @synthesize maxBatchSize=_maxBatchSize;
@property(readonly, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
// - (void).cxx_destruct;
@property(retain, nonatomic) id <AMSMetricsBagContract> bagContract;
- (id)initWithContainerId:(id)arg1 bagContract:(id)arg2;
- (void)_handleFlushIntervalWithStyle:(long long)arg1;
- (void)_flushIntervalInvalidate;
- (BOOL)_flushIntervalEnabledForStyle:(long long)arg1;
- (double)_flushInterval;
- (void)_beginFlushIntervalWithStyle:(long long)arg1;
- (id)_flushDataSource:(id)arg1 topic:(id)arg2;
- (id)_determineFlushStrategyWithDataSource:(id)arg1 topic:(id)arg2;
- (void)_applicationWillEnterForeground;
- (id)flushEvents:(id)arg1;
- (id)flushTopic:(id)arg1;
- (id)flush;
- (id)enqueueAsyncEvents:(id)arg1;
- (void)enqueueEvents:(id)arg1;
- (void)enqueueEvent:(id)arg1;
- (void)dropEvents;
- (void)cancel;
@property(nonatomic) BOOL flushTimerEnabled; // @synthesize flushTimerEnabled=_flushTimerEnabled;
@property(nonatomic) BOOL flushingDisabled; // @synthesize flushingDisabled=_flushingDisabled;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) long long eventCount;
- (void)dealloc;
- (id)initWithContainerID:(id)arg1 bag:(id)arg2;

@end

