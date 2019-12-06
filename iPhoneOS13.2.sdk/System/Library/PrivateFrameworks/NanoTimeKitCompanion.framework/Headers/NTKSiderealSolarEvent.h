//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface NTKSiderealSolarEvent : NSObject
{
    double _degree;
    NSDate *_time;
    long long _type;
}

+ (id)eventWithType:(long long)arg1 degree:(double)arg2;
+ (id)eventWithType:(long long)arg1 time:(id)arg2 degree:(double)arg3;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDate *time; // @synthesize time=_time;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)debugNameForType:(long long)arg1;
- (id)description;
@property(readonly, nonatomic) double degree;
@property(readonly, nonatomic) double angle;

@end

