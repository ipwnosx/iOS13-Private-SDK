//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDataCollectorSensorDatum.h>

@class NSData, NSUUID;

@interface HDHeartbeatSequenceSensorDatum : HDDataCollectorSensorDatum
{
    NSData *_heartbeatSequenceData;
    long long _context;
    double _longestSubsequenceStart;
    double _longestSubsequenceDuration;
    NSUUID *_heartRateVariabilityUUID;
}

+ (BOOL)supportsSecureCoding;
+ (id)_dataFromHeartbeatArray:(id)arg1;
@property(readonly, nonatomic) NSUUID *heartRateVariabilityUUID; // @synthesize heartRateVariabilityUUID=_heartRateVariabilityUUID;
@property(readonly, nonatomic) double longestSubsequenceDuration; // @synthesize longestSubsequenceDuration=_longestSubsequenceDuration;
@property(readonly, nonatomic) double longestSubsequenceStart; // @synthesize longestSubsequenceStart=_longestSubsequenceStart;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(readonly, nonatomic) NSData *heartbeatSequenceData; // @synthesize heartbeatSequenceData=_heartbeatSequenceData;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartbeats:(id)arg3 context:(long long)arg4 longestSubsequenceStart:(double)arg5 longestSubsequenceDuration:(double)arg6 medianHeartRate:(id)arg7 heartRateVariabilityUUID:(id)arg8 resumeContext:(id)arg9;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartbeats:(id)arg3 context:(long long)arg4 longestSubsequenceStart:(double)arg5 longestSubsequenceDuration:(double)arg6 heartRateVariabilityUUID:(id)arg7 resumeContext:(id)arg8;

@end

