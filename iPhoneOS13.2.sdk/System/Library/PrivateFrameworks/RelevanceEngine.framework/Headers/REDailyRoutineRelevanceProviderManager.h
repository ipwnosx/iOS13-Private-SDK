//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProviderManager.h>

#import <RelevanceEngine/REDailyRoutinePredictorDelegate-Protocol.h>
#import <RelevanceEngine/REDailyRoutineRelevanceProviderManagerProperties-Protocol.h>

@interface REDailyRoutineRelevanceProviderManager : RERelevanceProviderManager <REDailyRoutinePredictorDelegate, REDailyRoutineRelevanceProviderManagerProperties>
{
    BOOL _inMorningRoutine;
    BOOL _inEveningRoutine;
}

+ (BOOL)_wantsSeperateRelevanceQueue;
+ (id)_features;
+ (Class)_relevanceProviderClass;
@property(readonly, nonatomic) BOOL isInMorningRoutine;
@property(readonly, nonatomic) BOOL isInEveningRoutine;
- (void)dailyRoutinePredictorDidEndEveningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidBeginEveningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidEndMorningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidBeginMorningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidUpdatedPredictedRoutines:(id)arg1;
- (void)_updateRoutines;
- (void)_prepareForUpdate;
- (void)pause;
- (void)resume;
- (BOOL)_isInRoutine:(NSUInteger)arg1 forDate:(id)arg2;
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;

@end

