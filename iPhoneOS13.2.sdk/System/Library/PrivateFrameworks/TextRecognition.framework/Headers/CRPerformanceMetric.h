//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface CRPerformanceMetric : NSObject <NSCopying>
{
    NSString *_displayName;
    NSString *_unit;
    NSString *_serializationKey;
    double _denominator;
    double _sumX;
    double _sumX2;
    NSUInteger _pcMetricID;
    long long _numSamples;
}

+ (id)pcMetricWithDisplayName:(id)arg1 pcMetricID:(NSUInteger)arg2 unit:(id)arg3 denominator:(double)arg4 serializationKey:(id)arg5;
+ (id)metricWithDisplayName:(id)arg1 unit:(id)arg2 denominator:(double)arg3 serializationKey:(id)arg4;
@property long long numSamples; // @synthesize numSamples=_numSamples;
@property NSUInteger pcMetricID; // @synthesize pcMetricID=_pcMetricID;
@property double sumX2; // @synthesize sumX2=_sumX2;
@property double sumX; // @synthesize sumX=_sumX;
@property double denominator; // @synthesize denominator=_denominator;
@property(copy) NSString *serializationKey; // @synthesize serializationKey=_serializationKey;
@property(copy) NSString *unit; // @synthesize unit=_unit;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
// - (void).cxx_destruct;
- (double)stdDev;
- (double)mean;
- (void)mergeMetric:(id)arg1;
- (void)addSample:(double)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1 key:(id)arg2;
- (id)initWithDisplayName:(id)arg1 unit:(id)arg2 denominator:(double)arg3 serializationKey:(id)arg4;

@end

