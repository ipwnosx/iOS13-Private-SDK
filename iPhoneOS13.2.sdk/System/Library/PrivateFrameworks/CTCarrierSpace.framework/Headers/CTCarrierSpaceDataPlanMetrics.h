//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CTCarrierSpaceDataPlanMetricsItem, NSDate, NSNumber;

@interface CTCarrierSpaceDataPlanMetrics : NSObject <NSSecureCoding>
{
    NSDate *_billingCycleEndDate;
    CTCarrierSpaceDataPlanMetricsItem *_domestic;
    long long _regStatus;
    NSNumber *_domesticCapacity;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *domesticCapacity; // @synthesize domesticCapacity=_domesticCapacity;
@property(nonatomic) long long regStatus; // @synthesize regStatus=_regStatus;
@property(retain, nonatomic) CTCarrierSpaceDataPlanMetricsItem *domestic; // @synthesize domestic=_domestic;
@property(retain, nonatomic) NSDate *billingCycleEndDate; // @synthesize billingCycleEndDate=_billingCycleEndDate;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

