//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDateInterval, NSMutableDictionary;

@interface _HDSleepReportBuilder : NSObject
{
    NSDateInterval *_resultInterval;
    NSCalendar *_calendar;
    NSMutableDictionary *_inBedSamplesBySource;
}

// - (void).cxx_destruct;
- (id)calculateResult;
- (void)addSleepSamples:(id)arg1;
- (id)_categorySampleBufferForSource:(id)arg1;
- (id)initWithResultInterval:(id)arg1 calendar:(id)arg2;

@end

