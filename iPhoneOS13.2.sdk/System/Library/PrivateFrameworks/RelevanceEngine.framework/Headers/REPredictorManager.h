//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REPredictorObserver-Protocol.h>

@class NSArray, NSDictionary, REObserverStore, RERelevanceEngine;

@interface REPredictorManager : NSObject <REPredictorObserver>
{
    NSArray *_predictors;
    NSDictionary *_predictorsMap;
    REObserverStore *_observer;
    RERelevanceEngine *_engine;
}

// - (void).cxx_destruct;
- (void)predictor:(id)arg1 didFinishActivity:(id)arg2;
- (void)predictor:(id)arg1 didBeginActivity:(id)arg2;
- (void)predictorDidUpdate:(id)arg1;
- (void)enumeratePredictors:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)pause;
- (void)resume;
- (void)enumerateValuesForElement:(id)arg1 trainingContext:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithPredictors:(id)arg1 featureSet:(id)arg2 relevanceEngine:(id)arg3;

@end

