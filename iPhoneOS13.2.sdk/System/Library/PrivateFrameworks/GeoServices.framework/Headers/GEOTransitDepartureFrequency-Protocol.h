//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate;

@protocol GEOTransitDepartureFrequency <NSObject>
@property(readonly, nonatomic) long long maxFrequency;
@property(readonly, nonatomic) long long minFrequency;
@property(readonly, nonatomic) long long displayFrequency;
@property(readonly, nonatomic) BOOL isEstimate;
@property(readonly, nonatomic) long long frequencyType;
@property(readonly, nonatomic) double frequencyForSorting;
@property(readonly, nonatomic) NSDate *lastTimeInFrequency;
@property(readonly, nonatomic) NSDate *firstTimeInFrequency;
- (BOOL)isValidAtDate:(NSDate *)arg1;
@end

