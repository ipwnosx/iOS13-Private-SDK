//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SUICAudioLevelSmoother : NSObject
{
    float _minimumPower;
    float _maximumPower;
    long long _historyLength;
    long long _samplesSinceLastCleared;
    float _runningPowerLevels;
    unsigned int _powerPointer;
    float _previousLevel;
    float _attackVelocity;
    float _decayVelocity;
    BOOL _usesExponentialCurve;
    BOOL _usesAttackAndDecaySpeed;
    float _attackSpeed;
    float _decaySpeed;
    float _baseValue;
    float _exponentMultiplier;
}

@property(nonatomic) float exponentMultiplier; // @synthesize exponentMultiplier=_exponentMultiplier;
@property(nonatomic) float baseValue; // @synthesize baseValue=_baseValue;
@property(nonatomic) float decaySpeed; // @synthesize decaySpeed=_decaySpeed;
@property(nonatomic) float attackSpeed; // @synthesize attackSpeed=_attackSpeed;
@property(nonatomic) float maximumPower; // @synthesize maximumPower=_maximumPower;
@property(nonatomic) float minimumPower; // @synthesize minimumPower=_minimumPower;
@property(readonly, nonatomic) BOOL usesAttackAndDecaySpeed; // @synthesize usesAttackAndDecaySpeed=_usesAttackAndDecaySpeed;
@property(readonly, nonatomic) BOOL usesExponentialCurve; // @synthesize usesExponentialCurve=_usesExponentialCurve;
- (float)smoothedLevelForMicPower:(float)arg1;
- (float)_updateMedianWithNewValue:(float)arg1;
- (void)dealloc;
- (void)clearHistory;
- (id)_initWithHistoryLength:(long long)arg1;
- (id)initWithBaseValue:(float)arg1 exponentMultiplier:(float)arg2 historyLength:(long long)arg3;
- (id)initWithMinimumPower:(float)arg1 maximumPower:(float)arg2 historyLength:(long long)arg3 attackSpeed:(float)arg4 decaySpeed:(float)arg5;
- (id)initWithMinimumPower:(float)arg1 maximumPower:(float)arg2 historyLength:(long long)arg3;

@end

