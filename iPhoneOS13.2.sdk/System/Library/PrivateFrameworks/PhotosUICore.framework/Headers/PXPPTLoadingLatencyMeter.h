//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PXPPTLoadingLatencyMeter : NSObject
{
//     CDStruct_4bbd3430 _lowQualityResults;
//     CDStruct_4bbd3430 _mediumQualityResults;
//     CDStruct_4bbd3430 _highQualityResults;
    NSString *_outputType;
    NSString *_measurementsUnit;
}

+ (void)stopMeasurements;
+ (void)startMeasurementsForOutputType:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *measurementsUnit; // @synthesize measurementsUnit=_measurementsUnit;
// - (void).cxx_destruct;
- (id)_measurementsDictionaryForOutputQuality:(long long)arg1;
@property(readonly, nonatomic) NSDictionary *measurementsDictionaryRepresentation;
// - (CDStruct_4bbd3430)measurementsForOutputQuality:(long long)arg1;
- (void)reportLatency:(double)arg1 forOutputQuality:(long long)arg2;
- (id)initWithOutputType:(id)arg1;

@end

