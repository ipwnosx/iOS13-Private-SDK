//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataMindfulnessSampleGenerator : HDDemoDataBaseSampleGenerator
{
    BOOL _didGenerateMindfulnessMinute;
    double _nextMindfulSessionSampleTime;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double nextMindfulSessionSampleTime; // @synthesize nextMindfulSessionSampleTime=_nextMindfulSessionSampleTime;
@property(nonatomic) BOOL didGenerateMindfulnessMinute; // @synthesize didGenerateMindfulnessMinute=_didGenerateMindfulnessMinute;
- (id)_heartRatesFromMindfulSessionSample:(id)arg1 demoPerson:(id)arg2 atTime:(double)arg3;
- (id)_mindfulSessionSampleForDemoPerson:(id)arg1 atTime:(double)arg2 startDate:(id)arg3;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

