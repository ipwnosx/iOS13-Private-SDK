//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateInterval, REFeatureValue;

@interface REDuetEvent : NSObject
{
    NSDateInterval *_interval;
    REFeatureValue *_value;
    double _confidence;
}

+ (id)eventWithInterval:(id)arg1 value:(id)arg2 confidence:(double)arg3;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) REFeatureValue *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSDateInterval *interval; // @synthesize interval=_interval;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end

