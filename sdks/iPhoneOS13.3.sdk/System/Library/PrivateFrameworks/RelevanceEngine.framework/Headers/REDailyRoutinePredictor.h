//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REObservableSingleton.h>

#import <RelevanceEngine/REPeriodOfDayPredictorDelegate-Protocol.h>

@class NSDateInterval, NSLock, NSNumber, NSObject, REPeriodOfDayPredictor, REUpNextTimer;
@protocol OS_dispatch_queue;

@interface REDailyRoutinePredictor : REObservableSingleton <REPeriodOfDayPredictorDelegate>
{
    REPeriodOfDayPredictor *_periodOfDayPredictor;
    REUpNextTimer *_endMorningRoutineTimer;
    REUpNextTimer *_beginEveningRoutineTimer;
    REUpNextTimer *_endEveningRoutineTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _currentRoutine;
    NSDateInterval *_currentRoutineInterval;
    NSLock *_routineLock;
    NSNumber *_overrideRoutineType;
}

// - (void).cxx_destruct;
- (void)_queue_setupEveningBeginTimerIfNeeded;
- (void)_queue_setupMorningBeginTimerIfNeeded;
- (void)_queue_didEndEveningRoutine;
- (void)_queue_didBeginEveningRoutine;
- (void)_queue_didEndMorningRoutine;
- (void)_queue_didBeginMorningRoutine;
- (void)_updateCurrentRoutine;
- (void)periodOfDayPredictorDidUpdatePredictedIntervals:(id)arg1;
- (void)periodOfDayPredictorDidUpdateCurrentPeriodOfDay:(id)arg1;
- (id)_eveningRoutineIntervalForEvening:(id)arg1;
- (id)_morningRoutineIntervalForMorning:(id)arg1;
- (id)routineIntervalForPreviousRoutine:(NSUInteger)arg1;
- (id)routineIntervalForNextRoutine:(NSUInteger)arg1;
@property(readonly, nonatomic) NSDateInterval *currentRoutineInterval;
@property(readonly, nonatomic) NSUInteger currentRoutineType;
- (void)dealloc;
- (id)_init;
- (void)_setOverrideRoutineType:(NSUInteger)arg1;

@end
