//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricMeasurement/MXMMetric.h>

@class MXMSampleTag;

@interface MXMClockMetric : MXMMetric
{
    MXMSampleTag *_tag;
}

+ (BOOL)supportsSecureCoding;
+ (id)continuousTime;
+ (id)absoluteTime;
+ (id)allTime;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)copy;
- (BOOL)harvestData:(id )arg1 error:(id )arg2;
- (BOOL)_shouldConstructProbe;
- (id)initWithTag:(id)arg1;
- (id)_unitWithTag:(id)arg1;
- (id)_unit;

@end

