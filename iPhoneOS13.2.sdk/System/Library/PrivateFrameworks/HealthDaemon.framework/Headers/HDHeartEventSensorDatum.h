//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDataCollectorSensorDatum.h>

@class HKQuantity, NSArray;

@interface HDHeartEventSensorDatum : HDDataCollectorSensorDatum
{
    NSArray *_associatedSampleUUIDs;
    HKQuantity *_heartRateThreshold;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) HKQuantity *heartRateThreshold; // @synthesize heartRateThreshold=_heartRateThreshold;
@property(readonly, nonatomic) NSArray *associatedSampleUUIDs; // @synthesize associatedSampleUUIDs=_associatedSampleUUIDs;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)metadata;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartRateThreshold:(id)arg3 associatedSampleUUIDs:(id)arg4 resumeContext:(id)arg5;

@end

