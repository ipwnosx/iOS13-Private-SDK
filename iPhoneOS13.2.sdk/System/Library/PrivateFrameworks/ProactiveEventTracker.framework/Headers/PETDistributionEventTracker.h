//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveEventTracker/PETEventTracker.h>

@class NSString;

@interface PETDistributionEventTracker : PETEventTracker
{
    NSString *_event;
}

@property(readonly, nonatomic) NSString *event; // @synthesize event=_event;
// - (void).cxx_destruct;
- (void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4;
- (void)trackEventWithPropertyValues:(id)arg1 value:(double)arg2;
- (id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3 propertySubsets:(id)arg4;
- (id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3;

@end

