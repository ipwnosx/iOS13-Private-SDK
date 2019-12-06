//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKActivitySummary.h>

@class NSDateComponents;

@interface _ActivityCurrentValueSummary : HKActivitySummary
{
    NSDateComponents *_collationDateComponents;
    long long _timeScope;
    double _collatedSummaryCount;
}

@property(nonatomic) double collatedSummaryCount; // @synthesize collatedSummaryCount=_collatedSummaryCount;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(retain, nonatomic) NSDateComponents *collationDateComponents; // @synthesize collationDateComponents=_collationDateComponents;
// - (void).cxx_destruct;
- (id)_maxQuantity:(id)arg1 otherQuantity:(id)arg2;
- (id)_divideQuantity:(id)arg1 divisor:(double)arg2;
- (id)_addQuantity:(id)arg1 toQuantity:(id)arg2;
- (void)finishCollatingSummaryWithGraphView:(id)arg1;
- (id)dateComponentsForCalendar:(id)arg1;
- (void)combineWithActivitySummary:(id)arg1;
- (id)initWithTimeScope:(long long)arg1;

@end

