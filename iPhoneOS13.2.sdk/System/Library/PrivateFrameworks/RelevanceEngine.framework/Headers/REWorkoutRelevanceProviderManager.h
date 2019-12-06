//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProviderManager.h>

#import <RelevanceEngine/REPredictorObserver-Protocol.h>
#import <RelevanceEngine/REWorkoutRelevanceProviderManagerProperties-Protocol.h>

@class NSDate;

@interface REWorkoutRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REWorkoutRelevanceProviderManagerProperties>
{
    NSUInteger _state;
    NSDate *_lastWorkoutDate;
}

+ (BOOL)_wantsSeperateRelevanceQueue;
+ (Class)_relevanceProviderClass;
+ (id)_features;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger state;
- (void)predictorDidUpdate:(id)arg1;
- (void)_prepareForUpdate;
- (void)pause;
- (void)resume;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (id)initWithQueue:(id)arg1;

@end

