//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMFUnfairLock, HMICameraVideoAnalyzer, HMICameraVideoAnalyzerResult, NSArray;

@interface HMICameraVideoAnalyzerHistory : HMFObject <HMFLogging>
{
    long long _minRepetitions;
    long long _maxPredictions;
    long long _predictions;
    long long _repetitions;
    long long _totalPredictions;
    long long _totalRepetitions;
    long long _totalRequests;
    HMICameraVideoAnalyzerResult *_lastRequestResult;
    NSArray *_lastRequestSignificantEvents;
    HMICameraVideoAnalyzer *_analyzer;
    HMFUnfairLock *_lock;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly) __weak HMICameraVideoAnalyzer *analyzer; // @synthesize analyzer=_analyzer;
@property(retain) NSArray *lastRequestSignificantEvents; // @synthesize lastRequestSignificantEvents=_lastRequestSignificantEvents;
@property(retain) HMICameraVideoAnalyzerResult *lastRequestResult; // @synthesize lastRequestResult=_lastRequestResult;
@property long long totalRequests; // @synthesize totalRequests=_totalRequests;
@property long long totalRepetitions; // @synthesize totalRepetitions=_totalRepetitions;
@property long long totalPredictions; // @synthesize totalPredictions=_totalPredictions;
@property long long repetitions; // @synthesize repetitions=_repetitions;
@property long long predictions; // @synthesize predictions=_predictions;
@property(readonly) long long maxPredictions; // @synthesize maxPredictions=_maxPredictions;
@property(readonly) long long minRepetitions; // @synthesize minRepetitions=_minRepetitions;
// - (void).cxx_destruct;
- (void)reset;
- (id)predictedResultForRequest:(id)arg1;
- (id)predictedSignificantEventsForRequest:(id)arg1;
- (BOOL)shouldPredictRequest:(id)arg1;
- (void)addRequest:(id)arg1 result:(id)arg2 significantEvents:(id)arg3;
- (id)initWithMinRepetitions:(long long)arg1 maxPredictions:(long long)arg2 analyzer:(id)arg3;

@end

