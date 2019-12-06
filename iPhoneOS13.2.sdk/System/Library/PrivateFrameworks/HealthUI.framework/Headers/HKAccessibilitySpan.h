//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface HKAccessibilitySpan : NSObject
{
    NSString *_dataSeriesTitle;
    long long _dataSeriesType;
    NSNumber *_dataComprehensionMinYValue;
    NSNumber *_dataComprehensionMaxYValue;
    NSString *_dataComprehensionUnitForChart;
}

@property(readonly, nonatomic) NSString *dataComprehensionUnitForChart; // @synthesize dataComprehensionUnitForChart=_dataComprehensionUnitForChart;
@property(readonly, nonatomic) NSNumber *dataComprehensionMaxYValue; // @synthesize dataComprehensionMaxYValue=_dataComprehensionMaxYValue;
@property(readonly, nonatomic) NSNumber *dataComprehensionMinYValue; // @synthesize dataComprehensionMinYValue=_dataComprehensionMinYValue;
@property(readonly, nonatomic) long long dataSeriesType; // @synthesize dataSeriesType=_dataSeriesType;
@property(readonly, nonatomic) NSString *dataSeriesTitle; // @synthesize dataSeriesTitle=_dataSeriesTitle;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithTitle:(id)arg1 seriesType:(long long)arg2 dataComprehensionMinYValue:(id)arg3 dataComprehensionMaxYValue:(id)arg4 dataComprehensionUnitForChart:(id)arg5;

@end

