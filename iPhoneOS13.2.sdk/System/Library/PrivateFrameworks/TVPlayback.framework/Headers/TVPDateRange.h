//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface TVPDateRange : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    double _durationInSeconds;
}

@property(readonly, nonatomic) double durationInSeconds; // @synthesize durationInSeconds=_durationInSeconds;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
// - (void).cxx_destruct;
- (BOOL)containsDate:(id)arg1;
- (id)dateRangeByIntersectingDateRange:(id)arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;

@end

