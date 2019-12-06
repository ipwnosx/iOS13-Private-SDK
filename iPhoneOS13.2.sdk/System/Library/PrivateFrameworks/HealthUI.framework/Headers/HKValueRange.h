//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate;

@interface HKValueRange : NSObject <NSCopying>
{
    id _minValue;
    id _maxValue;
}

+ (id)valueRangeWithMinValue:(id)arg1 maxValue:(id)arg2;
@property(copy, nonatomic) id maxValue; // @synthesize maxValue=_maxValue;
@property(copy, nonatomic) id minValue; // @synthesize minValue=_minValue;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (id)description;
- (BOOL)containsValue:(id)arg1;
- (void)unionMaxValueWithRange:(id)arg1;
- (void)unionMinValueWithRange:(id)arg1;
- (void)unionRange:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;
- (BOOL)hk_animatable;

@end

