//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePrediction/CPMLStorageManager.h>

@interface CPMLNaiveBayesStorageManager : CPMLStorageManager
{
}

- (void)setCardinalityXGivenY:(NSUInteger)arg1 withY:(NSUInteger)arg2 cardinalityValue:(double)arg3;
- (void)setCountXGivenY:(NSUInteger)arg1 withX:(NSUInteger)arg2 withY:(NSUInteger)arg3 withValue:(double)arg4;
- (void)setCountY:(NSUInteger)arg1 withCount:(double)arg2;
- (void)setCountY:(double)arg1;
- (double)getCountXGivenYAndSetXCardinality:(NSUInteger)arg1 withX:(NSUInteger)arg2 withY:(NSUInteger)arg3 withCardinalityX:(double )arg4;
- (double)getCountY:(NSUInteger)arg1;
- (double)getCountAndSetYCardinality:(double )arg1;

@end

