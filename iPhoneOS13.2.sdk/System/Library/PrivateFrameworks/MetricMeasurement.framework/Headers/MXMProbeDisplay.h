//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricMeasurement/MXMProbe.h>

#import <MetricMeasurement/MXMDisplayProbePlatformDelegate-Protocol.h>

@protocol MXMDisplayProbePlatform;

@interface MXMProbeDisplay : MXMProbe <MXMDisplayProbePlatformDelegate>
{
    id <MXMDisplayProbePlatform> _impl;
}

+ (id)probeWithDescriptor:(id)arg1;
+ (id)probe;
+ (id)descriptors;
+ (id)mainDescriptor;
// - (void).cxx_destruct;
- (void)_didRecieveData:(id)arg1;
- (void)_stopUpdates;
- (void)_beginUpdates;
- (id)initWithDescriptor:(id)arg1;
- (id)init;

@end

