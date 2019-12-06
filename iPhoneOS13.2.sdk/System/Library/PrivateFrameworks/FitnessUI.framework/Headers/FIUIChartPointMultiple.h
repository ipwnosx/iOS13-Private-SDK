//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/FIUIChartPoint-Protocol.h>

@class NSDate, NSIndexSet, NSNumber, NSString;

@interface FIUIChartPointMultiple : NSObject <FIUIChartPoint>
{
    NSDate *_xValue;
    NSIndexSet *_yValue;
}

+ (id)chartPointWithXValue:(id)arg1 yValue:(id)arg2;
+ (id)chartPointWithDate:(id)arg1 valueIndexSet:(id)arg2;
@property(copy, nonatomic) NSIndexSet *yValue; // @synthesize yValue=_yValue;
@property(copy, nonatomic) NSDate *xValue; // @synthesize xValue=_xValue;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *maxYValue;
@property(readonly, nonatomic) NSNumber *minYValue;

@end

