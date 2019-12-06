//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTObject.h>

#import <MetricsKit/AMSMetricsBagContract-Protocol.h>
#import <MetricsKit/MTEventRecorderDelegate-Protocol.h>

@class AMSBag, AMSBagValue, AMSMetrics, NSDictionary, NSString;
@protocol AMSMescalBagContract;

@interface MTEventRecorderAMSMetricsDelegate : MTObject <AMSMetricsBagContract, MTEventRecorderDelegate>
{
    BOOL _monitorsLifecycleEvents;
    BOOL _personalizedWithItunesAccount;
    NSString *_containerId;
    NSDictionary *_lastMetricsDictionary;
    AMSBag *_amsBag;
    AMSMetrics *_bagBasedAMSMetrics;
    AMSMetrics *_contractBasedAMSMetrics;
    AMSMetrics *_backgroundAMSMetrics;
}

+ (id)bundleIdentifier;
@property(retain, nonatomic) AMSMetrics *backgroundAMSMetrics; // @synthesize backgroundAMSMetrics=_backgroundAMSMetrics;
@property(retain, nonatomic) AMSMetrics *contractBasedAMSMetrics; // @synthesize contractBasedAMSMetrics=_contractBasedAMSMetrics;
@property(retain, nonatomic) AMSMetrics *bagBasedAMSMetrics; // @synthesize bagBasedAMSMetrics=_bagBasedAMSMetrics;
@property(retain, nonatomic) AMSBag *amsBag; // @synthesize amsBag=_amsBag;
@property(retain, nonatomic) NSDictionary *lastMetricsDictionary; // @synthesize lastMetricsDictionary=_lastMetricsDictionary;
@property(retain, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
@property(nonatomic) BOOL personalizedWithItunesAccount; // @synthesize personalizedWithItunesAccount=_personalizedWithItunesAccount;
@property(nonatomic) BOOL monitorsLifecycleEvents; // @synthesize monitorsLifecycleEvents=_monitorsLifecycleEvents;
// - (void).cxx_destruct;
- (BOOL)shouldFlushBackgroundMetrics;
@property(readonly, nonatomic) id <AMSMescalBagContract> mescalContract;
@property(readonly, nonatomic) AMSBagValue *trustedDomains;
@property(readonly, nonatomic) AMSBagValue *metricsDictionary;
- (id)flushUnreportedEvents;
- (id)sendMethod;
- (id)recordEvent:(id)arg1 toTopic:(id)arg2;
- (id)activeItunesAccount;
- (id)lookupItunesAccount:(id)arg1;
- (id)prepareMetrics;
- (id)initWithContainerId:(id)arg1 profileName:(id)arg2 profileVersion:(id)arg3;
- (id)initWithContainerId:(id)arg1 amsBag:(id)arg2;
- (id)initWithContainerId:(id)arg1;

@end

