//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHChartGridValue-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCHChartGridDurationValue : NSObject <TSCHChartGridValue>
{
    double mDuration;
}

+ (id)durationValueWithDouble:(double)arg1;
- (double)doubleValue;
@property(readonly, nonatomic) int chartGridValueType;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithDouble:(double)arg1;

@end

