//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class NSDate;

@interface HKInteractiveChartMenstruationData : NSObject <HKGraphSeriesChartData>
{
    BOOL _startOfCycle;
    long long _value;
    NSDate *_date;
}

@property(nonatomic) BOOL startOfCycle; // @synthesize startOfCycle=_startOfCycle;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long value; // @synthesize value=_value;
// - (void).cxx_destruct;

@end

