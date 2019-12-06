//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>

@class HDCodableSample, NSMutableArray, NSString;

@interface HDCodableActivityCache : PBCodable <HDDecoding, NSCopying>
{
    double _activeHours;
    double _activeHoursGoal;
    double _briskMinutes;
    double _briskMinutesGoal;
    long long _cacheIndex;
    double _deepBreathingDuration;
    double _energyBurned;
    double _energyBurnedGoal;
    double _energyBurnedGoalDate;
    long long _flightsClimbed;
    long long _pushCount;
    long long _sequence;
    long long _stepCount;
    double _walkingAndRunningDistance;
    long long _wheelchairUse;
    NSMutableArray *_dailyBriskMinutesStatistics;
    NSMutableArray *_dailyEnergyBurnedStatistics;
    HDCodableSample *_sample;
   struct {
        unsigned int activeHours:1;
        unsigned int activeHoursGoal:1;
        unsigned int briskMinutes:1;
        unsigned int briskMinutesGoal:1;
        unsigned int cacheIndex:1;
        unsigned int deepBreathingDuration:1;
        unsigned int energyBurned:1;
        unsigned int energyBurnedGoal:1;
        unsigned int energyBurnedGoalDate:1;
        unsigned int flightsClimbed:1;
        unsigned int pushCount:1;
        unsigned int sequence:1;
        unsigned int stepCount:1;
        unsigned int walkingAndRunningDistance:1;
        unsigned int wheelchairUse:1;
    } _has;
}

+ (Class)dailyBriskMinutesStatisticsType;
+ (Class)dailyEnergyBurnedStatisticsType;
@property(nonatomic) double activeHoursGoal; // @synthesize activeHoursGoal=_activeHoursGoal;
@property(nonatomic) double briskMinutesGoal; // @synthesize briskMinutesGoal=_briskMinutesGoal;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) NSMutableArray *dailyBriskMinutesStatistics; // @synthesize dailyBriskMinutesStatistics=_dailyBriskMinutesStatistics;
@property(retain, nonatomic) NSMutableArray *dailyEnergyBurnedStatistics; // @synthesize dailyEnergyBurnedStatistics=_dailyEnergyBurnedStatistics;
@property(nonatomic) long long wheelchairUse; // @synthesize wheelchairUse=_wheelchairUse;
@property(nonatomic) long long flightsClimbed; // @synthesize flightsClimbed=_flightsClimbed;
@property(nonatomic) long long pushCount; // @synthesize pushCount=_pushCount;
@property(nonatomic) double deepBreathingDuration; // @synthesize deepBreathingDuration=_deepBreathingDuration;
@property(nonatomic) double energyBurnedGoalDate; // @synthesize energyBurnedGoalDate=_energyBurnedGoalDate;
@property(nonatomic) double walkingAndRunningDistance; // @synthesize walkingAndRunningDistance=_walkingAndRunningDistance;
@property(nonatomic) double energyBurnedGoal; // @synthesize energyBurnedGoal=_energyBurnedGoal;
@property(nonatomic) long long stepCount; // @synthesize stepCount=_stepCount;
@property(nonatomic) double activeHours; // @synthesize activeHours=_activeHours;
@property(nonatomic) double briskMinutes; // @synthesize briskMinutes=_briskMinutes;
@property(nonatomic) double energyBurned; // @synthesize energyBurned=_energyBurned;
@property(nonatomic) long long cacheIndex; // @synthesize cacheIndex=_cacheIndex;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL hasActiveHoursGoal;
@property(nonatomic) BOOL hasBriskMinutesGoal;
@property(nonatomic) BOOL hasSequence;
- (id)dailyBriskMinutesStatisticsAtIndex:(NSUInteger)arg1;
- (NSUInteger)dailyBriskMinutesStatisticsCount;
- (void)addDailyBriskMinutesStatistics:(id)arg1;
- (void)clearDailyBriskMinutesStatistics;
- (id)dailyEnergyBurnedStatisticsAtIndex:(NSUInteger)arg1;
- (NSUInteger)dailyEnergyBurnedStatisticsCount;
- (void)addDailyEnergyBurnedStatistics:(id)arg1;
- (void)clearDailyEnergyBurnedStatistics;
@property(nonatomic) BOOL hasWheelchairUse;
@property(nonatomic) BOOL hasFlightsClimbed;
@property(nonatomic) BOOL hasPushCount;
@property(nonatomic) BOOL hasDeepBreathingDuration;
@property(nonatomic) BOOL hasEnergyBurnedGoalDate;
@property(nonatomic) BOOL hasWalkingAndRunningDistance;
@property(nonatomic) BOOL hasEnergyBurnedGoal;
@property(nonatomic) BOOL hasStepCount;
@property(nonatomic) BOOL hasActiveHours;
@property(nonatomic) BOOL hasBriskMinutes;
@property(nonatomic) BOOL hasEnergyBurned;
@property(nonatomic) BOOL hasCacheIndex;
@property(readonly, nonatomic) BOOL hasSample;
- (id)_decodeCodableActivityStatisticsQuantityInfos:(id)arg1;
- (BOOL)applyToObject:(id)arg1;
- (id)decodedWalkingAndRunningDistanceQuantity;
- (id)decodedEnergyBurnedGoalQuantity;
- (id)decodedEnergyBurnedQuantity;

@end

