//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricMeasurement/MXMMetric.h>

@class NSDate, NSString;

@interface MXMOSSignpostMetric : MXMMetric
{
    NSDate *_startDate;
    NSDate *_stopDate;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (void)didStopAtTime:(NSUInteger)arg1 stopDate:(id)arg2;
- (void)didStartAtTime:(NSUInteger)arg1 startDate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2;
- (id)initWithSubsystem:(id)arg1;
- (id)init;
- (id)_constructProbe;
- (BOOL)_shouldNeverWrapInProxy;
- (BOOL)_shouldAlwaysWrapInProxy;
- (BOOL)_shouldConstructProbe;
- (NSUInteger)_sampleMode;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *category;
@property(readonly, nonatomic) NSString *subsystem;

@end

