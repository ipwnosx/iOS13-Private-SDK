//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatisticsScalarHistogram : NSObject
{
    NSString *_baseKey;
    long long _recordCount;
    NSUInteger _values[22];
    NSString *_keys[22];
    NSMutableSet *_children;
}

// - (void).cxx_destruct;
- (void)recordValue:(double)arg1;
- (void)clearValues;
- (void)reportValues;
- (void)_addChildStatistic:(id)arg1;
- (id)initWithDomain:(id)arg1 identifierReporting:(long long)arg2;

@end

