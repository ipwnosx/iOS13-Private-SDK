//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _SBBatteryLogContext : NSObject
{
    BOOL _hasChargedPartially;
    int _capacity;
    int _voltage;
    NSArray *_foregroundApplications;
    double _usageTimeInSeconds;
    double _standbyTimeInSeconds;
}

@property(nonatomic) BOOL hasChargedPartially; // @synthesize hasChargedPartially=_hasChargedPartially;
@property(nonatomic) double standbyTimeInSeconds; // @synthesize standbyTimeInSeconds=_standbyTimeInSeconds;
@property(nonatomic) double usageTimeInSeconds; // @synthesize usageTimeInSeconds=_usageTimeInSeconds;
@property(nonatomic) int voltage; // @synthesize voltage=_voltage;
@property(nonatomic) int capacity; // @synthesize capacity=_capacity;
@property(retain, nonatomic) NSArray *foregroundApplications; // @synthesize foregroundApplications=_foregroundApplications;
// - (void).cxx_destruct;

@end

