//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthMenstrualCycles/HKMCAdjacentFlowDay-Protocol.h>

@class HKQuantity, NSNumber, NSSet;

@interface HKMCDaySummary : NSObject <HKMCAdjacentFlowDay, NSSecureCoding, NSCopying>
{
    BOOL _intermenstrualBleeding;
    long long _dayIndex;
    long long _menstrualFlow;
    NSUInteger _symptoms;
    long long _sexualActivity;
    long long _ovulationTestResult;
    long long _cervicalMucusQuality;
    HKQuantity *_basalBodyTemperature;
    long long _menstrualFlowModificationDayIndex;
    NSNumber *_startOfCycleFromCycleTracking;
}

+ (BOOL)supportsSecureCoding;
+ (id)emptyDaySummaryWithDayIndex:(long long)arg1;
+ (id)daySummaryWithDayIndex:(long long)arg1 menstrualFlow:(long long)arg2 intermenstrualBleeding:(BOOL)arg3 symptoms:(NSUInteger)arg4 sexualActivity:(long long)arg5 ovulationTestResult:(long long)arg6 cervicalMucusQuality:(long long)arg7 basalBodyTemperature:(id)arg8;
@property(copy, nonatomic) NSNumber *startOfCycleFromCycleTracking; // @synthesize startOfCycleFromCycleTracking=_startOfCycleFromCycleTracking;
@property(nonatomic) long long menstrualFlowModificationDayIndex; // @synthesize menstrualFlowModificationDayIndex=_menstrualFlowModificationDayIndex;
@property(copy, nonatomic) HKQuantity *basalBodyTemperature; // @synthesize basalBodyTemperature=_basalBodyTemperature;
@property(nonatomic) long long cervicalMucusQuality; // @synthesize cervicalMucusQuality=_cervicalMucusQuality;
@property(nonatomic) long long ovulationTestResult; // @synthesize ovulationTestResult=_ovulationTestResult;
@property(nonatomic) long long sexualActivity; // @synthesize sexualActivity=_sexualActivity;
@property(nonatomic) NSUInteger symptoms; // @synthesize symptoms=_symptoms;
@property(nonatomic) BOOL intermenstrualBleeding; // @synthesize intermenstrualBleeding=_intermenstrualBleeding;
@property(nonatomic) long long menstrualFlow; // @synthesize menstrualFlow=_menstrualFlow;
@property(readonly, nonatomic) long long dayIndex; // @synthesize dayIndex=_dayIndex;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *loggedSupplementaryDisplayTypes;
@property(readonly, nonatomic) BOOL isSupplementaryDataLogged;
@property(readonly, nonatomic) BOOL isDataLogged;
- (BOOL)_isBasalBodyTemperatureLogged;
- (BOOL)_isCervicalMucusQualityLogged;
- (BOOL)_isOvulationTestResultLogged;
- (BOOL)_isSexualActivityLogged;
- (BOOL)_isSymptomsLogged;
- (BOOL)_isIntermenstrualBleedingLogged;
- (BOOL)_isMenstrualFlowLogged;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isUserEnteredDataEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)redactedDescription;
- (id)description;
- (BOOL)hasFlow;
- (BOOL)hasConfirmedNoFlow;
- (BOOL)isFetched;

@end

