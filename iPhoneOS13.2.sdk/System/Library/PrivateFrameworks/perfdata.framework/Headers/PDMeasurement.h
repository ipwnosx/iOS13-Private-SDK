//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, PDContainer;

@interface PDMeasurement : NSObject
{
    _Bool _largerBetter;
    _Bool _summary;
    _Bool _context;
    NSString *_metric;
    NSString *_unitString;
    NSDictionary *_variables;
    NSDictionary *_labels;
    unsigned long long _group;
    NSNumber *_value;
    NSNumber *_sampleCount;
    NSNumber *_mean;
    NSNumber *_standardDeviation;
    NSNumber *_minimum;
    NSNumber *_maximum;
    NSDictionary *_measurement;
    PDContainer *_container;
    NSString *_cachedMetricFilter;
}

@property(retain, nonatomic) NSString *cachedMetricFilter; // @synthesize cachedMetricFilter=_cachedMetricFilter;
@property(nonatomic) __weak PDContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) NSDictionary *measurement; // @synthesize measurement=_measurement;
@property(nonatomic, getter=isContext) _Bool context; // @synthesize context=_context;
@property(nonatomic, getter=isSummary) _Bool summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSNumber *maximum; // @synthesize maximum=_maximum;
@property(retain, nonatomic) NSNumber *minimum; // @synthesize minimum=_minimum;
@property(retain, nonatomic) NSNumber *standardDeviation; // @synthesize standardDeviation=_standardDeviation;
@property(retain, nonatomic) NSNumber *mean; // @synthesize mean=_mean;
@property(retain, nonatomic) NSNumber *sampleCount; // @synthesize sampleCount=_sampleCount;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long group; // @synthesize group=_group;
@property(nonatomic) _Bool largerBetter; // @synthesize largerBetter=_largerBetter;
@property(retain, nonatomic) NSDictionary *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;
@property(retain, nonatomic) NSString *unitString; // @synthesize unitString=_unitString;
@property(retain, nonatomic) NSString *metric; // @synthesize metric=_metric;
- (_Bool)enumeratePercentilesWithError:(id *)arg1 usingBlock:(id /* block */)arg2;
@property(readonly, nonatomic) unsigned long long percentileCount;
- (_Bool)enumerateHistogramBucketsWithError:(id *)arg1 usingBlock:(id /* block */)arg2;
@property(readonly, nonatomic) unsigned long long histogramBucketCount;
- (_Bool)isComparableTo:(id)arg1 ignoringNullableVariables:(id)arg2;
- (_Bool)isComparableTo:(id)arg1 ignoringVariables:(id)arg2;
- (_Bool)isLike:(id)arg1;
- (_Bool)isComparableTo:(id)arg1;
- (id)metricFilterIgnoringNullableVariables:(id)arg1;
- (id)metricFilterIgnoringVariables:(id)arg1;
- (id)metricFilter;
- (_Bool)matchesVariables:(id)arg1 ignoringMissing:(_Bool)arg2;
- (_Bool)matchesMetricFilter:(id)arg1;
- (id)description;
- (id)initWithContainer:(id)arg1 dictionary:(id)arg2 group:(unsigned long long)arg3 error:(id *)arg4;

@end
