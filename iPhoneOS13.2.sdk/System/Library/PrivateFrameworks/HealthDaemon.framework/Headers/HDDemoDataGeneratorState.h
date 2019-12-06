//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class HDDemoDataGeneratorWorkoutConfiguration, NSDate;

@interface HDDemoDataGeneratorState : NSObject <NSSecureCoding>
{
    BOOL _createdFromNSKeyedUnarchiver;
    BOOL _finished;
    BOOL _firstRun;
    NSDate *_firstSampleDate;
    NSDate *_lastSampleDate;
    NSDate *_lastRunDate;
    long long _currentDay;
    double _startTime;
    double _currentTime;
    double _endTime;
    HDDemoDataGeneratorWorkoutConfiguration *_workoutConfiguration;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) HDDemoDataGeneratorWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;
@property(nonatomic, getter=isFirstRun) BOOL firstRun; // @synthesize firstRun=_firstRun;
@property(nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long currentDay; // @synthesize currentDay=_currentDay;
@property(retain, nonatomic) NSDate *lastRunDate; // @synthesize lastRunDate=_lastRunDate;
@property(retain, nonatomic) NSDate *lastSampleDate; // @synthesize lastSampleDate=_lastSampleDate;
@property(retain, nonatomic) NSDate *firstSampleDate; // @synthesize firstSampleDate=_firstSampleDate;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) long long calendarDay;
@property(readonly, nonatomic) NSDate *currentDate;
@property(readonly, nonatomic, getter=isHiking) BOOL hiking;
@property(readonly, nonatomic, getter=isDoingYoga) BOOL doingYoga;
@property(readonly, nonatomic, getter=isWalking) BOOL walking;
@property(readonly, nonatomic, getter=isDoingElliptical) BOOL doingElliptical;
@property(readonly, nonatomic, getter=isDoingHIIT) BOOL doingHIIT;
@property(readonly, nonatomic, getter=isSwimming) BOOL swimming;
@property(readonly, nonatomic, getter=isCycling) BOOL cycling;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
@property(readonly, nonatomic, getter=isExercising) BOOL exercising;
- (BOOL)createdFromNSKeyedUnarchiver;
- (id)init;

@end

