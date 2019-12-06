//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIMotionAnalyzer.h>

#import <UIKitCore/_UISettingsKeyObserver-Protocol.h>

@class UILabel, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIMotionAttitudeAnalyzer : _UIMotionAnalyzer <_UISettingsKeyObserver>
{
    double _smoothingDegree;
    double _referenceShiftSpeed;
    double _distanceMultiplier;
    BOOL _hasReferenceQuaternion;
    union _GLKQuaternion _referenceQuaternion;
    union _GLKQuaternion _absoluteQuaternion;
    double _lastUpdate;
    double _idleStartTime;
    UIOffset _idleStartOffset;
    double _jumpThreshold;
    double _idleLeeway;
    double _secondsBeforeIdle;
    double _lockValue;
    double _lockStrength;
    UIWindow *_diagnosticsWindow;
    UILabel *_idleIndicator;
    UIView *_horizontalLockIndicator;
    UIView *_verticalLockIndicator;
    BOOL _hasHistory;
    UIOffset _lastAppliedViewerOffset;
    union _GLKQuaternion _lastAppliedRelativeQuaternion;
    BOOL _isApplyingHysteresis;
    union _GLKQuaternion _relativeQuaternionOnHysteresisEntry;
}

// - (void).cxx_destruct;
- (void)_tearDownDiagnosticsWindow;
- (void)_createDiagnosticsWindow;
- (void)_tearDownDirectionLockIndicators;
- (void)_createDirectionLockIndicators;
- (void)_tearDownIdleIndicator;
- (void)_createIdleIndicator;
- (void)_updateDirectionalLockIndicators;
- (void)_showIdleUI:(BOOL)arg1;
- (void)_updateSettings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)resetHysteresis;
- (void)updateHistory;
- (BOOL)_shouldSuspendApplicationForHysteresisGivenNewViewerOffset:(UIOffset)arg1 wasSuspendingApplicationForHysteresis:(BOOL)arg2;
- (BOOL)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(BOOL)arg3 returningShouldToggleSlowUpdates:(BOOL )arg4 logger:(id)arg5;
- (BOOL)_isIdleGivenTimestamp:(double)arg1;
- (void)_updateIdleStateForRawOffset:(UIOffset)arg1 timestamp:(double)arg2;
- (double)_directionLockStrength;
- (long long)_directionLockStatus;
- (void)_resetDirectionalLockWithViewerOffset:(UIOffset)arg1;
- (void)_shiftReferenceToYieldRelativeQuaternion:(union _GLKQuaternion)arg1;
- (union _GLKQuaternion)_relativeQuaternion;
- (float)_referenceShiftRadiansPerSecondForAngle:(float)arg1;
- (void)_updateReferenceAttitude:(union _GLKQuaternion)arg1 timestamp:(double)arg2;
- (UIOffset)_currentRawOffset:(union _GLKQuaternion)arg1;
- (void)_updateAcceleratedOutputRangeFixingOffset:(UIOffset)arg1;
- (void)_updateSmoothedOffsetForRawOffset:(UIOffset)arg1;
- (void)reset;
- (void)updateWithEvent:(id)arg1;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;

@end

