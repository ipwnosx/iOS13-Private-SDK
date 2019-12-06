//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACHActivitySummaryUtility, ACHWorkoutUtility, HDDatabaseTransactionContext, HDProfile;

@interface ACHMonthlyChallengeDataSource : NSObject
{
    HDDatabaseTransactionContext *_databaseContext;
    HDProfile *_profile;
    ACHWorkoutUtility *_workoutUtility;
    ACHActivitySummaryUtility *_activitySummaryUtility;
}

@property(nonatomic) __weak ACHActivitySummaryUtility *activitySummaryUtility; // @synthesize activitySummaryUtility=_activitySummaryUtility;
@property(nonatomic) __weak ACHWorkoutUtility *workoutUtility; // @synthesize workoutUtility=_workoutUtility;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(copy, nonatomic) HDDatabaseTransactionContext *databaseContext; // @synthesize databaseContext=_databaseContext;
// - (void).cxx_destruct;
- (long long)numberOfWorkoutsCompletedDuringDateInterval:(id)arg1;
- (long long)numberOfDaysDoublingMoveGoalDuringDateComponentInterval:(id)arg1;
- (long long)numberOfAllRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfStandRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfExerciseRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfMoveRingsClosedDuringDateComponentInterval:(id)arg1;
- (double)walkingRunningDistanceDuringDateComponentInterval:(id)arg1;
- (double)exerciseMinutesDuringDateComponentInterval:(id)arg1;
- (double)caloriesDuringDateComponentInterval:(id)arg1;
- (double)valueForMonthlyChallengeType:(NSUInteger)arg1 forDateComponentInterval:(id)arg2 inCalendar:(id)arg3;
- (id)initWithProfile:(id)arg1 activitySummaryUtility:(id)arg2 workoutUtility:(id)arg3;

@end

