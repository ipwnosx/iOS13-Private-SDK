//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface ACHDataStoreActivityProperties : NSObject
{
    NSUInteger _currentMoveStreak;
    NSUInteger _bestMoveStreak;
    NSUInteger _totalMoveGoalsMade;
    NSUInteger _totalMoveGoalsAttempted;
    double _bestMoveValue;
    double _bestMoveGoalValue;
    NSUInteger _currentExerciseStreak;
    NSUInteger _bestExerciseStreak;
    NSUInteger _totalExerciseGoalsMade;
    NSUInteger _totalExerciseGoalsAttempted;
    double _bestExerciseValue;
    double _bestExerciseGoalValue;
    NSUInteger _currentStandStreak;
    NSUInteger _bestStandStreak;
    NSUInteger _totalStandGoalsMade;
    NSUInteger _totalStandGoalsAttempted;
    NSUInteger _bestStandValue;
    NSUInteger _bestStandGoalValue;
    NSUInteger _lastStepCount;
    NSUInteger _bestStepCount;
    long long _storeValuesValidBeforeSummaryIndex;
    ACHDataStoreActivityProperties *_previousValues;
}

@property(retain, nonatomic) ACHDataStoreActivityProperties *previousValues; // @synthesize previousValues=_previousValues;
@property(nonatomic) long long storeValuesValidBeforeSummaryIndex; // @synthesize storeValuesValidBeforeSummaryIndex=_storeValuesValidBeforeSummaryIndex;
@property(nonatomic) NSUInteger bestStepCount; // @synthesize bestStepCount=_bestStepCount;
@property(nonatomic) NSUInteger lastStepCount; // @synthesize lastStepCount=_lastStepCount;
@property(nonatomic) NSUInteger bestStandGoalValue; // @synthesize bestStandGoalValue=_bestStandGoalValue;
@property(nonatomic) NSUInteger bestStandValue; // @synthesize bestStandValue=_bestStandValue;
@property(nonatomic) NSUInteger totalStandGoalsAttempted; // @synthesize totalStandGoalsAttempted=_totalStandGoalsAttempted;
@property(nonatomic) NSUInteger totalStandGoalsMade; // @synthesize totalStandGoalsMade=_totalStandGoalsMade;
@property(nonatomic) NSUInteger bestStandStreak; // @synthesize bestStandStreak=_bestStandStreak;
@property(nonatomic) NSUInteger currentStandStreak; // @synthesize currentStandStreak=_currentStandStreak;
@property(nonatomic) double bestExerciseGoalValue; // @synthesize bestExerciseGoalValue=_bestExerciseGoalValue;
@property(nonatomic) double bestExerciseValue; // @synthesize bestExerciseValue=_bestExerciseValue;
@property(nonatomic) NSUInteger totalExerciseGoalsAttempted; // @synthesize totalExerciseGoalsAttempted=_totalExerciseGoalsAttempted;
@property(nonatomic) NSUInteger totalExerciseGoalsMade; // @synthesize totalExerciseGoalsMade=_totalExerciseGoalsMade;
@property(nonatomic) NSUInteger bestExerciseStreak; // @synthesize bestExerciseStreak=_bestExerciseStreak;
@property(nonatomic) NSUInteger currentExerciseStreak; // @synthesize currentExerciseStreak=_currentExerciseStreak;
@property(nonatomic) double bestMoveGoalValue; // @synthesize bestMoveGoalValue=_bestMoveGoalValue;
@property(nonatomic) double bestMoveValue; // @synthesize bestMoveValue=_bestMoveValue;
@property(nonatomic) NSUInteger totalMoveGoalsAttempted; // @synthesize totalMoveGoalsAttempted=_totalMoveGoalsAttempted;
@property(nonatomic) NSUInteger totalMoveGoalsMade; // @synthesize totalMoveGoalsMade=_totalMoveGoalsMade;
@property(nonatomic) NSUInteger bestMoveStreak; // @synthesize bestMoveStreak=_bestMoveStreak;
@property(nonatomic) NSUInteger currentMoveStreak; // @synthesize currentMoveStreak=_currentMoveStreak;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSArray *dictionaryKeys;

@end

