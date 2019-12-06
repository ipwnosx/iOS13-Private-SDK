//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface WFAggregateDictionary : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_failTrackerDict;
    NSString *_domain;
    NSUInteger _requestFailures;
    NSUInteger _requestSuccesses;
}

+ (id)defaultAggregateDictionary;
@property(nonatomic) NSUInteger requestSuccesses; // @synthesize requestSuccesses=_requestSuccesses;
@property(nonatomic) NSUInteger requestFailures; // @synthesize requestFailures=_requestFailures;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSMutableDictionary *failTrackerDict; // @synthesize failTrackerDict=_failTrackerDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)_queue_addValueForScalarKey:(id)arg1 value:(long long)arg2;
- (void)_queue_pushValue:(double)arg1 forKey:(id)arg2;
- (void)logLocationAccuracy:(double)arg1;
- (id)failTrackerForAPIVersion:(id)arg1;
- (void)logFallbackFromAPIVersion:(id)arg1 date:(id)arg2;
- (void)logRequestSuccessForAPIVersion:(id)arg1 date:(id)arg2;
- (void)logRequestFailureForAPIVersion:(id)arg1 date:(id)arg2;
- (double)failureRate;
- (id)init;

@end

