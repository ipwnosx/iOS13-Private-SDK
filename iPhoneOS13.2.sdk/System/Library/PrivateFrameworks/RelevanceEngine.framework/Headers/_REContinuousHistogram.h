//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REHistogram.h>

@class RESortedDictionary;

@interface _REContinuousHistogram : REHistogram
{
    NSUInteger _binningValue;
    RESortedDictionary *_values;
}

// - (void).cxx_destruct;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateValuesBetweenMinValue:(NSUInteger)arg1 maxValue:(NSUInteger)arg2 block:(CDUnknownBlockType)arg3;
- (NSUInteger)countOfValuesBetweenMinValue:(NSUInteger)arg1 maxValue:(NSUInteger)arg2;
- (NSUInteger)countForValue:(NSUInteger)arg1;
- (void)removeValue:(NSUInteger)arg1;
- (void)addValue:(NSUInteger)arg1;
- (NSUInteger)standardDeviation;
- (NSUInteger)mean;
- (NSUInteger)count;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;
- (id)initWithFeature:(id)arg1 binningSize:(NSUInteger)arg2;

@end

